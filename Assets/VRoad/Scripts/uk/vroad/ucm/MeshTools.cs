using System;
using System.Collections.Generic;
using uk.vroad.api.enums;
using uk.vroad.api.etc;
using uk.vroad.api.geom;
using uk.vroad.api.map;
using uk.vroad.api.route;
using uk.vroad.api.sim;
using uk.vroad.apk;
using UnityEditor;
using UnityEngine;

namespace uk.vroad.ucm
{
    /// <summary> A class containing static Utility methods to assist with drawing of Meshes </summary>
    public class MeshTools: ScriptableObject
    {
#if UNITY_EDITOR
        private static string vroadRootRel = SA.EXPECTED_PKG_LOC;
        private static bool checkedRoot = false;
        
        
        /// <summary> Return root directory of our package relative to project root (parent of Assets/ ) <br/>
        /// This is normally Assets/VRoad, but our package might not have been installed there.
        /// Editor tools such as EditorSceneManager use  paths relative to the Project folder </summary> 
        public static string VRoadRoot()
        {
            if (checkedRoot) return vroadRootRel;
            checkedRoot = true;

            bool asExpected = false;
            try
            {
                MeshTools env = CreateInstance<MeshTools>();
                KFile kenvScriptFile = new KFile(AssetDatabase.GetAssetPath(MonoScript.FromScriptableObject(env)));
                //                                 ucm   / vroad  / uk     / Scripts/ VRoad
                KDir vroadDir = kenvScriptFile.Directory().Parent().Parent().Parent().Parent();
                string vroadPath = vroadDir.FullPath();
                string vroadRootRelActual = vroadPath.Substring(vroadPath.IndexOf(SA.ASSETS_DIR));

                if (vroadRootRel.Equals(vroadRootRelActual)) asExpected = true;
                else vroadRootRel = vroadRootRelActual;
            }
            catch (Exception) { asExpected = false; }

            if (!asExpected) Debug.LogWarning(SA.UNEXPECTED_PKG_LOC + SA.EXPECTED_PKG_LOC);
			
            return vroadRootRel;
        }
#endif
        
