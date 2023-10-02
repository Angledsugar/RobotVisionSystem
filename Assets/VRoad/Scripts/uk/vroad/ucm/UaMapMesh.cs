using System;
using System.Collections;
using System.Collections.Generic;
using uk.vroad.api;
using uk.vroad.api.edit;
using uk.vroad.api.enums;
using uk.vroad.api.etc;
using uk.vroad.api.events;
using uk.vroad.api.geom;
using uk.vroad.api.map;
using uk.vroad.api.str;
using uk.vroad.apk;
using uk.vroad.pac;
using UnityEngine;
using UnityEngine.Rendering;

using MH = uk.vroad.api.enums.MaterialHint;
using MP = uk.vroad.api.enums.MapParameter;

namespace uk.vroad.ucm
{
    #region PARAMETERS
   
    [System.Serializable] public class MeshParameters: Inspectable
    {
        private const int MIN_TERRAIN_RES = 5;
        private const int STD_TERRAIN_RES = 9;
        private const int MAX_TERRAIN_RES = 12;
        
        private const int MIN_WATER_DEPTH = 0;
        private const int STD_WATER_DEPTH = 2;
        private const int MAX_WATER_DEPTH = 10;
        
        
        [Range(0, MP.MAX_VERGE)]
        [Tooltip("The width of the road shoulder verge, in metres")]
        public float vergeWidth = MP.VergeWidth.FloatValue();
        
        [Range(0, MP.MAX_RISE)]
        [Tooltip("The height of the road shoulder above the road surface, in metres")]
        public float kerbRise = MP.KerbRise.FloatValue();

        [Range(0, MP.MAX_RISE)]
        [Tooltip("The height of the footpath above the road surface, in metres")]
        public float footpathRise = MP.FootpathRise.FloatValue();

        [Range(0, MP.MAX_RISE)]
        [Tooltip("The height of the crossing surface above the road surface, in metres")]
        public float crossingRise = MP.CrossingRise.FloatValue();
        
        [Range(0, MP.MAX_ROAD)]
        [Tooltip("On a bridge, the distance between the upper and lower surface of a road, in metres")]
        public float roadThickness = MP.RoadThickness.FloatValue();

        [Range(MP.MIN_PIER, MP.MAX_PIER)]
        [Tooltip("Under a bridge, the target distance between supporting piers, in metres")]
        public float pierSeparation = MP.PierSeparation.FloatValue();
        
        [ProOnlyRange(0, MP.MAX_BARRIER)]
        [Tooltip("The height of the barriers beside a road, in metres. Set to zero for no barriers")]
        public float barrierHeight = MP.BarrierHeight.FloatValue();

        [ProOnly][Tooltip("If false, barrier is drawn between road and side walk.\nIf true, barrier is drawn outside sidewalk")]
        public bool barrierOutsideWalk = MapFlag.BarrierOutsideWalk.IsTrue();

        [ProOnlyRange(MP.MIN_HATCH_AREA, MP.MAX_HATCH_AREA)]
        [Tooltip("The maximum area of an 'island' surrounded by roads that will be rendered as median hatching.\n" +
                 "Areas larger than this will be rendered as terrain.")]
        public float hatchingArea = MP.HatchArea.FloatValue();

        [ProOnlyRange(1, MP.MAX_HATCH_ROADS)]
        [Tooltip("The maximum number of roads to look ahead to find a loop around an island of road marking")]
        public int hatchingRoads = MP.HatchRoadLimit.IntValue();

        [ProOnlyRange(MP.MIN_HATCH_RB, MP.MAX_HATCH_RB)]
        [Tooltip("The maximum radius for a roundabout for it to be drawn as a road marking island")]
        public float hatchingRadius = MP.HatchRoundabout.FloatValue();

        [ProOnlyRange(MP.MIN_PLANES, MP.MAX_PLANES)]
        [Tooltip("The number of unique building wall offset values, N, used to reduce z-fighting when rendered." +
                 "For building i, the wall offset distance d = (i % N) x (D / N), where D = 200mm")]
        public int buildingOffsetPlanes = MP.OffsetPlanes.IntValue();
       
        [ProOnly][Tooltip("If true, and the building type is not set in OSM,  then it will be set randomly. " +
                          "This is used for the material applied to a building rendering.\n" +
                          "If false, buildings with no type set will be  drawn in the default building material.")]
        public bool randomizeBuildings = true;

        [Tooltip("If true, this will create meshes that draw features related to traffic simulation, including " +
                 "traffic light equipment, arrows and light and lane surface markings for buses and taxis.")]
        public bool simulationMeshes = true;
        
        [Tooltip("If true, a layered Unity Terrain object will be created, with holes cut for any tunnels. " +
                 "This object can be edited with Unity's terrain tools, " +
                 "to raise or lower levels, add trees, details, etc.\n" +
                 "If false, a single mesh will be created for the terrain. " +
                 "This will not be as smooth as a layered terrain object")]
        public bool layeredTerrain = true;
       
        [Tooltip("[Layered Terrain] A value to control the resolution of the terrain. \n" +
                 " 5 = 32 x 32\n" +
                 " 6 = 64 x 64\n" +
                 "...\n" +
                 " 9 = 512 x 512\n" +
                 "...\n" +
                 "12 = 4096 x 4096 ")]
        [Range(MIN_TERRAIN_RES, MAX_TERRAIN_RES)]
        public int terrainResolution = STD_TERRAIN_RES;
        
        [Tooltip("[Layered Terrain] The distance, in metres, that the terrain drops under areas of water." )]
        [Range(MIN_WATER_DEPTH, MAX_WATER_DEPTH)]
        public float waterDepth = STD_WATER_DEPTH;

        [ProOnlyRange(0, MP.MAX_MARGIN)]
        [Tooltip("[Layered Terrain] The additional distance in terrain unit cells around a tunnel entrance to cut a hole in the unity terrain")]
        public int tunnelHoleMargin = MP.HoleMargin.IntValue();

        [ProOnlyRange(0, MP.MAX_APRON)]
        [Tooltip("[Layered Terrain] The distance around a tunnel entrance to create an apron using the V-Road terrain surface")]
        public float tunnelHoleApron = MP.HoleApron.FloatValue();

        public void ResetToDefaults()
        {
            vergeWidth = MP.STD_VERGE;
            kerbRise = MP.STD_RISE;
            footpathRise = MP.STD_RISE;
            crossingRise = MP.STD_X_RISE;
            roadThickness = MP.STD_ROAD;
            pierSeparation = MP.STD_PIER;
            barrierHeight = MP.STD_BARRIER;
            barrierOutsideWalk = false;
            hatchingArea = MP.STD_HATCH_AREA;
            hatchingRoads = MP.STD_HATCH_ROADS;
            hatchingRadius = MP.STD_HATCH_RB;
            buildingOffsetPlanes = MP.STD_PLANES;
            randomizeBuildings = true;
            simulationMeshes = true;
            layeredTerrain = true;
            terrainResolution = STD_TERRAIN_RES;
            waterDepth = STD_WATER_DEPTH;
            tunnelHoleMargin = MP.STD_MARGIN;
            tunnelHoleApron = MP.STD_APRON;
        }
    }

    // Material Templates are useful when using HDRP or URP, as there is a menu function to
    // convert all materials. All materials subsequently created from the templates
    // will then also be OK for the advanced render pipelines, which is not the case if
    // the material is created from scratch without a template.
    
    [System.Serializable] public class MaterialTemplates: Inspectable
    {
        public Material cutout;
        public Material opaque;
        public Material transparent;
    }

    [System.Serializable] public class LaneMaterials: Inspectable
    {
        public Material roadEdge_RoadEdge;
        public Material roadEdge_LaneWith;
        public Material roadEdge_LaneAgainst;

        public Material laneWith_RoadEdge;
        public Material laneWith_LaneWith;
        public Material laneWith_LaneAgainst;
        
        public Material laneAgainst_RoadEdge;
        public Material laneAgainst_LaneWith;

        public Material busesOnly;
        public Material cyclesOnly;
        public Material noTrucks;

        public Material junction;
        public Material turnArrows;
        [Tooltip("The material to use for median marking, often a hatching pattern")]
        public Material medianMarking;
    }

    [System.Serializable]
    public class MeshMaterials: Inspectable
    {
        public Material footpath;
        public Material crossingPlain;
        public Material crossingZebra;

        public Material shoulder;
        public Material barrier;
        public Material bridge;
        public Material embankment;
        public Material tunnel;

        [Tooltip("Material used for terrain if aerial images are not used")]
        public Material terrain;

        [Tooltip("A specialized Material used to build a layered Unity Terrain with holes. " +
                 "For the built-in rendering pipeline, this is normally set to 'Default-Terrain-Standard', " +
                 "which has the shader 'Nature/Terrain/Standard'")]
        public Material terrainSpecialShader;

        public Material water;

        [Tooltip("Material used for some buildings in Lite, and also in Pro if no building type is defined")]
        public Material building;

        [Tooltip("Material used for all buildings that overlap roads")]
        public Material buildingGlass;
    }

    [System.Serializable] public class BuildingMaterials: Inspectable
    {
        public Material[] buildingsCommercial;
        public Material[] buildingsIndustrial;
        public Material[] buildingsResidential;
        public Material[] buildingsStorage;
    }
    [System.Serializable] public class SignalMaterials: Inspectable
    {
        public Material red;
        public Material yellow;
        public Material green;
        public Material off;
        public Material box;
    }
    
    [System.Serializable] public class MeshDecals: Inspectable
    {
        public Material busBay;
        public Material parkingBay;
        public Material dropOffBay;
        public Material walkGreen;
        public Material walkRed;
    }
    
    #endregion
    
    /// <summary> This abstract base class holds most of the methods for creating meshes for rendering  </summary>
    public abstract class UaMapMesh : MonoBehaviour, LUAppState, LSimTimeSec
    {
        protected abstract App App();

        public bool MeshesReady() { return meshesCreated; }

        public MeshParameters parameters;
        public LaneMaterials lanes;
        public SignalMaterials signals;
        public MeshDecals decals;
        public MeshMaterials materials;
        [ProOnly]
        [Tooltip("Define multiple building materials for each building type (Commercial/ Residential etc)./n" +
                 "These are used for building rendering, if 'Options/Create Multiple Meshes' is also set.")]
        public BuildingMaterials buildingMaterialsByType;
        
        public MaterialTemplates materialTemplates;
       
        protected GameObject goMeshLanes;
        protected GameObject goMeshJunctions;
        protected GameObject goMeshTurnArrows;
        protected GameObject goMeshSignalBoxes;
        protected GameObject goMeshSignalArrows;
        protected GameObject goMeshSignalWalks;
        protected GameObject goMeshBusStops;
        protected GameObject goMeshParking;
        protected GameObject goMeshDropOff;
        protected GameObject goMeshFootpaths;
        protected GameObject goMeshCrossings;
        protected GameObject goMeshZebras;

        protected GameObject goMeshSolidBuildings;
        protected GameObject goMeshGlassBuildings;
        protected GameObject goMeshWater;
        protected GameObject goMeshTerrainSimple;
        protected GameObject goMeshTerrainLayered;

        protected GameObject goMeshBridges;
        protected GameObject goMeshTunnels;
        protected GameObject goMeshShoulders;
        protected GameObject goMeshEmbankments;
        protected GameObject goMeshBarriers;
        protected GameObject goMeshMedians;
       
        private GameObject mapMeshParent;

        protected Material[] laneMaterials;
        private Material[] buildingMaterials;
        
        private Material aerialMaterial;
        private Texture2D aerialTexCrop;
        private TerrainLayer terrainLayer;
        
        private bool multiMesh;
        private bool mixedMesh;
        private bool meshesCreated;
        private bool signalsInit;
        private bool aerialTextureLoaded;
        
