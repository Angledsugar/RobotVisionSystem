using System.Collections.Generic;
using uk.vroad.api;
using uk.vroad.api.edit;
using uk.vroad.api.enums;
using uk.vroad.api.geom;
using uk.vroad.api.map;
using uk.vroad.api.str;
using uk.vroad.api.xmpl;
using uk.vroad.apk;
using uk.vroad.ucm;

using UnityEngine;
using MH = uk.vroad.api.enums.MaterialHint;

namespace uk.vroad.ucm
{
    public abstract class UaMapMeshMod: UaMapMesh
    {
        protected const string MESH_ROAD_POINTS = "RoadPoints";
        protected const string MESH_PED_POINTS = "PedWayPoints";
        protected const string MESH_BUILD_POINTS = "BuildingPoints";
        protected const string MESH_MOVED_LINES = "MovedLines";
        protected const string HIGHLIGHT_MAT = "Highlights";

        private const string WARN_1 = "No map object for NamedSubMesh ";
        private const string WARN_2 = "No parent for map object ";

        protected static readonly Color HI_COL_050 = new Color(.9f, 0.7f, 0.08f, 0.2f);
        protected static readonly Color HI_COL_100 = new Color(.8f, 0.6f, 0.016f, 1.0f);
        protected static readonly Color ROAD_PT_COL = new Color(0.1f, 0.1f, 1f, 0.5f);
        protected static readonly Color PED_PT_COL = new Color(0.1f, 0.5f, 0.6f, 1f);
        protected static readonly Color BUILD_PT_COL = new Color(0.4f, 0.4f, 0.4f, 1f);
        protected static readonly Color LINE_COL = new Color(0.1f, 0.5f, 0.9f, 0.5f);
        protected static readonly Color STRETCH_COL_A = new Color(0.9f, 0.5f, 0.5f, 0.5f);
        protected static readonly Color STRETCH_COL = new Color(0.9f, 0.9f, 0.9f, 0.5f);
        
        protected const double POINT_ICON_SIZE = 0.2;
        protected const double POINT_ICON_LIFT = 0.4;
        protected const double MOVED_LINE_WIDTH = 0.2;
        protected const double MOVED_LINE_LIFT = 0.3;

        protected GameObject goMeshRoadPoints;
        protected GameObject goMeshPedPoints;
        protected GameObject goMeshBuildPoints;
        protected GameObject goMeshMovedLines;
        
        protected Material highlightGlassMaterial;
        protected Material highlightSolidMaterial;

        protected IMapPoint[] roadCentreLinePoints = new IMapPoint[0];
        protected IMapPoint[] pedwayCentreLinePoints = new IMapPoint[0];
        protected IMapPoint[] buildingPoints = new IMapPoint[0];
        private HashSet<IBaseLine> modifiedLines = new HashSet<IBaseLine>();
        private readonly KHash<IBaseLine, object> bl2mo = new KHash<IBaseLine, object>();
        protected readonly KHashSet<IMapPoint> roadStretchPointsA = new KHashSet<IMapPoint>();
        protected readonly KHashSet<IMapPoint> roadStretchPointsB = new KHashSet<IMapPoint>();
        protected readonly KHashSet<IMapPoint> roadEndPointsA = new KHashSet<IMapPoint>();
        protected readonly KHashSet<IMapPoint> roadEndPointsB = new KHashSet<IMapPoint>();
        protected readonly KHash<IMapPoint, IMapPoint> lookupEndPoint = new KHash<IMapPoint, IMapPoint>();

        /* It is not possible to extend a GameObject, so use an associative hash */
        protected readonly KHash<GameObject, object> go2mo = new KHash<GameObject, object>();
       
        private ExampleApp app;

