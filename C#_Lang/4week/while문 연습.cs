using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class while문연습 : MonoBehaviour
{
    void Start()
    {
        int i = 0;
        while (i < 10)
        {
            Debug.Log($"{i+1}번째 루프입니다.");
        }
    }
}