        public static void DrawLane(List<TriMesh> triMeshList, ILane lane, float start,
            float end, float kw, float mw, IMind vm)
        {
            triMeshList.Add(UaMapMesh.LocusTriMesh(lane, start, end, kw, mw, MaterialHint.Lane));
        }

        
        public static void DrawRoad(List<TriMesh> triMeshList, IBranch prev, IRoad road, IBranch next, 
            bool drawToNext, float start, float end, float kw, float mw, IMind vm, bool mini)
        {
            ILane[] lanes = road.GetLanes();
            ILane kerbLane = lanes[0];
            IStreme drawnStremeIn = null;
            
            foreach (ILane lane in lanes)
            {
                if (lanes.Length > 1 && lane.HasTaxiZone()) continue;
                
                bool drawThisLane = false;
                bool drawFirstOpenOnly = mini;

                if (prev != null && prev is IBranchTaxiOriginLane)
                {
                    ITaxiZone taxiZone = kerbLane.GetTaxiZone();
                    start = (float) (taxiZone.BayStartDistance(0) / kerbLane.Length());
                    drawFirstOpenOnly = true;
                }

                else if (next != null && next is IBranchTaxiDestinationLane)
                {
                    ITaxiZone taxiZone = kerbLane.GetTaxiZone();
                    end = (float)(taxiZone.BayEndDistance(taxiZone.Bays() - 1) / kerbLane.Length());
                    drawFirstOpenOnly = true;
                }

                else if (prev != null && prev is IBranchBusOnboard bbo)
                {
                    start = (float)(bbo.GetStop().DistanceOnLane() / kerbLane.Length());
                    
                    drawFirstOpenOnly = true;
                }
                else if (next != null && next is IBranchBusArrival bba)
                {
                    IStop stop = bba.GetStop();
                    end = (float)(stop.DistanceOnLane() / stop.GetLane().Length());
                    drawFirstOpenOnly = true;
                }

                if (drawFirstOpenOnly) drawThisLane = true;

                if (vm != null && !lane.AllowsNow(vm)) drawThisLane = false;
                
                else if (next == null)
                {
                    drawThisLane = true;
                    drawFirstOpenOnly = true;
                }

               
                else // next != null, lane is not restricted
                {
                    // draw this lane if it has a streme that goes to next road
                    foreach (IStreme so in lane.GetStremeO())
                    {
                        if (so.GetLaneOut().GetRoad() != next) continue;
                        
                        drawThisLane = true;

                        // Sometimes, even though next (road) is supplied, we dont want to draw the stremes to it
                        // because they would then be  drawn in two colours causing z-fighting.
                        // For example, the connection between manual and auto should be drawn
                        // in the auto colour, but not in the manual colour
                        if (drawToNext)
                        {
                            triMeshList.Add(UaMapMesh.LocusFullTriMesh(so, kw, mw, MaterialHint.Streme));
                        }
                       
                        if (mini) break; // Just draw one (fat) line on mini map
                    }
                }

                if (drawThisLane)
                {
                    if (prev is IRoad)
                    {
                        foreach (IStreme si in lane.GetStremeI())
                        {
                            if (si.GetLaneIn().GetRoad() != prev) continue;

                            triMeshList.Add(UaMapMesh.LocusFullTriMesh(si, kw, mw, MaterialHint.Streme));
                            drawnStremeIn = si;
                            
                            if (mini) break; // Just draw one (fat) streme on mini map
                        }
                    }

                    triMeshList.Add(UaMapMesh.LocusTriMesh(lane, start, end, kw, mw, MaterialHint.Lane));

                    if (drawFirstOpenOnly) break;
                }
            }

            // For the lanes on this road that have been drawn, none has a streme that comes from prev
            if (drawnStremeIn == null && prev is IRoad)
            {
                foreach (ILane lane in lanes)
                {
                    foreach (IStreme si in lane.GetStremeI())
                    {
                        if (si.GetLaneIn().GetRoad() == prev)
                        {
                            triMeshList.Add(UaMapMesh.LocusFullTriMesh(si, kw, mw, MaterialHint.Streme));
                            if (mini) break; 
                        }
                    }
                }
            }

        }

        public static void DrawWalkway(List<TriMesh> triMeshList, IBranch prev, IWalkBranch wd, IBranch next,
            bool drawToNext, float start, float end, float kw, float mw, IPed player)
        {
            IWalkway walkway = wd.GetWalkway();
            bool isCD = wd.IsForward();

            if (prev != null && prev is IBranchBusArrival bba)
            {
                IStop aks = bba.GetStop();
                float q = (float) (aks.DistanceOnLane() / aks.GetLane().Length());

                if (isCD) start = q;
                else end = q;
            }
            else if (prev != null && prev is IBranchTaxiDestinationLane bvdl)
            {
                ITaxiZone taxiZone = bvdl.GetTaxiZone(); 
                float q = (float)(taxiZone.BayEndDistance(0) / taxiZone.GetLane().Length());
                if (isCD) start = q;
                else end = q;
            }

            if (next != null && next is IBranchBusBoarding bbb)
            {
                IStop bks = bbb.GetStop();
                float q = (float) (bks.DistanceOnLane() / bks.GetLane().Length());

                if (isCD) end = q;
                else start = q;
            }
            else if (next != null && next is IBranchTaxiOriginLane bvol)
            {
                ITaxiZone taxiZone = bvol.GetTaxiZone();
                float q = (float)(taxiZone.BayEndDistance(taxiZone.Bays() - 1) / taxiZone.GetLane().Length());
                if (isCD) { if (q < end) end = q; } //
                else      { if (q > start) start = q; } 
            }

            if (next == null && wd.GetZone() is IPedZone pz && pz.GetDirectDrvZone() == null && player != null && player.GetDestination() == pz)
            {
               if (isCD) end = 0.5f;
               else start = 0.5f;
            }

            float wkw = isCD ? kw : 1f - mw;
            float wmw = isCD ? mw : 1f - kw;

            triMeshList.Add(UaMapMesh.LocusTriMesh(walkway, start, end, wkw, wmw, MaterialHint.Walkway));

            if (prev is IWalkBranch direction) DrawTie(triMeshList, direction, wd, kw, mw);
            if (drawToNext && next is IWalkBranch nxd) DrawTie(triMeshList, wd, nxd, kw, mw);
        }