        public void ResetToDefaults()
        {
            parameters.ResetToDefaults();
        }
       
        private Material DUMMY_MATERIAL;
        
        private readonly KHash<IStreme, int> stremeGreenMeshIndex = new KHash<IStreme, int>();
        private readonly KHash<ICrossing, int> crossingMeshIndex = new KHash<ICrossing, int>();
        private readonly KHash<IStop, int> stopMeshIndex = new KHash<IStop, int>();
        
        protected readonly List<GameObject> listOfGoMeshes = new List<GameObject>();

        private ITurn[] turnsJustChangedArray = IZero.ZERO_ITURN;
        private ICrossing[] crossingsJustChangedArray = IZero.ZERO_ICROSSING; //ZERO_RED_GREEN_CROSSING;

        public bool CreateMultipleMeshes { set => multiMesh = value; }
        public bool MixedMesh { set => mixedMesh = value; }
        
        /// <summary> Set the layer in the given game object and in all of its children </summary>
        public static void SetLayerWholeTree(GameObject go, int newLayer)
        {
            // Returns all components of given type in the GameObject or any of its children (recursively)
            foreach (Transform t in go.GetComponentsInChildren<Transform>(true)) t.gameObject.layer = newLayer;
        }
       
        private Material GetDummyMaterial(string goMeshName)
        {
            if (DUMMY_MATERIAL == null) DUMMY_MATERIAL = new Material(Shader.Find("Diffuse")) {color = Color.magenta};
            Debug.LogWarning(SA.USING_DUMMY_MATERIAL+goMeshName);
            return DUMMY_MATERIAL;
        }
        
        protected GameObject NewGoMesh(string goMeshName, Material templateMat, Color color, bool addCollider)
        {
            // Color can not be null
            if (templateMat == null) templateMat = GetDummyMaterial(goMeshName);

            return NewGoMesh(goMeshName, NewMaterial(goMeshName, templateMat, color), addCollider);
        }
       
        protected GameObject NewGoMesh(string goMeshName, Material instanceMat, bool addCollider)
        {
            goMeshName ??= instanceMat.name;
            
            GameObject goMesh = new GameObject(goMeshName); // There may be multiple goMeshs with the same texture
            goMesh.AddComponent<MeshFilter>();
            MeshRenderer mr =  goMesh.AddComponent<MeshRenderer>();
            mr.sharedMaterials = new Material[] { instanceMat, };
            mr.sharedMaterial = instanceMat;
            //mr.materials = new Material[] { instanceMat, };
            //mr.material = instanceMat;

            if (addCollider) goMesh.AddComponent<MeshCollider>();
           
            goMesh.transform.parent = mapMeshParent.transform;
            listOfGoMeshes.Add(goMesh);

            return goMesh;
        }

        private static string ToHexStr(Color c)
        {
            int ri = (int) Math.Round(c.r * 255f);
            int gi = (int) Math.Round(c.g * 255f);
            int bi = (int) Math.Round(c.b * 255f);
            int ai = (int) Math.Round(c.a * 255f);

            return KFormat.Sprintf("0x%02X%02X%02X%02X", ri, gi, bi, ai);
        }


        private Material NewMaterial(string goMeshName, Material templateMat, Color col)
        {
            if (templateMat == null) return GetDummyMaterial(goMeshName);
            return new Material(templateMat) { color = col, name = templateMat.name + SC.UL + ToHexStr(col) };
        }
        
        public Material NewMaterialOpaque(string matName, Color col)
        {
            return new Material(materialTemplates.opaque) { color = col, name = matName };
        }
        public Material NewMaterialTransparent(string matName, Color col)
        {
            return new Material(materialTemplates.transparent) { color = col, name = matName };
        }

        protected virtual void Awake()
        {
            KEnv.Awake();

            mapMeshParent = new GameObject(SA.MESH_PARENT);
            mapMeshParent.transform.parent = this.transform;

            goMeshLanes = NewGoMesh(SA.MESH_LANES, lanes.junction, true);
            goMeshJunctions = NewGoMesh(SA.MESH_JUNCTIONS, lanes.junction, true);
            goMeshTurnArrows = NewGoMesh(SA.MESH_TURN_ARROWS, lanes.turnArrows, false);

            goMeshSignalBoxes = NewGoMesh(SA.MESH_SIGNAL_BOXES, signals.box, false);
            goMeshSignalArrows = NewGoMesh(SA.MESH_SIGNAL_ARROWS, signals.off, false); 
            goMeshSignalWalks = NewGoMesh(SA.MESH_SIGNAL_WALKS, decals.walkRed, false);

            goMeshBusStops = NewGoMesh(SA.MESH_BUS_STOPS, decals.busBay, false);
            goMeshParking = NewGoMesh(SA.MESH_PARKING, decals.parkingBay, false);
            goMeshDropOff = NewGoMesh(SA.MESH_DROP_OFF, decals.dropOffBay, false);

            goMeshFootpaths = NewGoMesh(SA.MESH_FOOTPATHS, materials.footpath, true);
            goMeshCrossings = NewGoMesh(SA.MESH_CROSSINGS, materials.crossingPlain, false);
            goMeshZebras = NewGoMesh(SA.MESH_ZEBRAS, materials.crossingZebra, false);
           
            goMeshSolidBuildings = NewGoMesh(SA.MESH_SOLID_BUILDINGS, materials.building, true);
            goMeshGlassBuildings = NewGoMesh(SA.MESH_DRIVE_THROUGHS, materials.buildingGlass, false);
            goMeshWater = NewGoMesh(SA.MESH_WATER, materials.water, false);
            
            // When layered terrain is used, the simple terrain is used for tunnel entrances only 
            goMeshTerrainSimple = NewGoMesh(SA.MESH_TERRAIN, materials.terrain, true);
            if (HasLayeredTerrain())
            {
                goMeshTerrainLayered = new GameObject(SA.TERRAIN_LAYERED, typeof(Terrain), typeof(TerrainCollider));
                goMeshTerrainLayered.transform.parent = mapMeshParent.transform;
            }
            
            goMeshBridges = NewGoMesh(SA.MESH_BRIDGES, materials.bridge, true);
            goMeshTunnels = NewGoMesh(SA.MESH_TUNNELS, materials.tunnel, true);
            goMeshShoulders  = NewGoMesh(SA.MESH_SHOULDERS, materials.shoulder, true);
            goMeshEmbankments = NewGoMesh(SA.MESH_EMBANKMENTS, materials.embankment, true);
            goMeshBarriers  = NewGoMesh(SA.MESH_BARRIERS, materials.barrier, true);
            goMeshMedians  = NewGoMesh(SA.MESH_MEDIANS, lanes.medianMarking, true);

            goMeshSignalArrows.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.Off;
            goMeshSignalWalks.GetComponent<MeshRenderer>().shadowCastingMode = ShadowCastingMode.Off;
            
            App().AddEventConsumer(this); // was in Start

            laneMaterials = new Material[]
            {
                lanes.junction,
                lanes.roadEdge_RoadEdge,
                lanes.roadEdge_LaneWith,
                lanes.roadEdge_LaneAgainst,
                lanes.laneWith_RoadEdge,
                lanes.laneWith_LaneWith,
                lanes.laneWith_LaneAgainst,
                lanes.laneAgainst_RoadEdge,
                lanes.laneAgainst_LaneWith,
                lanes.busesOnly,
                lanes.cyclesOnly,
                lanes.noTrucks,
            };

            Debug.Assert(laneMaterials.Length == SA.MARKING_LABEL.Length);
            
            BuildingMaterials bmbt = buildingMaterialsByType;
            int nbm = bmbt.buildingsResidential.Length + bmbt.buildingsCommercial.Length +
                           bmbt.buildingsIndustrial.Length + bmbt.buildingsStorage.Length;
            if (nbm == 0)
            {
                nbm = 1;
                buildingMaterials = new Material[nbm];
                buildingMaterials[0] = materials.building;
            }
            else
            {
                buildingMaterials = new Material[nbm];
                int bmi = 0;
            
           
                for (int cbmi = 0; cbmi < bmbt.buildingsCommercial.Length; cbmi++, bmi++)
                {
                    buildingMaterials[bmi] = bmbt.buildingsCommercial[cbmi];
                }
                for (int ibmi = 0; ibmi < bmbt.buildingsIndustrial.Length; ibmi++, bmi++)
                {
                    buildingMaterials[bmi] = bmbt.buildingsIndustrial[ibmi];
                }
                for (int rbmi = 0; rbmi < bmbt.buildingsResidential.Length; rbmi++, bmi++)
                {
                    buildingMaterials[bmi] = bmbt.buildingsResidential[rbmi];
                }
                for (int sbmi = 0; sbmi < bmbt.buildingsStorage.Length; sbmi++, bmi++)
                {
                    buildingMaterials[bmi] = bmbt.buildingsStorage[sbmi];
                }
            }
           
        }

        void Start()
        {
            ResetMapMesh();
            UaStateHandler.MostRecentInstance.AddListener(this);
        }

        protected virtual void Update()
        {
            if (UaPlaySim.AsFastAsPossible()) UpdateDisplay();
        }

        protected virtual void FixedUpdate()
        {
            if (!UaPlaySim.AsFastAsPossible()) UpdateDisplay();
        }


        public bool HasLayeredTerrain() { return parameters.layeredTerrain; }

        public Terrain GetTerrain() { return goMeshTerrainLayered.GetComponent<Terrain>(); }

        protected virtual void SetTerrainMaterial()
        {
            SaveAerialWithPrefab(false); // This does nothing unless in Editor
            
            int aerialMapZoomLevel = App().Map().GetAerialZoomLevel();
            if (aerialMapZoomLevel > 0) // The slippy map zoom level: 13, 14, ...
            {
                ITerrain terrain = App().Map().Terrain();
                string aerialName = SF.AERIAL + SC.UL + App().GetMapSuburb();
                
                string aerialCroppedName = aerialName + SC.UL + SF.CROPPED;
                aerialTexCrop = new Texture2D(2, 2) {name = aerialCroppedName};
                byte[] croppedBytes = terrain.AerialData();
                if (croppedBytes == null || !aerialTexCrop.LoadImage(croppedBytes))
                {
                    Debug.LogWarning(SU.AERIAL_WARNING_4);
                    return;
                }

                aerialTextureLoaded = true;
                
                // Set the texture on the Simple terrain (used for tunnel entrances, when layered terrain is on)
                aerialMaterial = new Material(materialTemplates.opaque){mainTexture = aerialTexCrop, name = aerialName};

                MeshRenderer mr = goMeshTerrainSimple.GetComponent<MeshRenderer>();
                mr.sharedMaterial = aerialMaterial;

                SaveAerialWithPrefab(true); // This does nothing unless in Editor
            }
        }

        public bool DeregisterFireMapChange() { return true; }

        protected virtual void ResetMapMesh()
        {
            meshesCreated = false;

            foreach (GameObject goMeshGO in listOfGoMeshes) { goMeshGO.GetComponent<MeshFilter>().mesh = new Mesh(); }
        }

