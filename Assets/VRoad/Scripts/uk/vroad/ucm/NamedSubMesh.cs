using uk.vroad.api.map;
using uk.vroad.api.str;
using UnityEngine;

namespace uk.vroad.ucm
{
    /// <summary> A NamedSubMesh allows a GameObject to be associated with a Map Object with a name </summary>
    public class NamedSubMesh: SubMesh
    {
        public static readonly NamedSubMesh[] ZERO = new NamedSubMesh[0];
        public static readonly NamedSubMesh EMPTY_NAMED_SUBMESH = new NamedSubMesh();
        public object MapObject { get; private set; }
        public string GameObjectName { get; private set; }
       
        public NamedSubMesh(object mapObject, Vector3[] va, int[] ta, Vector3[] na, Vector2[] uva, int mati)
            : base(va, ta, na, uva, mati)
        {
            MapObject = mapObject;
            GameObjectName = GetNameFromObject(mapObject);
        }

        private NamedSubMesh() : base()
        {
            MapObject = null;
            GameObjectName = SX.NONE;
        }
        
        // Edit this method to change how the GameObject (and its Mesh) is named for each type of map object
        public static string GetNameFromObject(object mapObject)
        {
            if (mapObject is ILane lane)
            {
                return lane.Description() + SC.UL + lane.ToString();
            }

           
            if (mapObject is ICrossing x)
            {
                return DescribedName(x);
            }
            if (mapObject is IFootpath fp)
            {
                return DescribedName(fp);
            }
           
            if (mapObject is IStop stop)
            {
                return DescribedName(stop);
            }

            if (mapObject is ITaxiZone vz)
            {
                return DescribedName(vz);
            }
           
            if (mapObject is IOutline ol)
            {
                return DescribedName(ol);
            }
            
            /*
            if (mapObject is IStreme streme)
            {
                return streme.ToString();
            }
            
            if (mapObject is IJunction jn)
            {
                return jn.ToString();
            }
            if (mapObject is ICorner cr)
            {
                return cr.ToString();
            }
            
            //*/
            
            return mapObject.ToString();
        }

        private static string DescribedName(IDescribed mapObj)
        {
            string name = mapObj.ToString();
            string desc = mapObj.Description();
            return string.IsNullOrEmpty(desc) ? name: name + SC.UL + desc;
        }
    }
}