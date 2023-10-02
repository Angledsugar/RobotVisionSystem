using System;
using uk.vroad.api;
using uk.vroad.api.geom;
using uk.vroad.api.input;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;
using UnityEngine;


namespace uk.vroad.xmpl
{
    /// <summary> A simple concrete example of a camera Controller </summary>
    /// A more complex example is included in the Pro Variant, see uk.vroad.urvr.UCamControllerMainRvr
    public class UCamControllerExample : UaCamControllerMain
    {
        private double panMultiplier = 0.012;
        private double spinMultiplier = 2;
        private double tiltMultiplier = -10;
        
        private const double TILT_MIN = 1; // rotation requires a non-zero value of tilt
        
        private ExampleApp app;
        private Vector3 mapSW = Vector3.zero;
        private Vector3 mapNE = Vector3.zero;
        private double panX;
        private double panY;
        private Angle cameraRotation = Angle.A180;
        private double tilt = TILT_MIN;
        private bool zoomToPlayerCar;
        
        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            base.Awake();
        }
        protected override App App() { return app; }

        protected override void FindMapCentre()
        {
            base.FindMapCentre();

            mapSW = app.Map().GetSW().ToVector3();
            mapNE = app.Map().GetNE().ToVector3();
            
            cameraFocus = mapCentre;
        }

        public override void TrackThis(GameObject go)
        {
            if (go != null && trackingGO == null) zoomToPlayerCar = true;
            
            base.TrackThis(go);
        }
        
        public override bool AppInputAnalogEvent(AppAnalogFn afn, double value)
        {
            if (afn == AppAnalogFn.PanX)
            {
                panX = value;

                return true;
            }

            if (afn == AppAnalogFn.PanY)
            {
                panY = -value;

                return true;
            }
            
            if (afn == AppAnalogFn.Zoom)
            {
                zoom = (float) value; 

                return true;
            }
            
            if (afn == AppAnalogFn.Tilt)
            {
                if (value > 0.1 || value < -0.1)
                {
                    tilt += tiltMultiplier * value;
                    if (tilt < TILT_MIN) tilt = TILT_MIN;
                }

                return true;
            }

            if (afn == AppAnalogFn.Rotate)
            {
                
                if (value > 0.1 || value < -0.1)
                {
                    cameraRotation = new AngleDeg(cameraRotation.Degrees() + (spinMultiplier * value));
                }

                return true;
            }

            return false;
        }

        private float trackTiltMult = 2;
        private float trackTiltShift = 2;
        private float maxSwingS = 0.1f;
        public float swingL = 1;
        public float maxSwingL = 45;

        protected override void SetRotation(Angle fwd)
        {
            Angle diff = fwd.Minus(cameraRotation).RangeN180();

            if      (diff.Degrees() >  maxSwingL) diff = new AngleDeg( swingL);
            else if (diff.Degrees() < -maxSwingL) diff = new AngleDeg(-swingL);

            else if (diff.Degrees() >  maxSwingS) diff = new AngleDeg( maxSwingS);
            else if (diff.Degrees() < -maxSwingS) diff = new AngleDeg(-maxSwingS);
            
            cameraRotation = cameraRotation.Plus(diff);
            
            float clampedHeight = Math.Max(2, Math.Min(cameraHeight, 20));
            tilt = (clampedHeight * trackTiltMult) + trackTiltShift;
        }
        
        protected override void LateUpdate()
        {
            if (!mapLoaded) return;
            
            base.LateUpdate();
            
            Pan(panX, panY);
            
            panX = 0;
            panY = 0;
            
            SetCameraHeight();
            
            Xyz cameraRopeH = cameraRotation.UnitVectorXY().MultipliedBy(tilt);
            
            Vector3 cameraOffset = cameraRopeH.ToVector3(cameraHeight);
            
            transform.position = cameraFocus + cameraOffset;

            transform.LookAt(cameraFocus);

        }

        protected override void SetCameraHeight()
        {
            base.SetCameraHeight();

            if (zoomToPlayerCar)
            {
                if (zoom > 0.1 || zoom < -0.1 || cameraHeight < 5.0) zoomToPlayerCar = false;
                else cameraHeight *= 0.96f; 
            }
        }

        private void Pan(double dx, double dy)
        {
            if (dx == 0 && dy == 0) return;
            
            double step = panMultiplier * cameraHeight;  
            double sx = dx * step;
            double sy = dy * step;

            // rotate according to view
            double r = Math.Sqrt(sx * sx + sy * sy);
            double a1 = 0.5 * Math.PI - Math.Atan2(sy, sx);
            double a2 = cameraRotation.Radians();
            double rx = r * Math.Sin(a1 + a2);
            double ry = r * Math.Cos(a1 + a2);
            
            double rfnx = cameraFocus.x + rx;
            double rfnz = cameraFocus.z + ry;

            rfnx = Math.Max(mapSW.x, Math.Min(rfnx, mapNE.x));
            rfnz = Math.Max(mapSW.z, Math.Min(rfnz, mapNE.z));
            
            cameraFocus = new Vector3((float) rfnx, 0, (float) rfnz);
        }

        
        public override void GoToMapCentre()
        {
            goToMapCentre = true;
            cameraRotation = Angle.A180;
            tilt = TILT_MIN;
            
            base.GoToMapCentre();
        }

       
    }
}