        protected abstract void ExtraMeshes(int progress);

        
        protected override void Awake()
        {
            app = ExampleApp.AwakeInstance();
            
            base.Awake();
            
            
            highlightGlassMaterial = NewMaterialTransparent(HIGHLIGHT_MAT, HI_COL_050);
            highlightSolidMaterial = NewMaterialTransparent(HIGHLIGHT_MAT, HI_COL_100);

            goMeshRoadPoints = NewGoMesh(MESH_ROAD_POINTS, materialTemplates.opaque, ROAD_PT_COL, false);
            goMeshPedPoints = NewGoMesh(MESH_PED_POINTS, materialTemplates.opaque, PED_PT_COL, false);
            goMeshBuildPoints = NewGoMesh(MESH_BUILD_POINTS, materialTemplates.opaque, BUILD_PT_COL, false);
            goMeshMovedLines = NewGoMesh(MESH_MOVED_LINES, materialTemplates.transparent, LINE_COL, false);

        }
        protected override App App() { return app; }

        
        protected override void AddExtraMultiSubMesh(int progress)
        {
            ExtraMeshes(progress);
        }

        protected override void AddExtraSingleSubMesh(int progress)
        {
            ExtraMeshes(progress); // Always want points etc as separate selectable objects
        }

          // Examine all MapPoints, find those that are used in centrelines
        protected void CategorisePoints()
        {
            // Find points that are in centrelines of roads and pedways (but not crossings)
             KHashSet<IMapPoint> roadCentreLinePointHash = new KHashSet<IMapPoint>();
             KHashSet<IMapPoint> pedwayCentreLinePointHash = new KHashSet<IMapPoint>();
             KHashSet<IMapPoint> buildPointHash = new KHashSet<IMapPoint>();

             foreach (IRoad road in App().Map().Roads())
             {
                 if (road.IsCentreLineReversed()) continue;

                 ICentreLine cl = road.GetCentreLine();
                 bl2mo.Put(cl, road);

                 IMapPoint[] mpa = cl.GetMapPoints();
                 foreach (IMapPoint mp in mpa) roadCentreLinePointHash.Add(mp);
                 int nmp = mpa.Length;
                 if (nmp < 2) continue;

                 roadEndPointsA.Add(mpa[0]);
                 if (nmp > 2 && road.HasExtraPoint(false))
                 {
                     roadStretchPointsA.Add(mpa[1]);
                     lookupEndPoint.Put(mpa[1], mpa[0]);
                 }
                 if (nmp > 2 && road.HasExtraPoint(true))
                 {
                     roadStretchPointsB.Add(mpa[nmp - 2]);
                     lookupEndPoint.Put(mpa[nmp - 2], mpa[nmp - 1]);
                 }
                 roadEndPointsB.Add(mpa[nmp - 1]);
             }


             foreach (IFootpath fp in App().Map().Footpaths())
            {
                ICentreLine fpcl = fp.GetCentreLine();
                if (fp.IsPedway())
                {
                    bl2mo.Put(fpcl, fp);
                    
                    IMapPoint[] mpa = fpcl.GetMapPoints();
                    foreach (IMapPoint mp in mpa) pedwayCentreLinePointHash.Add(mp);
                }
            }

            foreach (IOutline ol in App().Map().Outlines())
            {
                if (ol.IsBuilding())
                {
                    bl2mo.Put(ol, ol);
                    
                    IMapPoint[] mpa = ol.GetMapPoints();
                    foreach (IMapPoint mp in mpa) buildPointHash.Add(mp);
                }
            }
          
            roadCentreLinePoints = roadCentreLinePointHash.ToArray();
            pedwayCentreLinePoints = pedwayCentreLinePointHash.ToArray();
            buildingPoints = buildPointHash.ToArray();
        }
      
        private static readonly NamedSubMesh[] NONE = new NamedSubMesh[0];
        protected NamedSubMesh[] PointsNamedSubMeshArray(IMapPoint[] mpa)
        {
            if (mpa == null) return NONE;
            double sz = POINT_ICON_SIZE;
            double dz = POINT_ICON_LIFT;
            List<NamedSubMesh> sml = new List<NamedSubMesh>();

            foreach (IMapPoint mp in mpa)
            {
                sml.Add(TriangleNamedSubMesh(mp, mp.IconTriMesh(sz, dz)));
            }

            return sml.ToArray();
        }
        
