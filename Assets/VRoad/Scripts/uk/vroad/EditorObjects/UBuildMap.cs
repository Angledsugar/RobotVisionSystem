using System;
using uk.vroad.api;
using uk.vroad.api.enums;
using uk.vroad.api.etc;
using uk.vroad.api.str;
using uk.vroad.api.xmpl;
using uk.vroad.apk;
using uk.vroad.ucm;
using UnityEngine;
using UnityEngine.UI;

using BP = uk.vroad.api.enums.BuildParameter;
using BF = uk.vroad.api.enums.BuildFlag;

namespace uk.vroad.EditorObjects
{
    /// <summary> This class contains true/false flags that must be set at build time,
    /// to define values that are set in  the .vroad file. </summary>
    [System.Serializable]
    public class BuildFlags : Inspectable
    {
        [Tooltip("If true, Buildings will be generated, and their outline points adjusted if required," +
                 "so that in most cases, a building does not overlap any roads.\n" +
                 "If false, no building mesh will be generated.")]
        public bool buildings = BF.NoBuildings.IsFalse();

        //[Tooltip("If true, \nIf false, ")]
        //public bool terrain = BF.NoTerrain.IsFalse();

        [Tooltip("If true, walkways and pedestrian road crossings will be generated. " +
                 "If false, there will be no walkways, no pedestrians, " +
                 "buses, bus bays, bus routes, taxis or taxi bays.")]
        public bool walkways = BF.NoWalks.IsFalse();

        [Tooltip("If true, pedestrians will be spawned in the simulation")]
        public bool pedestrians = BF.NoPeds.IsFalse();

        [Tooltip("If true, bus stops and bus bays will be generated and buses " +
                 "will be spawned in the simulation")]
        [ProOnly]
        public bool buses = BF.NoBuses.IsFalse();

        [Tooltip("If true, taxi bays will be generated and taxis " +
                 "will be spawned in the simulation")]
        [ProOnly]
        public bool taxis = BF.NoTaxis.IsFalse();

        [Tooltip("If true, OSM ways tagged with highway=service will be converted into roads.\n" +
                 "If false, these ways will be converted into walkways.")]
        [ProOnly]
        public bool serviceRoads = BF.NoServiceRoads.IsFalse();
        
        [Tooltip("If true, OSM ways tagged with cycleway will create a road with a cycle lane")]
        [ProOnly]
        public bool cycleways = BF.NoCycleWays.IsFalse();

        
        // This makes sure that flags are consistent
        public void OnValidate()
        {
            if (!walkways) { pedestrians = false; buses = false; }
            if (!pedestrians) { taxis = false; }
        }

