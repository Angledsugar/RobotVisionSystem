using uk.vroad.api;
using uk.vroad.api.str;
using uk.vroad.api.etc;

using UnityEngine;

namespace uk.vroad.ucm
{
    /// <summary> A class to capture messages from the simulation engine and display them in the Console </summary>
    public abstract class UaExternalReporter : MonoBehaviour, Reporter.IExternalReporter
    {
        public abstract App App();
        
        private static UaExternalReporter onlyInstance;

        protected virtual void Awake()
        {
            if (onlyInstance == null)
            {
                onlyInstance = this;
                Reporter.SetExternalReporter(onlyInstance);
                DontDestroyOnLoad(onlyInstance);
                
                // DontDestroyOnLoad makes this object immortal, but the Unity system does not check 
                // that no other instance already exists: we need to do that ourselves
            }
            
        }

        // This object is registered as a listener with the simulation engine, so we need an object method
        // A static method cannot be used directly to do that

        public virtual void Report(string msg)
        {
            msg = DecoratedMsg(msg);

            // stdout goes to C:\Users\(user)\AppData\Local\Unity\Editor\Editor.log

            // System.Console.Error.WriteLine(msg); // uncomment this to send messages to the log file
#if UNITY_EDITOR
            Debug.Log(msg);
#endif
        }

        protected string DecoratedMsg(string msg)
        {
#if UNITY_EDITOR
            App app = App();
            if (app == null || app.Sim() == null) return msg;
            
            double simT = app.Sim().TimeNow();
            if (simT == 0) return msg;
            
            return new TimeHMS(simT).ToString(false) + SC.S + msg;
#else
            return msg;
#endif
        }
    }
}