        public void RebuildPoint(IMapPoint mp)
        {
            double sz = POINT_ICON_SIZE;
            double dz = POINT_ICON_LIFT;
            NamedSubMesh nsm = TriangleNamedSubMesh(mp, mp.IconTriMesh(sz, dz));
            string goName = nsm.GameObjectName;
            
            GameObject goMesh = goMeshRoadPoints;
            Transform prevPoint = goMesh.transform.Find(goName);

            if (prevPoint == null)
            {
                goMesh = goMeshPedPoints;
                prevPoint = goMesh.transform.Find(goName);
            }
            if (prevPoint == null)
            {
                goMesh = goMeshBuildPoints;
                prevPoint = goMesh.transform.Find(goName);
            }

            if (prevPoint != null)
            {
                Material mat = prevPoint.GetComponent<Renderer>().material;
                AddChild(goMesh, nsm, mat, true);
            }
            else
            {
                AddChild(goMesh, nsm, null, false);
            }
        }

        protected virtual GameObject GetParent(object mo) { return null; }


        public Transform GetGoTransform(object mo)
        {
            if (mo == null) return null;

            string label = NamedSubMesh.GetNameFromObject(mo);

            if (mo is IMapPoint)
            {
                Transform pointT = goMeshRoadPoints.transform.Find(label);
                if (pointT == null) pointT = goMeshPedPoints.transform.Find(label);
                if (pointT == null) pointT = goMeshBuildPoints.transform.Find(label);
                return pointT;
            }
            
            GameObject parentGo;

            if (mo is ILane) parentGo = goMeshLanes; 
            else if (mo is IFootpath) parentGo = goMeshFootpaths;
            else if (mo is IOutline ol)
                parentGo = ol.IsBuildingStraddlingRoad() ? goMeshGlassBuildings : goMeshSolidBuildings;
            else parentGo = GetParent(mo);
            
            if (!parentGo) { Debug.LogWarning(WARN_2+mo); return null; }
            
            
            return parentGo.transform.Find(label);
        }

        
        protected void AddChild(GameObject goMesh, NamedSubMesh nsm) { AddChild(goMesh, nsm, null, false); }
        protected void AddChild(GameObject goMesh, NamedSubMesh nsm, Material mat) { AddChild(goMesh, nsm, mat, false); }

        protected void RebuildMedian(IRoad road)
        {
            TriMesh medianStripTriMesh = road.MedianStripTriMesh();
            if (!medianStripTriMesh.IsEmpty()) AddChild(goMeshMedians, TriangleNamedSubMesh(road, medianStripTriMesh));
        }

        protected void RebuildCrossing(IRoad road, bool atEnd)
        {
            ICrossing x = atEnd ? road.GetCrossingB() : road.GetCrossingA();
            if (x == null) return;
            if (x.GetRoad() != road) return; // crossing is on opposite, don't build twice
            bool zebra = x.IsZebra();
            GameObject goMesh = zebra ? goMeshZebras : goMeshCrossings;
            MaterialHint mh = zebra ? MaterialHint.Zebra : MaterialHint.Crossing;
            AddChild(goMesh, LocusFullNamedMesh(x, x, 0, 1, 0, mh ));
        }
        void RebuildMesh(IOutline ol)
        {
            if (ol == null) return;

            TriMesh walls = ol.WallsTriMesh();
            TriMesh roof = ol.UpperSurfaceTriMesh();
            TriMesh bldg = TriMesh.Combine(new[] {walls, roof,});
            
            AddChild(goMeshGlassBuildings, TriangleNamedSubMesh(ol, bldg), highlightGlassMaterial);
        }