        private static void DrawTie(List<TriMesh> triMeshList, IWalkBranch branch1, IWalkBranch branch2, float kw, float mw)
        {
            IWalkway walkway = branch1.GetWalkway();
            bool isCD = branch1.IsForward();

            ITie[] ca = isCD ? walkway.TiesD() : walkway.TiesC();
            foreach (ITie c in ca)
            {
                IWalkway walk2 = branch2.GetWalkway();
                if ((c.GetWalkT() == walk2 || c.GetWalkU() == walk2))
                {
                    if (c.GetWalkT() == walk2)
                    {
                        float kwt = kw;
                        kw = 1.0f - mw;
                        mw = 1.0f - kwt;
                    }
                    triMeshList.Add(UaMapMesh.LocusTriMesh(c, 0f, 1f, kw, mw, MaterialHint.Walkway));
                    break;
                }
            }
        }

        public static void AddTriMeshesForConnectionAndBranch(List<TriMesh> tml, List<TriMesh> tmlTaxi, List<TriMesh> tmlBus, 
            IBranch prev, IBranch curr, IBranch next, bool drawToNext, float kw, float mw, IMind vm, bool mini, IPed player)
        {
            if (curr == null) return;
            
            if (curr is IWalkBranch wd)
            {
                // If auto selection is stop or parking, prev==wd is the option to continue on walkway
                // This object is drawn once, when transferring onto walkway, CurrentBranch updates every time step
                if (prev == wd) return;
                DrawWalkway(tml, prev, wd, next, drawToNext, 0, 1, kw, mw, player);

            }

            else if (curr is IRoad road)
            {
                DrawRoad(tml, prev, road, next, drawToNext, 0, 1, kw, mw, vm, mini);
            }

            else if (curr is IBranchBusBoarding bbb)
            {
                if (!mini) // pyramids on main map only
                {
                    tmlBus.Add(UaMapMesh.StopTriMesh(bbb.GetStop(), true));
                }
            }

            else if (curr is IBranchBusOnboard bbo && next is IBranchBusArrival nxbba)
            {
                // if (mini) // Bus route is shown on mini-map only?
                IHalt halt = bbo.GetHalt();
                IBusroute busRoute = halt.GetBusroute(); 
                
                AddTriMeshesForBusroute(busRoute, bbo, null, nxbba, tml, kw, mw, vm, mini);

            }

            else if (curr is IBranchBusArrival bba)
            {
                if (!mini) // pyramids on main map only
                {
                    // Add these to option-coloured triMeshList, so that different off-stops have different colours
                    tml.Add(UaMapMesh.StopTriMesh(bba.GetStop(), false));
                }

            }
            else if (curr is IBranchTaxiOriginLane bvol)
            {
                if (!mini)
                {
                    // Draw one pyramid for each bay, colour them by 'taxi icon' colour, not options colour
                    UaMapMesh.ParkingOriginTriMeshes(tmlTaxi, bvol.GetTaxiZone());
                }

                if (next != null && next is IBranchTaxiDestination bvd) // Draw taxi route from taxi origin to taxi dest
                {
                    IRoad[] rda = bvd.GetTaxiRoute(bvol);
                    int obi = player?.IntendedBay() ?? -1;
                    AddTriMeshesForTaxiRoute(null, rda, obi, -1, tml, kw, mw, vm, mini);
                }

            }
            else if (curr is IBranchTaxiDestination bvd)
            {
                // Add a destination pyramid in the option colour
                if (!mini) tml.Add(UaMapMesh.ParkingDestinationTriMesh(bvd.GetDrvZone()));

            }

        }

