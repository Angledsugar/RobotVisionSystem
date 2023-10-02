//Do not edit! This file was generated by Unity-ROS MessageGeneration.
using System;
using System.Linq;
using System.Collections.Generic;
using System.Text;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

namespace RosMessageTypes.Rvs
{
    [Serializable]
    public class MotorMsg : Message
    {
        public const string k_RosMessageName = "rvs_msgs/Motor";
        public override string RosMessageName => k_RosMessageName;

        public float steer;
        public float motorspeed;
        public bool breakbool;

        public MotorMsg()
        {
            this.steer = 0.0f;
            this.motorspeed = 0.0f;
            this.breakbool = false;
        }

        public MotorMsg(float steer, float motorspeed, bool breakbool)
        {
            this.steer = steer;
            this.motorspeed = motorspeed;
            this.breakbool = breakbool;
        }

        public static MotorMsg Deserialize(MessageDeserializer deserializer) => new MotorMsg(deserializer);

        private MotorMsg(MessageDeserializer deserializer)
        {
            deserializer.Read(out this.steer);
            deserializer.Read(out this.motorspeed);
            deserializer.Read(out this.breakbool);
        }

        public override void SerializeTo(MessageSerializer serializer)
        {
            serializer.Write(this.steer);
            serializer.Write(this.motorspeed);
            serializer.Write(this.breakbool);
        }

        public override string ToString()
        {
            return "MotorMsg: " +
            "\nsteer: " + steer.ToString() +
            "\nmotorspeed: " + motorspeed.ToString() +
            "\nbreakbool: " + breakbool.ToString();
        }

#if UNITY_EDITOR
        [UnityEditor.InitializeOnLoadMethod]
#else
        [UnityEngine.RuntimeInitializeOnLoadMethod]
#endif
        public static void Register()
        {
            MessageRegistry.Register(k_RosMessageName, Deserialize);
        }
    }
}