        protected virtual void DestroyLane(ILane lane)
        {
           
        }
        void DestroyMesh(IRoad road)
        {
            if (road == null) return; // called for road.opposite
            
            string rds = road.Name();
            IJunction jnA = road.GetJunctionA();
            IJunction jnB = road.GetJunctionB();
            string jnAs = jnA.ToString();
            string jnBs = jnB.ToString();
            ICrossing xA = road.GetCrossingA();
            if (xA != null && xA.GetRoad() != road) xA = null; // crossing is on opposite
            ICrossing xB = road.GetCrossingB();
            if (xB != null && xB.GetRoad() != road) xB = null; // crossing is on opposite
            IFootpath fpk = road.GetSideWalkK();
            ICorner fpkc = fpk?.GetCornerC();
            ICorner fpkd = fpk?.GetCornerD();

            IFootpath fpm = road.GetSideWalkM();
            ICorner fpmc = fpm?.GetCornerC();
            ICorner fpmd = fpm?.GetCornerD();

            foreach (ILane lane in road.GetLanes())
            {
                string lns = NamedSubMesh.GetNameFromObject(lane);
                DestroyChild(goMeshLanes, lns);
                DestroyChild(goMeshTurnArrows, lns);

                DestroyLane(lane);
            }
            DestroyChild(goMeshJunctions, jnAs);
            DestroyChild(goMeshJunctions, jnBs);

           
            
            if (road.IsBridge()) DestroyChild(goMeshBridges, rds);
            if (jnA.IsBridge())
            {
                DestroyChild(goMeshBridges, jnAs); 
                if (fpkc != null) DestroyChild(goMeshBridges, fpkc.ToString()); 
                if (fpmc != null) DestroyChild(goMeshBridges, fpmc.ToString()); 
            }

            if (jnB.IsBridge())
            {
                DestroyChild(goMeshBridges, jnBs);
                if (fpkd != null) DestroyChild(goMeshBridges, fpkd.ToString()); 
                if (fpmd != null) DestroyChild(goMeshBridges, fpmd.ToString()); 
            }

            if (xA != null)
            {
                string xAs = NamedSubMesh.GetNameFromObject(xA);
               // DestroyChild(goMeshSignalWalks, xAs); // Green man / red man - not really required

                DestroyChild(xA.IsZebra() ? goMeshZebras : goMeshCrossings, xAs);
            }
            if (xB != null)
            {
                string xBs = NamedSubMesh.GetNameFromObject(xB);
                //DestroyChild(goMeshSignalWalks, xBs);
                
                DestroyChild(xB.IsZebra() ? goMeshZebras : goMeshCrossings, xBs);
            }

            DestroyChild(goMeshShoulders, rds);
            DestroyChild(goMeshShoulders, jnAs);
            DestroyChild(goMeshShoulders, jnBs);
            if (fpkc != null) DestroyChild(goMeshShoulders, fpkc.ToString()); 
            if (fpmc != null) DestroyChild(goMeshShoulders, fpmc.ToString()); 
            if (fpkd != null) DestroyChild(goMeshShoulders, fpkd.ToString()); 
            if (fpmd != null) DestroyChild(goMeshShoulders, fpmd.ToString()); 
            
            DestroyChild(goMeshEmbankments, rds);
            DestroyChild(goMeshEmbankments, jnAs);
            DestroyChild(goMeshEmbankments, jnBs);
            if (fpkc != null) DestroyChild(goMeshEmbankments, fpkc.ToString()); 
            if (fpmc != null) DestroyChild(goMeshEmbankments, fpmc.ToString()); 
            if (fpkd != null) DestroyChild(goMeshEmbankments, fpkd.ToString()); 
            if (fpmd != null) DestroyChild(goMeshEmbankments, fpmd.ToString()); 
            
            DestroyChild(goMeshTunnels, rds);
            DestroyChild(goMeshTunnels, jnAs);
            DestroyChild(goMeshTunnels, jnBs);
            if (fpkc != null) DestroyChild(goMeshTunnels, fpkc.ToString()); 
            if (fpmc != null) DestroyChild(goMeshTunnels, fpmc.ToString()); 
            if (fpkd != null) DestroyChild(goMeshTunnels, fpkd.ToString()); 
            if (fpmd != null) DestroyChild(goMeshTunnels, fpmd.ToString()); 

            DestroyChild(goMeshBarriers, rds);
            DestroyChild(goMeshBarriers, jnAs);
            DestroyChild(goMeshBarriers, jnBs);

            DestroyChild(goMeshMedians, rds);
            if (road.MedianStripKeyRoad(true) is IRoad keyRoadK) DestroyChild(goMeshMedians, keyRoadK.Name());
            if (road.MedianStripKeyRoad(false) is IRoad keyRoadM) DestroyChild(goMeshMedians, keyRoadM.Name());
            
            if (fpk != null) DestroyChild(goMeshFootpaths, NamedSubMesh.GetNameFromObject(fpk));
            if (fpkc != null) DestroyChild(goMeshFootpaths, fpkc.ToString());
            if (fpkd != null) DestroyChild(goMeshFootpaths, fpkd.ToString());
            if (fpm != null) DestroyChild(goMeshFootpaths, NamedSubMesh.GetNameFromObject(fpm));
            if (fpmc != null) DestroyChild(goMeshFootpaths, fpmc.ToString());
            if (fpmd != null) DestroyChild(goMeshFootpaths, fpmd.ToString());

            // If you add more DestroyChild() calls, then also add it as multiple meshes in UaMapMesh.useMixed
            
            // Not included here : Signal Heads, Arrows, Boxes | Stops| Parking | Barriers
            // These are not drawn for MapCustomizer
        }
        void DestroyMesh(IFootpath fp)
        {
            ICorner fpc = fp.GetCornerC();
            ICorner fpd = fp.GetCornerD();

            DestroyChild(goMeshFootpaths, NamedSubMesh.GetNameFromObject(fp));
            if (fpc != null) DestroyChild(goMeshFootpaths, fpc.ToString());
            if (fpd != null) DestroyChild(goMeshFootpaths, fpd.ToString());
        }

