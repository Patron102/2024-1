using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class animal
{
    public string name;
    public string sound;

    public void PlaySound()
    {
        Debug.Log($"{name} : {sound}");
    }
}
