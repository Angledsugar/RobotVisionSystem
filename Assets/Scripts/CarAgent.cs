using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.MLAgents;
using Unity.MLAgents.Sensors;
using Unity.MLAgents.Actuators;
public class CarAgent : Agent
{
    void Update()
    {
        // GetComtressedObservation();
    }

    public override void OnEpisodeBegin()
    {
    }


    public override void OnActionReceived(ActionBuffers actions)
    {
    }

    private void OnCollisionEnter(Collision other) 
    {
    }
}