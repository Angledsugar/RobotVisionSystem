using System.Collections;
using uk.vroad.api;
using uk.vroad.api.etc;
using uk.vroad.api.xmpl;
using uk.vroad.apk;
using uk.vroad.pac;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;


namespace uk.vroad.xmpl
{
    public class URunTrafficAndroid: URunTraffic
    {
        private string vroadDirPath;

        protected override void LoadOnAwake()
        {
            if (hasUI) Reporter.SetExternalReporter(this);
            
            vroadDirPath = Application.persistentDataPath + "/vroad/";
            
            KFile mapFile = FindMapFile();
            
            if (mapFile == null) 
            { 
                StartCoroutine(FetchMapFileAsyncThenCopyAndLoad());

                return; // load after (async) fetch and copy; exit here
            }
            
            StartLoad(mapFile, 1);
        }

        protected override KFile FindMapFile()
        {
            // ** ALWAYS ** Call this here (to initialize in correct thread)
            KEnv.VroadWriteDir();

            if (vRoadFilePath == null) return null;
            vRoadFilePath = vRoadFilePath.Trim();
            if (vRoadFilePath.Length < 5) return null;

            KFile mapFile = new KFile(vroadDirPath, vRoadFilePath);
            
            return MapFileOK(mapFile)? mapFile: null;
        }
        

        private IEnumerator FetchMapFileAsyncThenCopyAndLoad()
        {
            // Any files stored in Assets/StreamingAssets will be included in APK in subfolder /assets/
            // These can only be accessed using a web request (as if they were being downloaded from web)
            // The APK is a compressed jar file.
            string relURL = "jar:file://" + Application.dataPath + "!/assets/" + vRoadFilePath;
       
            UnityWebRequest req = UnityWebRequest.Get(relURL);
            
            // Make async call ...
            yield return req.SendWebRequest();

            // ... return here on completion
            if (req.result == UnityWebRequest.Result.Success)
            { 

                // Copy the data into a (normal) local file that can be accessed by our API
                byte[] data = req.downloadHandler.data;
                

                KDir dir = new KDir(vroadDirPath);
                if (!dir.Exists()) dir.Create();
                
                KFile mapFile = new KFile(dir, vRoadFilePath);
                
                // This will delete any existing file of the same name
                KWriter.Write(mapFile, data);

                if (MapFileOK(mapFile)) StartLoad(mapFile, 0); 
                
                else Reporter.Report("Failed to write downloaded VRoad file to: "+vRoadFilePath);

            }
            else
            {
                Reporter.Report("UnityWebRequest Failed (" + req.error + ") " + relURL);
            }

        }

    }
}