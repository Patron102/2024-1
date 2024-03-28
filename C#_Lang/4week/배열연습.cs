using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class 배열연습 : MonoBehaviour
{
    void Start()
    {
        int[] students = new int[10];

        int scr = 100;
        for (int i = 0; i < 5; i++)
        {
            students[i] = scr-(i*10);
        }

        for (int i = 0; i < 5; i++)
        {
            Debug.Log($"{i+1}번 학생의 점수 : {students[i]}");
        }
    }
}
