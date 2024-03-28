using System.Collections;
using System.Collections.Generic;
using UnityEditor.UIElements;
using UnityEngine;

public class Zoo : MonoBehaviour
{ 
    void Start()
    {
        animal tom = new animal();
        tom.name = "톰";
        tom.sound = "냐옹!";

        animal jerry = new animal();
        jerry.name = "제리";
        jerry.sound = "찍찍~";

        jerry = tom;
        jerry.name = "미키";

        tom.PlaySound();
        jerry.PlaySound();
    }
}
