
using uk.vroad.api.geom;
using UnityEngine;

namespace uk.vroad.ucm
{
    public static class XyzExtensions
    {
        public static Vector3 ToVector3(this Xyz p)
        {
            return new Vector3((float)p.X(), (float)p.Z(), (float)p.Y());
        }
        public static Vector3 ToVector3(this Xyz p, float dz)
        {
            return new Vector3((float)p.X(), (float)p.Z() + dz, (float)p.Y());
        }
        public static Xyz ToXyz(this Vector3 v)
        {
            return new Xyz(v.x, v.z, v.y);
        }
        public static Vector2 ToVector2(this Xy xy)
        {
            return new Vector2((float)xy.X(), (float)xy.Y());
        }

    }
}