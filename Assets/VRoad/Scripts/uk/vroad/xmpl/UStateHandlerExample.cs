using uk.vroad.api;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;

namespace uk.vroad.xmpl
{
    public class UStateHandlerExample : UaStateHandler
    {
        private ExampleApp app;

        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();
        }
        protected override App App() { return app; }
        
        protected override void OnMapLoadFailure()  {}
       
        protected override bool HasMapAlreadyLoaded(AppState currentState)
        {
            if (currentState == ExampleState.Simulating) return true;
            if (currentState == ExampleState.PausedWhileSimulating) return true;

            return base.HasMapAlreadyLoaded(currentState);
        }
    }
}