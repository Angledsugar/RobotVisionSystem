using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Unity.Robotics.ROSTCPConnector;
using Unity.Robotics.ROSTCPConnector.MessageGeneration;

using RosMessageTypes.Rvs;
using RosMessageTypes.Std;
using RosMessageTypes.Sensor;
using RosMessageTypes.BuiltinInterfaces;


public class Car : MonoBehaviour
{
    ROSConnection ros;
    RenderTexture RenderTexture;
    public Ray[] ray = new Ray[12];
    public RaycastHit hit;
    public float[] CarRay = new float[12]; 
    public string cartopic = "/car/state";
    public string carraytopic = "/car/sensor/ray";
    
    public string frontimagetopic = "/car/camera/front";

    public float publishMessageFrequency = 0.5f;
    private float timeElapsed;

    private const string HORIZONTAL = "Horizontal";
    private const string VERTICAL = "Vertical";

    private float horizontalInput;
    private float verticalInput;
    private float currentSteerAngle;
    private float currentbreakForce;
    private bool isBreaking;
    private bool CarReset;
    private Vector3 initCarPosition;
    private Quaternion initCarRotation;

    public float steer;
    public float speed;
    public bool stopbreak; 

    [SerializeField] public GameObject car;
    [SerializeField] public Camera FrontCamera;
    // [SerializeField] public ;

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

    void Start()
    {
        ros = ROSConnection.GetOrCreateInstance();
        ros.RegisterPublisher<StateMsg>(cartopic);
        ros.RegisterPublisher<RayMsg>(carraytopic);
        ros.RegisterPublisher<ImageMsg>(frontimagetopic);

        ros.Subscribe<MotorMsg>("/car/motor", SubscribeControl);

        initCarPosition = transform.position;
        initCarRotation = transform.rotation;
    }
    void Update()
    {
        timeElapsed += Time.deltaTime;
        if (timeElapsed > publishMessageFrequency)
        {
            PublishImage(FrontCamera, frontimagetopic);
            PublishCarstate();
            PublishCarRay();

            timeElapsed = 0;
        }
    }
    private void FixedUpdate()
    {

        if(Input.GetKey(KeyCode.R))
        {
            transform.position = initCarPosition;
            transform.rotation = initCarRotation;
        }
        GetInput();
        HandleMotor();
        HandleSteering();
        UpdateWheels();
    }


    private void GetInput()
    {
        // horizontalInput = Input.GetAxis(HORIZONTAL);
        // verticalInput = Input.GetAxis(VERTICAL);
        // isBreaking = Input.GetKey(KeyCode.Space);
        horizontalInput = steer;
        verticalInput = speed;
        isBreaking = stopbreak;
    }

    private void HandleMotor()
    {
        frontLeftWheelCollider.motorTorque = verticalInput * motorForce;
        frontRightWheelCollider.motorTorque = verticalInput * motorForce;
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
        currentSteerAngle = horizontalInput;
        frontLeftWheelCollider.steerAngle = currentSteerAngle;
        frontRightWheelCollider.steerAngle = currentSteerAngle;
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
    void SubscribeControl(MotorMsg controlMessage)
    {
        if (30.0f < controlMessage.steer) steer = 30.0f;
        else if (controlMessage.steer < -30.0f) steer = -30.0f;
        else steer = controlMessage.steer;

        if (100.0f < controlMessage.motorspeed) speed = 100.0f;
        else if (controlMessage.motorspeed < -30.0f) speed = -30.0f;
        else speed = controlMessage.motorspeed;

        stopbreak = controlMessage.breakbool;
        
    }

    void PublishImage(Camera sensorCamera, string topicName)
    {
        var oldRT = RenderTexture.active;
        RenderTexture.active = sensorCamera.targetTexture;
        sensorCamera.Render();

        // Convert bgr8 to rgb8 image
        // byte[] bytes = new byte[pixels.Length * 3];

        // for (int i = pixels.Length - 1; i != 0 ; i--)
        // {
        //     bytes[3i] = (byte)pixels[i].b;
        //     bytes[3i + 1] = (byte)pixels[i].g;
        //     bytes[3*i + 2] = (byte)pixels[i].r;
        // }

        // Copy the pixels from the GPU into a texture so we can work with them
        // For more efficiency you should reuse this texture, instead of creating and disposing them every time
        Texture2D camText = new Texture2D(sensorCamera.targetTexture.width, sensorCamera.targetTexture.height);
        camText.ReadPixels(new Rect(0, 0, sensorCamera.targetTexture.width, sensorCamera.targetTexture.height), 0, 0);
        camText.Apply();
        RenderTexture.active = oldRT;
        
        // Encode the texture as an ImageMsg, and send to ROS
       
        ImageMsg imageMsg = camText.ToImageMsg(new HeaderMsg());
        ros.Publish(topicName, imageMsg);
        //camText.Dispose();
    }

    void PublishCarstate()
    {
        StateMsg carPos = new StateMsg(
                car.transform.position.x,
                car.transform.position.y,
                car.transform.position.z,
                car.transform.rotation.x,
                car.transform.rotation.y,
                car.transform.rotation.z,
                car.transform.rotation.w
            );
        
        ros.Publish(cartopic, carPos);
    }

    void PublishCarRay()
    {
        int angles = 0;
        Vector3 carposition = new Vector3(transform.position.x, transform.position.y + 0.5f, transform.position.z);

        for (int i = 0; i <= 11; i++){
            var quaternion = Quaternion.Euler(0, angles, 0);
            ray[i] = new Ray(carposition , quaternion * transform.forward);
            angles = angles + 30;

            if (Physics.Raycast(ray[i], out hit, 100f))
            {
                CarRay[i] = hit.distance;
                // Debug.Log(hit.distance);
                // Debug.DrawRay(ray[i].origin, ray[i].direction * 100f, Color.red);
            }
        }
        RayMsg CarRayArray = new RayMsg(CarRay);
        ros.Publish(carraytopic, CarRayArray);
    }
}