        IEnumerator CreateMapMeshes(bool useMulti, bool useMixed)
        {
            // See lookup of mesh gameObjects in Awake()
            if (UDbg.TIMING) UDbg.timerLoaderMesh = Reporter.Timer();

            KHash<IJunction, TriMesh> junctionToUpper = new KHash<IJunction, TriMesh>();
            KHash<ICorner, TriMesh> cornerToUpper = new KHash<ICorner, TriMesh>();
            
            if (useMulti) // one mesh for each object (each lane, junction, etc)
            {
                CreateNamedMeshObjects(5, goMeshLanes, LaneNamedSubMeshArray(), laneMaterials,
                    LaneMaterialIndexArray());
                yield return null;
                CreateNamedMeshObjects(10, goMeshJunctions, JunctionNamedSubMeshArray(junctionToUpper));
                yield return null;
                CreateNamedMeshObjects(15, goMeshTurnArrows, TurnArrowNamedSubMeshArray());
                yield return null;

                if (parameters.simulationMeshes)
                {
                NamedSubMesh[][] shsma = SignalHeadNamedSubMeshArray();
                CreateNamedMeshObjects(20, goMeshSignalBoxes, shsma[0]);
                yield return null;
                CreateNamedMeshObjects(25, goMeshSignalArrows, shsma[1]);
                yield return null;
                CreateNamedMeshObjects(30, goMeshSignalWalks, WalkSignalNamedSubMeshArray());
                yield return null;
                CreateNamedMeshObjects(35, goMeshBusStops, StopNamedSubMeshArray());
                yield return null;
                CreateNamedMeshObjects(38, goMeshParking, ParkingNamedSubMeshArray(false));
                yield return null;
                CreateNamedMeshObjects(40, goMeshDropOff, ParkingNamedSubMeshArray(true));
                yield return null;
                }

                CreateNamedMeshObjects(45, goMeshFootpaths, FootpathNamedSubMeshArray(cornerToUpper));
                yield return null;
                CreateNamedMeshObjects(50, goMeshCrossings, CrossingNamedSubMeshArray());
                yield return null;
                CreateNamedMeshObjects(55, goMeshZebras, ZebraNamedSubMeshArray());
                yield return null;

                NamedSubMesh[] solidBuildingNsma = BuildingNamedSubMeshArray(false);
                CreateNamedMeshObjects(60, goMeshSolidBuildings, solidBuildingNsma,
                    buildingMaterials, SolidBuildingMaterialIndexArray(solidBuildingNsma.Length));
                yield return null;
                CreateNamedMeshObjects(64, goMeshGlassBuildings, BuildingNamedSubMeshArray(true));
                yield return null;

                CreateNamedMeshObjects(68, goMeshWater, WaterNamedSubMeshArray());
                yield return null;
                CreateMesh(72, goMeshTerrainSimple, TerrainSubMesh());
                yield return null;

                CreateNamedMeshObjects(76, goMeshBridges, BridgesNamedSubMeshArray(junctionToUpper, cornerToUpper));
                yield return null;
                CreateNamedMeshObjects(80, goMeshTunnels, ShouldersNamedSubMeshArray(MH.Tunnel, MH.Tunnel, 0.02f));
                yield return null;
                CreateNamedMeshObjects(84, goMeshShoulders, ShouldersNamedSubMeshArray(MH.Kerbing, MH.Bridge));
                yield return null;
                CreateNamedMeshObjects(88, goMeshEmbankments, ShouldersNamedSubMeshArray(MH.Embankment, MH.Embankment));
                yield return null;
                CreateNamedMeshObjects(90, goMeshBarriers, BarriersNamedSubMeshArray());
                yield return null;
                CreateNamedMeshObjects(92, goMeshMedians, MedianStripNamedSubMeshArray());
                yield return null;
                CreateLayeredTerrainData(99);
                yield return null;
                AddExtraMultiSubMesh(100);
            }
            else  if (useMixed) // a single mesh for some types, and separate meshes for others (used by map customizer)
            {
                CreateNamedMeshObjects(4, goMeshLanes, LaneNamedSubMeshArray(), laneMaterials, LaneMaterialIndexArray());
                yield return null;
                CreateNamedMeshObjects(8, goMeshJunctions, JunctionNamedSubMeshArray(junctionToUpper));
                yield return null;
                CreateNamedMeshObjects(12, goMeshTurnArrows, TurnArrowNamedSubMeshArray());
                yield return null;
               
                // For MapCustomizer, do not show some features, to speed up the build
                if (parameters.simulationMeshes && !useMixed)
                {
                    CreateMesh(16, goMeshSignalBoxes, SignalBoxSubMesh()); yield return null;
                    CreateMesh(18, goMeshSignalArrows, SignalArrowSubMeshArray()); yield return null;
                    CreateMesh(22, goMeshSignalWalks, WalkSignalSubMeshArray()); yield return null; 
                    CreateMesh(24, goMeshBarriers, BarriersSubMesh()); yield return null;
                    CreateMesh(26, goMeshBusStops, StopSubMesh()); yield return null;
                    CreateMesh(29, goMeshParking, ParkingSubMesh(false)); yield return null;
                    CreateMesh(32, goMeshDropOff, ParkingSubMesh(true)); yield return null;
                }

                CreateNamedMeshObjects(36, goMeshFootpaths, FootpathNamedSubMeshArray(cornerToUpper));
                yield return null;
                CreateNamedMeshObjects(50, goMeshCrossings, CrossingNamedSubMeshArray());
                yield return null;
                CreateNamedMeshObjects(55, goMeshZebras, ZebraNamedSubMeshArray());
                yield return null;

                NamedSubMesh[] solidBuildingNsma = BuildingNamedSubMeshArray(false);
                CreateNamedMeshObjects(48, goMeshSolidBuildings, solidBuildingNsma,
                    buildingMaterials, SolidBuildingMaterialIndexArray(solidBuildingNsma.Length));
                yield return null;
                CreateNamedMeshObjects(52, goMeshGlassBuildings, BuildingNamedSubMeshArray(true));
                yield return null;

                if (! HasLayeredTerrain()) // Create Water and simple terrain only if no layered terrain
                {
                    CreateMesh(60, goMeshWater, WaterSubMesh());
                    yield return null;
                    CreateMesh(72, goMeshTerrainSimple, TerrainSubMesh());
                    yield return null;
                    
                    // This means that if there are tunnels, the tunnel entrances will not be visible for useMixed
                }

                CreateNamedMeshObjects(76, goMeshBridges, BridgesNamedSubMeshArray(junctionToUpper, cornerToUpper));
                yield return null;
                CreateNamedMeshObjects(80, goMeshTunnels, ShouldersNamedSubMeshArray(MH.Tunnel, MH.Tunnel, 0.02f));
                yield return null;
                CreateNamedMeshObjects(84, goMeshShoulders, ShouldersNamedSubMeshArray(MH.Kerbing, MH.Bridge));
                yield return null;
                CreateNamedMeshObjects(88, goMeshEmbankments, ShouldersNamedSubMeshArray(MH.Embankment, MH.Embankment));
                yield return null;
               
                CreateNamedMeshObjects(92, goMeshMedians, MedianStripNamedSubMeshArray());
                yield return null;
               
                CreateLayeredTerrainData(99);
                yield return null;
                
                AddExtraMultiSubMesh(100);
            }

            else // one mesh for each object for all types of object
            {
                CreateNamedMeshObjects(4, goMeshLanes, LanesByMarking(), laneMaterials, null);
                yield return null;
                CreateMesh(8, goMeshJunctions, JunctionSubMesh(junctionToUpper));
                yield return null;
                CreateMesh(12, goMeshTurnArrows, TurnArrowSubMesh());
                yield return null;

                if (parameters.simulationMeshes)
                {
                    CreateMesh(16, goMeshSignalBoxes, SignalBoxSubMesh()); yield return null;
                    // Arrays are needed for arrows and walks, as materials change with signal state
                    CreateMesh(20, goMeshSignalArrows, SignalArrowSubMeshArray()); yield return null; 
                    CreateMesh(24, goMeshSignalWalks, WalkSignalSubMeshArray()); yield return null; 
                if (StopColorCanChange()) CreateMesh(28, goMeshBusStops, StopSubMeshArray());
                else CreateMesh(28, goMeshBusStops, StopSubMesh());
                yield return null;

                    CreateMesh(31, goMeshParking, ParkingSubMesh(false)); yield return null;
                    CreateMesh(32, goMeshDropOff, ParkingSubMesh(true)); yield return null;
                }

                CreateMesh(36, goMeshFootpaths, FootpathSubMesh(cornerToUpper)); yield return null;
                CreateMesh(40, goMeshCrossings, CrossingSubMesh()); yield return null;
                CreateMesh(44, goMeshZebras, ZebraSubMesh()); yield return null;

                if (VRoad.GotPro() && parameters.randomizeBuildings) 
                    CreateNamedMeshObjects(48, goMeshSolidBuildings, SolidBuildingsRandomized(), buildingMaterials, null);
                else CreateMesh(48, goMeshSolidBuildings, BuildingSubMesh(false));
                yield return null;
                
                CreateMesh(52, goMeshGlassBuildings, BuildingSubMesh(true)); yield return null;
                CreateMesh(60, goMeshWater, WaterSubMesh()); yield return null;
                CreateMesh(75, goMeshTerrainSimple, TerrainSubMesh()); yield return null;

                CreateMesh(77, goMeshBridges, BridgesSubMesh(junctionToUpper, cornerToUpper)); yield return null;
                CreateMesh(80, goMeshTunnels, ShouldersSubMesh(MH.Tunnel, MH.Tunnel, 0.02f)); yield return null;
                CreateMesh(84, goMeshShoulders, ShouldersSubMesh(MH.Kerbing, MH.Bridge)); yield return null;
                CreateMesh(88, goMeshEmbankments, ShouldersSubMesh(MH.Embankment, MH.Embankment)); yield return null;
                CreateMesh(90, goMeshBarriers, BarriersSubMesh()); yield return null;
                CreateMesh(92, goMeshMedians, MedianStripSubMesh()); yield return null;

                CreateLayeredTerrainData(99);
                yield return null;
                
                AddExtraSingleSubMesh(100); // yield return null;
            }

            MeshesFinished();

            junctionToUpper.Clear();
            cornerToUpper.Clear();
            
            if (UDbg.TIMING) Reporter.Timer(UDbg.timerLoaderMesh, SU.U_TIMER01);
            if (UDbg.TIMING) Reporter.Timer(UDbg.timerLoaderTop, SU.U_TIMER02);
        }


        private void MeshesFinished()
        {
            Reporter.Progress(100);
            meshesCreated = true;
            OnMeshCreationFinish();
        }

        public bool MeshesCreated() { return meshesCreated; }


        protected virtual void OnMeshCreationStart()
        {
            MP.VergeWidth.Set(parameters.vergeWidth);
            MP.KerbRise.Set(parameters.kerbRise);
            MP.FootpathRise.Set(parameters.footpathRise);
            MP.CrossingRise.Set(parameters.crossingRise);
            MP.RoadThickness.Set(parameters.roadThickness);
            MP.PierSeparation.Set(parameters.pierSeparation);

            if (VRoad.GotPro()) // These parameters are fixed at standard value inside DLL
            {
                MP.BarrierHeight.Set(parameters.barrierHeight);
                MP.HatchRoadLimit.Set(parameters.hatchingRoads);
                MP.HatchRoundabout.Set(parameters.hatchingRadius);
                MP.HatchArea.Set(parameters.hatchingArea);
                MP.OffsetPlanes.Set(parameters.buildingOffsetPlanes);
                MP.HoleMargin.Set(parameters.tunnelHoleMargin);
                MP.HoleApron.Set(parameters.tunnelHoleApron);
                MapFlag.BarrierOutsideWalk.Set(parameters.barrierOutsideWalk);
            }
        }