        public static void AddTriMeshesForTaxiRoute(IRoad prev, IRoad[] roads, int bayOI, int bayDI,
            List<TriMesh> tml, float kw, float mw, IMind vm, bool mini)
        {
            int nrd = roads.Length;
            if (nrd == 0) return;
            ILane kerbLane = roads[0].GetKerbLane();
            
            double cdo = 0.5 * kerbLane.Length();
            ITaxiZone taxiZoneO = kerbLane.GetTaxiZone();
            if (taxiZoneO != null)
            {
                if (bayOI < 0) bayOI = taxiZoneO.FirstOccupiedBay();
                if (bayOI < 0) bayOI = 0; // If not chosen yet, and no taxis waiting, draw route from first bay
                cdo = 0.5 * (taxiZoneO.BayStartDistance(bayOI) + taxiZoneO.BayEndDistance(bayOI));
            }

            float startFirst = (float) (cdo / kerbLane.Length());

            float endLast = 1;
            ILane lastRoadKerbLane = roads[nrd - 1].GetKerbLane();
            ITaxiZone taxiZoneD = lastRoadKerbLane.GetTaxiZone();
            if (bayDI >= 0 && taxiZoneD != null) // draw to end of last, if route goes to edge or bay not chosen
            {
                double cdd = 0.5 * (taxiZoneD.BayStartDistance(bayDI) + taxiZoneD.BayEndDistance(bayDI));
                endLast = (float) (cdd / lastRoadKerbLane.Length());
            }

            IRoad rdPrev = prev;
            for (int rdi = 0; rdi < nrd; rdi++)
            {
                IRoad rdCurr = roads[rdi];
                IBranch rdNext = rdi < nrd - 1 ? roads[rdi + 1] : null;
                bool drawToNext = rdNext != null;
                
                float start = (rdi == 0) ? startFirst : 0f; 
                float end = (rdi == nrd - 1) ? endLast : 1f; 
                DrawRoad(tml, rdPrev, rdCurr, rdNext, drawToNext, start, end, kw, mw, vm, mini);
                rdPrev = rdCurr;
            }
        }
        
        public static void AddTriMeshesForBusroute(IBusroute busRoute, IBranchBusOnboard bbo, IRoad nextRoad, IBranchBusArrival bba,
            List<TriMesh> triMeshList, float kw, float mw, IMind vm, bool mini)
        {
            // Either this is being called
            // (A) for a route option, bbo will be set, bus route should  be drawn from stop1 to stop2
            // (B) for the player onboard a bus, where the next (whole) road on the route is nextRoad
            if (bbo == null && nextRoad == null) return;
            
            IRoad[] brra = busRoute.GetRoads();
            
            IStop stop1 = bbo == null? null: bbo.GetStop();
            IStop stop2 = bba == null? null: bba.GetStop(); // Arrival branch of null: draw to end of bus route


            IRoad road1 = stop1 != null? stop1.GetLane().GetRoad(): nextRoad;
            IRoad roadN = stop2 == null ? brra[brra.Length-1] : stop2.GetLane().GetRoad();

            
            float sd1 = stop1 == null? 0: (float) stop1.DistanceOnLane();
            float sd2 = stop2 == null? 0: (float) stop2.DistanceOnLane();
            if (sd2 == 0) sd2 = (float) roadN.GetKerbLane().Length();

            bool started = false;

            KList<IRoad> roadList = new KList<IRoad>();
            foreach (IRoad road in brra)
            {
                if (!started && road != road1) continue;
                started = true;
                roadList.Add(road);
                if (road == roadN) break;
            }

            IRoad[] roadsToDraw = roadList.ToArray();
            int nr = roadsToDraw.Length;

            IRoad prev = null;
            for (int ri = 0; ri < nr; ri++)
            {
                IRoad road = roadsToDraw[ri];
                IRoad next = ri < nr - 1? roadsToDraw[ri + 1]: null;
                bool drawToNext = next != null;
                
                float kerbLen = (float) road.GetKerbLane().Length();
                float start = road == road1 ? sd1 / kerbLen : 0;
                float end = road == roadN ? sd2 / kerbLen : 1;

                DrawRoad(triMeshList, prev, road, next, drawToNext, start, end, kw, mw, vm, mini);
                
            }
        }


