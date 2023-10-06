using System;
using System.IO;
using uk.vroad.api;
using uk.vroad.api.enums;
using uk.vroad.api.etc;
using uk.vroad.api.geom;
using uk.vroad.api.map;
using uk.vroad.api.sim;
using uk.vroad.api.str;
using uk.vroad.api.xmpl;
using uk.vroad.apk;
using uk.vroad.EditorObjects;
using uk.vroad.pac;
using uk.vroad.ucm;
using uk.vroad.xmpl;
using UnityEditor;
using UnityEditor.SceneManagement;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace uk.vroad.Editor
{
    #region STRING_CONSTANTS

    public static class EDSC // Editor string constants, for translation (see note on Babyl, at end)
    {
        public const string WINDOW_TITLE = "Global Roads and Traffic"; // "\uff06 Traffic";
        public const string MENU_TITLE = "Tools/" + WINDOW_TITLE;
        
        public const string URL_LABEL = "User Manual";
        public const string URL_PAGE =  "https://vroad.uk/doc/installation/";

        public const string TAB_BUILD = "Build";
        public const string TAB_REBUILD = "Rebuild";
        public const string TAB_TRAFFIC = "Traffic";
        public const string TAB_OPTIONS = "Options";
        public const string TAB_PRO = "[ Pro ]";
        public const string TAB_LITE = "[ Lite ]";
        public const string ACTION_BUILD = ""; // "Build Map";
        public const string ACTION_REBUILD = "To Rebuild Map";
        public const string ACTION_TRAFFIC = ""; // "Run Traffic";
        public const string ACTION_PREFAB = "Save as Prefab";
        public const string TOOLTIP_BUILD = "Download OSM Data, generate meshes for 3D map, then save " +
                                            "model as a V-Road file to be used by traffic simulation";
        public const string TOOLTIP_REBUILD = "Read a cached OSM file, re-generate meshes, then re-save " +
                                              "model as a V-Road file to be used by traffic simulation";
        public const string TOOLTIP_TRAFFIC = "Read a V-Road file and run a traffic simulation";
        public const string HINT_BUILD = "Map Centre and Area Not Specified";
        public const string HINT_REBUILD = "No OSM File Selected";
        public const string HINT_TRAFFIC = "No V-Road File Selected";
        public const string HINT_PREFAB = "Save as Prefab when Rebuilt";
        public const string ALREADY_PREFAB = "Already Saved Prefab";
        public const string HINT_FORMAT = "[ %s ]";

        public const string OSM_FILE_DESC = "Open Cached OSM JSON";
        public const string VROAD_FILE_DESC = "Open VRoad File";
        public const string MAP_CENTRE = "Map Centre (Lat, Long)";
        public const string MAP_AREA = "Map Area (Ha)";
        public const string MAX_AREA = "Maximum Map Area (Ha)";
        public const string MAP_SIZE_E = "Map Size East (m)";
        public const string MAP_SIZE_N = "Map Size North (m)";
        public const string HINT_OSM = "(select OSM File)";
        public const string HINT_VROAD = "(select V-Road File)";

        public const string MAP_SUBURB = "Suburb";
        public const string MAP_CITY = "City";
        public const string MAP_COUNTRY = "Country";

        public const string UI_POLL = "Locate map with browser";

        public const string UI_POLL_TT = "Poll the system clipboard for a (latitude, longitude) location. " +
                                         "If the standard map server is not available, you can use any web map that " +
                                         "copies to clipboard, such as maps.google.com / right-click.\n\n" +
                                         "[Pro] Once you have (latitude, longitude), you can switch this toggle off " +
                                         "and then enter required area and map size manually below.";

        public const string UI_LAUNCH = "Launch Browser";
        public const string UI_MISSING = "Missing from Scene: %s";
        public const string UI_SAVE_MESHES = "Saved Meshes to: %s";
        public const string UI_SAVE_MESHES_TERRAIN = "Saved Meshes and Terrain to: %s";
        public const string UI_SAVE_PREFAB = "Saved Map to: %s";
        public const string UI_SAVE_PREFAB_FAIL = "Failed to save prefab: ";
        public const string UI_NO_TERRAIN_ = "Free Terrain Tiles Used Up. New Terrain will be Flat. \n";
        public const string UI_NO_TERRAIN_BUILD = UI_NO_TERRAIN_ + "Enter Mapbox token in Options Tab.";
        public const string UI_NO_TERRAIN_OPTS = UI_NO_TERRAIN_ + "Enter Mapbox token above.";

        public const string USER_AGENT = "User-Agent for Download";
        public const string TAXIS_BUSES = "Taxis & Buses";
        public const string SAMPLE_SOURCE_CODE = "Sample Source Code";

        public const string SIM_SPEED = "Simulation Speed";
        public const string TRAFFIC_VAR = "Traffic Volume";
        public const string RUNNING = "Running";
        public const string ON = "Available";
        public const string OFF = "Not Available";

        public const string CREATE_MULTIPLE_MESHES = "Create Multiple Meshes";

        public const string CREATE_MULTIPLE_MESHES_TT =
            "This option creates a separate game object and mesh for each lane, junction, building, etc. " +
            "This use more resources, but if you save the model as a prefab, this makes it easier to edit " +
            "that prefab. For example, you may want to delete some buildings and keep others.";

        
        public const string DIVISION_ABUNDANCE = "Car,Coach,Truck %";

        public const string DIVISION_ABUNDANCE_TT =
            "Set the abundance values of each class of vehicles.\n" +
            "3 or 4 comma-separated values are expected.\n" +
            "60,20,20 spawns 60% cars, 20% coaches, 20% trucks.\n" +
            "80,20,0,0 spawns 80% dynamic-route cars and 20% fixed-route cars.";

        
        public const string MAPBOX_TERRAIN = "Mapbox Terrain";
        public const string MAPBOX_TERRAIN_TT = "Download Digital Elevation (Terrain) Tiles from Mapbox " +
                                                "and then shape the resulting terrain to fit maximum road gradients";
        
        
        public const string FREE_TILES = "Demo Terrain Tiles";
        public const string FREE_TILES_TT = 
            "Number of free terrain tiles remaining before registration with Mapbox is required";
        
        public const string MAPBOX_DEMO_DONE_TT = 
            "No free tiles remain: register with mapbox.com and copy your token above to download terrain tiles";

        public const string MAPBOX_KEY = "Mapbox Token";

        public const string MAPBOX_KEY_REQUIRED = "[Token Required]";
        
        public const string MAPBOX_KEY_TT =
            "Paste your map box token here, to download terrain tiles. " +
            "Get your own token (for free) by registering on mapbox.com";

        public const string AERIAL_IMAGES = "Mapbox Aerial Images";

        public const string AERIAL_IMAGES_TT =
            "The terrain object can be texture-mapped with aerial images. " +
            "Switch off/on and select resolution by zoom level.\n\n" +
            "Zoom 18, 19 also possible (Pro) - see source code.";
        public const string AERIAL_NO_TOKEN_TT = SU.MapboxSignup;
            

        public static readonly string[] AERIAL_OPTIONS = new string[] { 
            "Off", 
            "Zoom 13 Lo-Res", 
            "Zoom 14 ",
            "Zoom 15 (Pro)",
            "Zoom 16 (Pro)",
            "Zoom 17 (Pro) Hi-Res",
            
            // "Zoom 18 (Pro)",   
            // "Zoom 19 (Pro)",
            
            // Un-comment Zoom 18 and 19 if you want even higher resolution.
            // Each level increase requires four times the number of tiles,
            // so Zoom 19 requires 4096 times as many tiles as Zoom 13
            //
            // Be aware of your free allowance on Mapbox and the $ rates above that
            //
            // Cached tiles are stored in %userprofile%\AppData\LocalLow\VRoad\Data\aero
           
        };
    
        public const string BUILD_REBUILD_OPTS = "Build / Rebuild Options";
        public const string ACTIVATE_BUILD_SCENE = " (BuildMap Scene not Active)";
        public const string STOP_BUILD_SCENE = " (Stop Scene to Change)";
        
        public const string PLAY_SCENE = "▷  Play Scene '%s' %s";
        public const string OPEN_SCENE_TO_ACTIVATE = "Open Scene '%s' to Activate";
        public const string OPEN_SCENE = "↪ Open Scene '%s'";
        public const string CORRECT_SCENE = "Correct Scene is Open";
        public const string SCENE_DIRTY_WARNING = "Unsaved changes in active scene";
        public const string SCENE_NOT_CHANGED = "Scene not changed to %s - "+SCENE_DIRTY_WARNING;

        public const string OPEN_SCENE_ON_TAB_CHANGE = "Auto-Open Scene for Tab";
        public const string OPEN_SCENE_ON_TAB_CHANGE_TT =
            "Automatically close the current scene and open the scene required for the selected tab";

        public const string OPTIONS_ON_UBUILDMAP = " [ More build options in Inspector for UBuildMap ]";
        
        public const string BUILDINGS = "Buildings";
        public const string BUILDINGS_TT = "Buildings will be generated, and their outline points adjusted if required," +
                                           "so that in most cases, a building does not overlap any roads.";

        public const string WALKWAYS = "Walkways";
        public const string WALKWAYS_TT = "Walkways and pedestrian road crossings will be generated. " +
                                          "If there are no walkways, there will be no pedestrians, " +
                                          "buses, bus bays, bus routes, taxis or taxi bays.";
        
        public const string PEDS = "Pedestrians";
        public const string PEDS_TT = "Zones and other connections required for pedestrians will be generated. " +
                                      "If this is not enabled, as a consequence there will be " +
                                      "no buses, bus bays, bus routes, taxis or taxi bays.";

        public const string MSG_FOUND_PREV_AERIAL_ZOOM = "Found cached images - setting aerial image zoom level to %d";

        public const string RESET = "Reset UBuildMap and UMapMesh to defaults";
        public const string RESET_TT = "Reset all parameters and flags to initial default values.\n" +
                                       "This does not set the materials";
        
        // The constants in this class could be converted into an enum and a text file, e.g.
        // enum EditorBabylKey { WINDOW_TITLE, ... }   and text file line: WINDOW_TITLE = "Virtual Road"
        //
        // then use Babyl.translate(EditorBabylKey.WINDOW_TITLE)  instead of WINDOW_TITLE
        //
        // Keys need to be unique in all tex files, there is no 'namespace' equivalent
    }

    public static class EDSF // Editor string constants, NO translation
    {
        public const string SCENE_PATH_REL = "Scenes/";
        public const string SCENE_PATH_REL_PRO = "ProExtras/Scenes/";
        public const string SCENE_BUILD = "BuildMap";
        public const string SCENE_TRAFFIC = "RunTraffic";
        public const string SCENE_SUFFIX = ".unity";
        public const string SUFFIX_OSM = "json";
        public const string SUFFIX_VROAD = "vroad";
        public const string STYLE_TEXTFIELD = "TextField";
        
        public const string REF_BUILDMAP = "UBuildMap ";
        public const string REF_RUNTRAFFIC = "URunTraffic ";
        public const string REF_MAPMESH = "UaMapMesh ";
        public const string REF_APPSTATE = "UaAppStateHandler ";
        public const string REF_EXIT = "UExitHandler ";
        public const string REF_MOUSE = "UaMouse ";
        public const string REF_CAM = "UaCamControllerMain ";
        
        public const string PREFS_BROWSER_LAT = "BrowserLat";
        public const string PREFS_BROWSER_LNG = "BrowserLng";
        public const string PREFS_AUTO_OPEN_SCENE = "AutoOpenScene";
    }
    #endregion
   
    /// <summary> The main Global Roads &amp; Traffic Editor Window.
    /// This is an Editor window only and does not get shipped with a deployed application
    /// </summary>
    public class VRoadWindow : VRoadEditorWindow
    {
        [MenuItem(EDSC.MENU_TITLE, priority = 1)]
        static void Init() // To call this after script edit, see forceInitOnScriptReload below 
        {
            VRoadWindow window = HasOpenInstances<VRoadEditorWindow>()?
                GetWindow<VRoadWindow>(EDSC.WINDOW_TITLE, true, GetWindow<VRoadEditorWindow>().GetType()):
                GetWindow<VRoadWindow>(EDSC.WINDOW_TITLE);
           
            KEnv.Awake();
            
            CheckPipeline();
            
            window.SetupReferencesInEditMode();
            window.ClearBuildParameters();
            window.ClearRunTraffic();
            InitUA();
            window.Show();

            MeshTools.VRoadRoot(); // Check VRoad package location relative to Assets

            InitScenes();
            
            // Debug.Log(KEnv.GetArch());
        }

        protected static void InitScenes()
        {
            EditorSceneManager.activeSceneChangedInEditMode += OnSceneChanged;
            SceneManager.activeSceneChanged += OnSceneChanged;

            int sc = SceneManager.loadedSceneCount;
            if (sc > 0) currentScene = EditorSceneManager.GetSceneAt(0).name;
        
            InitUA();
        }

        // Set this to force re-init after editing any script in IDE. By default, this is false, because
        // when editing some other script, (not VRoadWindow), we don't really want to force a call to KEnv.Awake() etc 
        private static bool forceInitOnScriptReload = false; 

        [UnityEditor.Callbacks.DidReloadScripts]
        private static void OnScriptsReloaded()
        {
            if (forceInitOnScriptReload) Init();
            else InitScenes();
        }
 
        
        private static void CheckPipeline()
        {
            var pipeline = UnityEngine.Rendering.GraphicsSettings.currentRenderPipeline;
            
            if (pipeline == null || pipeline.ToString().Contains("HighDef"))
            {
                try
                {
                    int projectPathHash = Application.dataPath.GetHashCode();
                    string hexHash = $"{projectPathHash:X}";
                    string U3PCC_FIX1 = hexHash +"-VRoadUnity3PCCFixedManifest";
                    string U3PCC_FIX2 = hexHash +"-VRoadUnity3PCCFixedShaders";
                        
                    if (!EditorPrefs.GetBool(U3PCC_FIX1))
                    {
                        //The Unity "Starter Assets Third Person Character Controller" wrongly adds a reference to the
                        // universal render pipeline if you are using the built-in pipeline. Remove that here.
                        //
                        // This bug was logged with Unity in December 2022     
                        string manifest = Application.dataPath + "/../Packages/manifest.json";
                        string[] lines = File.ReadAllLines(manifest);
                        int found = -1;

                        for (int li = 0; li < lines.Length; li++)
                        {
                            if (lines[li].Contains("unity.render-pipelines.universal"))
                            {
                                found = li;
                                break;
                            }
                        }
                        if (found > 0)
                        {
                            lines[found] = "";
                            File.WriteAllLines(manifest, lines);
                        }

                        EditorPrefs.SetBool(U3PCC_FIX1, true);
                    }

                    if (!EditorPrefs.GetBool(U3PCC_FIX2))
                    {
                        // The Unity "Starter Assets Third Person Character Controller" wrongly sets the materials
                        // for the armature to URP materials when using the built-in pipeline. Change those here.
                        //
                        // This bug was logged with Unity in December 2022
                        UaBotHandler[] bha = Resources.FindObjectsOfTypeAll<UaBotHandler>();
                        if (bha.Length == 1 && bha[0].prefabPeds.Length > 0)
                        {
                            SkinnedMeshRenderer smr = bha[0].prefabPeds[0]
                                .GetComponentInChildren<SkinnedMeshRenderer>();
                            Material[] sma = smr.sharedMaterials;
                            Shader std = Shader.Find("Standard");
                            if (std != null)
                                foreach (Material m in sma) { m.shader = std; }

                            EditorPrefs.SetBool(U3PCC_FIX2, true);
                        }
                    }
                }
                catch (Exception) { }

            }
        }

        private const bool CAN_REBUILD = true;

        private const int ITAB_BUILD = 0;
        private const int ITAB_REBUILD = CAN_REBUILD? 1: -1;
        private const int ITAB_TRAFFIC = CAN_REBUILD? 2: 1;
        private const int ITAB_OPTIONS = CAN_REBUILD? 3: 2;
        private const int ITAB_VARIANT = CAN_REBUILD? 4: 3;
            
        private static readonly string[] tabs4 = { EDSC.TAB_BUILD, EDSC.TAB_TRAFFIC, EDSC.TAB_OPTIONS, SC.N,  };
        private static readonly string[] tabs5 = { EDSC.TAB_BUILD, EDSC.TAB_REBUILD, EDSC.TAB_TRAFFIC, EDSC.TAB_OPTIONS, SC.N, };
        private static readonly string[] tabs = CAN_REBUILD ? tabs5 : tabs4;

        private static readonly string[] actions4 = { EDSC.ACTION_BUILD, EDSC.ACTION_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] actions5 = { EDSC.ACTION_BUILD, EDSC.ACTION_REBUILD, EDSC.ACTION_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] actions = CAN_REBUILD ? actions5 : actions4;

        private static readonly string[] tooltips4 = { EDSC.TOOLTIP_BUILD, EDSC.TOOLTIP_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] tooltips5 = { EDSC.TOOLTIP_BUILD, EDSC.TOOLTIP_REBUILD, EDSC.TOOLTIP_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] tooltips = CAN_REBUILD ? tooltips5 : tooltips4;

        private static readonly string[] hints4 = { EDSC.HINT_BUILD, EDSC.HINT_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] hints5 = { EDSC.HINT_BUILD, EDSC.HINT_REBUILD, EDSC.HINT_TRAFFIC,SC.N,SC.N,SC.N, };
        private static readonly string[] hints = CAN_REBUILD ? hints5 : hints4;

        private static readonly string[] speedDisplay = {">>", "x4", "x2", "x1",};
        private static readonly int[] xrtValues =       { 10,    4,    2,    1,};
        private static readonly int[] tspsValues =      {  5,    5,   10,   20,};

        public static string mruFileRoot;
        
        private static bool openSceneOnTabChange;
        private static bool optionsChanged;
        private static bool initGUI;
        private static string clipboardCache = SC.N;
        private static string savedFiles;

       
        private IBoundsBox boundsBoxFromBrowser;
        private UBuildMap buildMap;
        private URunTraffic runTraffic;
        private UMapMeshExample mapMesh;
        private UPlaySimExample playSim;
        private App app;
        
        private bool isPlaying;
        private int traffic;
        private int tspsi = 1;
       
        private string mapLatLongStr;
        private string mapCentreLatLong;
        private string mapSizeEM;
        private string mapSizeNM;
        private string mapAreaHa;
        
        private bool pollClipboard;
        private bool validVRoadFileSelected;
        private bool validOSMFileSelected;
        private bool createMultipleMeshes;
        private bool mapboxTerrain = true;
        private bool savedPrefab;
        private int activeTab;
        private int playTab = -1;
        private string osmFilePath;
        private string osmFileName;
        private string vroadFilePath;
        private string vroadFileName;
        private string mapBoxKey;
        private string mapURL;
        private int aerialMapSelection = 3;
        
        private bool checkSwitchScene;
        private bool playActionEnabled;
       
        private static void InitUA()
        {
            InitUser();
            savedFiles = null;
            clipboardCache = SC.N;
            initGUI = true;

            openSceneOnTabChange = PlayerPrefs.GetInt(EDSF.PREFS_AUTO_OPEN_SCENE) > 0;
        }

        private static void InitUser()
        {
            VRoad.InitUser(CloudProjectSettings.userName);
        }
        void SetupReferencesInEditMode()
        {
            missingReferences = SC.N;

            if (activeTab == ITAB_TRAFFIC)
            {
                URunTraffic[] runTraffics = Resources.FindObjectsOfTypeAll<URunTraffic>();
                if (runTraffics.Length == 1) runTraffic = runTraffics[0];
                else missingReferences += EDSF.REF_RUNTRAFFIC;
            }
            else
            {
                UBuildMap[] buildMaps = Resources.FindObjectsOfTypeAll<UBuildMap>();
                if (buildMaps.Length == 1) { buildMap = buildMaps[0]; }
                else missingReferences += EDSF.REF_BUILDMAP;
            }
          

            UMapMeshExample[] mapMeshes = Resources.FindObjectsOfTypeAll<UMapMeshExample>();
            if (mapMeshes.Length == 1) { mapMesh = mapMeshes[0]; }
            else missingReferences += EDSF.REF_MAPMESH;

            UaStateHandler[] stateHandlers = Resources.FindObjectsOfTypeAll<UaStateHandler>();
            if (stateHandlers.Length != 1) missingReferences += EDSF.REF_APPSTATE;

            UExitHandler[] exitHandlers = Resources.FindObjectsOfTypeAll<UExitHandler>();
            if (exitHandlers.Length != 1) missingReferences += EDSF.REF_EXIT;

            UaMouse[] mouseHandlers = Resources.FindObjectsOfTypeAll<UaMouse>();
            if (mouseHandlers.Length != 1) missingReferences += EDSF.REF_MOUSE;

            UaCamControllerMain[] camControllers = Resources.FindObjectsOfTypeAll<UaCamControllerMain>();
            if (camControllers.Length != 1) missingReferences += EDSF.REF_CAM;

          
            UPlaySimExample[] playSims = Resources.FindObjectsOfTypeAll<UPlaySimExample>();
            if (playSims.Length == 1) playSim = playSims[0];
        }

        void SetupReferencesInPlayMode()
        {
            missingReferences = SC.N;

            if (activeTab == ITAB_TRAFFIC)
            {
                buildMap = null;
                runTraffic = URunTraffic.MostRecentInstance;
                if (runTraffic == null) missingReferences += EDSF.REF_RUNTRAFFIC;
            }
            else
            {
                runTraffic = null;
                buildMap = UBuildMap.MostRecentInstance;
                if (buildMap == null) missingReferences += EDSF.REF_BUILDMAP;
            }
           
            mapMesh = UMapMeshExample.MostRecentInstance;
            if (mapMesh == null) missingReferences += EDSF.REF_MAPMESH;
            else
            {
                mapMesh.CreateMultipleMeshes = this.createMultipleMeshes;
            }

            if (UaStateHandler.MostRecentInstance == null) missingReferences += EDSF.REF_APPSTATE;
            if (UaMouse.MostRecentInstance == null) missingReferences += EDSF.REF_MOUSE;
            if (UaCamControllerMain.MostRecentInstance == null) missingReferences += EDSF.REF_CAM;

            playSim = UPlaySimExample.MostRecentInstance;
            traffic = 0;
            tspsi = 1;
        }

        void ClearRunTraffic()
        {
            if (runTraffic != null) runTraffic.SetupTraffic(null);
        }
        bool AllReferencesFound() { return missingReferences.Length == 0; }

        private string SceneForActiveTab()
        {
            return activeTab == ITAB_BUILD || activeTab == ITAB_REBUILD? EDSF.SCENE_BUILD :
                activeTab == ITAB_TRAFFIC ? EDSF.SCENE_TRAFFIC :  null;
        }

        
        void OnGUI()
        {
            bool isPro = VRoad.GotPro(); // Cannot call this in static / constructor code above

            string tabVariant = isPro ? EDSC.TAB_PRO : EDSC.TAB_LITE;
            tabs[ITAB_VARIANT] = tabVariant;

            int prevTab = activeTab; // GUI.changed returns true when you click on the SAME tab again
            activeTab = GUILayout.Toolbar(activeTab, tabs);
            bool activeTabChanged = activeTab != prevTab; // not the same as GUI.changed
            bool nowPlaying = EditorApplication.isPlaying;
            string expected = SceneForActiveTab();
            
            if (trySwitchScene)
            {
                SwitchSceneTo(expected, EDSF.SCENE_PATH_REL);
                CheckPipeline();
            }
            else if (openSceneOnTabChange)
            {
                if (checkSwitchScene && !nowPlaying)
                {
                    checkSwitchScene = false;

                    if (currentScene != null && expected != null && !currentScene.Equals(expected))
                    {
                        SwitchSceneTo(expected, EDSF.SCENE_PATH_REL);
                    }
                }

                if (activeTabChanged)
                {
                    if (nowPlaying)
                    {
                        bool willChange = currentScene != null && expected != null && !currentScene.Equals(expected);

                        if (willChange) // Stop playing on change of tab, if scene will change
                        {
                            EditorApplication.isPlaying = false;
                            nowPlaying = false;
                        }
                    }

                    checkSwitchScene = true; // next time round
                }
            }

            if (IsWindowActiveInCurrentScene())
            {
                if (activeTabChanged) savedFiles = null;

                // When Editor starts to Play, references are lost
                bool playStateChanged = false;
                if (nowPlaying != isPlaying)
                {
                    isPlaying = nowPlaying;
                    playStateChanged = true;

                    // if (!isPlaying) VRoad.FreeTilesClearCache();
                }

                if (playStateChanged || hasSceneChanged || activeTabChanged || optionsChanged)
                {
                    if (isPlaying) SetupReferencesInPlayMode();

                    else  SetupReferencesInEditMode();
                }
            }

            float line = 2f;
            float nl = 6f;
            float columnWidth = Math.Min(300, position.width - (2 * marginX));
            double maxArea = VRoad.MapMaxArea();
            bool isActive = IsWindowActiveInCurrentScene(); 
            
            playActionEnabled = false;

            switch (activeTab)
            {
                case ITAB_BUILD:
                {
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), EditorStyles.helpBox);
                    {
                        GUI.enabled = isActive; // 20221027
                        
                        GUILayout.BeginHorizontal();
                        pollClipboard = EditorGUILayout.Toggle(new GUIContent(EDSC.UI_POLL, EDSC.UI_POLL_TT), 
                            pollClipboard, GUILayout.MaxWidth(columnWidth - 120));
                        
                        var contentLaunch = new GUIContent(EDSC.UI_LAUNCH, mapURL);
                        if (GUILayout.Button(contentLaunch)) OpenSlippyMapInBrowser();
                        GUILayout.EndHorizontal();

                        EditorGUILayout.Space(lineY);

                        GUI.enabled = isActive; // 20221027
                        bool applyChange = hasSceneChanged || initGUI;

                        if (pollClipboard) //when polling clipboard, text fields can not be edited
                        {
                            NoEditTextField(EDSC.MAP_CENTRE, mapCentreLatLong, columnWidth);
                            NoEditTextField(EDSC.MAP_AREA, mapAreaHa, columnWidth);
                            NoEditTextField(EDSC.MAP_SIZE_E, mapSizeEM, columnWidth);
                        }
                        else
                        {
                            GUI.changed = false;
                            mapCentreLatLong = EditorGUILayout.DelayedTextField(EDSC.MAP_CENTRE, mapCentreLatLong);
                            bool centreChanged = GUI.changed;
                            if (isPro)
                            {
                                GUI.changed = false;
                                mapAreaHa = EditorGUILayout.DelayedTextField(EDSC.MAP_AREA, mapAreaHa);
                                bool areaChanged = GUI.changed;
                                GUI.changed = false;
                                mapSizeEM = EditorGUILayout.DelayedTextField(EDSC.MAP_SIZE_E, mapSizeEM);
                                bool widthChanged = GUI.changed;
                                GUI.changed = false;

                                if (areaChanged)
                                {
                                    double minSide = MapConstants.BBOX_MIN_SIDE;
                                    double ha_m2 = MapConstants.BBOX_HA_M2;
                                    double minArea = minSide * minSide / ha_m2;
                                    double area = Math.Max(minArea, Math.Min(KTools.ParseDouble(mapAreaHa), maxArea));
                                    double sizeWE = Math.Sqrt((area * ha_m2) * MapConstants.BBOX_ASPECT_STD);
                                    mapAreaHa = KFormat.Sprintf(SC.SF0F, area); // might have been clamped
                                    mapSizeEM = KFormat.Sprintf(SC.SF0F, sizeWE);
                                }

                                applyChange |= centreChanged || areaChanged || widthChanged;
                            }
                            else
                            {
                                // Lite: area fixed to 100 Ha (including 100m border)
                                // Lite: Aspect ratio fixed to 16:9 (1333 x 750)
                                // No matter what edits are made in this script, those are the values used by the server
                                NoEditTextField(EDSC.MAP_AREA, mapAreaHa, columnWidth);
                                NoEditTextField(EDSC.MAP_SIZE_E, mapSizeEM, columnWidth);
                                applyChange |= centreChanged;
                            }
                        }

                        if (applyChange)
                        {
                            mapLatLongStr = mapCentreLatLong + CC.COMMA + mapAreaHa + CC.COMMA + mapSizeEM;
                            ApplyValidBoundsBox(mapLatLongStr);
                        }

                        // When not using the browser, you can edit the area or the E size, but not the N size
                        // Editing the area changes E and N sizes
                        // Editing the E size changes the N size
                        NoEditTextField(EDSC.MAP_SIZE_N, mapSizeNM, columnWidth);
                    }
                    GUILayout.EndArea();

                    playActionEnabled = BoundsBoxIsValid();

                    line += nl + 2.5f; nl = 5f;
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), GUIStyle.none);
                    {
                        if (ActionButtonOrReferenceWarning())
                        {
                            InitUser();
                            SetupBuildMap(SC.N, mapLatLongStr);
                        }
                    }
                    GUILayout.EndArea();
                    
                    /*
                    if (mapboxTerrain && freeTilesUsedUp)
                    {
                        GUI.enabled = true;
                        
                        line += nl + 3;
                        nl = 3f;
                        GUILayout.BeginArea(AreaRect(line, nl, columnWidth), GUIStyle.none);
                        {
                            EditorGUILayout.HelpBox(EDSC.UI_NO_TERRAIN_BUILD, MessageType.Warning);
                        }
                        GUILayout.EndArea();
                    }
                    //*/
                    
                    break;
                }

                case ITAB_REBUILD:
                {
                    if (hasSceneChanged) ValidateOsmFile(osmFilePath);
                    if (!isPlaying) savedPrefab = false;
                    
                    GUI.enabled = isActive; // 20221027
                    
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), EditorStyles.helpBox);
                    {
                        GUILayout.BeginHorizontal();
                        bool validFileOSM = string.IsNullOrWhiteSpace(osmFileName);
                        string displayedLabelOSM = validFileOSM ? EDSC.HINT_OSM : osmFileName;
                        NoEditTextField(displayedLabelOSM, columnWidth-60);
                        GUI.enabled = isActive && !isPlaying;
                        if (GUILayout.Button(SC.ELLIPSIS, GUILayout.MinHeight(16))) SelectCachedOSMFile();
                        GUI.enabled = isActive;
                        GUILayout.EndHorizontal();
                        EditorGUILayout.Space(lineY);

                        string[] ccsa = osmFileName == null ? null : 
                            FilenameWrapper.OSMJ.CountryCitySuburb(osmFileName);
                        DisplayFileParts(ccsa, columnWidth);
                    }
                    GUILayout.EndArea();
                    playActionEnabled = validOSMFileSelected;

                    line += nl + 2.5f; nl = 5f;
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), GUIStyle.none);
                    {
                        if (ActionButtonOrReferenceWarning())
                        {
                            SetupBuildMap(osmFileName, SC.N);
                        }

                        SaveAsPrefab(nowPlaying);
                    }
                    GUILayout.EndArea();
                    
                    break;
                }

                case ITAB_TRAFFIC:
                {
                    if (hasSceneChanged) ValidateVRoadFile(vroadFilePath);

                    GUI.enabled = isActive; // 20221027
                    
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), EditorStyles.helpBox);
                    {
                        playActionEnabled = validVRoadFileSelected;

                        GUILayout.BeginHorizontal();
                        bool validFile = string.IsNullOrWhiteSpace(vroadFileName);
                        string displayedLabel = validFile ? EDSC.HINT_VROAD : vroadFileName;
                        NoEditTextField(displayedLabel, columnWidth-60);
                        GUI.enabled = isActive && !isPlaying;
                        if (GUILayout.Button(SC.ELLIPSIS, GUILayout.MinHeight(16))) SelectVRoadFile();
                        GUI.enabled = isActive;
                        GUILayout.EndHorizontal();

                        EditorGUILayout.Space(lineY);

                        string[] ccsa = vroadFileName == null ? null : 
                            FilenameWrapper.VROAD.CountryCitySuburb(vroadFileName);
                        DisplayFileParts(ccsa, columnWidth);
                    }
                    GUILayout.EndArea();

                    line += nl + 2.5f;
                    nl = 7f;
                    GUILayout.BeginArea(AreaRect(line, nl, columnWidth), GUIStyle.none);
                    {
                        if (ActionButtonOrReferenceWarning())
                        {
                            SetupRunTraffic(vroadFilePath);
                        }

                        if (isPlaying && app != null)
                        {
                            EditorGUILayout.Space(0.3f*lineY);

                            GUI.enabled = true;
                            GUILayout.BeginHorizontal();
                            {
                                GUILayoutOption optBW = GUILayout.MaxWidth(24); // columnWidth / 4);
                                GUILayoutOption optH = GUILayout.Height(20);

                                int ntv = tspsValues.Length;
                                bool change = false;
                                
                                GUILayout.Label(EDSC.SIM_SPEED, optH);
                                GUI.enabled = tspsi < ntv - 1;
                                if (GUILayout.Button(SC.MI, optBW, optH))
                                {
                                    tspsi = Math.Min(tspsi+1, ntv-1); 
                                    change = true;
                                }
                                GUI.enabled = true;
                                GUILayout.Label(speedDisplay[tspsi], EDSF.STYLE_TEXTFIELD, optBW, optH);
                                GUI.enabled = tspsi > 0;
                                if (GUILayout.Button(SC.PL, optBW, optH))
                                {
                                    tspsi = Math.Max(0, tspsi - 1);
                                    change = true;
                                }

                                if (change)
                                {
                                    int tsps = tspsValues[tspsi];
                                    app.Sim().SetTimeStepsPerSecond(tsps);
                                    playSim.SetFfwd(tspsi == 0);
                                    playSim.SetTargetRealTimeMultiplier(xrtValues[tspsi]);
                                }
                            }
                            GUILayout.EndHorizontal();
                            
                            
                            EditorGUILayout.Space(0.3f*lineY);

                            GUI.enabled = true;
                            GUILayout.BeginHorizontal();
                            {
                                GUILayoutOption optBW = GUILayout.MaxWidth(24); // columnWidth / 4);
                                GUILayoutOption optH = GUILayout.Height(20); 

                                GUILayout.Label(EDSC.TRAFFIC_VAR, optH);
                                if (GUILayout.Button(SC.MI, optBW, optH)){ traffic--; VRoad.AdvanceReleaseTime(-60); }
                                GUILayout.Label(SC.N+traffic, EDSF.STYLE_TEXTFIELD, optBW, optH);
                                if (GUILayout.Button(SC.PL, optBW, optH)){ traffic++; VRoad.AdvanceReleaseTime(+60); }
                            }
                            GUILayout.EndHorizontal();

                        }
                    }
                    GUILayout.EndArea();

                   
                    break;
                }

                case ITAB_OPTIONS:
                {
                    LayoutOptions(columnWidth, EDSF.SCENE_BUILD.Equals(currentScene), isPro);
                   
                    break;
                }
                case ITAB_VARIANT:
                {
                    GUILayout.BeginArea(AreaRect(line, nl+3, columnWidth), EditorStyles.helpBox);

                    GUI.enabled = true;
                    NoEditTextField(EDSC.MAX_AREA, KFormat.Sprintf(SC.SF0F, maxArea), columnWidth);
                    NoEditTextField(EDSC.TAXIS_BUSES, isPro ? EDSC.ON : EDSC.OFF, columnWidth);
                    NoEditTextField(EDSC.SAMPLE_SOURCE_CODE, isPro ? EDSC.ON : EDSC.OFF, columnWidth);

                    EditorGUILayout.Space(lineY);
                    NoEditTextField(EDSC.USER_AGENT, VRoad.UserAgentQuery(), columnWidth);

                    EditorGUILayout.Space(lineY);
                    GUI.changed = false;
                    var contentOSTC = new GUIContent(EDSC.OPEN_SCENE_ON_TAB_CHANGE, EDSC.OPEN_SCENE_ON_TAB_CHANGE_TT);
                    openSceneOnTabChange = EditorGUILayout.Toggle(contentOSTC, openSceneOnTabChange);
                    if (GUI.changed)
                    {
                        PlayerPrefs.SetInt(EDSF.PREFS_AUTO_OPEN_SCENE, openSceneOnTabChange ? 1 : 0);
                        PlayerPrefs.Save();
                    }

                    
                    EditorGUILayout.Space(lineY);
                    GUILayout.EndArea();

                    break;
                }
            }

            Footer(EDSC.WINDOW_TITLE, EDSC.URL_LABEL, EDSC.URL_PAGE);            

            initGUI = false;
            hasSceneChanged = false;
        }

        private void SaveAsPrefab(bool nowPlaying)
        {
            if (missingReferences.Length == 0 && mapMesh != null)
            {
                EditorGUILayout.Space(lineY);

                bool canSave = nowPlaying && playTab == ITAB_REBUILD && !savedPrefab && 
                               AllReferencesFound() && mapMesh.MeshesReady();
                string saveMsg = canSave ? EDSC.ACTION_PREFAB : 
                    HintFormat(savedPrefab? EDSC.ALREADY_PREFAB: EDSC.HINT_PREFAB);
                
                GUI.enabled = canSave;
                if (GUILayout.Button(saveMsg, GUILayout.Height(helpBoxHeight)))
                {
                    try
                    {
                        string meshPath = mapMesh.SaveMapMesh();
                        HighlightFileOrDir(meshPath);

                        string saveMeshMsg = EDSC.UI_SAVE_MESHES;
                        if (mapMesh.HasLayeredTerrain())
                        {
                            Terrain terrain = mapMesh.GetTerrain();
                            string terrainFileName = meshPath + SA.TERRAIN_LAYERED + SA.SUFFIX_ASSET;
                            AssetDatabase.CreateAsset(terrain.terrainData, terrainFileName);
                            
                            saveMeshMsg = EDSC.UI_SAVE_MESHES_TERRAIN;
                        }
                        savedFiles = KFormat.Sprintf(saveMeshMsg, meshPath);
                        
                        string prefabPath = mapMesh.SaveMapAsPrefab();
                        savedFiles += SC.NL + KFormat.Sprintf(EDSC.UI_SAVE_PREFAB, prefabPath);
                        HighlightFileOrDir(prefabPath);

                        EditorGUILayout.HelpBox(savedFiles, MessageType.Info);

                        savedPrefab = true;
                    }
                    catch (Exception e)
                    {
                        EditorGUILayout.HelpBox(EDSC.UI_SAVE_PREFAB_FAIL + e.Message, MessageType.Warning);
                    }
                }
            }
        }
        private bool ActionButtonOrReferenceWarning()
        {
            bool calledAction = false;
            GUI.enabled = true;

            string expectedScene = SceneForActiveTab();
            bool correctScene = currentScene.Equals(expectedScene);
            GUILayoutOption optHeight = GUILayout.Height(helpBoxHeight);
            
            if (!correctScene)
            {
                EditorGUILayout.HelpBox(KFormat.Sprintf(EDSC.OPEN_SCENE_TO_ACTIVATE, expectedScene), MessageType.Info);

                if (!EditorApplication.isPlaying)
                {
                    Scene activeScene = EditorSceneManager.GetActiveScene();
                    if (activeScene.isDirty)
                    {
                        EditorGUILayout.HelpBox(EDSC.SCENE_DIRTY_WARNING, MessageType.Warning);
                    }
                    else if (GUILayout.Button(KFormat.Sprintf(EDSC.OPEN_SCENE, expectedScene), optHeight))
                    {
                        trySwitchScene = true;
                    }
                }
            }
            else if (missingReferences.Length > 0)
            {
                EditorGUILayout.HelpBox(KFormat.Sprintf(EDSC.UI_MISSING, missingReferences), MessageType.Warning);
            }
            else if (EditorApplication.isPlaying)
            {
                if (app == null)
                {
                    string msg = activeTab == ITAB_TRAFFIC? runTraffic.ProgressActivity() : buildMap.ProgressActivity();
                    EditorGUILayout.HelpBox(msg, MessageType.Info);
                }
                else
                {
                    GUI.enabled = false;
                    GUILayout.Button(HintFormat(EDSC.RUNNING), optHeight);
                }
            }
            else
            {
                GUI.enabled = playActionEnabled;

                string hint = hints[activeTab];

                string buttonAction = KFormat.Sprintf(EDSC.PLAY_SCENE, expectedScene, actions[activeTab]);
                
                string buttonTooltip = tooltips[activeTab];
                GUIContent buttonContent = playActionEnabled ? new GUIContent(buttonAction, buttonTooltip)
                        : new GUIContent(HintFormat(hint));

                if (GUILayout.Button(buttonContent, optHeight))
                {
                    playTab = activeTab;
                    PlayerPrefs.Save(); // Saved in the editor node in the registry
                    EditorApplication.isPlaying = true;
                    calledAction = true;
                }
            }

            GUI.enabled = true;

            return calledAction;
        }

        private void LayoutOptions(float cw, bool isBuildScene, bool isPro)
        {
            optionsChanged = false;
            
            float hcw = 0.5f * cw;

            bool isEditorPlaying = EditorApplication.isPlaying;
            GUI.enabled = !isEditorPlaying;

            GUILayout.BeginArea(AreaRect(2, 2, cw), GUIStyle.none);
            
            var contentMM = new GUIContent(EDSC.CREATE_MULTIPLE_MESHES, EDSC.CREATE_MULTIPLE_MESHES_TT);
            createMultipleMeshes = EditorGUILayout.Toggle(contentMM, createMultipleMeshes);

            GUILayout.EndArea();
            
            bool optionsEnabled = !isEditorPlaying && isBuildScene;
            GUI.enabled = optionsEnabled;
            
            GUILayout.BeginArea(AreaRect(4, 6, cw), EditorStyles.helpBox);
            {
                string postFix = isEditorPlaying ? EDSC.STOP_BUILD_SCENE : isBuildScene? SC.N: EDSC.ACTIVATE_BUILD_SCENE;
                EditorGUILayout.LabelField(new GUIContent(EDSC.BUILD_REBUILD_OPTS + postFix), GUILayout.MaxWidth(cw));
                EditorGUILayout.Space(0.5f*lineY);
            
                GUI.changed = false;
                var contentMB = new GUIContent(EDSC.MAPBOX_KEY, EDSC.MAPBOX_KEY_TT);
                mapBoxKey = EditorGUILayout.DelayedTextField(contentMB, mapBoxKey);
                if (GUI.changed) VRoad.MapBoxKeyStore(mapBoxKey);
                if (GUI.changed) optionsChanged = true;
                
                bool noMapBoxKey = string.IsNullOrWhiteSpace(mapBoxKey) || SF.CFGVAL_TERRAIN_TOKEN_PROMPT.Equals(mapBoxKey);

                if (noMapBoxKey) SU.SignUpToMapBox();
                
                GUI.changed = false;

                if (noMapBoxKey) NoEditTextField(EDSC.AERIAL_IMAGES, EDSC.AERIAL_NO_TOKEN_TT, EDSC.MAPBOX_KEY_REQUIRED, hcw, cw);
                else AerialMapSelection(EditorGUILayout.Popup(new GUIContent(EDSC.AERIAL_IMAGES, EDSC.AERIAL_IMAGES_TT),
                    aerialMapSelection, EDSC.AERIAL_OPTIONS));
                if (GUI.changed) optionsChanged = true;
                
                // This is a convenience check: removing this check will not download higher res-images in Lite variant
                if (!isPro && aerialMapSelection > GlobeMath.AERO_SEL_MAX_LITE) AerialMapSelection(GlobeMath.AERO_SEL_MAX_LITE);
              
                if (noMapBoxKey)
                {
                    NoEditTextField(EDSC.MAPBOX_TERRAIN, EDSC.MAPBOX_TERRAIN_TT, EDSC.MAPBOX_KEY_REQUIRED, hcw, cw);
                    /*
                    int freeTiles = 0; // VRoad.FreeTilesRemaining();

                    if (mapboxTerrain)
                    {
                        if (freeTiles <= 0) NoEditTextField(EDSC.MAPBOX_TERRAIN, EDSC.MAPBOX_DEMO_DONE_TT, EDSC.MAPBOX_KEY_REQUIRED, hcw, cw);
                        else NoEditTextField(EDSC.FREE_TILES, EDSC.FREE_TILES_TT, SC.N + freeTiles, hcw, cw);
                    }
                    //freeTilesUsedUp = (freeTiles == 0); //*/
                }
                else
                {
                    //freeTilesUsedUp = false;
                    
                    GUI.changed = false;
                    mapboxTerrain = EditorGUILayout.Toggle(new GUIContent(EDSC.MAPBOX_TERRAIN, EDSC.MAPBOX_TERRAIN_TT), mapboxTerrain);
                    if (GUI.changed) optionsChanged = true;
                }
                
                EditorGUILayout.Space(0.4f*lineY);
                EditorGUILayout.LabelField(new GUIContent(EDSC.OPTIONS_ON_UBUILDMAP), GUILayout.MaxWidth(cw));
                EditorGUILayout.Space(0.4f*lineY);
                
                string buttonAction = EDSC.RESET;
                string buttonTooltip = EDSC.RESET_TT;
                GUIContent buttonContent = new GUIContent(buttonAction, buttonTooltip);
                GUILayoutOption optHeight = GUILayout.Height(24);
                if (GUILayout.Button(buttonContent, optHeight))
                {
                    if (buildMap != null) buildMap.ResetToDefaults();
                    if (mapMesh != null) mapMesh.ResetToDefaults();
                }
            }

            GUILayout.EndArea();
            
            GUILayout.BeginArea(AreaRect(14, 2, cw), GUIStyle.none);

            /*
            string buttonAction = EDSC.RESET;
            string buttonTooltip = EDSC.RESET_TT;
            GUIContent buttonContent = new GUIContent(buttonAction, buttonTooltip);
            GUILayoutOption optHeight = GUILayout.Height(24);
            if (GUILayout.Button(buttonContent, optHeight))
            {
                if (buildMap != null) buildMap.ResetToDefaults();
                if (mapMesh != null) mapMesh.ResetToDefaults();
            }
            //*/
            
            GUILayout.EndArea();
        }

        private void AerialMapSelection(int x) { aerialMapSelection = x; }

        private void HighlightFileOrDir(string path)
        {
            if (path == null) return;
            int np = path.Length;
            while (np > 0 && path[np - 1] == CC.SLASH)
            {
                np--;
                path = path.Substring(0, np);
            }
            // Load object
            UnityEngine.Object obj = AssetDatabase.LoadAssetAtPath(path, typeof(UnityEngine.Object)); 
            // Select the object in the project folder
            //Selection.activeObject = obj;
            // Also flash the folder yellow to highlight it
            EditorGUIUtility.PingObject(obj);
        }
       
        private bool BoundsBoxIsValid()
        {
            return boundsBoxFromBrowser != null;
        }

        void OpenSlippyMapInBrowser()
        {
            float lastLat = PlayerPrefs.GetFloat(EDSF.PREFS_BROWSER_LAT);
            float lastLng = PlayerPrefs.GetFloat(EDSF.PREFS_BROWSER_LNG);
            double zoom = 0;

            if (lastLat == 0 || lastLng == 0)
            {
                lastLat = 0;
                lastLng = 0;
            }
            else
            {
                // see https://wiki.openstreetmap.org/wiki/Zoom_levels
                // tilesize = 40075017 * Math.cos(latRad) / Math.pow(2, zoom);
                double targetArea = VRoad.GotPro() ? 400 : 100; // in hectares
                double G = 4 * 40075017;
                double W = Math.Sqrt(targetArea * 10000) * (4.0 / 3.0); // For aspect 16:9, w = X*4/3, H = X*3/4
                double latRad = Math.PI * lastLat / 180.0;
                zoom = Math.Log(G * Math.Cos(latRad) / W) / Math.Log(2);
            }

            Application.OpenURL(VRoad.SlippyMapURL(lastLat, lastLng, zoom));
            
            pollClipboard = true;
        }

        
        private void SelectCachedOSMFile()
        {
            validOSMFileSelected = false;
            string dir = KEnv.OsmDir();
            string path = EditorUtility.OpenFilePanel(EDSC.OSM_FILE_DESC, dir, EDSF.SUFFIX_OSM);
            if (string.IsNullOrEmpty(path)) return;

            ValidateOsmFile(path);

            if (validOSMFileSelected)
            {
                int prevZoomLevel = VRoad.MostRecentAerials(osmFileName);
                if (prevZoomLevel > 0) // Change only if a previous zoom level is found 
                {
                    AerialMapSelection(prevZoomLevel - (GlobeMath.AERO_ZOOM_MIN - 1)); 
                    Debug.Log(KFormat.Sprintf(EDSC.MSG_FOUND_PREV_AERIAL_ZOOM, prevZoomLevel));
                }
            }
        }
        
        void ValidateOsmFile(string path)
        {
            if (string.IsNullOrWhiteSpace(path)) return;
            
            KFile file = new KFile(path);
            if (file.Exists())
            {
                string[] ccsa = FilenameWrapper.OSMJ.CountryCitySuburb(file.FileName());
                if (ccsa.Length == 4)
                {
                    int ha = KTools.ParseInt(ccsa[3]);
                    validOSMFileSelected = ha > 0;
                }
            }

            if (validOSMFileSelected)
            {
                osmFilePath = path;
                osmFileName = file.FileName();
                mruFileRoot = file.FilenameWithoutExtension();
            }
            else
            {
                ClearBuildParameters();
                osmFileName = SC.N;
                osmFilePath = SC.N;
            }
        }

        void SelectVRoadFile()
        {
            validVRoadFileSelected = false;
            string dir = KEnv.VroadWriteDir();
            string path = EditorUtility.OpenFilePanel(EDSC.VROAD_FILE_DESC, dir, EDSF.SUFFIX_VROAD);
            if (string.IsNullOrEmpty(path)) return;

            ValidateVRoadFile(path);
        }
        
        void ValidateVRoadFile(string path)
        {
            if (string.IsNullOrWhiteSpace(path)) return;
            
            KFile file = new KFile(path);
            
            if (file.Exists())
            {
                string[] ccsa = FilenameWrapper.VROAD.CountryCitySuburb(file.FileName());
                if (ccsa.Length == 4)
                {
                    int ha = KTools.ParseInt(ccsa[3]);
                    validVRoadFileSelected = ha > 0;
                }
            }

            if (validVRoadFileSelected)
            {
                vroadFileName = file.FileName();
                vroadFilePath = path;
                //SetupRunTraffic(vroadFilePath);
                
                mruFileRoot = file.FilenameWithoutExtension();
            }
            else
            {
                ClearRunTraffic();
                vroadFileName = SC.N;
                vroadFilePath = SC.N;
            }
        }

        
        private void SetupBuildMap(string path, string latLong)
        {
            if ((activeTab == ITAB_BUILD || activeTab == ITAB_REBUILD) && AllReferencesFound())
            {
                if (buildMap == null) missingReferences += EDSF.REF_BUILDMAP;

                else SetBuildParameters(path, latLong);
            }
        }
        
        void ClearBuildParameters()
        {
            BuildParameter.InitAll();
        }
        
        private void SetBuildParameters(string path, string latLong)
        {
            BuildParameter.FilePath.Set(path);
            BuildParameter.LatLong.Set(latLong);
            BuildParameter.AerialSelection.Set(aerialMapSelection);

            BuildFlag.NoTerrain.Set(!mapboxTerrain);
            
            buildMap.SetupBuildParameters();
        }
        private void SetupRunTraffic(string path)
        {
            if (activeTab == ITAB_TRAFFIC && AllReferencesFound())
            {
                if (runTraffic == null) missingReferences += EDSF.REF_RUNTRAFFIC;

                else runTraffic.SetupTraffic(path);
            }
        }

        private bool ApplyValidBoundsBox(string latLong)
        {
            boundsBoxFromBrowser = VRoad.CreateFromLatLong(latLong);

            if (!BoundsBoxIsValid()) return false;


            Xy centreLL = boundsBoxFromBrowser.CentreLatLong();
            int area = boundsBoxFromBrowser.AreaHectares();
            double sizeWE = boundsBoxFromBrowser.SizeWestToEast();
            double sizeSN = boundsBoxFromBrowser.SizeSouthToNorth();
            
            if (! VRoad.GotPro())
            {
                area = (int) VRoad.MapDefaultArea();
                double msq = area * 10000;
                double ar = VRoad.MapDefaultAspectRatio();
                sizeWE = Math.Sqrt(msq * ar);
                sizeSN = Math.Sqrt(msq / ar);
            }
            mapCentreLatLong = KFormat.Sprintf(SC.SF5F + CC.COMMA + SC.SF5F, centreLL.Y(), centreLL.X());
            mapAreaHa = KFormat.Sprintf(SC.SFD, area);
            mapSizeEM = KFormat.Sprintf(SC.SF0F, sizeWE);
            mapSizeNM = KFormat.Sprintf(SC.SF0F, sizeSN);

            mapLatLongStr = mapCentreLatLong + CC.COMMA + mapAreaHa + CC.COMMA + mapSizeEM;
            //SetupBuildMap(SC.N, mapLatLongStr);

            PlayerPrefs.SetFloat(EDSF.PREFS_BROWSER_LAT, (float) centreLL.Y());
            PlayerPrefs.SetFloat(EDSF.PREFS_BROWSER_LNG, (float) centreLL.X());

            return true;
        }

        // This is an EditorWindow: Awake is called when the window is opened for the first time
        void Awake()
        {
            mapBoxKey = VRoad.MapBoxKeyQuery();
            mapURL = VRoad.SlippyMapURL(0,0,0);
        }
        
        void Update()
        {
            if (! IsWindowActiveInCurrentScene()) return;
            
            if (!EditorApplication.isPlaying && activeTab == ITAB_BUILD)
            {
                string clipboard = GUIUtility.systemCopyBuffer;

                if (pollClipboard && clipboard != null && !clipboard.Equals(clipboardCache) &&
                    UBuildMap.LooksLikeLatLong(clipboard))
                {
                    clipboardCache = clipboard;

                    string latlong = clipboard.Trim(); // do not trim cached copy

                    if (ApplyValidBoundsBox(latlong)) Repaint();
                }
            }

            // When build is complete (Meshes ready) set vroad file path so that it shows in browse box on traffic tab
            if (EditorApplication.isPlaying && app == null && AllReferencesFound() && mapMesh.MeshesReady())
            {
                app = ExampleApp.AwakeInstance(); // this does not go in Awake, because this is an EditorWindow


                KFile vroadFile = app.GetDataFile();
                if (vroadFile != null)
                {
                    vroadFilePath = vroadFile.FullPath();
                    vroadFileName = vroadFile.FileName();
                    ValidateVRoadFile(vroadFilePath);

                    mruFileRoot = vroadFile.FilenameWithoutExtension();
                    osmFilePath = KEnv.OsmDir() + mruFileRoot + SC.SUFFIX_DOT_JSON;
                    ValidateOsmFile(osmFilePath);

                    Repaint();
                }

            }

            if (!EditorApplication.isPlaying && app != null)
            {
                app = null;
            }

        }

        public override bool IsWindowActiveInCurrentScene()
        {
            return currentScene.Equals(SceneForActiveTab());
        }
        void OnSelectionChange()
        {
            if (! IsWindowActiveInCurrentScene()) return;

            UaCamControllerMain cam = UaCamControllerMain.MostRecentInstance;
            UaBotHandler bh = UaBotHandler.Instance;
            if (cam == null || bh == null) return;

            cam.autoTrack = false;
            GameObject[] goa = Selection.gameObjects;
            if (goa == null || goa.Length == 0)
            {
                // stop tracking any previous Bot
                cam.TrackThis(null);
            }
            else // there is at least one selection
            {
                GameObject primarySelection = goa[0];

                // Is this a vehicle / pedestrian?
                IBit bit = bh.LookupBit(primarySelection);
                if (bit != null) cam.TrackThis(primarySelection);
                
                // If the primary selection is something else (e.g. the camera)
                // then do not stop tracking the previous bot, so that it is possible
                // to adjust public test variables on the camera while tracking
            }
        }
    }
}