        private void CreateLayeredTerrainData(int progress)
        {
            if (!HasLayeredTerrain()) return;
            
            Terrain unityTerrain = goMeshTerrainLayered.GetComponent<Terrain>();
            TerrainCollider tc = goMeshTerrainLayered.GetComponent<TerrainCollider>();
            
            unityTerrain.materialTemplate = materials.terrainSpecialShader;
           
            IMap map = App().Map();
            ITerrain terrainGrid = map.Terrain();

            float bb = (float) map.GetBorder();
            float mw = (float) map.GetWidth();
            float mh = (float) map.GetHeight();

            int nSquares = 1 << parameters.terrainResolution;     // == 2^N
            int nPoints = nSquares + 1; // 513; // 1025; // 2049; // 4097; 
            
            float stepX = mw / (float) nSquares;
            float stepY = mh / (float) nSquares;

            // heightmap values must be in the range 0..1
            float[,] heightMap = new float[nPoints, nPoints];

            // First iteration finds min/max height and height range
            float hMin = float.MaxValue;
            float hMax = -float.MaxValue;
            for (int xi = 0; xi < nPoints; xi++)
            {
                for (int yi = 0; yi < nPoints; yi++)
                {
                    float h = (float) terrainGrid.GetHeightTri(-bb + stepX * xi, -bb + stepY * yi, parameters.waterDepth);
                    // heightMap[nr-1-xi, nr-1-yi] = h;
                    heightMap[yi, xi] = h;

                    if (h < hMin) hMin = h;
                    if (h > hMax) hMax = h;
                }
            }

            // Second iteration normalizes height to range [0..1] as this is required
            float hRange = hMax - hMin;
            for (int xi = 0; xi < nPoints; xi++)
            {
                for (int yi = 0; yi < nPoints; yi++)
                {
                    float h = heightMap[xi, yi];
                    heightMap[xi, yi] = (h - hMin) / hRange;
                }
            }

            // Set the base of the terrain to the minimum height, maximum height set in terrainData.size 
            goMeshTerrainLayered.transform.localPosition = new Vector3(-bb, hMin, -bb);

            TerrainData terrainData = new TerrainData();
            terrainData.heightmapResolution = nPoints;
            terrainData.size = new Vector3(mw, hRange, mh);
            terrainData.SetHeights(0, 0, heightMap);
            
            unityTerrain.terrainData = terrainData;
            tc.terrainData = terrainData;

            Terrain.SetConnectivityDirty();

            terrainLayer = new TerrainLayer();
            terrainLayer.name = SD.TERRAIN + SC.UL + App().Map().GetSuburb();
            
            if (aerialTextureLoaded) 
            { 
                terrainLayer.diffuseTexture = aerialTexCrop;
                terrainLayer.tileSize = new Vector2(mw, mh); 
            }
            else if (materials.terrain.mainTexture is Texture2D terrTex)
            {
                 terrainLayer.diffuseTexture = terrTex;
                 terrainLayer.tileSize = new Vector2(16, 16); 
            }
            terrainData.terrainLayers = new TerrainLayer[] {terrainLayer};

            SetupTerrainData(terrainData);
            
            bool[][] holeDataJagged = terrainGrid.HoleData(nPoints);
            if (holeDataJagged != null && holeDataJagged.Length > 0)
            {
                int nx = holeDataJagged.Length;
                int ny = holeDataJagged[0].Length;

                bool[,] holeData = new bool[ny, nx]; // convert array AND invert axes
                for (int xi = 0; xi < nx; xi++)
                {
                    for (int yi = 0; yi < ny; yi++) { holeData[yi, xi] = holeDataJagged[xi][yi]; }
                }

                terrainData.SetHoles(0, 0, holeData);
            }
            //*/

            terrainData.SyncTexture(TerrainData.HolesTextureName);
        }

        protected virtual void SetupTerrainData(TerrainData terrainData) { }
       
        protected virtual void OnMeshCreationFinish() { }

        public void MeshesCreate()
        {
            OnMeshCreationStart();

            SetTerrainMaterial();

            StartCoroutine(CreateMapMeshes(multiMesh, mixedMesh));
        }

        public virtual void UAppStateChanged(AppStateTransition ast) { }

        public void TimeSec()
        {
            double now = App().Sim().TimeNow();

            KList<ITurn> turnsJustChangedList = new KList<ITurn>();
            KList<ICrossing> crossingsJustChangedList = new KList<ICrossing>();

            foreach (ITurn turn in App().Map().Turns())
            {
                double changeTime = turn.LastChangeTime();
                if (changeTime == 0) continue;

                if (now - changeTime < 1.1) { turnsJustChangedList.Add(turn); }
            }

            turnsJustChangedArray = turnsJustChangedList.ToArray();

            foreach (ICrossing x in App().Map().Crossings())
            {
                if (x.IsRedGreen())
                {
                    double changeTime = x.LastChangeTime();
                    if (changeTime == 0) continue;

                    if (now - changeTime < 1.1) { crossingsJustChangedList.Add(x); }

                }
            }

            crossingsJustChangedArray = crossingsJustChangedList.ToArray();
        }

        /// <summary> Return 0=Green, 1=Yellow, 2 = Red or -1 for Off </summary>
        // Order is to match submesh/materials array { green, yellow, red, } see Streme.SignalHeadTriMesh
        private int SignalColourIndex(ITurn turn)
        {
            Signal signal = turn.CurrentSignal();

            if (signal == Signal.Red) return 2;
            if (signal == Signal.Yellow) return 1;
            if (signal == Signal.YellowFlashing) return 1;
            if (signal == Signal.Green) return 0;
            if (signal == Signal.GreenYield) return 0;
            if (signal == Signal.GreenStop) return 0;

            return -1;
        }

        
        protected virtual void UpdateDisplay()
        {
            if (!meshesCreated) return;

            ITurn[] ta = turnsJustChangedArray;
            turnsJustChangedArray = IZero.ZERO_ITURN;

            if (!signalsInit)
            {
                signalsInit = true;
                List<ITurn> list = new List<ITurn>();
                foreach (ITurn t in App().Map().Turns())
                {
                    if (t.CurrentSignal().IsVariable()) list.Add(t);
                    
                }
                turnsJustChangedArray = list.ToArray();
            }
            if (ta.Length > 0)
            {
                Material matOff = signals.off;
                Material[] sigmat =  {signals.green, signals.yellow, signals.red,};
                
                MeshRenderer mr = goMeshSignalArrows.GetComponent<MeshRenderer>();
                // This is an array of references to the shared materials
                // there is one element in the array (one reference) for each submesh
                // These is one submesh for each aspect, so 3 per signal head.
                // There is one signal head per turn
                Material[] mrsma = mr.sharedMaterials;
                int nm = mrsma.Length;

                foreach (ITurn turn in ta)
                {
                    int sci = SignalColourIndex(turn);

                    foreach (IStreme s in turn.GetStremes())
                    {
                        int gmi = stremeGreenMeshIndex.Get(s); // index of green lamp

                        if (gmi < 0 || gmi > nm - 3) continue;
                       
                        for (int ci = 0; ci < 3; ci++)
                        {
                            // If the index of this submesh matches the current turn colour index, then set it to
                            // the material for that colour, otherwise off. That is, for example, if the turn is
                            // at yellow, and this is the yellow lamp submesh then set it to the yellow colour material 
                            mrsma[gmi + ci] = ci == sci? sigmat[sci]: matOff;
                        }
                    }
                }
                
                mr.sharedMaterials = mrsma; // apply the changed materials to the renderer
            }

            ICrossing[] rgxa = crossingsJustChangedArray;
            crossingsJustChangedArray = IZero.ZERO_ICROSSING;

            if (rgxa.Length > 0)
            {
                MeshRenderer mr = goMeshSignalWalks.GetComponent<MeshRenderer>();
                //mr.shadowCastingMode = ShadowCastingMode.Off;
                
                // This is an array of references to the shared materials
                // there must be one element in the array (one reference) for each submesh
                Material[] mrsma = mr.sharedMaterials;

                foreach (ICrossing rgx in rgxa)
                {
                    bool isgreen = rgx.IsWalkOn();
                    
                    int xmi = crossingMeshIndex.Get(rgx);
                    if (xmi < 0 || xmi >= mrsma.Length) { continue; }

                    // previously we used textures, but this did not work so well with saving a prefab
                    //mra[xmi].mainTexture = isgreen ? textures.crossingGreenMan : textures.crossingRedMan;

                    mrsma[xmi] = isgreen ? decals.walkGreen : decals.walkRed;
                }
                
                mr.sharedMaterials = mrsma; // apply the changed materials to the renderer
            }
        }


        protected virtual void AddExtraMultiSubMesh(int progress) { }
        protected virtual void AddExtraSingleSubMesh(int progress) { }


        protected void CreateMesh(int progress, GameObject goMesh, SubMesh subMesh)
        {
            CreateMesh(goMesh.GetComponent<MeshFilter>(),  subMesh);

            if (progress > 0) Reporter.Progress(progress);
        }


        private static bool allowBigMeshes = true;
        private static bool quickSingleMesh = true;

        protected void CreateMesh(int progress, GameObject goMesh, SubMesh[] subMeshArray)
        {
            CreateMesh(goMesh.GetComponent<MeshFilter>(), goMesh.GetComponent<MeshRenderer>(), subMeshArray);
            Reporter.Progress(progress);
        }

        public static void CreateMesh(MeshFilter mf, MeshRenderer mr, SubMesh[] sma)
        {
            Mesh mesh = mf.mesh;
            mesh.Clear();

            int nsm = sma.Length;

            if (quickSingleMesh && nsm == 1)
            {
                SubMesh subMesh = sma[0];

                SetBigMeshFlag(mesh, subMesh.Vertices.Length, subMesh.Triangles.Length);

                mesh.subMeshCount = 1;
                mesh.vertices = subMesh.Vertices;
                mesh.normals = subMesh.Normals;
                mesh.uv = subMesh.TexUV;
                mesh.SetTriangles(subMesh.Triangles, 0, true, 0);
            }
            else
            {
                int nv = 0;
                int nt = 0;

                // count total vertices in all sub-meshes
                foreach (SubMesh subMesh in sma)
                {
                    if (subMesh == null) continue;

                    nv += subMesh.Vertices.Length;
                    nt += subMesh.Triangles.Length;
                }

                SetBigMeshFlag(mesh, nv, nt);
                Vector3[] vertices = new Vector3[nv];
                Vector3[] normals = new Vector3[nv];
                Vector2[] texUV = new Vector2[nv];

                int baseVertex = 0;
                foreach (SubMesh subMesh in sma)
                {
                    if (subMesh == null) continue;

                    int nvSubMesh = subMesh.Vertices.Length;

                    Array.Copy(subMesh.Vertices, 0, vertices, baseVertex, nvSubMesh);
                    Array.Copy(subMesh.Normals, 0, normals, baseVertex, nvSubMesh);
                    Array.Copy(subMesh.TexUV, 0, texUV, baseVertex, nvSubMesh);

                    baseVertex += nvSubMesh;
                }

                mesh.subMeshCount = nsm;
                mesh.vertices = vertices;
                mesh.normals = normals;
                mesh.uv = texUV;

                baseVertex = 0;
                int subMeshIndex = 0;
                int[] zeroTri = new int[0];

                foreach (SubMesh subMesh in sma)
                {
                    int nvSubMesh = subMesh?.Vertices.Length ?? 0;
                    int[] tvia = subMesh == null ? zeroTri : subMesh.Triangles;
                    mesh.SetTriangles(tvia, subMeshIndex++, true, baseVertex);

                    baseVertex += nvSubMesh;
                }
            }

            mf.mesh = mesh;

            if (mr != null)
            {
                // On the renderer, there needs to be an array of material references, the same size as the
                // number of sub meshes: one (reference to a) material per submesh. If there are 100 submeshes
                // this does not mean that there are 100 materials, just 100 references
                //
                // Pass in an array of materials, each material is different, but ht number may be small.
                // Each sub-mesh has a material index, or if it is not set, then it defaults to [0]
                // A new material (references) array is created, one element for each submesh, and each element
                // is a reference to one of the original materials (Renderer.sharedMaterial uses a reference, whereas 
                // Renderer.material creates a cloned instance
                
                Material[] ma = new Material[nsm];
                Material[] mra = mr.sharedMaterials;
                for (int i = 0; i < nsm; i++)
                {
                    SubMesh subMesh = sma[i];
                    int mati = subMesh?.MaterialIndex ?? 0;
                    if (mati < 0 || mati >= mra.Length) mati = 0;
                    ma[i] = mr.sharedMaterials[mati];
                }

                mr.sharedMaterials = ma;
            }
        }

