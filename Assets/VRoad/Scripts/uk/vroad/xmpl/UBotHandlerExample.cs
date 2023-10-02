using uk.vroad.api;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;

namespace uk.vroad.xmpl
{
    /// <summary> A simple concrete example of a Bot Handler </summary>
    /// A more complex example is included in the Pro Variant, see uk.vroad.urvr.BotHandler
    public class UBotHandlerExample : UaBotHandler
    {
        private ExampleApp app;
        
        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();
        }
        protected override App App() { return app; }
        protected override AppStateTransition StartSimTransition() { return ExampleStateTransition.runSimulation; }

    }
}