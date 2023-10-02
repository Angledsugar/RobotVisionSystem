using uk.vroad.api.str;

namespace uk.vroad.ucm
{
    /// <summary> A static class containing string constants.
    /// Separation makes internationalization easier.</summary>
    public static class SA
    {
        public const string COPY_TO_CLIPBOARD = "> Ctrl-C [Contents Copied to Clipboard]";

        public const string NO_BOT_PARENTS =
            "Did not find parent objects for peds, cars, coaches, trucks, taxis, buses";

        public const string UNEXPECTED_PKG_LOC = "VRoad package is not in expected location: ";

        public const string HELP = "Help";
        // --------- Strings requiring translations above this line -------------------------


        public const string SONY = "sony"; // to recognize a PS4-layout gamepad vs XBox layout
        public const string MOUSE_X = "Mouse X";
        public const string MOUSE_Y = "Mouse Y";

        public const string Anim_isIdleActive = "isIdleActive";
        public const string Anim_isWalking = "isWalking";

        public const string ASSETS_DIR = "Assets"; // *** No trailing slash
        public const string EXPECTED_PKG_LOC = "Assets/VRoad";
        public const string MESH_GEN_DIR = "Models/MapMeshes";
        public const string MAT_GEN_DIR = "Materials/Dynamic";
        public const string PREFAB_GEN_DIR = "Prefabs/Maps";
        public const string SUFFIX_ASSET = ".asset";
        public const string SUFFIX_PREFAB = ".prefab";
        public const string SUFFIX_MAT = ".mat";
        public const string SUFFIX_TEX = "_tex.asset";
        public const string SUFFIX_TERRAIN_LAYER = ".terrainLayer";
        public const string _TEX = "_tex";
        public const string TERRAIN_LAYERED = "TerrainLayered";
        public const string PREFAB_MESH_NAME_FMT = "%s_%04d";
        
        public const string LANE_TEX_BLANK = "Blank";
        public const string LANE_TEX_EDGE = "Edge";
        public const string LANE_TEX_FLOW_WITH = "Flow With";
        public const string LANE_TEX_FLOW_AGAINST = "Flow Against";
        public const string LANE_TEX_UNSUITABLE = "Unsuitable texture for half-lane: ";

        public const string LANE_TEX_WARNING = "Textures for lanes must be non-null, 256x512, " +
                                               "and Read/Write Enabled in Unity Inspector";

        public const string MESH_DUMMY = "(Empty Mesh)";
        public const string MESH_PARENT = "MapMesh";
        public const string MESH_LANES = "Lanes";
        public const string MESH_JUNCTIONS = "Junctions";
        public const string MESH_TURN_ARROWS = "TurnArrows";
        public const string MESH_SIGNAL_BOXES = "SignalBoxes";
        public const string MESH_SIGNAL_ARROWS = "SignalArrows";
        public const string MESH_SIGNAL_WALKS = "SignalWalks";
        public const string MESH_BUS_STOPS = "BusStops";
        public const string MESH_PARKING = "Parking";
        public const string MESH_DROP_OFF = "DropOff";
        public const string MESH_FOOTPATHS = "Footpaths";
        public const string MESH_CROSSINGS = "Crossings";
        public const string MESH_ZEBRAS = "Zebras";
        public const string MESH_SOLID_BUILDINGS = "SolidBuildings";
        public const string MESH_DRIVE_THROUGHS = "DriveThroughBuildings";
        public const string MESH_TERRAIN = "TerrainSimple";
        public const string MESH_WATER = "Water";
        public const string MESH_BRIDGES = "Bridges";
        public const string MESH_TUNNELS = "Tunnels";
        public const string MESH_SHOULDERS = "Shoulders";
        public const string MESH_EMBANKMENTS = "Embankments";
        public const string MESH_BARRIERS = "Barriers";
        public const string MESH_MEDIANS = "MedianMarkings";
        
        public const string VTOP_PEDS = "Peds";
        public const string VTOP_CARS = "Cars";
        public const string VTOP_COACHES = "Coaches";
        public const string VTOP_TRUCKS = "Trucks";
        public const string VTOP_TAXIS = "Taxis";
        public const string VTOP_BUSES = "Buses";
        
        public const string NO_TEXTURE = "NoTexture";
        public const string USING_DUMMY_MATERIAL = "Check UaMapMesh Material Templates - using Dummy Material for: ";
        public const string NOT_RENDERING_MESH_NO_TEX = "No texture supplied, mesh not rendered: ";
        public const string BUILDING = "Building";
        public const string BUILDING_GROUP = "BuildingGroup";
        public static string[] BUILDING_TYPES = new string[] { "Commercial", "Industrial", "Residential", "Storage",};

        public static readonly string[] MARKING_LABEL = new string[]
        {
            "NoMarking", // contains no underscore
            "RoadEdge_RoadEdge",    // The underscore is important, it marks this as having a texture that must be saved
            "RoadEdge_LaneWith",    // contains underscore (see above)
            "RoadEdge_LaneAgainst", // contains underscore (see above)
            "LaneWith_RoadEdge",    // contains underscore (see above)
            "LaneWith_LaneWith",    // contains underscore (see above)
            "LaneWith_LaneAgainst", // contains underscore (see above)
            "LaneAgainst_RoadEdge", // contains underscore (see above)
            "LaneAgainst_LaneWith", // contains underscore (see above)
            "BusesTaxis", // contains no underscore
            "NoVehicles", // contains no underscore
            "NoTrucks",   // contains no underscore
        };

        
        public const string BUILD_ERRROR_1 = "No Osm2VRoad/Lite executable found: ";
        public const string BUILD_ERRROR_2 = "Tried to fetch but not found at: ";
  
        public const string UNITY_RUNNER = "UnityRunner";
        public const string DOT_BINX = ".bin";
     
        //See also KEnv.GetArch()
#if UNITY_EDITOR_WIN || UNITY_STANDALONE_WIN
        
        public const string ARCH_DIR = "x64";
        public const string DOT_BIN = ".exe";

#elif UNITY_EDITOR_OSX || UNITY_STANDALONE_OSX

        public const string ARCH_DIR = "osx";
        public const string DOT_BIN = "";   // no extension

#elif UNITY_EDITOR_LINUX || UNITY_STANDALONE_LINUX
         
        public const string ARCH_DIR = "linux";
        public const string DOT_BIN = ".x86_64"; 
#else
        public const string ARCH_DIR = "unsupported_architecture";
        public const string DOT_BIN = ".unsupported_architecture";
#endif
    }
}