        /// Call this if all meshes should be rendered with the same material, taken from the parent goMesh
        protected void CreateNamedMeshObjects(int progress, GameObject goMesh, NamedSubMesh[] nmoa)
        {
            CreateNamedMeshObjects(progress, goMesh, nmoa, null, null);
        }

        private void CreateNamedMeshObjects(int progress, GameObject goMesh, NamedSubMesh[] nsma, Material[] ma, int[] mia)
        {
            if (goMesh.transform.childCount > 0)
            {
                foreach (Transform child in goMesh.transform) GameObject.Destroy(child.gameObject);
            }

            MeshRenderer mr = goMesh.GetComponent<MeshRenderer>();
            Material parentMaterial = mr.sharedMaterial;
            int nnsm = nsma.Length;
            bool useParentMaterialForAll;
            bool oneToOneMaterialToMesh;
            
            if (ma == null)
            {
                useParentMaterialForAll = true;
                oneToOneMaterialToMesh = false;
            }
            else
            {
                useParentMaterialForAll = false;
                oneToOneMaterialToMesh = (mia == null && ma.Length == nnsm);
            }

            

            for(int nsmi = 0; nsmi < nnsm; nsmi++)
            {
                NamedSubMesh nsm = nsma[nsmi];
                if (nsm.Vertices.Length == 0) continue;
                
                GameObject go = new GameObject(nsm.GameObjectName, typeof(MeshFilter), typeof(MeshRenderer));
               
                MeshFilter mf = go.GetComponent<MeshFilter>();
                Mesh mesh = mf.mesh;

                SetBigMeshFlag(mesh, nsm.Vertices.Length, nsm.Triangles.Length);

                mesh.subMeshCount = 1;
                mesh.vertices = nsm.Vertices;
                mesh.normals = nsm.Normals;
                mesh.uv = nsm.TexUV;
                mesh.SetTriangles(nsm.Triangles, 0, true, 0);

                mr = go.GetComponent<MeshRenderer>();

                
                if (useParentMaterialForAll)
                {
                    mr.sharedMaterials = new[] { parentMaterial, };
                }
                else if (oneToOneMaterialToMesh)
                {
                    mr.sharedMaterials = new[] { ma[nsmi], };
                }
                else
                {
                    int index = mia[nsmi];
                    
                    if (index < 0 || index >= ma.Length)  
                        mr.sharedMaterials = new[] { parentMaterial, };
                    else mr.sharedMaterials = new[] { ma[index], };
                }

                go.transform.parent = goMesh.transform;
                
                FireNewNamedSubMesh(nsm, go);
            }

            FireNewGoMesh(goMesh);

            Reporter.Progress(progress);
        }

        protected virtual void FireNewNamedSubMesh(NamedSubMesh nsm, GameObject go) { }
        

        protected virtual void FireNewGoMesh(GameObject goMesh) { }

        protected void DestroyChild(GameObject goMesh, string childName)
        {
            Transform prevChild = goMesh.transform.Find(childName);
            if (prevChild != null)   Destroy(prevChild.gameObject);
            // else Debug.LogWarning(goMesh + " - DestroyChild did not find child "+childName);
        }
        
        protected void AddChild(GameObject goMesh, NamedSubMesh nsm, Material mat, bool destroyPrevious)
        {
            if (nsm == null) return;
            if (destroyPrevious) DestroyChild(goMesh, nsm.GameObjectName); 

            MeshRenderer mr = goMesh.GetComponent<MeshRenderer>();
            Material parentMaterial = mr.sharedMaterial;
            
            GameObject go = new GameObject(nsm.GameObjectName, typeof(MeshFilter), typeof(MeshRenderer));
                
            MeshFilter mf = go.GetComponent<MeshFilter>();
            Mesh mesh = mf.mesh;

            SetBigMeshFlag(mesh, nsm.Vertices.Length, nsm.Triangles.Length);

            mesh.subMeshCount = 1;
            mesh.vertices = nsm.Vertices;
            mesh.normals = nsm.Normals;
            mesh.uv = nsm.TexUV;
            mesh.SetTriangles(nsm.Triangles, 0, true, 0);

            mr = go.GetComponent<MeshRenderer>();

            if (mat == null) mat = parentMaterial;
            
            mr.sharedMaterials = new[] { mat, };
            go.transform.parent = goMesh.transform;
            
            FireNewNamedSubMesh(nsm, go);
        }
        
        public static void CreateMesh(MeshFilter mf,  SubMesh subMesh)
        {
            Mesh mesh = mf.mesh;
            mesh.Clear();

            SetBigMeshFlag(mesh, subMesh.Vertices.Length, subMesh.Triangles.Length);

            mesh.subMeshCount = 1;
            mesh.vertices = subMesh.Vertices;
            mesh.normals = subMesh.Normals;
            mesh.uv = subMesh.TexUV;

            mesh.SetTriangles(subMesh.Triangles, 0, true, 0);
            mf.mesh = mesh; // 20220404
        }

        // By default, a mesh allows only 64K vertices (or triangles?) in all its sub-meshes combined.
        // larger meshes need to set this flag BEFORE setting triangle data
        // These larger meshes might not be supported on some hardware
        private static void SetBigMeshFlag(Mesh mesh, int nv, int nt)
        {
            if (allowBigMeshes && (nv > 65535 || nt > 65535)) mesh.indexFormat = IndexFormat.UInt32;
        }

        NamedSubMesh[] LanesByMarking()
        {
            ILane[] mapLanes = App().Map().Lanes();
            
            // There are 8 possible configurations for drawing a lane, but only 6 of them can occur for 
            // when driving on left side of road, and another 6 for right
            
            // 0 = single-lane, one side of two-way road
            // 1 = single-lane, one-way (or adjacent to median strip)
            // 2 = kerb lane, at least one other lane in this direction
            // 3 = middle lane, at least one lane on either side
            // 4 = median lane, at least one lane to kerb side, adjacent to opposite-direction lane
            // 5 = median lane, edge of one-way road (or adjacent to median strip)

            // However, it is arguably clearer to create a child object for each possible marking type,
            // even though 2 (of 12) will always be of zero size
            
            // Create an array for each possible lane marking value
            int laneMarkingMax = SA.MARKING_LABEL.Length;
            NamedSubMesh[] sma = new NamedSubMesh[laneMarkingMax];
            List<TriMesh>[] tmla = new List<TriMesh>[laneMarkingMax];

            for (int mi = 0; mi < laneMarkingMax; mi++)
            {
                tmla[mi] = new List<TriMesh>();
            }
            foreach (ILane lane in mapLanes)
            {
                int mi = lane.LaneMarking();
                if (mi < 0 || mi >= laneMarkingMax) mi = 0;
                
                tmla[mi].Add(LocusFullWidthTriMesh(lane, MH.Lane));
            }

            for (int mi = 0; mi < laneMarkingMax; mi++)
            {
                sma[mi] = TriangleNamedSubMesh(SA.MARKING_LABEL[mi], TriMesh.Combine(tmla[mi].ToArray()));
            }
            
            return sma;
        }
        
        NamedSubMesh[] LaneNamedSubMeshArray()
        {
            ILane[] lanes = App().Map().Lanes();
            List<NamedSubMesh> smList = new List<NamedSubMesh>();

            foreach (ILane lane in lanes)
            {
                 smList.Add(LocusFullNamedMesh(lane, lane, 0, 1, 0, MH.Lane));
            }

            return smList.ToArray();
        }

        private int[] SolidBuildingMaterialIndexArray(int nb)
        {
            int[] bmia = new int[nb];
            if (! VRoad.GotPro()) 
            {
                for (int lbi = 0; lbi < nb; lbi++)  bmia[lbi] = -1; 
                return bmia;
            }

            int bi = 0;
            int nbr = buildingMaterialsByType.buildingsResidential.Length;
            int nbc = buildingMaterialsByType.buildingsCommercial.Length;
            int nbi = buildingMaterialsByType.buildingsIndustrial.Length;
            int nbs = buildingMaterialsByType.buildingsStorage.Length;
            IOutline[] outlines = App().Map().Outlines();

            
            foreach (IOutline ol in outlines)
            {
                if (ol.IsBuilding() && !ol.IsBuildingStraddlingRoad())
                {
                    if (bi >= nb) break;
                    
                   
                    int bti = ol.BuildingType(); // this returns -1 if building type is not known 
                    if (bti < 0 && parameters.randomizeBuildings) bti = Rng.NextInt(Rng.Vein.BUILD_MISC, 4);

                    int bmi = BuildingMaterialIndex(nbr, nbc, nbi, nbs, bti);

                   
                    bmia[bi++] = bmi;
                }
            }

            return bmia;
        }

        private int BuildingMaterialIndex(int nbr, int nbc, int nbi, int nbs, int bti)
        {
            int bmi = -1; // this means use parent material

            if /**/ (bti == 0 && nbr > 0) bmi = Rng.NextInt(Rng.Vein.BUILD_MISC, nbr);
            else if (bti == 1 && nbc > 0) bmi = nbr + Rng.NextInt(Rng.Vein.BUILD_MISC, nbc);
            else if (bti == 2 && nbi > 0) bmi = nbr + nbc + Rng.NextInt(Rng.Vein.BUILD_MISC, nbi);
            else if (bti == 3 && nbs > 0) bmi = nbr + nbc + nbi + Rng.NextInt(Rng.Vein.BUILD_MISC, nbs);

            return bmi;
        }
        NamedSubMesh[] SolidBuildingsRandomized()
        {
            int nbr = buildingMaterialsByType.buildingsResidential.Length;
            int nbc = buildingMaterialsByType.buildingsCommercial.Length;
            int nbi = buildingMaterialsByType.buildingsIndustrial.Length;
            int nbs = buildingMaterialsByType.buildingsStorage.Length;

            int nbt = nbr + nbc + nbi + nbs;
            if (nbt == 0) nbt = 1;
            
            List<TriMesh>[] tmla = new List<TriMesh>[nbt];
            for (int i = 0; i < nbt; i++) { tmla[i] = new List<TriMesh>(); }

            IOutline[] outlines = App().Map().Outlines();
            foreach (IOutline ol in outlines)
            {
                if (ol.IsBuilding() && !ol.IsBuildingStraddlingRoad())
                {
                    int bti = ol.BuildingType(); // this returns -1 if building type is not known 
                    if (bti < 0 && parameters.randomizeBuildings) bti = Rng.NextInt(Rng.Vein.BUILD_MISC, 4);

                    int bmi = BuildingMaterialIndex(nbr, nbc, nbi, nbs, bti);
                    if (bmi < 0 || bmi >= nbt) bmi = 0;
                    
                    TriMesh walls = ol.WallsTriMesh();
                    TriMesh roof = ol.UpperSurfaceTriMesh();

                    tmla[bmi].Add(TriMesh.Combine(new[] {walls, roof,}));
                }
            }

            NamedSubMesh[] sma = new NamedSubMesh[nbt];
            for (int mi = 0; mi < nbt; mi++)
            {
                sma[mi] = TriangleNamedSubMesh(SA.BUILDING_GROUP + mi, TriMesh.Combine(tmla[mi].ToArray()));
            }

            return sma;
        }

        private int[] LaneMaterialIndexArray()
        {
            ILane[] lanes = App().Map().Lanes();
            int n = lanes.Length;
            int[] mia = new int[n];
            for (int li = 0; li < n; li++)
            {
                ILane lane = lanes[li];

                mia[li] = lane.LaneMarking();
            }
            return mia;
        }
        
