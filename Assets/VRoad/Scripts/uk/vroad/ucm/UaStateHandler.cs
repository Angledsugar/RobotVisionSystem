using uk.vroad.api;
using uk.vroad.api.etc;
using uk.vroad.api.events;
using uk.vroad.apk;
using UnityEngine;

namespace uk.vroad.ucm
{
    public abstract class UaStateHandler : MonoBehaviour, LAppState, LUAppState
    {
        public static UaStateHandler MostRecentInstance { get; private set;  }

        public UaMapMesh mapMesh;
        
        // Keep a list of game state transitions so that they can be distributed in the main thread on the next call to Update
        private readonly KList<AppStateTransition> pendingTransitions = new KList<AppStateTransition>();
        private readonly KSList<LUAppState> listeners = new KSList<LUAppState>();

        protected abstract void OnMapLoadFailure();
       
        protected abstract App App();
        
        
        public bool DeregisterFireMapChange() { return true; }

        protected bool simReady;
        private bool meshCreationStarted ;
        
        protected virtual void Awake()
        {
            MostRecentInstance = this;
            
            // Add myself, so that I pass transition on to myself, then act on them in the correct thread
            AddListener(this);
            
            App().AddEventConsumer(this);
            
            simReady = HasMapAlreadyLoaded(App().GetAppStateMachine().CurrentState());

            
#if UNITY_EDITOR // This is here because UExitHandler does not have an App() reference
            UnityEditor.EditorApplication.playModeStateChanged += EditorPlayModeChanged;
#endif
        }

        protected virtual bool HasMapAlreadyLoaded(AppState currentState)
        {
            if (currentState == AppState.ReadyToSimulate) return true;
            return false;
        }
        protected virtual void Update()
        {
            // The signal to create meshes is not handled using LUAppState listeners, because this object
            // can be created so late, it may have already missed that transition
            if (simReady && !meshCreationStarted) { meshCreationStarted = true; mapMesh.MeshesCreate();  }

            AppStateTransition[] asta;
            LUAppState[] luasa = {};
            lock (this)
            {
              
                asta = pendingTransitions.ToArray();
                pendingTransitions.Clear();
                if (asta.Length > 0)  luasa = listeners.ToArray();
            }

            foreach (AppStateTransition ast in asta)
            {
                if (UDbg.CLEAN_EXIT) UDbg.CatchThis(SU.EXIT_01, ast);

                foreach (LUAppState listener in luasa)
                {
                    listener.UAppStateChanged(ast);
                } 
            }
        }


        public virtual void AppStateChanged(AppStateTransition ast)
        {
            if (ast.after == AppState.ReadyToSimulate) simReady = true;
            
            lock (this) // Store the transition until Update is called in another thread
            {
                if (UDbg.CLEAN_EXIT) UDbg.CatchThis(SU.EXIT_02, ast.ToString());

                // If this object has just registered itself (change of scene) it will receive
                // a transition (WildCard -> current state)
                
                // if (ast.before == AppState.WildCard) return;
                
                pendingTransitions.Add(ast);
            }

        }

        public virtual void UAppStateChanged(AppStateTransition ast)
        {
            if (ast == AppStateTransition.mapLoadFailed)
            {
                if (UDbg.CLEAN_EXIT) UDbg.CatchThis(SU.EXIT_03);
                
                App().DeleteEventConsumers();

                OnMapLoadFailure();
            }
            
            else if (ast == AppStateTransition.abortedBuildEarly || ast == AppStateTransition.abortedBuildLate)
            {
                
                App().DeleteEventConsumers();
                
                OnMapLoadFailure();
            }
        }
        
        public void AddListener(LUAppState gsl)
        {
            lock (this)
            {
                listeners.Add(gsl);
            }
        }

#if UNITY_EDITOR
        void EditorPlayModeChanged(UnityEditor.PlayModeStateChange playModeStateChange)
        {
            if (playModeStateChange == UnityEditor.PlayModeStateChange.ExitingPlayMode)
            {
                UExitHandler.AppExitStatic(App());
            }
        }
#endif

        protected virtual void OnApplicationQuit()
        {
            UExitHandler.AppExitStatic(App());
        }

    }
}