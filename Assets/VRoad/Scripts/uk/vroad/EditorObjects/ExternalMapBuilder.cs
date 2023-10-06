using System;
using System.Diagnostics;
using uk.vroad.api.str;
using uk.vroad.apk;
using uk.vroad.pac;
using uk.vroad.ucm;

namespace uk.vroad.EditorObjects
{
    /// <summary> EDITOR-ONLY Class: handles I/O for running Osm2VRoad in an external process </summary>
    ///  This class cannot go in the Editor folder
    public static class ExternalMapBuilder
    {
#if UNITY_EDITOR
        private static KFile errorFile;
        private static KFile okFile;
        private static int progress;
        private static string newlyBuiltFile;
        private static string buildError;
        private static KDir buildDir;
        private static Process mostRecentProcess;
        private static string chmodPath;
        private static bool failAndExit;
        
        /// <summary> Called when the Build/Rebuild scene is played to start the external Osm2VRoad executable
        /// using a System.Diagnostics.Process object </summary>
       
        public static bool BuildMap(string args)
        {
            try
            {
                string execDirPath = KEnv.Osm2VRoadDir() + SA.ARCH_DIR;
                KDir execDir = new KDir(execDirPath);
                string variant = VRoad.GotPro()? KC.OSM2VROAD_PRO: KC.OSM2VROAD_LITE;
                string execName = variant + SA.DOT_BIN;
                KFile execFile = new KFile(execDir, execName);
                chmodPath = execFile.FullPath();
                
#if UNITY_EDITOR_WIN
                if (!execFile.Exists())
                {
                    KFile binFile = new KFile(execDir, variant + SA.DOT_BINX);
                    if (binFile.Exists() && binFile.Size() > 1000)
                    {
                        binFile.MoveTo(execFile);
                        KWriter.Write(new KFile(execDir, variant + SA.DOT_BINX), SC.N);
                    }
                }
#endif

#if TEST_DOWNLOAD_OSM2VROAD_RUNNER
                if (!execFile.Exists())
                {
                    string url = SF.VRD_CONFIG_URL + SA.UNITY_RUNNER + CC.DOT + SA.ARCH_DIR;
                    byte[] response = KHttp.HttpQueryAsBytes(url);
                    if (response == null) UnityEngine.Debug.LogError(SA.BUILD_ERRROR_2 + url);
                    else KWriter.Write(execFile, response);
                }
#endif
                
                if (!execFile.Exists())
                {
                    buildError = SA.BUILD_ERRROR_1 + execDirPath;
                    return false;
                }
     
                UnityEngine.Debug.Log(variant+" "+args);
                
                KThreads.StartThread(new ProgressFileWatcher(), SF.FILE_WATCHER);

                Process p = new Process();
                mostRecentProcess = p;
                p.StartInfo.FileName = execFile.FullPath();
                p.StartInfo.WorkingDirectory = execDirPath;
                p.StartInfo.Arguments = SF.ARG_BATCHMODE + SC.S + args;
                
                p.StartInfo.CreateNoWindow = true;
                p.StartInfo.UseShellExecute = false;
                p.StartInfo.RedirectStandardOutput = true;
                p.OutputDataReceived += Osm2VroadOutputHandler;
           
                suppressOutputAfterExit = false;
                progress = 0;
                
                bool startOK = p.Start();
                
                p.BeginOutputReadLine();

                return startOK;
            }
            catch (Exception e)
            {
                buildError = e.Message;

#if UNITY_EDITOR_OSX || UNITY_EDITOR_LINUX
                if (buildError.Contains("Access denied"))
                {
                    UnityEditor.EditorApplication.isPlaying = false;
                    
                    buildError = "Correcting file permissions - try again";
                    
                    ProcessStartInfo chmodpsi = new ProcessStartInfo()
                    {
                        FileName = "chmod",
                        Arguments = "755 " + chmodPath,
                    };

                    Process chmodproc = new Process() {StartInfo = chmodpsi,};
                    chmodproc.Start();
                }
#endif
                
                return false;
            }
            
        }

