using uk.vroad.api;
using uk.vroad.api.map;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;
using UnityEngine;
using UnityEngine.UI;


namespace uk.vroad.xmpl
{
    public class UPlaySimExample : UaPlaySim
    {
        [Tooltip("Set this to false to stop running traffic")]
        public bool runTraffic = true;
        [Tooltip("Set this to true to generate cars, coaches and trucks.")]
        public bool spawnCarsAndTrucks = true;
        [Tooltip("Set this to true to generate taxis. If it resets to false at run-time this means that " +
                 "it is not possible to spawn taxis, perhaps because there are no taxi zones")]
        public bool spawnTaxis = true;
        [Tooltip("Set this to true to generate buses. If it resets to false at run-time this means that " +
                 "it is not possible to spawn buses, perhaps because there are no bus routes.")]
        public bool spawnBuses = true;
        [Tooltip("Set this to true to generate pedestrians. If it resets to false at run-time this means that " +
                 "it is not possible to spawn pedestrians, perhaps because there are no walkways.")]
        public bool spawnPeds = true;
        
        public static UPlaySimExample MostRecentInstance { get; private set;  }

        private ExampleApp app;
        
        protected override App App() { return app; }
        
        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();

            MostRecentInstance = this;
        }

        protected override void Update()
        {
            bool checkSpawning = false;
            
            paused = !runTraffic; // if (!runTraffic) paused = true;
            
            if (runTraffic && app.Asm().CurrentState() == AppState.ReadyToSimulate)
            {
                // Start Simulation automatically
                app.Asm().MakeTransition(ExampleStateTransition.runSimulation);
                
                UaBotHandler bh = UaBotHandler.Instance;
                bool noBH = bh == null;
                
                if (noBH || bh.prefabCars.Length + bh.prefabCoaches.Length  + bh.prefabRigidTrucks.Length +bh.prefabTractorTrucks.Length == 0) spawnCarsAndTrucks = false;
                if (noBH || bh.prefabTaxis.Length == 0) spawnTaxis = false;
                if (noBH || bh.prefabBuses.Length == 0) spawnBuses = false;
                if (noBH || bh.prefabPeds.Length == 0) spawnPeds = false;

                checkSpawning = true;
            }
            
#if UNITY_EDITOR  // Call every update in Editor: allow spawning to be switched off dynamically using inspector
            checkSpawning = true;
#endif
            
            if (checkSpawning && sim != null)
            {
                if (app.Map().Busroutes().Length == 0) spawnBuses = false;
                if (app.Map().PedZones().Length == 0) spawnPeds = false;

                bool anyTaxis = false;
                foreach (IDrvZone dz in app.Map().DrvZones()) if (dz is ITaxiZone) { anyTaxis = true; break; }
                if (!anyTaxis) spawnTaxis = false;
                
                
                sim.ReleaseDrvs(spawnCarsAndTrucks);
                sim.ReleaseTaxis(spawnTaxis);
                sim.ReleaseBuses(spawnBuses);
                sim.ReleasePeds(spawnPeds);
            }

            base.Update(); 
        }

        public void RunTraffic(bool v) { runTraffic = v; paused = !v;  }
        
        public override void AppStateChanged(AppStateTransition ast)
        {
            base.AppStateChanged(ast);

            if (runTraffic)
            {
                if (ast == ExampleStateTransition.pauseWhileSimulating)
                {
                    paused = true;
                    Time.timeScale = 0; // Stop animation
                }
                else if (ast == ExampleStateTransition.resumeToSimulating)
                {
                    paused = false;
                    Time.timeScale = unity_xRT;
                }
            }
        }

        private bool ffwd;
        public void SetFfwd(bool v) { ffwd = v; }

        public override bool IsFFwd() { return ffwd; }

    }
}