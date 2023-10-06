using uk.vroad.api;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;
using UnityEngine;

namespace uk.vroad.xmpl
{
    public class UMenuExample : UaMenu
    {
        private ExampleApp app;
        private GameObject centralPanel;
        
        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();
            
            centralPanel = gameObject.transform.parent.gameObject;
        }
        protected override App App() { return app; }

        protected override GameObject CentralPanel() { return centralPanel; }

        protected override AppState MenuState() { return ExampleState.PausedWhileSimulating; }
        
    }
}