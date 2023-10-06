using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DisplayChange : MonoBehaviour
{
    public Camera carview;
    public Camera topview;
    public Camera backview;

    void Update(){
        if(Input.GetKeyDown(KeyCode.F1)) ShowCarview();
        if(Input.GetKeyDown(KeyCode.F2)) ShowTopview();
        if(Input.GetKeyDown(KeyCode.F3)) ShowBackview();
    }
    public void ShowCarview() {
        carview.targetDisplay = 0;
        topview.targetDisplay = 1;
        backview.targetDisplay = 1;
    }
    
    public void ShowTopview() {
        carview.targetDisplay = 1;
        topview.targetDisplay = 0;
        backview.targetDisplay = 1;
    }

    public void ShowBackview() {
        carview.targetDisplay = 1;
        topview.targetDisplay = 1;
        backview.targetDisplay = 0;
    }
}
