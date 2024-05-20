using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Swing : MonoBehaviour
{
    
    public ArduinoIMUReader imuReader;
    public Vector3 accel;
    public TrailRenderer trail;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
       accel = imuReader.GetFilteredAccel();
    
       if (accel.magnitude > 80f)
       {
           trail.emitting = true;
       }

       else 
       {
           trail.emitting = false;
       }

    }
    
    
}
