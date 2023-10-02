using uk.vroad.api.enums;
using UnityEngine;

namespace uk.vroad.ucm
{
    public class TypeSpecBus: MonoBehaviour
    {
        public enum BusEngineType
        {
            DieselBus,
            ElectricBus,
        }
        
        [Tooltip("Where there are two or more types in a vehicle class, this value controls how many there are in the " +
                 "population. That is, probability of this vehicle being generated is abundance / (sum of all abundances)")]
        public float abundance;
        public float wheelBaseMetres;
        public BusEngineType engineType;
        
        public MotorType GetMotorType()
        {
            switch (engineType)
            {
                case BusEngineType.DieselBus: return MotorType.DieselBus;
                case BusEngineType.ElectricBus: return MotorType.ElectricBus;
                
                default: break;
            }
            return MotorType.ElectricBus;
        }

    }
}