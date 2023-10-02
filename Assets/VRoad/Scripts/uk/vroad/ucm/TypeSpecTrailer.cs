using UnityEngine;

namespace uk.vroad.ucm
{
    public class TypeSpecTrailer: MonoBehaviour
    {
        [Tooltip("Where there are two or more types in a vehicle class, this value controls how many there are in the " +
                 "population. That is, probability of this vehicle being generated is abundance / (sum of all abundances)")]
        public float abundance;
        [Tooltip("The distance to the connection point forward of the front of the trailer, this value is often negative")]
        public float trailerOffset;
    }
}