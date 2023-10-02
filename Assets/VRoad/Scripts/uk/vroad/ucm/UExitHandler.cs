using uk.vroad.api;
using uk.vroad.apk;
using UnityEditor;
using UnityEngine;


namespace uk.vroad.ucm
{
    public class UExitHandler : MonoBehaviour
    {
        private static bool quitInitiated;

        private static App app;
        
        // There are some exit handling functions in UaStateHandler because it has an App() reference
        void FixedUpdate()
        {
            if (quitInitiated)
            {
                int nAlive = KThreads.Count(true);

                if (nAlive == 0) QuitAfterTidyingUp();
                
                else if (nAlive == 1)
                {
                    ISim sim = app.Sim();
                    if (sim != null)
                    {
                        object simMaster = sim.MasterThread();
                        lock (simMaster) { KMonitor.Pulse(simMaster); }
                    }
                }
            }
        }

        public static void AppExitStatic(App ap)
        {
            app = ap;

            app?.Asc()?.Exit();
            
            quitInitiated = true;
        }

        private void QuitAfterTidyingUp()
        {
            Application.Quit(); // This is ignored by Editor

#if UNITY_EDITOR
            // Switch the Editor out of Play state if application is stopped from menu
            if (EditorApplication.isPlaying) EditorApplication.isPlaying = false;
#endif
        }

    }
}