        NamedSubMesh[] JunctionNamedSubMeshArray(KHash<IJunction, TriMesh> junctionToUpper)
        {
            IJunction[] jna = App().Map().Junctions();
            List<NamedSubMesh> smList = new List<NamedSubMesh>();

            foreach (IJunction jn in jna)
            {
                TriMesh upper = jn.UpperSurfaceTriMesh();
                junctionToUpper.Put(jn, upper);
                
                smList.Add(TriangleNamedSubMesh(jn, upper));
            }

            return smList.ToArray();
        }

        SubMesh JunctionSubMesh(KHash<IJunction, TriMesh> junctionToUpper)
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IJunction jn in App().Map().Junctions())
            {
                TriMesh upper = jn.UpperSurfaceTriMesh();
                junctionToUpper.Put(jn, upper);
                tml.Add(upper);
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        protected NamedSubMesh TurnArrowNamedSubMesh(ILane ln)
        {
            TriMesh triMeshShaft = ln.TurnArrowShaftTriMesh();
            // If it has no turn arrows, triMeshShaft will be TriMesh.EMPTY_TRIMESH

            if (triMeshShaft.TriangleArray().Length == 0) return null;


            IStreme[] soa = ln.GetStremeO();
            TriMesh[] tma = new TriMesh[1 + soa.Length];
            tma[0] = triMeshShaft;

            for (int i = 0; i < soa.Length; i++) tma[1 + i] = soa[i].TurnArrowTriMesh();

            return TriangleNamedSubMesh(ln, TriMesh.Combine(tma));
        }

        NamedSubMesh[] TurnArrowNamedSubMeshArray()
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            foreach (ILane ln in App().Map().Lanes())
            {
                NamedSubMesh nsm = TurnArrowNamedSubMesh(ln);
                if (nsm != null) sml.Add(nsm);
            }

            return sml.ToArray();
        }

