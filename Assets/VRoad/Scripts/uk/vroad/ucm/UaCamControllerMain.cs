using System;
using uk.vroad.api;
using uk.vroad.api.events;
using uk.vroad.api.geom;
using uk.vroad.api.input;

using UnityEngine;
using UnityEngine.UI;


namespace uk.vroad.ucm
{
    /// <summary> an abstract base class for an example camera controller, containing utilities
    /// such as placing the camera over the  centre of the map, and causing the camera to track
    /// a moving object, such as a vehicle or a pedestrian. </summary>
    public abstract class UaCamControllerMain : MonoBehaviour, LAppState, LAppInput
    {
        public static UaCamControllerMain MostRecentInstance { get; private set;  }


        protected const float MIN_CAMERA_HEIGHT = 2f;
        private const float INIT_CAMERA_HEIGHT = 500;
        private const float halfCameraFieldOfViewRadians =  Mathf.Deg2Rad * 30f;
        
        protected float cameraHeightSeeWholeModel = INIT_CAMERA_HEIGHT;
        protected float cameraHeight = INIT_CAMERA_HEIGHT;
        protected Vector3 mapCentre = Vector3.zero;
        protected Vector3 cameraFocus = Vector3.zero;

        protected bool mapLoaded;
        protected bool goToMapCentre;
       
        protected float zoom;
       
        public bool autoTrack;
        protected GameObject trackingGO;
        private bool isTracking;
        
        protected abstract App App();
        protected virtual void Awake()
        {
            MostRecentInstance = this;
            App().AddEventConsumer(this);
            
            //Camera mainCamera = gameObject.GetComponent<Camera>();
            //halfCameraFieldOfViewRadians = Mathf.Deg2Rad * 0.5f * mainCamera.fieldOfView; // In Main Unity thread
        }


        protected abstract void SetRotation(Angle a);
        
        protected virtual void Update()
        {
            if (!mapLoaded) return;
            
            
            
            if (goToMapCentre)
            {
                goToMapCentre = false;
                cameraHeight = cameraHeightSeeWholeModel;
                cameraFocus = mapCentre;
                Vector3 cameraUp = new Vector3(0, cameraHeightSeeWholeModel, 0);
                Vector3 worldUp = new Vector3(0, 0, 1);
                transform.position = cameraFocus + cameraUp;
                transform.LookAt(cameraFocus, worldUp);
               
            }

        }

       
        public virtual bool IsTracking() { return isTracking;  }
       
        public virtual void TrackThis(GameObject go)
        {
            trackingGO = go;
            isTracking = go != null;
        }
            
        public virtual void UnTrackThis(GameObject go)
        {
            if (trackingGO == go)
            {
                trackingGO = null;
                isTracking = false;
            }
        }

        protected virtual void LateUpdate()
        {
            if (isTracking)
            {
                Transform gotr = trackingGO.transform;
                cameraFocus = gotr.position;
                SetRotation(gotr.forward.ToXyz().Negative().AsBearing());
            }
        }
        
        public bool DeregisterFireMapChange() {  mapLoaded = false; return true; }
        
        protected virtual void SetCameraHeight()
        {
            float minH = MIN_CAMERA_HEIGHT;

            if (zoom > 0.1 || zoom < -0.1)
            {
                float maxH = cameraHeightSeeWholeModel;
                //float zMult = 5f * Math.Min(cameraHeight / 100f, 1f);
                float zMult = (float) Math.Sqrt(cameraHeight / 10f);
                cameraHeight = Math.Min(cameraHeight - zMult * zoom, maxH);
            }
            if (cameraHeight < minH)
            {
                if (zoom > 0.1) cameraHeight = minH;
                else cameraHeight += 0.05f * (minH - cameraHeight);
            }
        }

        public void AppStateChanged(AppStateTransition ast)
        {
            if (ast.after == AppState.ReadyToSimulate)
            {
                FindMapCentre();
                mapLoaded = true;
                goToMapCentre = true;
            }
        }

        
        protected virtual void FindMapCentre()
        {
            IMap map = App().Map();
            Xyz sw = map.GetSW();
            Xyz ne = map.GetNE();
            float border = (float) map.GetBorder();
            
            Xyz mc = new Xyz(sw, ne, 0.5);
            // sw.z is -1, ne.z is 100;
            // zero corresponds to the lowest terrain elevation
            // a value of 25 seems to work well for a range of models, small and large
            mc.Z(25);
            mapCentre = mc.ToVector3();

            //The field of view axis seems to be always vertical, there is a dropdown to change this in Editor, but no API access?

            //float modelDiagonal = (float) sw.Distance(ne);

            float modelDY = (float) (ne.Y() - sw.Y());
            float modelHalfVerticalSize = (0.5f * modelDY) + border;

            cameraHeightSeeWholeModel = modelHalfVerticalSize / Mathf.Tan(halfCameraFieldOfViewRadians);

        }

        public abstract bool AppInputAnalogEvent(AppAnalogFn afn, double value);
       
        public bool AppInputDigitalEvent(AppDigitalFn fn, bool isOn)  { return false; }


        public virtual void PlayerPosition(Vector3 pos, Angle bearing, double speed, bool aboard) {}
        public virtual void PlayerArrived()  {}

        public float GetCameraHeight()
        {
            return cameraHeight;
        }

        public virtual bool IsAutoTracking() { return autoTrack; }
        public virtual void GoToMapCentre() { }
        public virtual bool ReadyToTrack() { return true; }
        
        public void SetFocus(float ew, float sn)
        {
            float height = cameraFocus.y;
            cameraFocus = new Vector3(ew, height, sn);
        }
    }
}