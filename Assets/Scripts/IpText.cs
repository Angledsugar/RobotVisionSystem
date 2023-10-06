using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class IpText : MonoBehaviour
{
    public InputField iptext;
    string webip;
    
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public string Texts()
    {
        webip = iptext.text;
        Debug.Log(webip);
        return webip;
    }
}
