using System;
using uk.vroad.api;
using uk.vroad.api.etc;
using uk.vroad.api.events;
using uk.vroad.api.input;
using UnityEditor;
using UnityEngine;

namespace uk.vroad.ucm
{
    public abstract class UaPlaySim : MonoBehaviour, LAppState, LSimTimeSec
    {
        protected abstract App App();
        public abstract bool IsFFwd();

        private const int TARGET_FPS = 80; // DON'T CHANGE THIS WITHOUT A LOT OF THOUGHT
        private const float TARGET_UNITY_TIME_PER_FRAME = 1.0f / TARGET_FPS;
        
        // This was const, but variable from V2.4. Name is unchanged so that existing code upgrading to V2.4 does not break.
        /// <summary> A multiplier defining the target speed for the simulator relative to real time </summary>
        /// Sometimes you want the simulator to run at real-time speed, but at other times you may want to be able to
        /// speed up the simulation, to "fast-forward" the action
        public static int STD_RT = 4;

        /// <summary> A maximum value for the speed-up relative to real time. </summary>
        private const int FF_RT = 10;
        
        private const float LAG_INC = 1.0f;
        private const float LAG_DEC = -1.0f;
        private const float LAG_MAX = 9.99f;
        
        private float prevSimSecondUnityTime ;
        private float mostRecentFrameUnityTime ;
        private int fixedUpdateCountdown;
        
        [ReadOnly]
        [Tooltip("This specifies the target simulation speed as a multiplier of real-time")]
        public float unity_xRT = STD_RT;
        [ReadOnly]
        [Tooltip("Time-Steps Per Second in the simulator. " +
                 "This controls the size of the steps made by each vehicle or pedestrian. " +
                 "A higher number produces smoother motion, but requires more computational grunt.")]
        public int unity_TSPS;
        
        protected float sim_xRT = FF_RT;
        protected float lagMeasure;
        protected bool paused;

        protected ISim sim;

        public void SetTargetRealTimeMultiplier(int xrt)
        {
            if (xrt >= 1 && xrt <= FF_RT)
            {
                STD_RT = xrt; 
                if (! AsFastAsPossible()) unity_xRT = STD_RT;
            }
        }
        
        protected virtual void Awake()
        {
            App().AddEventConsumer(this);
            
#if UNITY_EDITOR
            EditorApplication.pauseStateChanged += HandlePauseState;
#endif
        }
        
        public bool DeregisterFireMapChange() { return false; }  // could set sim = null here

        protected virtual void Update()
        {
            if (paused)
            {
                EnforceSingleStepMode();
                return;
            }

            mostRecentFrameUnityTime = Time.unscaledTime;
            if (sim == null) return;

            unity_TSPS = sim.TimeStepsPerSecond();
            
            if (IsFFwd() && !AsFastAsPossible())
            {
                EnforceContinuousMode(); // => AsFastAsPossible()

                // continuous mode means sim does not wait for unity to draw
            }
            else if (AsFastAsPossible() && !IsFFwd())
            {
                EnforceSingleStepMode();

                // single step mode means sim waits for unity to draw
                // in Unity FixedUpdate, there is a call to Play() to restart simulator
            }
            else if (AsFastAsPossible())
            {
                float rtRatio = sim_xRT / unity_xRT;

                if (rtRatio < 0.8 || rtRatio > 1.2) unity_xRT = sim_xRT;

                sim.PlayRetainState(); // Sometimes sim is still doing last step when FF is requested
            }
            else if (lagMeasure > LAG_MAX * 5f)
            {
                // Not FF, Sim is marked as still running but is waiting for a pulse from here 
                // Force StopRunning, which will trigger a pulse 

                EnforceSingleStepMode();
            }
           
            if (Math.Abs(unity_xRT - Time.timeScale) > 0.001f)
            {
                Time.timeScale = unity_xRT;
                Time.fixedDeltaTime = TARGET_UNITY_TIME_PER_FRAME * unity_xRT;
            }
        }
 

        
        protected virtual void FixedUpdate()
        {
            if (AsFastAsPossible())
            {
                lagMeasure = 0; // this does not mean much when ignoring fixed update, so reset
                return;
            }

            if (paused) return;
            
            if (!App().Asm().InFixedUpdateCountdownState()) return;

            if (sim == null) return;
            if (sim.RunInterval() == 0) return;

            if (--fixedUpdateCountdown < 1)
            {
                bool prevStepFinished = sim.Play();  // single step

                if (prevStepFinished)
                {
                    int urti = (int) Math.Round(unity_xRT);
                    
                    int timeStepsPerSec = sim.TimeStepsPerSecond();
                    int framesPerTimeStep = TARGET_FPS / timeStepsPerSec;       // 80 / 5 = 16  

                    int fixedUpdatesPerTimeStep = framesPerTimeStep / urti;

                    // assert 0 == framesPerTimeStep % urti;
                    
                    fixedUpdateCountdown = fixedUpdatesPerTimeStep;

                    if (lagMeasure > 0) lagMeasure += LAG_DEC; else lagMeasure = 0;
                }
                else
                {
                    // If we get here, then the sim engine is taking so much CPU that it has not completed its
                    // work by the time of the next fixed update
                    fixedUpdateCountdown = 1;
                    lagMeasure += LAG_INC;
                }
            }
            
        }

        
       
