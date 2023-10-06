using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HostIp : MonoBehaviour
{
    public InputField Hostip;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (Hostip.text.Length > 0 && Input.GetKeyDown(KeyCode.Return))
        {
            Debug.Log(Hostip.text);
            PlayerPrefs.SetString("Hostip", Hostip.text);
            Application.Quit();
        }
    }
}