        public void ResetToDefaults()
        {
            buildings = true;
            //terrain = true;
            walkways = true;
            pedestrians = true;
            buses = true;
            taxis = true;
            serviceRoads = true;
            cycleways = true;
        }
    }
    /// <summary> This class contains parameters that must be set at build time,
    /// to define values that are set in  the .vroad file. </summary>
    [System.Serializable] public class BuildParameters : Inspectable
    {
        [ProOnlyRange(0, BP.MAX_MAX_ROAD_ANGLE)] 
        [Tooltip("The maximum angle between sections of road centreline. If OSM node positions result in a " +
                 "centreline section rotated relative to the previous section by an angle greater than this value, " +
                 "then additional points are added to the centreline to smooth its curvature. In general, " +
                 "a lower value for this parameter will create a mesh with more triangles. " +
                 "A value of zero for this parameter switches off this curvature smoothing function.")]
        public int maxRoadAngle = BP.MaxRoadAngle.IntValue();
        
        [ProOnlyRange(BP.MIN_DELTA_GRAD, BP.MAX_DELTA_GRAD)] 
        [Tooltip("The target maximum change in gradient between sections of road centreline. This affects how smooth" +
                 "a road surface will be, but there will still be steps in gradient that are above this threshold where " +
                 "a road passes over or under another.")]
        public float maxGradientChange = BP.MaxDeltaGrad.FloatValue();

        [ProOnlyRange(BP.MIN_LANE_WIDTH, BP.MAX_LANE_WIDTH)] 
        [Tooltip("The built lane width, in metres, which may be modified by other parameters depending on the type of lane")]
        public float laneWidth = BP.LaneWidth.FloatValue();
                
        [ProOnlyRange(BP.MIN_CYCLE_LANE_WIDTH, BP.MAX_CYCLE_LANE_WIDTH)] 
        [Tooltip("The width of a cycle lane, in metres (restriction NO_TRAFFIC)")]
        public float cycleLaneWidth = BP.CycleLaneWidth.FloatValue();
        
        [ProOnlyRange(BP.MIN_KERB_LANE_WIDTH, BP.MAX_KERB_LANE_WIDTH)] 
        [Tooltip("The additional width, in metres, assigned to a lane adjacent to the kerb (curb). This value can be negative.")]
        public float kerbLaneExtraWidth = BP.KerbLaneExtraWidth.FloatValue();

        [ProOnlyRange(BP.MIN_BUS_LANE_WIDTH, BP.MAX_BUS_LANE_WIDTH)] 
        [Tooltip("The additional width, in metres, assigned to a bus lane. This value can be negative.")]
        public float busLaneExtraWidth = BP.BusLaneExtraWidth.FloatValue();

        [ProOnlyRange(BP.MIN_SERVICE_LANE_WIDTH, BP.MAX_SERVICE_LANE_WIDTH)] 
        [Tooltip("The additional width, in metres, assigned to a service lane. This is negative by default, but can be positive.")]
        public float serviceLaneExtraWidth = BP.ServiceLaneExtraWidth.FloatValue();

        [ProOnlyRange(BP.MIN_SIDEWALK_WIDTH, BP.MAX_SIDEWALK_WIDTH)] 
        [Tooltip("The built width of a sidewalk, in metres")]
        public float sidewalkWidth = BP.SidewalkWidth.FloatValue();

        [ProOnlyRange(BP.MIN_CROSSING_WIDTH, BP.MAX_CROSSING_WIDTH)] 
        [Tooltip("The built width of a pedestrian crossing, in metres.")]
        public float crossingWidth = BP.CrossingWidth.FloatValue();

        [ProOnlyRange(BP.MIN_ISLAND_SIDEWALKS, BP.MAX_ISLAND_SIDEWALKS)] 
        [Tooltip("Where there is an island surrounded by roads, if it less than this area (in sq. m.) then" +
                 "the island will have no sidewalks.")]
        public int sidewalkIslandArea = BP.IslandAreaSidewalks.IntValue();

        [Range(BP.MIN_STOREY, BP.MAX_STOREY)] 
        [Tooltip("The height of one storey on a building, in metres")]
        public float buildingStoreyHeight = BP.BuildingStoreyHeight.FloatValue();
        
        [Range(BP.MIN_LEVELS, BP.MAX_LEVELS)] 
        [Tooltip("The default number of levels (storeys) on a building, if it is not specified in OSM")]
        public int buildingLevels = BP.BuildingLevels.IntValue();
        
        [Range(0, 100)] [Tooltip("The proportion (%) of cars in the simulation relative to trucks and coaches")]
        public int carsToOthers = BP.CarsToOthers.IntValue();

        [Range(0, 100)] [Tooltip("The proportion of coaches to trucks in the simulation")]
        public int coachesToTrucks = BP.CoachesToTrucks.IntValue();

        [ProOnlyRange(0, 4)] [Tooltip("Increase the number of messages produced when building a map")]
        public int verbosity = BP.Verbosity.IntValue();

        public void OnValidate()
        {
        }
        public void ResetToDefaults()
        {
            maxRoadAngle = BP.STD_MAX_ROAD_ANGLE;
            maxGradientChange = BP.STD_DELTA_GRAD;
            laneWidth = BP.STD_LANE_WIDTH;
            cycleLaneWidth = BP.STD_CYCLE_LANE_WIDTH;
            kerbLaneExtraWidth = BP.STD_KERB_LANE_WIDTH;
            busLaneExtraWidth = BP.STD_BUS_LANE_WIDTH;
            serviceLaneExtraWidth = BP.STD_SERVICE_LANE_WIDTH;
            sidewalkWidth = BP.STD_SIDEWALK_WIDTH;
            crossingWidth = BP.STD_CROSSING_WIDTH;
            buildingStoreyHeight = BP.STD_STOREY;
            buildingLevels = BP.STD_LEVELS;
            sidewalkIslandArea = BP.STD_ISLAND_SIDEWALKS;
            carsToOthers = BP.STD_CARS_OTHERS;
            coachesToTrucks = BP.STD_COACHES_TRUCKS;
            verbosity = 0;
        }
    }

