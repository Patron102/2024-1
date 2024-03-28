using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class jumper : MonoBehaviour
{
    public Rigidbody myRigidbody;

    private void Start()
    {
        myRigidbody.AddForce(0, 500, 0);
    }
}
