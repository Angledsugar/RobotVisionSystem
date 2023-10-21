using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TrafficeOneLight : MonoBehaviour
{
    public GameObject Red1;
    // public GameObject Red3;
    
    public GameObject Yellow1;
    // public GameObject Yellow3;
    
    public GameObject Green1;
    // public GameObject Green3;

    private float TimeLeft = 10.0f;
    private float nextTime = 0.0f;
    int i = 1;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {   
        if(Time.time > nextTime){
            nextTime = Time.time + TimeLeft;

            if(i == 1){
                Red1.SetActive(true);

                Yellow1.SetActive(false);
                
                Green1.SetActive(false);
            }

            if(i == 2){
                Red1.SetActive(false);

                Yellow1.SetActive(false);
                
                Green1.SetActive(true);
            }

            if(i == 3){
                Red1.SetActive(false);

                Yellow1.SetActive(true);
                
                Green1.SetActive(false);
            }

            if(i == 4){
                Red1.SetActive(true);

                Yellow1.SetActive(false);
                
                Green1.SetActive(false);

                i = -1;
            }

            i ++;

        }
    }
}