        SubMesh TurnArrowSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IStreme s in App().Map().Stremes())
            {
                tml.Add(s.TurnArrowTriMesh());
            }

            foreach (ILane ln in App().Map().Lanes())
            {
                tml.Add(ln.TurnArrowShaftTriMesh());
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        NamedSubMesh[][] SignalHeadNamedSubMeshArray()
        {
            List<NamedSubMesh> smlb = new List<NamedSubMesh>();
            List<NamedSubMesh> smla = new List<NamedSubMesh>();

            IStreme[] stremes = App().Map().Stremes();

            foreach (IStreme s in stremes)
            {
                if (!s.GetJunction().IsSignalized()) continue;

                /** Returns 4 meshes, [0] = signal head box, [1] = green, [2] = yellow, [3] = red */
                TriMesh[] shtma = s.SignalHeadTriMesh();
                if (shtma != null && shtma.Length == 4)
                {
                    smlb.Add(TriangleNamedSubMesh(s, shtma[0]));

                    int gmi = smla.Count;
                    stremeGreenMeshIndex.Put(s, gmi);

                    smla.Add(TriangleNamedSubMesh(s, shtma[1]));
                    smla.Add(TriangleNamedSubMesh(s, shtma[2]));
                    smla.Add(TriangleNamedSubMesh(s, shtma[3]));
                }
            }

            NamedSubMesh[][] sma = new NamedSubMesh[2][];
            sma[0] = smlb.ToArray();
            sma[1] = smla.ToArray();

            return sma;
        }

        // Signal arrows change colour, so they must have variable materials: we need one sub mesh per signal arrow
        SubMesh[] SignalArrowSubMeshArray()
        {
            List<SubMesh> smla = new List<SubMesh>();

            IStreme[] stremes = App().Map().Stremes();

            foreach (IStreme s in stremes)
            {
                if (!s.GetJunction().IsSignalized()) continue;

                TriMesh[] shtma = s.SignalHeadTriMesh();
                if (shtma != null && shtma.Length == 4)
                {
                    int gmi = smla.Count;
                    stremeGreenMeshIndex.Put(s, gmi);

                    smla.Add(TriangleSubMesh(shtma[1]));
                    smla.Add(TriangleSubMesh(shtma[2]));
                    smla.Add(TriangleSubMesh(shtma[3]));
                }
            }

            return smla.ToArray();
        }

        // The signal head boxes do not change state/colour, so can be safely combined int a single object
        SubMesh SignalBoxSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();
            IStreme[] stremes = App().Map().Stremes();

            foreach (IStreme s in stremes)
            {
                if (!s.GetJunction().IsSignalized()) continue;

                TriMesh[] shtma = s.SignalHeadTriMesh();
                if (shtma != null && shtma.Length == 4) { tml.Add(shtma[0]); }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        // Returns a sub-mesh for each Red-Green crossing, each has its own material, which can be switched
        // to red or green as required
        NamedSubMesh[] WalkSignalNamedSubMeshArray()
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            ICrossing[] crossings = App().Map().Crossings();

            foreach (ICrossing x in crossings)
            {
                if (x.IsRedGreen())
                {
                    TriMesh[] tma = x.SignalTriMesh();

                    if (tma != null && tma.Length == 2) // One mesh for each end of the crossing (direction of flow)
                    {
                        TriMesh ctma = TriMesh.Combine(tma);
                        sml.Add(TriangleNamedSubMesh(x, ctma));
                        //sml.Add(TriangleNamedSubMesh(x, tma[0]));
                        //sml.Add(TriangleNamedSubMesh(x, tma[1]));
                    }
                }
            }

            return sml.ToArray();
        }

        SubMesh[] WalkSignalSubMeshArray()
        {
            List<SubMesh> sml = new List<SubMesh>();

            ICrossing[] crossings = App().Map().Crossings();

            foreach (ICrossing x in crossings)
            {
                if (x.IsRedGreen())
                {
                    TriMesh[] tma = x.SignalTriMesh();

                    if (tma != null && tma.Length == 2) // One mesh for each end of the crossing (direction of flow)
                    {
                        crossingMeshIndex.Put(x, sml.Count);
                        TriMesh ctma = TriMesh.Combine(tma);
                        sml.Add(TriangleSubMesh(x, ctma));
                        //sml.Add(TriangleSubMesh(x, tma[0]));
                        //sml.Add(TriangleSubMesh(x, tma[1]));
                    }
                }
            }

            return sml.ToArray();
        }

        SubMesh[] StopSubMeshArray()
        {
            float dz = 0.05f;
            List<SubMesh> sml = new List<SubMesh>();

            IStop[] stops = App().Map().Stops();
            foreach (IStop stop in stops)
            {
                if (stop.IsAtKerb() && stop.GetHalts().Length > 0)
                {
                    stopMeshIndex.Put(stop, sml.Count);
                    AddTriangleSubMesh(sml, stop.BusBayTriMesh(), dz);
                }
            }

            return sml.ToArray();
        }

        NamedSubMesh[] StopNamedSubMeshArray()
        {
            float dz = 0.05f;
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            IStop[] stops = App().Map().Stops();
            foreach (IStop stop in stops)
            {
                if (stop.IsAtKerb() && stop.GetHalts().Length > 0)
                {
                    stopMeshIndex.Put(stop, sml.Count);
                    sml.Add(TriangleNamedSubMesh(stop, stop.BusBayTriMesh(), dz));
                }
            }

            return sml.ToArray();
        }

        protected virtual Color StopColor(IStop stop)
        {
            return Color.white;
        }

        protected virtual bool StopColorCanChange()
        {
            return false;
        }

        SubMesh StopSubMesh()
        {
            float dz = 0.05f;
            List<TriMesh> tml = new List<TriMesh>();

            IStop[] stops = App().Map().Stops();
            foreach (IStop stop in stops)
            {
                if (stop.IsAtKerb() && stop.GetHalts().Length > 0) { tml.Add(stop.BusBayTriMesh()); }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()), dz);
        }

        protected void UpdateBusStopColours()
        {
            MeshRenderer mr = goMeshBusStops.GetComponent<MeshRenderer>();
            Material[] mra = mr.materials;

            foreach (IStop stop in App().Map().Stops())
            {
                if (stop.IsAtKerb() && stop.GetHalts().Length > 0)
                {
                    int xmi = stopMeshIndex.Get(stop);

                    Material mat = mra[xmi];
                    Color colorOld = mat.color;
                    Color colorNew = StopColor(stop);
                    if (!colorNew.Equals(colorOld)) { mat.color = colorNew; }
                }
            }
        }

        NamedSubMesh[] ParkingNamedSubMeshArray(bool dropOff)
        {
            float dz = 0.05f;
            List<NamedSubMesh> sml = new List<NamedSubMesh>();
            
            IDrvZone[] drvZones = App().Map().DrvZones();
            foreach (IDrvZone kz in drvZones)
            {
                if (kz is ITaxiZone vz && vz.IsDropOffOnly() == dropOff)
                {
                    TriMesh tm = vz.ParkingTriMesh();
                    sml.Add(TriangleNamedSubMesh(vz, tm, dz));
                }
            }

            return sml.ToArray();
        }

        SubMesh ParkingSubMesh(bool dropOff)
        {
            float dz = 0.05f;
            List<TriMesh> tml = new List<TriMesh>();
            IDrvZone[] drvZones = App().Map().DrvZones();
            foreach (IDrvZone kz in drvZones)
            {
                if (kz is ITaxiZone vz && vz.IsDropOffOnly() == dropOff) { tml.Add(vz.ParkingTriMesh()); }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()), dz);
        }

        NamedSubMesh[] BuildingNamedSubMeshArray(bool isGlass)
        {
            List<NamedSubMesh> nmol = new List<NamedSubMesh>();

            IOutline[] outlines = App().Map().Outlines();

            foreach (IOutline ol in outlines)
            {
                if (ol.IsBuilding() && isGlass == ol.IsBuildingStraddlingRoad())
                {
                    TriMesh walls = ol.WallsTriMesh();
                    TriMesh roof = ol.UpperSurfaceTriMesh();

                    // SEE ALSO OutlinePolygonXY.texMapMultiplier in Eclipse
                    // SEE ALSO UnityTasks _IDEA_ Generate 3 meshes per building
                    //
                    // We could create a separate mesh for the roof, so that it  could be textured, but to be effective:
                    // - OutlinePolygonXY would need to have access to UseMultipleSubMeshes() so that
                    //   the texMapMultiplier value was returned as 0 for the simple case and a non-zero value for separate meshes
                    // - we would need to create two wrapper objects around outline so that meshes have different names
                    //   Walls_(building), Roof_(building)

                    //nmol.Add(TriangleNamedSubMesh(ol, walls));
                    //nmol.Add(TriangleNamedSubMesh(ol, roof));
                    
                    nmol.Add(TriangleNamedSubMesh(ol, TriMesh.Combine(new[] {walls, roof,})));
                }
            }

            return nmol.ToArray();
        }

        SubMesh BuildingSubMesh(bool isGlass)
        {
            List<TriMesh> tml = new List<TriMesh>();
            IOutline[] outlines = App().Map().Outlines();

            foreach (IOutline ol in outlines)
            {
                if (ol.IsBuilding() && isGlass == ol.IsBuildingStraddlingRoad())
                {
                    tml.Add(ol.WallsTriMesh());

                    tml.Add(ol.UpperSurfaceTriMesh());
                }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        NamedSubMesh[] WaterNamedSubMeshArray()
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            IOutline[] outlines = App().Map().Outlines();

            foreach (IOutline ol in outlines)
            {
                if (ol.IsWater()) { sml.Add(TriangleNamedSubMesh(ol, ol.UpperSurfaceTriMesh())); }
            }

            return sml.ToArray();
        }

        SubMesh WaterSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();
            IOutline[] outlines = App().Map().Outlines();

            foreach (IOutline ol in outlines)
            {
                if (ol.IsWater()) { tml.Add(ol.UpperSurfaceTriMesh()); }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        SubMesh TerrainSubMesh()
        {
            return TriangleSubMesh(App().Map().Terrain().GetTriMesh(HasLayeredTerrain()));
        }

        // The bridge piers and under-surface of bridges, rendered in concrete
        
        private NamedSubMesh[] BridgesNamedSubMeshArray(KHash<IJunction, TriMesh> junctionToUpper, 
            KHash<ICorner, TriMesh> cornerToUpper)
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh triMesh = road.ShoulderTriMesh();
                MaterialHint mh = triMesh.GetMaterialHint();

                if (mh == MH.Bridge)
                {
                    List<TriMesh> tml = new List<TriMesh>();
                    tml.Add(road.BridgePiersTriMesh());

                    foreach (ILane lane in road.GetLanes()) { tml.Add(lane.UnderSurfaceTriMesh(road.Thickness())); }

                    IFootpath fpk = road.GetSideWalkK();
                    if (fpk != null) tml.Add(fpk.UnderSurfaceTriMesh(road.Thickness()));

                    IFootpath fpm = road.GetSideWalkM();
                    if (fpm != null) tml.Add(fpm.UnderSurfaceTriMesh(road.Thickness()));

                    sml.Add(TriangleNamedSubMesh(road, TriMesh.Combine(tml.ToArray())));
                }
            }

            foreach (IJunction jn in App().Map().Junctions())
            {
                if (jn.IsBridge())
                {
                    TriMesh upper = junctionToUpper.Get(jn);
                    if (upper == null) upper = jn.UpperSurfaceTriMesh();
                    sml.Add(TriangleNamedSubMesh(jn, jn.UnderSurfaceTriMesh(upper)));
                }
            }

            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh upper = cornerToUpper.Get(cr);
                if (upper == null) upper = cr.UpperSurfaceTriMesh();
                TriMesh under = cr.UnderSurfaceTriMesh(upper);
                if (under != null) sml.Add(TriangleNamedSubMesh(cr, under));
            }

            return sml.ToArray();
        }

        // The bridge piers and under-surface of bridges, rendered in concrete
        SubMesh BridgesSubMesh(KHash<IJunction, TriMesh> junctionToUpper, KHash<ICorner, TriMesh> cornerToUpper)
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh triMesh = road.ShoulderTriMesh();
                MaterialHint mh = triMesh.GetMaterialHint();

                if (mh == MH.Bridge)
                {
                    tml.Add(road.BridgePiersTriMesh());

                    foreach (ILane lane in road.GetLanes()) { tml.Add(lane.UnderSurfaceTriMesh(road.Thickness())); }

                    IFootpath fpk = road.GetSideWalkK();
                    if (fpk != null) tml.Add(fpk.UnderSurfaceTriMesh(road.Thickness()));

                    IFootpath fpm = road.GetSideWalkM();
                    if (fpm != null) tml.Add(fpm.UnderSurfaceTriMesh(road.Thickness()));
                }
            }

            foreach (IJunction jn in App().Map().Junctions())
            {
                if (jn.IsBridge())
                {
                    TriMesh upper = junctionToUpper.Get(jn);
                    if (upper == null) upper = jn.UpperSurfaceTriMesh();
                    tml.Add(jn.UnderSurfaceTriMesh(upper));
                }
            }

            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh upper = cornerToUpper.Get(cr);
                if (upper == null) upper = cr.UpperSurfaceTriMesh();
                TriMesh under = cr.UnderSurfaceTriMesh(upper);
                if (under != null) tml.Add(under);
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        //
        NamedSubMesh[] ShouldersNamedSubMeshArray(MaterialHint mh1, MaterialHint mh2, float dh = 0)
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();
            IMap map = App().Map();
            foreach (IRoad road in map.Roads())
            {
                TriMesh shoulderTriMesh = road.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { sml.Add(TriangleNamedSubMesh(road, shoulderTriMesh, dh)); }
            }

            foreach (IJunction jn in map.Junctions())
            {
                TriMesh shoulderTriMesh = jn.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { sml.Add(TriangleNamedSubMesh(jn, shoulderTriMesh, dh)); }
            }

            foreach (ICorner cr in map.Corners())
            {
                TriMesh shoulderTriMesh = cr.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { sml.Add(TriangleNamedSubMesh(cr, shoulderTriMesh, dh)); }
            }


            if (mh1 == MaterialHint.Kerbing)
                try
                {
                    double vw = MapParameter.VergeWidth.DoubleValue();
                    double rt = MapParameter.RoadThickness.DoubleValue();
                    foreach (IFootpath fp in map.Footpaths())
                    {
                        if (fp.IsPedway())
                        {
                            sml.Add(TriangleNamedSubMesh(fp, fp.ShoulderTriMesh(false, vw, rt, rt, 0, mh1, null), dh));
                            sml.Add(TriangleNamedSubMesh(fp, fp.ShoulderTriMesh(true, vw, rt, rt, 0, mh1, null), dh));
                        }
                    }
                }
                catch (Exception) { }

            return sml.ToArray();
        }

        /// <summary> Return a sub-mesh for the given material: embankment, bridge, tunnel, etc  </summary>

        SubMesh ShouldersSubMesh(MaterialHint mh1, MaterialHint mh2, float dh = 0)
        {
            List<TriMesh> tml = new List<TriMesh>();
            IMap map = App().Map();

            foreach (IRoad road in map.Roads())
            {
                TriMesh shoulderTriMesh = road.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { tml.Add(shoulderTriMesh); }
            }


            foreach (IJunction jn in map.Junctions())
            {
                TriMesh shoulderTriMesh = jn.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { tml.Add(shoulderTriMesh); }
            }

            foreach (ICorner cr in map.Corners())
            {
                TriMesh shoulderTriMesh = cr.ShoulderTriMesh();
                MaterialHint mh = shoulderTriMesh.GetMaterialHint();

                if (mh == mh1 || mh == mh2) { tml.Add(shoulderTriMesh); }
            }

            if (mh1 == MaterialHint.Kerbing)
                try
                {
                    double vw = MapParameter.VergeWidth.DoubleValue();
                    double rt = MapParameter.RoadThickness.DoubleValue();
                    foreach (IFootpath fp in map.Footpaths())
                    {
                        if (fp.IsPedway())
                        {
                            tml.Add(fp.ShoulderTriMesh(false, vw, rt, rt, 0, mh1, null));
                            tml.Add(fp.ShoulderTriMesh(true, vw, rt, rt, 0, mh1, null));
                        }
                    }
                }
                catch (Exception) { }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()), dh);
        }

        NamedSubMesh[] BarriersNamedSubMeshArray()
        {
            double height = MP.BarrierHeight.DoubleValue();
            if (height < 0.001) return NamedSubMesh.ZERO;

            List<NamedSubMesh> sml = new List<NamedSubMesh>();
            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh barrierTriMesh = road.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) sml.Add(TriangleNamedSubMesh(road, barrierTriMesh)); 
            }
            foreach (IJunction jn in App().Map().Junctions())
            {
                TriMesh barrierTriMesh = jn.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) { sml.Add(TriangleNamedSubMesh(jn, barrierTriMesh)); }
            }
            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh barrierTriMesh = cr.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) { sml.Add(TriangleNamedSubMesh(cr, barrierTriMesh)); }
            }
            return sml.ToArray();
        }
        SubMesh BarriersSubMesh()
        {
            double height = MP.BarrierHeight.DoubleValue();
            if (height < 0.001) return SubMesh.EMPTY_SUBMESH;
            
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh barrierTriMesh = road.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) tml.Add(barrierTriMesh); 
            }
            foreach (IJunction jn in App().Map().Junctions())
            {
                TriMesh barrierTriMesh = jn.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) { tml.Add(barrierTriMesh); }
            }
            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh barrierTriMesh = cr.BarrierTriMesh();
                if (! barrierTriMesh.IsEmpty()) { tml.Add(barrierTriMesh); }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }
        
        NamedSubMesh[] MedianStripNamedSubMeshArray()
        {
            List<NamedSubMesh> sml = new List<NamedSubMesh>();
            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh medianStripTriMesh = road.MedianStripTriMesh();
                if (! medianStripTriMesh.IsEmpty()) sml.Add(TriangleNamedSubMesh(road, medianStripTriMesh)); 
            }
            return sml.ToArray();
        }
        SubMesh MedianStripSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IRoad road in App().Map().Roads())
            {
                TriMesh medianStripTriMesh = road.MedianStripTriMesh();
                if (medianStripTriMesh.Vertices().Length > 0) tml.Add(medianStripTriMesh); 
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        
        // All footpaths and corners
        NamedSubMesh[] FootpathNamedSubMeshArray(KHash<ICorner, TriMesh> cornerToUpper)
        {
            IFootpath[] footpaths = App().Map().Footpaths();

            List<NamedSubMesh> smList = new List<NamedSubMesh>();

            foreach (IFootpath fp in footpaths)
            {
                smList.Add(LocusFullNamedMesh(fp, fp, 0, 1, 0, MH.Walkway));
            }

            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh upper = cr.UpperSurfaceTriMesh();
                cornerToUpper.Put(cr, upper);

                TriMesh sides = cr.WallsTriMesh();
                TriMesh combined = TriMesh.Combine(new TriMesh[] {upper, sides,});
                
                smList.Add(TriangleNamedSubMesh(cr, combined));
            }

            return smList.ToArray();
        }

        SubMesh FootpathSubMesh(KHash<ICorner, TriMesh> cornerToUpper)
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (IFootpath fp in App().Map().Footpaths())
            {
                tml.Add(LocusFullWidthTriMesh(fp, MH.Walkway));
            }

            foreach (ICorner cr in App().Map().Corners())
            {
                TriMesh upper = cr.UpperSurfaceTriMesh();
                cornerToUpper.Put(cr, upper);
                
                TriMesh sides = cr.WallsTriMesh();
                TriMesh combined = TriMesh.Combine(new TriMesh[] {upper, sides,});
                
                tml.Add(combined);
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        // All crossings except Zebras
        NamedSubMesh[] CrossingNamedSubMeshArray()
        {
            List<NamedSubMesh> smList = new List<NamedSubMesh>();

            foreach (ICrossing x in App().Map().Crossings())
            {
                if (!x.IsZebra())
                {
                    smList.Add(LocusFullNamedMesh(x, x, 0, 1, 0, MH.Crossing));
                }
            }

            return smList.ToArray();
        }

        // All crossings except Zebras
        SubMesh CrossingSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (ICrossing x in App().Map().Crossings())
            {
                if (!x.IsZebra())
                {
                    tml.Add(LocusFullWidthTriMesh(x, MH.Crossing));
                }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

        // Zebra crossings only
        NamedSubMesh[] ZebraNamedSubMeshArray()
        {
            List<NamedSubMesh> smList = new List<NamedSubMesh>();
            foreach (ICrossing x in App().Map().Crossings())
            {
                if (x.IsZebra())
                {
                    smList.Add(LocusFullNamedMesh(x, x, 0, 1, 0, MH.Zebra));
                }
            }

            return smList.ToArray();
        }

        SubMesh ZebraSubMesh()
        {
            List<TriMesh> tml = new List<TriMesh>();

            foreach (ICrossing x in App().Map().Crossings())
            {
                if (x.IsZebra())
                {
                    tml.Add(LocusFullWidthTriMesh(x, MH.Zebra));
                }
            }

            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }

      
       
        private void AddTriangleSubMesh(List<SubMesh> sml, TriMesh triMesh)
        {
            sml.Add(TriangleSubMesh(triMesh));
        }

        protected void AddTriangleSubMesh(List<SubMesh> sml, TriMesh triMesh, float dz)
        {
            sml.Add(TriangleSubMesh(triMesh, dz));
        }

        /*
        public static SubMesh LocusSubMesh(ILocus locus, float start, float end, float kw, float mw, float dh,
            MaterialHint mh)
        {
            return TriangleSubMesh(locus.UpperSurfaceTriMesh(start, end, kw, mw, mh), dh);
        }

        private static SubMesh LocusFullSubMesh(ILocus locus, float kw, float mw, float dh, MaterialHint mh)
        {
            return TriangleSubMesh(locus.UpperSurfaceTriMesh(0, 1, kw, mw, mh), dh);
        }
        
        public static TriMesh LocusStripedTriMesh(ILocus locus, int nStripes, MaterialHint mh)
        {
            if (nStripes < 2) nStripes = 2;
            TriMesh[] tma = new TriMesh[nStripes];
            double sw = 1.0 / (nStripes + (nStripes - 1)); // There are (nStripes - 1) gaps between stripes
            double gw = sw;
            for (int si = 0; si < nStripes; si++)
            {
                double kw = (sw + gw) * si;
                double mw = kw + sw;

                tma[si] = locus.UpperSurfaceTriMesh(0, 1, kw, mw, mh);
            }

            return TriMesh.Combine(tma);
        }

        //*/
        
        public static TriMesh LocusTriMesh(ILocus locus, float start, float end, float kw, float mw, MaterialHint mh)
        {
            return locus.UpperSurfaceTriMesh(start, end, kw, mw, mh);
        }

        protected static NamedSubMesh LocusFullNamedMesh(object mapObject, ILocus locus, float kw, float mw, float dh,
            MaterialHint mh)
        {
            return (NamedSubMesh) TriangleSubMesh(mapObject, locus.UpperSurfaceTriMesh(0, 1, kw, mw, mh), dh);
        }

        public static TriMesh LocusFullTriMesh(ILocus locus, float kw, float mw, MaterialHint mh)
        {
            return locus.UpperSurfaceTriMesh(0, 1, kw, mw, mh);
        }

        private static TriMesh LocusFullWidthTriMesh(ILocus locus, MaterialHint mh)
        {
            return locus.UpperSurfaceTriMesh(0, 1, 0, 1, mh);
        }

        private static void CheckValid(Vector3 v)
        {
            if (float.IsInfinity(v.x) || float.IsNaN(v.x)) { v.x = 0; }

            if (float.IsInfinity(v.y) || float.IsNaN(v.y)) { v.y = 0; }

            if (float.IsInfinity(v.z) || float.IsNaN(v.z)) { v.z = 0; }
        }

        private static void CheckValid(Vector2 v)
        {
            if (float.IsInfinity(v.x) || float.IsNaN(v.x)) { v.x = 0; }

            if (float.IsInfinity(v.y) || float.IsNaN(v.y)) { v.y = 0; }
        }

        public static SubMesh TriangleSubMesh(List<TriMesh> tml, float dh, int mati)
        {
            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()), dh, mati);
        }

        public static SubMesh TriangleSubMesh(TriMesh triMesh, float dh = 0, int mati = 0)
        {
            return TriangleSubMesh(null, triMesh, dh, mati);
        }

        public static NamedSubMesh TriangleNamedSubMesh(object mapObject, TriMesh triMesh, float dh = 0, int mati = 0)
        {
            return (NamedSubMesh) TriangleSubMesh(mapObject, triMesh, dh, mati);
        }

        public static SubMesh TriangleSubMesh(object mapObject, TriMesh triMesh, float dh = 0, int mati = 0)
        {
            if (triMesh == null) triMesh = TriMesh.EMPTY_TRIMESH;

            try
            {
                int[] tvia = triMesh.TriangleCornerIndices();
                Xyz[] tva = triMesh.Vertices();
                Xyz[] vna = triMesh.Normals();
                Xy[] texUV = triMesh.TextureUV();

                int nv = tva.Length;

                Vector3[] va = new Vector3[nv];
                Vector2[] uva = new Vector2[nv];
                Vector3[] na = new Vector3[nv];

                for (int vi = 0; vi < nv; vi++)
                {
                    va[vi] = tva[vi] == null? Vector3.zero: tva[vi].ToVector3(dh);
                    na[vi] = vna[vi] == null? Vector3.up: vna[vi].ToVector3();
                    uva[vi] = texUV[vi] == null? Vector2.zero: texUV[vi].ToVector2();

                    CheckValid(va[vi]);
                    CheckValid(na[vi]);
                    CheckValid(uva[vi]);
                }

                if (mapObject == null) return new SubMesh(va, tvia, na, uva, mati);

                return new NamedSubMesh(mapObject, va, tvia, na, uva, mati);

            }
            catch (Exception)
            {
                if (mapObject == null) return SubMesh.EMPTY_SUBMESH;
                return NamedSubMesh.EMPTY_NAMED_SUBMESH;
            }
        }

        private static readonly float TAXI_HEIGHT = 2.0f;
        private static readonly float PARKING_ORIGIN_PYRAMID_HEIGHT = 4f;
        private static readonly float PARKING_ORIGIN_PYRAMID_RADIUS = 2f;
        private static readonly float PARKING_DESTINATION_PYRAMID_HEIGHT = 50f;
        private static readonly float PARKING_DESTINATION_PYRAMID_RADIUS = 10f;

        public static void ParkingOriginTriMeshes(List<TriMesh> triMeshList, ITaxiZone taxiZone)
        {
            int nMarkers = taxiZone.Bays();

            for (int i = 0; i < nMarkers; i++)
            {
                Xyz p = taxiZone.BayCentre(i).PlusZ(TAXI_HEIGHT);
                triMeshList.Add(MeshTools.PyramidTriMesh(p, PARKING_ORIGIN_PYRAMID_HEIGHT,
                    PARKING_ORIGIN_PYRAMID_RADIUS));
            }
        }

        public static TriMesh ParkingDestinationTriMesh(IDrvZone drvZone)
        {
            Xyz p = drvZone.Location().PlusZ(TAXI_HEIGHT);

            return MeshTools.PyramidTriMesh(p, PARKING_DESTINATION_PYRAMID_HEIGHT, PARKING_DESTINATION_PYRAMID_RADIUS);
        }

        private static readonly float BOARD_STAND_PYRAMID_HEIGHT = 4f;
        private static readonly float BOARD_STAND_PYRAMID_RADIUS = 2f;
        private static readonly float BAIL_STAND_PYRAMID_HEIGHT = 50f;
        private static readonly float BAIL_STAND_PYRAMID_RADIUS = 10f;
        private static readonly float BUS_HEIGHT = 2.2f;

        public static TriMesh StopTriMesh(IStop stop, bool boarding)
        {
            Xyz p = stop.Position().PlusZ(BUS_HEIGHT);

            if (boarding) return MeshTools.PyramidTriMesh(p, BOARD_STAND_PYRAMID_HEIGHT, BOARD_STAND_PYRAMID_RADIUS);
            return MeshTools.PyramidTriMesh(p, BAIL_STAND_PYRAMID_HEIGHT, BAIL_STAND_PYRAMID_RADIUS);
        }

