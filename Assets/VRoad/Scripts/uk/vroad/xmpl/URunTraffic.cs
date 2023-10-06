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
    public class URunTraffic: MonoBehaviour, Reporter.IExternalReporter
    {
        public static URunTraffic MostRecentInstance { get; private set;  }

        public string vRoadFilePath;
        public Text buildErrorText;
        public Slider vRoadSlider;
        public int simulationWorkers = AppTools.N_WORKERS_INIT;
        
        protected App app;
        protected bool hasUI;
        protected bool loadInProgress;
        protected int progressRaw;
        private string progressActivity;
        private int progressSmoothed;

        public void SetupTraffic(string path)
        {
            vRoadFilePath = path;
        }

        protected virtual void Awake()
        {
            app = ExampleApp.AwakeInstance();
            
            MostRecentInstance = this;
            hasUI = buildErrorText != null && vRoadSlider != null;

            LoadOnAwake();
        }

        protected virtual void LoadOnAwake()
        {
            KFile mapFile = FindMapFile();
            
            if (mapFile != null)
            {
                StartLoad(mapFile, 1); // .vroad
            }
            else
            {
                Reporter.Report("Failed to start. No VRoad file "+vRoadFilePath);
            }
        }
        
        public void Report(string s)
        {
            if (hasUI) buildErrorText.text = s;
            
            // Debug.Log(s); // Should not need this as this is external report and standard Report sends to Debug.Log
        }

        protected virtual void LoadMap(KFile mapFile)
        {
            VRoad.Load(app, mapFile);
        }
        protected void StartLoad(KFile mapFile, int nui)
        {
            loadInProgress = true;
            progressRaw = 0;
            progressSmoothed = 0;
            progressActivity = "Loading Map";
            if (hasUI) vRoadSlider.gameObject.SetActive(true);
            VRoad.SetWorkerCount(simulationWorkers);
            
            Reporter.ProgressPartsUI(nui);

            LoadMap(mapFile);
        }
        protected virtual void FixedUpdate()
        {
            if (loadInProgress)
            {
                progressRaw = Reporter.ProgressTotal();

                if (progressRaw < 100)
                {
                    int diff = (progressRaw * 100) - progressSmoothed;
                    if (diff > 0)
                    {
                        int inc = diff > 1000? 100: diff > 500? 20: 5;
                        progressSmoothed += inc;
                        if (hasUI) vRoadSlider.value = progressSmoothed;
                    }
                }
                else
                {
                    if (hasUI) vRoadSlider.gameObject.SetActive(false);
                    loadInProgress = false;
                }
            }
        }

        public int Progress() { return progressRaw; }
        public string ProgressActivity() { return progressActivity; }

        protected virtual KFile FindMapFile()
        {
            // ** ALWAYS ** Call VroadWriteDir here (to initialize in correct thread)
            string userVRoadDirW = KEnv.VroadWriteDir();
            
            if (vRoadFilePath == null) return null;
            vRoadFilePath = vRoadFilePath.Trim();
            if (vRoadFilePath.Length < 5) return null;
 
            KFile mapFile = new KFile(vRoadFilePath); // absolute path
            if (MapFileOK(mapFile)) return mapFile;
            
            mapFile = new KFile(userVRoadDirW, vRoadFilePath);
            if (MapFileOK(mapFile)) return mapFile;
            
            mapFile = new KFile(KEnv.VroadReadDir(), vRoadFilePath);
            if (MapFileOK(mapFile)) return mapFile;
         
            Reporter.Report("File not OK: " + mapFile.FullPath());
            return null;
        }

        protected bool MapFileOK(KFile mapFile)
        {
            return mapFile != null && mapFile.Exists() && AppTools.SuitableAppFile(mapFile);
        }
        

         // This could be accessed by a button in the UI, if the simulation is running in multiple threads
        public virtual void TogglePlayPause()
        {
            ISim sim = app.Sim();
            if (sim == null) return;

            if (sim.IsRunning()) sim.Pause();
            else sim.Play();
        }


    }
}