        public static TriMesh PyramidTriMesh(Xyz p, float h, float r)
        {
            int nFace = 4;
            int nv = nFace + 1;
            Xyz[] va = new Xyz[nv];
            Xy[] uva = new Xy[nv];


            va[0] = p;
            uva[0] = new Xy(0.5, 0);

            int ntri = nFace + 2;
            int nvt = ntri * 3;
            int[] tvia = new int[nvt];

            Xyz ph = p.PlusZ(h);

            Xyz[] na = new Xyz[nv];
            na[0] = new Xyz(0, 0, -1);

            for (int ti = 0; ti < nFace; ti++)
            {
                Angle a = new AngleDeg(90 * ti);
                Xyz corner = new Xyz(ph, r, a, 0);

                va[1 + ti] = corner;
                uva[1 + ti] = new Xy(ti / (float)nFace, 1f);

                int ti3 = ti * 3;

                tvia[ti3] = 0;
                tvia[ti3 + 2] = ti + 1;
                tvia[ti3 + 1] = ti < nFace - 1 ? (ti + 2) : 1;

                na[1 + ti] = va[1 + ti].Minus(va[0]);
            }

            int tiTop3 = nFace * 3;

            tvia[tiTop3] = 1;
            tvia[tiTop3 + 1] = 2;
            tvia[tiTop3 + 2] = 3;

            tvia[tiTop3 + 3] = 1;
            tvia[tiTop3 + 4] = 3;
            tvia[tiTop3 + 5] = 4;

            return TriMesh.Create(va, tvia, na, uva, MaterialHint.Stop);
        }


        // For the  simplest cube, only 8 vertices would be needed, and each
        // vertex is used for 3 faces, with no duplication.
        //
        // With only 8 vertices, there is no way of setting each vertex to have 
        // (u,v) values that result in consistent texturing. It can be done with 16, 
        // like wrapping a box  with paper, but the texture 'wrap' flag must be set.
        // For this case each 'real' vertex is duplicated.
        //
        // Crisp edges require the normals to be perpendicular to the plane. This means
        // we need a separate va[] entry for each face, so each 'real' vertex has 3 
        // entries in va[]. In this case nv is 24
        // 
        // For nv==8 and nv==16, if we make all the normals pointing away from 
        // the centre, we get a strange/groovy rounded cube look.
        //
        // Summary
        //  8 vertices - no texturing, rounded edges
        // 16 vertices - texturing, rounded edges
        // 24 vertices - texturing and sharp edges

        internal static SubMesh CubeSubMesh8(Vector3 c, float r)
        {
            int nFace = 6;
            int ntri = nFace * 2; // 12
            int nvt = ntri * 3;   // 36
            int[] tvia = new int[nvt];



            int nv = 8;
            Vector3[] va = new Vector3[nv];
            Vector2[] uva = new Vector2[nv];

            int vi = 0;

            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, -r);
            va[vi++] = c + new Vector3(-r, +r, -r);
            va[vi++] = c + new Vector3(+r, +r, -r);

            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(+r, -r, +r);
            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi  ] = c + new Vector3(+r, +r, +r);


            int ui = 0;
            uva[ui++] = new Vector2(0, 0);
            uva[ui++] = new Vector2(1, 0);
            uva[ui++] = new Vector2(0, 1);
            uva[ui++] = new Vector2(1, 1);

