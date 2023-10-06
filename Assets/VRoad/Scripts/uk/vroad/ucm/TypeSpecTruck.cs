using System;
using uk.vroad.api.enums;
using UnityEngine;

namespace uk.vroad.ucm
{
    public class TypeSpecTruck: MonoBehaviour
    {
        public enum TruckEngineType
        {
            PetrolTruckSmall,
            DieselTruckSmall,
            DieselTruckMedium,
            DieselTruckLarge,
        }
        
        [Tooltip("Where there are two or more types in a vehicle class, this value controls how many there are in the " +
                 "population. That is, probability of this vehicle being generated is abundance / (sum of all abundances)")]
        public float abundance;
        public float wheelBaseMetres;
        public TruckEngineType engineType;
        [Tooltip("If this truck (tractor unit) has a trailer, this is the distance to the connection point behind the " +
                 "back of this truck, this value is often negative")]
        public float trailerOffset;
        
        public MotorType GetMotorType()
        {
            switch (engineType)
            {
                case TruckEngineType.PetrolTruckSmall: return MotorType.PetrolTruckSmall;
                case TruckEngineType.DieselTruckSmall: return MotorType.DieselTruckSmall;
                case TruckEngineType.DieselTruckMedium: return MotorType.DieselTruckMedium;
                case TruckEngineType.DieselTruckLarge: return MotorType.DieselTruckLarge;
                default: break;
            }
            return MotorType.DieselTruckLarge;
        }

    }
}