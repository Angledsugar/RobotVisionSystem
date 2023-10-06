using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class HostipInput : MonoBehaviour
{
    public InputField hostipinput;
    public string hostip = null;

    public GameObject Canvas;

    private void Start()
    {
        Debug.Log("Put on your ROS Bridge URL!");
    }
 
    private void Update()
    {
        hostip = hostipinput.GetComponent<InputField>().text;
        if (hostip.Length > 0 && Input.GetKeyDown(KeyCode.Return))
        {
            InputName();
        }
    }
 
    //마우스
    public void InputName()
    {
        hostip = hostipinput.text;
        // Debug.Log(hostip);
        SceneManager.LoadScene("xycar");
        DontDestroyOnLoad(Canvas);
    }
}
