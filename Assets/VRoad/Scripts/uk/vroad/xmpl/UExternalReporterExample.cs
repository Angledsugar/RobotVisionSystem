
using uk.vroad.api;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;
using UnityEngine.UIElements;

namespace uk.vroad.xmpl
{
   
    public class UExternalReporterExample : UaExternalReporter
    {
        private App app;

        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();
        }

        public override App App() { return app; }

    }
}