        void OnApplicationFocus(bool hasFocus)
        {
            PauseOnFocusChange(!hasFocus);
        }
        void OnApplicationPause(bool appPaused)
        {
            // this is not the pause button in the editor, this means game is paused because it has lost focus
            
            PauseOnFocusChange(appPaused);
           
        }
        
#if  UNITY_EDITOR
        private void PauseOnFocusChange(bool pause)  {}
#else
        private void PauseOnFocusChange(bool pause)
        {
            PauseOnFocusChangeInBuild(pause);
        }
#endif
        private void PauseOnFocusChangeInBuild(bool pause)
        {
            if (pause)
            {
                App().Aih().FireDigitalEvent(AppDigitalFn.Pause, true);
                App().Aih().FireDigitalEvent(AppDigitalFn.MenuUp, true);
            }
            else App().Aih().FireDigitalEvent(AppDigitalFn.MenuResume, true);
        }
        
        public virtual void AppStateChanged(AppStateTransition ast)
        {
            if (ast.after == AppState.ReadyToSimulate)  // finishBuilding OR finishLoading
            {
                sim = App().Sim();
                EnforceSingleStepMode();
            }

           
        }

        protected void EnforceSingleStepMode()
        {
            unity_xRT = STD_RT;
            
            AsFastAsPossible(false);
            double timeStep = sim.TimeStep();
            sim.RunInterval(timeStep);
            if (sim.IsRunning()) sim.StopRunning();
            
        }
        private void EnforceContinuousMode()
        {
            unity_xRT = FF_RT;
            sim_xRT = FF_RT;

            AsFastAsPossible(true);
            
            sim.RunInterval(0);
            sim.PlayRetainState();
        }
       
        public void TimeSec()
        {
            float elapsedUnityUnscaledTime = mostRecentFrameUnityTime - prevSimSecondUnityTime;
            if (elapsedUnityUnscaledTime < 0.01f) elapsedUnityUnscaledTime = 0.01f;
            prevSimSecondUnityTime = mostRecentFrameUnityTime;
           
            sim_xRT = 1.0f / elapsedUnityUnscaledTime;
            
            
        }

        private static bool runAFAP ;

        // This is static so that it can be called without an object reference
        public static bool AsFastAsPossible() { return runAFAP; }
        // This is not static so that it can be overridden to catch when the state is changed
        protected virtual void AsFastAsPossible(bool v) { runAFAP  = v; }
        
#if UNITY_EDITOR
        private static bool pausedByEditor;
        private void HandlePauseState(PauseState state)
        {
            if (!pausedByEditor && EditorApplication.isPaused)
            {
                pausedByEditor = true;

                App().Sim()?.Pause();
            }

            if (pausedByEditor && !EditorApplication.isPaused)
            {
                pausedByEditor = false;

                App().Sim()?.Play();
            }
        }
#endif

       
    }
}