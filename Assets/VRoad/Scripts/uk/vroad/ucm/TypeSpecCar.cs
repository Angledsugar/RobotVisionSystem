using uk.vroad.api.enums;
using UnityEngine;

namespace uk.vroad.ucm
{
    public class TypeSpecCar: MonoBehaviour
    {
        public enum CarEngineType
        {
            PetrolCarSmall,
            PetrolCarMedium ,
            PetrolCarLarge ,
            DieselCarMedium ,
            DieselCarLarge ,
            ElectricCar ,
            HybridCar,
        }
        
        [Tooltip("Where there are two or more types in a vehicle class, this value controls how many there are in the " +
                 "population. That is, probability of this vehicle being generated is abundance / (sum of all abundances)")]
        public float abundance;
        public float wheelBaseMetres;
        public CarEngineType engineType;
        
        public MotorType GetMotorType()
        {
            switch (engineType)
            {
                case CarEngineType.PetrolCarSmall: return MotorType.PetrolCarSmall;
                case CarEngineType.PetrolCarMedium: return MotorType.PetrolCarMedium;
                case CarEngineType.PetrolCarLarge: return MotorType.PetrolCarLarge;
                case CarEngineType.DieselCarMedium: return MotorType.DieselCarMedium;
                case CarEngineType.DieselCarLarge: return MotorType.DieselCarLarge;
                case CarEngineType.ElectricCar: return MotorType.ElectricCar;
                case CarEngineType.HybridCar: return MotorType.HybridCar;
                default: break;
            }
            return MotorType.PetrolCarMedium;
        }
        
    }
}