#if UNITY_EDITOR

        private void SaveMesh(string meshPath, GameObject meshGO, string meshName, bool optimize)
        {
            string meshAssetPath = meshPath + meshName + SA.SUFFIX_ASSET; // a relative name
            
            MeshFilter mf = meshGO.GetComponent<MeshFilter>();
            Mesh mesh = mf.sharedMesh;
           
            if (mesh.triangles.Length > 0)
            {
                // If it has a mesh collider, make sure it has a reference to the mesh here
                MeshCollider mc = meshGO.GetComponent<MeshCollider>();
                if (mc != null) mc.sharedMesh = mesh;
            
                if (optimize) UnityEditor.MeshUtility.Optimize(mesh);
            }

            UnityEditor.AssetDatabase.CreateAsset(mesh, meshAssetPath);
        }

        public string SaveMapMesh()
        {
            string name = App().Map().GetSuburb();
            string meshStem = MeshTools.VRoadRoot() + SC.FS + SA.MESH_GEN_DIR + SC.FS + name;
            string meshPath = meshStem + SC.FS; // This is a relative path
            int suffix = 1;
            KDir meshDir = new KDir(meshPath); // This is an absolute path

            while (meshDir.Exists())
            {
                suffix++;
                meshPath = meshStem + suffix + SC.FS;
                meshDir = new KDir(meshPath);
            }

            meshDir.Create();

            try
            {
                UnityEditor.AssetDatabase.StartAssetEditing();

                if (HasLayeredTerrain()) // Change 20230125
                {
                    UnityEditor.AssetDatabase.CreateAsset(terrainLayer, meshPath + terrainLayer.name + SA.SUFFIX_TERRAIN_LAYER);
                }

                if (saveAerialWithPrefab)
                {
                    UnityEditor.AssetDatabase.CreateAsset(aerialTexCrop, meshPath +aerialTexCrop.name +SA.SUFFIX_TEX);
                    UnityEditor.AssetDatabase.CreateAsset(aerialMaterial, meshPath +aerialMaterial.name +SA.SUFFIX_MAT);
                    // Use this to save aerial image as PNG to manually apply to terrain in Blender
                    // System.IO.File.WriteAllBytes(meshPath+aerialTexCrop.name+".png", aerialTexCrop.EncodeToPNG());
                }

                foreach (GameObject goMesh in listOfGoMeshes)
                {
                    bool optimize = OptimizeMesh(goMesh);
                    int nc = goMesh.transform.childCount;

                    if (nc > 0)
                    {
                        for (int ci = 0; ci < nc; ci++)
                        {
                            GameObject childGO = goMesh.transform.GetChild(ci).gameObject;
                            SaveMesh(meshPath, childGO, MeshName(goMesh, ci), optimize);
                        }
                    }
                    else { SaveMesh(meshPath, goMesh, goMesh.name, optimize); }
                }

            }
            catch (Exception x)
            {
                Debug.LogException(x);
            }
            finally
            {
                UnityEditor.AssetDatabase.StopAssetEditing();
                UnityEditor.AssetDatabase.SaveAssets();
            }

            return meshPath;
        }

        /// <summary> The name of the mesh file to be saved as (name).asset </summary>
        // The street name etc (which is in the name of the child game object) does not need to be
        // used as part of the mesh name, instead use the simpler format Lanes_0345 
        private string MeshName(GameObject parentGO, int ci)
        {
            string meshName = KFormat.Sprintf(SA.PREFAB_MESH_NAME_FMT, parentGO.name, ci);

            // this can be used to exclude non-filename chars, if using the child name
            // parent game object names are simple
            // meshName = SP.SubNonFilenameChars(meshName);
            
            return meshName;
        }
        private bool OptimizeMesh(GameObject goMesh)
        {
            if (goMesh == goMeshSignalArrows) return false;
            if (goMesh == goMeshSignalWalks) return false;
            return true;
        }
        public string SaveMapAsPrefab()
        {
            GameObject mapGO = goMeshLanes.transform.parent.gameObject;
            string name = App().Map().GetSuburb();

            string prefabStem = MeshTools.VRoadRoot() + SC.FS + SA.PREFAB_GEN_DIR + SC.FS + name;
            string prefabPath = prefabStem + SA.SUFFIX_PREFAB;
            KFile file = new KFile(prefabPath);
            int suffix = 1;
            
            while (file.Exists())
            {
                suffix++;
                prefabPath = prefabStem + suffix + SA.SUFFIX_PREFAB;
                file = new KFile(prefabPath);
            }
            
           
            UnityEditor.PrefabUtility.SaveAsPrefabAsset(mapGO, prefabPath);
           
            return prefabPath;
        }

        private bool saveAerialWithPrefab;
        private void SaveAerialWithPrefab(bool b) { saveAerialWithPrefab = b; }
#else
        private void SaveAerialWithPrefab(bool b) { }
#endif
    }
}