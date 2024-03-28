using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class dopo : MonoBehaviour
{
    void Start()
    {
        for(int i =0; i<10; i++)
        {
            Debug.Log($"{i + 1}번째 순서입니다.");
        }
    }
}
