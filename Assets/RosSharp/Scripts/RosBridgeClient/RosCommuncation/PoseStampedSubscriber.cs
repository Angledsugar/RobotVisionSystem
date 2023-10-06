using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RosSharp.RosBridgeClient
{
    public class PoseStampedSubscriber : UnitySubscriber<MessageTypes.Geometry.PoseStamped>
    {
        public Transform PublishedTransform;

        private Vector3 positions;
        private Quaternion rotations;
        private bool isMessageReceived;

        //Carcomtrollers
        private const string HORIZONTAL = "Horizontal";
        private const string VERTICAL = "Vertical";

        private float horizontalInput;
        private float verticalInput;
        private float currentSteerAngle;
        private float currentbreakForce;
        private bool isBreaking;

        [SerializeField] private float motorForce;
        [SerializeField] private float breakForce;
        [SerializeField] private float maxSteerAngle;

        [SerializeField] private WheelCollider frontLeftWheelCollider;
        [SerializeField] private WheelCollider frontRightWheelCollider;
        [SerializeField] private WheelCollider rearLeftWheelCollider;
        [SerializeField] private WheelCollider rearRightWheelCollider;

        [SerializeField] private Transform frontLeftWheelTransform;
        [SerializeField] private Transform frontRightWheeTransform;
        [SerializeField] private Transform rearLeftWheelTransform;
        [SerializeField] private Transform rearRightWheelTransform;
        ///
        
        protected override void Start()
        {
			base.Start();
		}
		
        private void Update()
        {
            if (isMessageReceived)
                ProcessMessage();
        }

        ///
        private void FixedUpdate()
        {
            GetInput();
            HandleMotor();
            HandleSteering();
            UpdateWheels();
        }
        
        private void GetInput()
        {
            horizontalInput = Input.GetAxis(HORIZONTAL);
            verticalInput = Input.GetAxis(VERTICAL);
            // Debug.Log(horizontalInput);
            isBreaking = Input.GetKey(KeyCode.Space);
        }

        private void HandleMotor()
        {
            // frontLeftWheelCollider.motorTorque = verticalInput * motorForce; // position
            // frontRightWheelCollider.motorTorque = verticalInput * motorForce; // position
            // Debug.Log(position);
            frontLeftWheelCollider.motorTorque = positions.z * motorForce; // position
            frontRightWheelCollider.motorTorque = positions.z * motorForce; // position

            // frontLeftWheelCollider.motorTorque = 1 * motorForce; // position
            // frontRightWheelCollider.motorTorque = 1 * motorForce; // position

            currentbreakForce = isBreaking ? breakForce : 0f;
            ApplyBreaking();       
        }

        private void ApplyBreaking()
        {
            frontRightWheelCollider.brakeTorque = currentbreakForce;
            frontLeftWheelCollider.brakeTorque = currentbreakForce;
            rearLeftWheelCollider.brakeTorque = currentbreakForce;
            rearRightWheelCollider.brakeTorque = currentbreakForce;
        }

        private void HandleSteering()
        {
            // currentSteerAngle = maxSteerAngle * horizontalInput;
            // Debug.Log(rotation);
            currentSteerAngle = rotations.z; // rotation

            frontLeftWheelCollider.steerAngle = currentSteerAngle; // rotation
            frontRightWheelCollider.steerAngle = currentSteerAngle; // rotation
        }

        private void UpdateWheels()
        {
            UpdateSingleWheel(frontLeftWheelCollider, frontLeftWheelTransform);
            UpdateSingleWheel(frontRightWheelCollider, frontRightWheeTransform);
            UpdateSingleWheel(rearRightWheelCollider, rearRightWheelTransform);
            UpdateSingleWheel(rearLeftWheelCollider, rearLeftWheelTransform);
        }

        private void UpdateSingleWheel(WheelCollider wheelCollider, Transform wheelTransform)
        {
            Vector3 pos;
            Quaternion rot;
            wheelCollider.GetWorldPose(out pos, out rot);
            wheelTransform.rotation = rot;
            wheelTransform.position = pos;
        }
        ////


        protected override void ReceiveMessage(MessageTypes.Geometry.PoseStamped message)
        {
            positions = GetPosition(message).Ros2Unity();
            rotations = GetRotation(message).Ros2Unity();
            // Debug.Log(rotation);
            isMessageReceived = true;
        }

        private void ProcessMessage()
        {
            PublishedTransform.position = positions;
            PublishedTransform.rotation = rotations;
        }

        private Vector3 GetPosition(MessageTypes.Geometry.PoseStamped message)
        {
            return new Vector3(
                (float)message.pose.position.x,
                (float)message.pose.position.y,
                (float)message.pose.position.z);
        }

        private Quaternion GetRotation(MessageTypes.Geometry.PoseStamped message)
        {
            return new Quaternion(
                (float)message.pose.orientation.x,
                (float)message.pose.orientation.y,
                (float)message.pose.orientation.z,
                (float)message.pose.orientation.w);
        }
    }
}