    [System.Serializable]
    public class BuildLaneCounts : Inspectable
    {
        [ProOnlyRange(1, 4)] [Tooltip("Lane count applied where none is specified for motorway highways")]
        public int motorway = BP.STD_LANES_MOTORWAY;

        [ProOnlyRange(1, 4)] [Tooltip("Lane count applied where none is specified for trunk highways")]
        public int trunk = BP.STD_LANES_TRUNK;

        [ProOnlyRange(1, 4)] [Tooltip("Lane count applied where none is specified for primary highways")]
        public int primary = BP.STD_LANES_PRIMARY;

        [ProOnlyRange(1, 4)] [Tooltip("Lane count applied where none is specified for secondary highways")]
        public int secondary = BP.STD_LANES_SECONDARY;

        [ProOnlyRange(1, 4)] [Tooltip("Lane count applied where none is specified for tertiary highways")]
        public int tertiary = BP.STD_LANES_TERTIARY;

        public void ResetToDefaults()
        {
            motorway = BP.STD_LANES_MOTORWAY;
            trunk = BP.STD_LANES_TRUNK;
            primary = BP.STD_LANES_PRIMARY;
            secondary = BP.STD_LANES_SECONDARY;
            tertiary = BP.STD_LANES_TERTIARY;
        }
    }

    /// <summary> EDITOR-ONLY Class: marshals parameters for running Osm2VRoad in an external process </summary>
    /// This class cannot go in the Editor folder
    public class UBuildMap: MonoBehaviour
    {
#if UNITY_EDITOR
        public static UBuildMap MostRecentInstance { get; private set;  }

        [Tooltip("A UI Text object in the scene that can be used to display a build error. " +
                 "This can be null, in which case build errors will be shown in the Console only")]
        public Text buildErrorText;
        
        [Tooltip("A progress-bar slider to show the progress of reading an OSM file and converting it to VROAD format")]
        public Slider osmSlider;
        [Tooltip("A progress-bar slider to show the progress of reading a VROAD file and creating the meshes for display")]
        public Slider vRoadSlider;

        [Tooltip("A set of build-time options used to adjust the objects written into the VROAD file ")]
        public BuildFlags options;
        [Tooltip("A set of build-time parameters used to adjust the objects written into the VROAD file ")]
        public BuildParameters parameters;
        [Tooltip("A set of parameters used to adjust the number of lanes on roads where the lane count is not specified in OSM")]
        public BuildLaneCounts heuristicLaneCounts;

        [SerializeField] [HideInInspector] private String args;
        
        private App app;
        private bool argsValid;
        private bool hasUI;
        private bool buildInProgress;
        private bool loadInProgress;
        private bool aborted;
        private string progressActivity;
        private int progressRaw;
        private int progressSmoothed;

        void Reset()  // Called when the Reset button is pressed
        {
            if (buildErrorText == null)  try { buildErrorText = GameObject.Find("BuildErrorText").GetComponent<Text>(); } catch (Exception) { }
            if (osmSlider == null)  try { osmSlider = GameObject.Find("ProgressBarOsm2V").GetComponent<Slider>(); } catch (Exception) { }
            if (vRoadSlider == null)  try { vRoadSlider = GameObject.Find("ProgressBarVRoad").GetComponent<Slider>(); } catch (Exception) { }
        }

        void OnValidate()
        {
            options.OnValidate();
            parameters.OnValidate();
            //laneCounts.OnValidate();
        }
        public void ResetToDefaults()
        {
            options.ResetToDefaults();
            parameters.ResetToDefaults();
            heuristicLaneCounts.ResetToDefaults();
        }
        protected virtual void Awake()
        {
            app = ExampleApp.AwakeInstance();
            
            MostRecentInstance = this;
            hasUI = buildErrorText != null && osmSlider != null && vRoadSlider != null;
            if (buildErrorText != null) buildErrorText.gameObject.SetActive(false);
            
            if (args != null)
            {
                if (!StartExternalBuild(ExternalMapBuilder.BuildMap(args)))
                {
                    Debug.LogError(ExternalMapBuilder.BuildError());
                }
            }
            else Debug.LogWarning("No location specified for map. " +
                                  "Expected Lat-Long specification or OSM JSON file");
        }
        