            uva[ui++] = new Vector2(0, 1);
            uva[ui++] = new Vector2(1, 1);
            uva[ui++] = new Vector2(0, 2);
            uva[ui  ] = new Vector2(1, 2);


            // unity uses clockwise winding order
            int ti = 0;

            //front
            tvia[ti++] = 0;
            tvia[ti++] = 3;
            tvia[ti++] = 1;

            tvia[ti++] = 0;
            tvia[ti++] = 2;
            tvia[ti++] = 3;

            //top
            tvia[ti++] = 2;
            tvia[ti++] = 7;
            tvia[ti++] = 3;

            tvia[ti++] = 2;
            tvia[ti++] = 6;
            tvia[ti++] = 7;

            //back
            tvia[ti++] = 6;
            tvia[ti++] = 5;
            tvia[ti++] = 7;

            tvia[ti++] = 6;
            tvia[ti++] = 4;
            tvia[ti++] = 5;

            //bottom
            tvia[ti++] = 4;
            tvia[ti++] = 1;
            tvia[ti++] = 5;

            tvia[ti++] = 4;
            tvia[ti++] = 0;
            tvia[ti++] = 1;

            //left
            tvia[ti++] = 4;
            tvia[ti++] = 2;
            tvia[ti++] = 0;

            tvia[ti++] = 4;
            tvia[ti++] = 6;
            tvia[ti++] = 2;

            //right
            tvia[ti++] = 1;
            tvia[ti++] = 7;
            tvia[ti++] = 6;

            tvia[ti++] = 1;
            tvia[ti++] = 3;
            tvia[ti  ] = 7;

            Vector3[] na = new Vector3[nv];
            for (int i = 0; i < nv; i++) na[i] = va[i] - c;