        void DestroyMesh(IOutline ol)
        {
            string name = NamedSubMesh.GetNameFromObject(ol);

            DestroyChild(goMeshSolidBuildings, name);
            DestroyChild(goMeshGlassBuildings, name);
        }

        public void UpdateModifiedLines(HashSet<IBaseLine> currentMods, KList<MapEdit> edits, IMapPoint[] selPoints, 
            KHash<IMapPoint, Xyz> preDragPositions)
        {
            // Three sets of centrelines
            // (1) REBUILDS : Were modified, now not: Rebuild meshes for roads / walkways + re-add to parent
            // (2) UNCHANGED: Were modified, still modified: no action
            // (3) NEW_MODS : Newly modified: delete children from parent

            List<IBaseLine> rebuilds = new List<IBaseLine>();
            //List<IBaseLine> dbg_unchanged = new List<IBaseLine>();
            List<IBaseLine> newMods = new List<IBaseLine>();
            foreach (IBaseLine bl in modifiedLines) if (! currentMods.Contains(bl)) rebuilds.Add(bl);
            foreach (IBaseLine bl in currentMods)
            {
                if (! modifiedLines.Contains(bl)) newMods.Add(bl);
                
                //else dbg_unchanged.Add(cl);
            }

            HashSet<IJunction> junctions = new HashSet<IJunction>();
            foreach (IBaseLine bl in rebuilds)
            {
                object mapObject = bl2mo.Get(bl);
                
                if (mapObject is IOutline ol) RebuildMesh(ol);
                
                else if (mapObject is IFootpath fp) { RebuildMesh(fp, edits); }

                else if (mapObject is IRoad road)
                {
                    foreach (IMapPoint mp in selPoints)
                    {
                        if      (roadEndPointsA.Contains(mp)) road.OnModifyCentreLine();
                        else if (roadEndPointsB.Contains(mp)) road.OnModifyCentreLine();
                        else if (roadStretchPointsA.Contains(mp)) road.StretchAtPoint(false, MoveXY(mp, preDragPositions));
                        else if (roadStretchPointsB.Contains(mp)) road.StretchAtPoint(true,  MoveXY(mp, preDragPositions));
                    }

                    junctions.Add(road.GetJunctionA());
                    junctions.Add(road.GetJunctionB());

                    RebuildMesh(road, edits);
                    RebuildMesh(road.GetOpposite(), edits); // can be null: OK
                }
               
            }

            foreach (IJunction jn in junctions)
            {
                RebuildMesh(jn, edits);
            }
            
            
            foreach (IBaseLine bl in newMods)
            {
                object mapObject = bl2mo.Get(bl);

                if (mapObject is IRoad road) { DestroyMesh(road); DestroyMesh(road.GetOpposite()); }
                else if (mapObject is IFootpath fp) DestroyMesh(fp);
                else if (mapObject is IOutline ol) DestroyMesh(ol);

            }
            
            modifiedLines = currentMods;
        }