        /// <summary> Called after the external process has been started, to set some state variables in this class </summary>
        /// <returns> true if the build succeeded, false on failure </returns>
        private bool StartExternalBuild(bool startedOK)
        {
            if (hasUI) vRoadSlider.gameObject.SetActive(false);
            buildInProgress = startedOK;
            loadInProgress = false;
            progressRaw = 0;
            progressSmoothed = 0;
            progressActivity = startedOK? "Building Map": "Failed to Start Build";
            if (buildInProgress && hasUI) osmSlider.gameObject.SetActive(true);

            return startedOK;
        }
        
        /// <summary> This method is called to start loading the VROAD file, after it has been written
        /// by the external building process  </summary>
        private void StartLoad(KFile mapFile)
        {
            buildInProgress = false;
            loadInProgress = true;
            progressRaw = 0;
            progressSmoothed = 0;
            progressActivity = "Loading Map";
            if (hasUI) vRoadSlider.gameObject.SetActive(true);

            Reporter.ProgressPartsUI(1);
            pac.VRoad.Load(app, mapFile);
        }
        
        void FixedUpdate()
        {
            if (ExternalMapBuilder.FailAndExit() && !aborted)
            {
                aborted = true;
                Debug.LogWarning("Build failure: cancelling scene play");
                UExitHandler.AppExitStatic(app);
            }
            if (buildInProgress)
            {
                progressRaw = ExternalMapBuilder.Progress();
               
                string newBuild = ExternalMapBuilder.NewlyBuiltFile();
                string buildError = ExternalMapBuilder.BuildError();

                if (newBuild == null && buildError == null)
                {
                    int diff = (progressRaw * 100) - progressSmoothed;
                    if (diff > 0)
                    {
                        int inc = diff / 10;
                        progressSmoothed += inc;
                        if (hasUI) osmSlider.value =  progressSmoothed;
                    }
                }
                else
                {
                    if (hasUI) osmSlider.gameObject.SetActive(false);
                    
                    buildInProgress = false;
                    progressRaw = 0;
                    progressSmoothed = 0;
                    
                    KFile mapFile = newBuild != null? new KFile(newBuild): null;
                    if (mapFile != null && mapFile.Exists() && AppTools.SuitableAppFile(mapFile))
                    {
                        if (hasUI) vRoadSlider.gameObject.SetActive(true);
                        StartLoad(mapFile);
                    }
                    else
                    {
                        if (buildError == null) buildError = "No generated file, no error?";

                        if (hasUI)
                        {
                            buildErrorText.gameObject.SetActive(true);
                            buildErrorText.text = buildError;
                        }
                        else Debug.Log(buildError);
                    }
                }
            }
            else if (loadInProgress)
            {
                progressRaw = Reporter.ProgressTotal();

                if (progressRaw < 100)
                {
                    int diff = (progressRaw * 100) - progressSmoothed;
                    if (diff > 0)
                    {
                        int inc = diff / 10; // diff > 1000? 100: diff > 500? 20: 5;
                        progressSmoothed += inc;
                        if (hasUI) vRoadSlider.value = progressSmoothed;
                    }
                }
                else
                {
                    if (hasUI) vRoadSlider.gameObject.SetActive(false);
                    loadInProgress = false;
                    
                }
            }
        }

        public int Progress() { return progressRaw; }
        public string ProgressActivity() { return progressActivity; }