        /// <summary> Suppress console output after external process has finished.
        /// Output varies by architecture; on MacOS there are many lines of
        /// information displayed that are not relevant here.  
        /// </summary>
        private static bool suppressOutputAfterExit = false;
        
        /// <summary> Process a message from stdout/stderr, showing it in Console, or hiding it as appropriate </summary>
        private static void Osm2VroadOutputHandler(object sendingProcess, DataReceivedEventArgs stdoutLineReceived)
        {
            string line = stdoutLineReceived.Data;

            if (String.IsNullOrEmpty(line)) {}
            else if (line.StartsWith(SC.ELLIPSIS))
            {
                string restOfLine = line.Substring(3).Trim();
                progress = KTools.ParseInt(restOfLine);
            }
            
            else if (!filterThisLine(line)) // should this line be hidden?
            {
                UnityEngine.Debug.Log("[OSM2VRoad]: " + line);

                if (line.Contains("Fail") && line.Contains("Exit")) failAndExit = true;
                
                if (line.Equals("Exit")) suppressOutputAfterExit = true;
            }

            //else Debug.Log("[X-X]: "+line); // Uncomment this line to see what has been filtered 
        }

        private static bool filterThisLine(string line)
        {
            if (suppressOutputAfterExit) return true;
            
            if (line.Contains("[Subsystems] Discovering")) return true;
            if (line.Contains("UnloadTime")) return true;
            if (line.Contains("Thread -> id:")) return true;
            if (line.Contains("ERROR: Shader Sprites")) return true;
            if (line.Contains("GfxDevice")) return true;
            if (line.Contains("Version:  NULL 1.0 [1.0]")) return true;
            if (line.Contains("Renderer: Null Device")) return true;
            if (line.Contains("Vendor:   Unity Technologies")) return true;
            if (line.Contains("video decoding to texture disabled")) return true;
            if (line.Contains("worker threads for Enlighten")) return true;
            
            if (line.Contains("[UnityMemory]")) return true; // OSX
            if (line.Contains("memorysetup-")) return true; // OSX
            if (line.Contains("There is no texture data available to upload")) return true; // OSX

            //if (line.Contains("")) return true;
            
            return false;
        }


        private static KDir BuildDir()
        {
            return buildDir ??= new KDir(KEnv.VroadWriteDir());
        }
        
        private static void BuildStart()
        {
            errorFile ??= new KFile(BuildDir(), SF.BUILD_ERROR_FILE);
            okFile ??= new KFile(BuildDir(), SF.BUILD_OK_FILE);

            errorFile.Delete();
            okFile.Delete();
        }

        private class ProgressFileWatcher : KRunnable
        {
            public ProgressFileWatcher()
            {
                BuildStart();
            }
            public void Run()
            {
                while (!okFile.Exists() && !errorFile.Exists() && !forcedQuit && !failAndExit)
                {
                    KThreads.Sleep(100);
                }

                progress = 100;
                
                if (!failAndExit && okFile.Exists())
                {
                    newlyBuiltFile = KReader.Read(okFile);
                    if (newlyBuiltFile != null) newlyBuiltFile = newlyBuiltFile.Trim();
                    if (newlyBuiltFile.Length == 0) newlyBuiltFile = null;
                }
                
                if (newlyBuiltFile == null && errorFile.Exists())
                {
                    buildError = KReader.Read(errorFile)?.Trim();
                }
            }
        }

        public static bool FailAndExit() { return failAndExit; }

        public static int Progress() { return progress; }
        public static string NewlyBuiltFile()  {return newlyBuiltFile; }
        public static string BuildError()  { return buildError; }

        private static bool forcedQuit;

        public static void ForceQuit()
        {
            forcedQuit = true; //terminates file watcher
            
            if (mostRecentProcess != null &&  !mostRecentProcess.HasExited) mostRecentProcess.Kill();
            
        } 
#endif
    }
}