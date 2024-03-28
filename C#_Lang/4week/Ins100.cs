using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ins100 : MonoBehaviour
{
    public GameObject prefab;
    void Start()
    {
        for (int i = 0; i < 101; i++) 
        {
            prefab.GetComponent<Transform>().localScale = new Vector3(Random.Range(1, 10), Random.Range(1, 10), Random.Range(1, 10));
            Instantiate(prefab);
        }
    }
}