        protected virtual void HighlightLane(ILane lane) { }
        protected virtual void RebuildTurn(ITurn turn) { }

        void RebuildMesh(IRoad road, KList<MapEdit> edits)
        {
            if (road == null) return; // for road.opposite

            bool highlight = false;
            if (edits != null) foreach (MapEdit me in edits)
            {
                if (me.IsKeyObject(road)) { highlight = true; break; }
            }
            
            IFootpath fpk = road.GetSideWalkK();
            ICorner fpkc = fpk?.GetCornerC();
            ICorner fpkd = fpk?.GetCornerD();

            IFootpath fpm = road.GetSideWalkM(); 
            ICorner fpmc = fpm?.GetCornerC();
            ICorner fpmd = fpm?.GetCornerD();
            
            road.LaneRecalc();

            double rt = MapParameter.RoadThickness.DoubleValue();
            
            foreach (ILane lane in road.GetLanes())
            {
                // 20230206
                //
                // Material mat = highlight ? highlightGlassMaterial : laneMaterials[lane.LaneMarking()];
                // AddChild(goMeshLanes, LocusFullNamedMesh(lane,lane,0,1,0,MH.Lane), mat);
                
                // 20230206
                AddChild(goMeshLanes, LocusFullNamedMesh(lane,lane,0,1,0,MH.Lane), laneMaterials[lane.LaneMarking()]);
                if (highlight) HighlightLane(lane);
                // -- END -- 20230206
                
                AddChild(goMeshTurnArrows, TurnArrowNamedSubMesh(lane));
                foreach (ITurn turn in lane.GetTurnO()) RebuildTurn(turn);

                foreach (ITurn turn in lane.GetTurnI()) RebuildTurn(turn);
            }

            // Draw as shoulder, regardless of shoulder / embankment / bridge
            AddChild(goMeshShoulders, TriangleNamedSubMesh(road, road.ShoulderTriMesh()));
            
            if (fpk != null) AddChild(goMeshFootpaths, LocusFullNamedMesh(fpk, fpk, 0, 1, 0, MH.Walkway));
            if (fpm != null) AddChild(goMeshFootpaths, LocusFullNamedMesh(fpm, fpm, 0, 1, 0, MH.Walkway));
            
            if (fpkc != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpkc, fpkc.UpperSurfaceTriMesh())); 
            if (fpmc != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpmc, fpmc.UpperSurfaceTriMesh())); 
            if (fpkd != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpkd, fpkd.UpperSurfaceTriMesh())); 
            if (fpmd != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpmd, fpmd.UpperSurfaceTriMesh()));

            RebuildCrossing(road, false);
            RebuildCrossing(road, true);
           
            RebuildMedian(road);
            if (road.MedianStripKeyRoad(true) is IRoad keyRoadK && road != keyRoadK) RebuildMedian(keyRoadK);
            if (road.MedianStripKeyRoad(false) is IRoad keyRoadM && road != keyRoadM) RebuildMedian(keyRoadM);

        }
      
        void RebuildMesh(IJunction jn, KList<MapEdit> edits)
        {
            jn.Recalc();

            bool highlight = false;
            if (edits != null)
            {
                int ne = jn.Entries();
                int nx = jn.Exits();
                foreach (MapEdit me in edits)
                {
                    for (int ei = 1; ei <= ne; ei++)
                        if (me.IsKeyObject(jn.GetEntry(ei)))
                        {
                            highlight = true;
                            break;
                        }

                    for (int xi = 1; xi <= nx; xi++)
                        if (me.IsKeyObject(jn.GetExit(xi)))
                        {
                            highlight = true;
                            break;
                        }
                }
            }

            Material mat = highlight ? highlightGlassMaterial : null;
            AddChild(goMeshJunctions, TriangleNamedSubMesh(jn, jn.UpperSurfaceTriMesh()), mat);
        }

        void RebuildMesh(IFootpath fp, KList<MapEdit> edits)
        {
            if (fp == null) return;
            
            ICorner fpc = fp.GetCornerC();
            ICorner fpd = fp.GetCornerD();

            fp.WalkRecalc();
            
            bool highlight = false;
            if (edits != null) foreach (MapEdit me in edits)
            {
                if (me.IsKeyObject(fp)) { highlight = true; break; }
            }

            Material mat = highlight ? highlightGlassMaterial : null;
            AddChild(goMeshFootpaths, LocusFullNamedMesh(fp, fp, 0, 1, 0, MH.Walkway), mat);
            if (fpc != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpc, fpc.UpperSurfaceTriMesh()), mat); 
            if (fpd != null) AddChild(goMeshFootpaths, TriangleNamedSubMesh(fpd, fpd.UpperSurfaceTriMesh()), mat); 

        }
        private Xyz MoveXY(IMapPoint mp, KHash<IMapPoint, Xyz> preDragPositions)
        {
            Xyz preDragPosition = preDragPositions.Get(mp);
            if (preDragPosition == null) return null;

            return new Xyz(mp.Location().Minus(preDragPosition));
        }
        public void RebuildModifiedLines()
        {
            CreateMesh(0, goMeshMovedLines, MovedLinesSubMesh()); 
        }

        SubMesh MovedLinesSubMesh()
        {
            double w = MOVED_LINE_WIDTH;
            double dz = MOVED_LINE_LIFT;
            List<TriMesh> tml = new List<TriMesh>();

            foreach (ICentreLine cl in App().Map().CentreLines())
            {
                if (modifiedLines.Contains(cl)) { tml.Add(cl.LineTriMesh(w, dz, dz)); }
            }

            foreach (IOutline ol in App().Map().Outlines())
            {
                if (modifiedLines.Contains(ol)) { tml.Add(ol.LineTriMesh(w, dz, dz)); }
            }
            
            return TriangleSubMesh(TriMesh.Combine(tml.ToArray()));
        }
        
        public HashSet<IBaseLine> LinesThrough(IMapPoint mp, IMapPoint[] sompa)
        {
            HashSet<IBaseLine> set = new HashSet<IBaseLine>();

            foreach (ICentreLine cl in app.Map().CentreLines())
            {
                if (mp != null && cl.Contains(mp)) set.Add(cl);
                
                foreach(IMapPoint somp in sompa) if (cl.Contains(somp)) set.Add(cl);
            }

            foreach (IOutline ol in app.Map().Outlines())
            {
                if (mp != null && ol.Contains(mp)) set.Add(ol);
                
                foreach(IMapPoint somp in sompa) if (ol.Contains(somp)) set.Add(ol);
            }
            
            return set;
        }


        protected override void FireNewNamedSubMesh(NamedSubMesh nsm, GameObject go)
        {
            object mo = nsm.MapObject;
            if (mo != null) go2mo.Put(go, mo);
            
            else Debug.LogWarning(WARN_1+go.transform.parent.gameObject);
        }
        
        public object GetMapObject(GameObject go)
        {
            return go == null? null: go2mo.Get(go);
        }

        public void SetMaterial(object mo, Material mat)
        {
            if (mo == null) return;
            
            Transform t = GetGoTransform(mo);
            if (t == null) return;
            
            Renderer mr = t.GetComponent<Renderer>();
            mr.material = mat;
        }

    }
}