            return new SubMesh(va, tvia, na, uva, 0);
        }

        internal static SubMesh CubeSubMesh16(Vector3 c, float r)
        {
            int nFace = 6;
            int ntri = nFace * 2; // 12
            int nvt = ntri * 3;   // 36
            int[] tvia = new int[nvt];



            int nv = 16;
            Vector3[] va = new Vector3[nv];
            Vector2[] uva = new Vector2[nv];

            int vi = 0;

            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, -r);
            va[vi++] = c + new Vector3(-r, +r, -r);
            va[vi++] = c + new Vector3(+r, +r, -r);

            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(+r, -r, +r);
            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi++] = c + new Vector3(+r, +r, +r);

            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, -r);
            va[vi++] = c + new Vector3(-r, +r, -r);
            va[vi++] = c + new Vector3(+r, +r, -r);

            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(+r, -r, +r);
            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi  ] = c + new Vector3(+r, +r, +r);

            int ui = 0;
            uva[ui++] = new Vector2(0, 0);
            uva[ui++] = new Vector2(1, 0);
            uva[ui++] = new Vector2(0, 1);
            uva[ui++] = new Vector2(1, 1);

            uva[ui++] = new Vector2(0, 1);
            uva[ui++] = new Vector2(1, 1);
            uva[ui++] = new Vector2(0, 2);
            uva[ui++] = new Vector2(1, 2);

            uva[ui++] = new Vector2(0, 1);
            uva[ui++] = new Vector2(0, 0);
            uva[ui++] = new Vector2(1, 1);
            uva[ui++] = new Vector2(0, 1);

            uva[ui++] = new Vector2(0, 0);
            uva[ui++] = new Vector2(1, 0);
            uva[ui++] = new Vector2(0, 1);
            uva[ui  ] = new Vector2(1, 1);


            // unity uses clockwise winding order
            int ti = 0;

            //front
            tvia[ti++] = 0;
            tvia[ti++] = 3;
            tvia[ti++] = 1;

            tvia[ti++] = 0;
            tvia[ti++] = 2;
            tvia[ti++] = 3;

            //top
            tvia[ti++] = 2;
            tvia[ti++] = 7;
            tvia[ti++] = 3;

            tvia[ti++] = 2;
            tvia[ti++] = 6;
            tvia[ti++] = 7;

            //back
            tvia[ti++] = 6;
            tvia[ti++] = 5;
            tvia[ti++] = 7;

            tvia[ti++] = 6;
            tvia[ti++] = 4;
            tvia[ti++] = 5;

            //bottom
            tvia[ti++] = 4;
            tvia[ti++] = 1;
            tvia[ti++] = 5;

            tvia[ti++] = 4;
            tvia[ti++] = 0;
            tvia[ti++] = 1;

            //left
            tvia[ti++] = 12;
            tvia[ti++] = 10;
            tvia[ti++] = 8;

            tvia[ti++] = 12;
            tvia[ti++] = 14;
            tvia[ti++] = 10;

            //right
            tvia[ti++] = 9;
            tvia[ti++] = 15;
            tvia[ti++] = 13;

            tvia[ti++] = 9;
            tvia[ti++] = 11;
            tvia[ti  ] = 15;

            Vector3[] na = new Vector3[nv];
            for (int i = 0; i < nv; i++) na[i] = va[i] - c;

            return new SubMesh(va, tvia, na, uva, 0);
        }

        internal static SubMesh CubeSubMesh24(Vector3 c, float r)
        {
            int nFace = 6;
            int ntri = nFace * 2; // 12
            int nvt = ntri * 3;   // 36
            int[] tvia = new int[nvt];



            int nv = 24;
            Vector3[] va = new Vector3[nv];
            Vector2[] uva = new Vector2[nv];

            int vi = 0;

            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, -r);
            va[vi++] = c + new Vector3(-r, +r, -r);
            va[vi++] = c + new Vector3(+r, +r, -r);

            va[vi++] = c + new Vector3(-r, +r, -r);
            va[vi++] = c + new Vector3(+r, +r, -r);
            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi++] = c + new Vector3(+r, +r, +r);

            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi++] = c + new Vector3(+r, +r, +r);
            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(+r, -r, +r);

            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(+r, -r, +r);
            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, -r);

            va[vi++] = c + new Vector3(-r, -r, +r);
            va[vi++] = c + new Vector3(-r, -r, -r);
            va[vi++] = c + new Vector3(-r, +r, +r);
            va[vi++] = c + new Vector3(-r, +r, -r);

            va[vi++] = c + new Vector3(+r, -r, -r);
            va[vi++] = c + new Vector3(+r, -r, +r);
            va[vi++] = c + new Vector3(+r, +r, -r);
            va[vi  ] = c + new Vector3(+r, +r, +r);


            int ui = 0;
            for (int ui2 = 0; ui2 < 6; ui2++)
            {
                uva[ui++] = new Vector2(0, 0);
                uva[ui++] = new Vector2(1, 0);
                uva[ui++] = new Vector2(0, 1);
                uva[ui++] = new Vector2(1, 1);
            }

            // unity uses clockwise winding order
            // face order - front, top, back, bottom, left, right
            int ti = 0;
            for (int ti2 = 0; ti2 < 6; ti2++)
            {
                int fi = ti2 * 4;

                tvia[ti++] = fi + 0;
                tvia[ti++] = fi + 3;
                tvia[ti++] = fi + 1;

                tvia[ti++] = fi + 0;
                tvia[ti++] = fi + 2;
                tvia[ti++] = fi + 3;
            }

            Vector3[] na = new Vector3[nv];
            Vector3[] faceNormals = { Vector3.back, Vector3.up, Vector3.forward, Vector3.down, Vector3.left, Vector3.right, };

            int ni = 0;
            for (int fi = 0; fi < faceNormals.Length; fi++)
            {
                for (int fvi = 0; fvi < 4; fvi++) na[ni++] = faceNormals[fi];
            }

            return new SubMesh(va, tvia, na, uva, 0);
        }


    }
}
