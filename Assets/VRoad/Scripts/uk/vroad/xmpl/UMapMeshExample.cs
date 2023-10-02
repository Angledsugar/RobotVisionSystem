using uk.vroad.api;
using uk.vroad.api.xmpl;
using uk.vroad.ucm;
using UnityEngine;

namespace uk.vroad.xmpl
{
    public class UMapMeshExample : UaMapMesh
    {
        private ExampleApp app;

        public static UMapMeshExample MostRecentInstance { get; private set;  }

        protected override App App() { return app; }

        protected override void Awake()
        {
            MostRecentInstance = this;
            
            app = ExampleApp.AwakeInstance();
            base.Awake();
        }

       
        protected override void OnMeshCreationFinish()
        {
            base.OnMeshCreationFinish();
            
            SetupMeshCollider(goMeshLanes);
            SetupMeshCollider(goMeshJunctions);
            SetupMeshCollider(goMeshFootpaths);
            
            SetupMeshCollider(goMeshSolidBuildings);
            SetupMeshCollider(goMeshTerrainSimple);
            SetupMeshCollider(goMeshTerrainLayered);

            SetupMeshCollider(goMeshBridges);
            SetupMeshCollider(goMeshTunnels);
            SetupMeshCollider(goMeshShoulders);
            SetupMeshCollider(goMeshEmbankments);
           
            SetupMeshCollider(goMeshBarriers);
            SetupMeshCollider(goMeshMedians);
        }
        
        private void SetupMeshCollider(GameObject goMesh)
        {
            if (goMesh == null) return;
            
            MeshCollider mc = goMesh.GetComponent<MeshCollider>();
            
            if (goMesh.transform.childCount == 0)
            {
                MeshFilter mf = goMesh.GetComponent<MeshFilter>();
                if (mf != null)
                {
                    Mesh mesh = mf.sharedMesh;
                    if (mesh.triangles.Length > 0)
                    {
                        if (mc == null) mc = goMesh.AddComponent<MeshCollider>();
                        mc.sharedMesh = mesh;
                    }
                }
            }
            else
            {
                if (mc != null) Destroy(mc);
                
                for (int ci = 0; ci < goMesh.transform.childCount; ci++)
                {
                    SetupMeshCollider(goMesh.transform.GetChild(ci).gameObject);
                }
            }
        }
    }
}