        /// <summary> This is called from EditorWindow OnGUI (while not playing) so values must be set
        /// into serialized fields so that they are still available when Awake() is called </summary>
        public void SetupBuildParameters()
        {
            string path = BP.FilePath.Value();
            string latLong = BP.LatLong.Value();

            if (FoundOsmFile(path) || LooksLikeLatLong(latLong))
            {
                BP.MaxRoadAngle.Set(parameters.maxRoadAngle);
                BP.MaxDeltaGrad.Set(parameters.maxGradientChange);
                
                BP.LaneWidth.Set(parameters.laneWidth);
                BP.CycleLaneWidth.Set(parameters.cycleLaneWidth);
                BP.KerbLaneExtraWidth.Set(parameters.kerbLaneExtraWidth);
                BP.BusLaneExtraWidth.Set(parameters.busLaneExtraWidth);
                BP.ServiceLaneExtraWidth.Set(parameters.serviceLaneExtraWidth);
                BP.SidewalkWidth.Set(parameters.sidewalkWidth);
                BP.CrossingWidth.Set(parameters.crossingWidth);

                BP.CarsToOthers.Set(parameters.carsToOthers);
                BP.CoachesToTrucks.Set(parameters.coachesToTrucks);
                BP.BuildingStoreyHeight.Set(parameters.buildingStoreyHeight);
                BP.BuildingLevels.Set(parameters.buildingLevels);
                BP.IslandAreaSidewalks.Set(parameters.sidewalkIslandArea);
                
                BP.Verbosity.Set(parameters.verbosity);

                BP.LanesMotorway.Set(heuristicLaneCounts.motorway);
                BP.LanesTrunk.Set(heuristicLaneCounts.trunk);
                BP.LanesPrimary.Set(heuristicLaneCounts.primary);
                BP.LanesSecondary.Set(heuristicLaneCounts.secondary);
                BP.LanesTertiary.Set(heuristicLaneCounts.tertiary);
                
                BF.NoBuildings.Set(! options.buildings);
                //BF.NoTerrain.Set(! options.terrain);
                BF.NoWalks.Set(! options.walkways);
                BF.NoPeds.Set(! options.pedestrians);
                BF.NoBuses.Set(! options.buses);
                BF.NoTaxis.Set(! options.taxis);
                BF.NoServiceRoads.Set(! options.serviceRoads);
                BF.NoCycleWays.Set(! options.cycleways);

                // BF.WebMode.Set(true); // Testing only
                
                args = BuildParameter.ArgumentString();
            }
            else args = null;
        }

        /* Set up any parameters that are used in the mesh creation
        void SetupBuildParametersForMesh()
        {
            BP.BuildingStoreyHeight.Set(parameters.buildingStoreyHeight);
        }
          //*/
          
        private bool FoundOsmFile(string osmFilePath)
        {
            // ** ALWAYS ** Call OsmDir here (to initialize in correct thread)
            string userOsmDir = KEnv.OsmDir();
            
            if (osmFilePath == null) return false;
            osmFilePath = osmFilePath.Trim();
            if (osmFilePath.Length < 5) return false;
            
            // First check absolute path
            KFile mapFile = new KFile(osmFilePath);
            if (mapFile.Exists()) return true;
            
            mapFile = new KFile(userOsmDir, osmFilePath); // .. then relative name of OSM file
            if (mapFile.Exists()) return true;

            return false;
        }


        protected void OnApplicationQuit()
        {
            ExternalMapBuilder.ForceQuit();
        }
        
        
        public static bool LooksLikeLatLong(string s)
        {
            if (s == null) return false;
            s = s.Trim();
            if (s.Length < 4 || s.Length > 60) return false;
            
            char separator = CC.COMMA;
            if (s.IndexOf(separator) < 1) return false;

            double LATMAX = 85; // See also BoundsBox.LAT_MAX_PRACTICAL
            double LNGMAX = 180.001;
            string[] parts = KTools.SplitQuick(s, separator);
            
            if (parts.Length == 4)
            {
                double[] na = Numbers(parts);
                if (na == null) return false;

                if (-LATMAX > na[0] || na[0] > LATMAX) return false;
                if (-LNGMAX > na[1] || na[1] > LNGMAX) return false;
            }
           
            if (parts.Length == 2)
            {
                double[] na = Numbers(parts);
                if (na == null) return false;

                if (-LATMAX > na[0] || na[0] > LATMAX) return false;
                if (-LNGMAX > na[1] || na[1] > LNGMAX) return false;
            }
            
            // More tests could go here

            return true;
        }
        private static double[] Numbers(string[] parts)
        {
            double[] na = new double[parts.Length];
            for ( int i = 0; i < parts.Length; i++) 
            {
                try { na[i] = KTools.ParseDouble(parts[i]); }
                catch (FormatException) { return null; }
            }
            return na;
        }
#endif  // UNITY_EDITOR
    }
}