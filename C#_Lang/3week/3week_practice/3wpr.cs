using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class 3weekp
{
    void Start()
    {
        int hp = 100;
        Move("동서쪽", 5);
        hp = Attack(10, hp);
        HP(hp);
    }

    void Move(string str, float dis)
    {
        Debug.Log("당신은 " + str + "방향으로 " + dis + "m 만큼 이동하였습니다.");
    }

    int Attack(int deal, int hhp)
    {
        Debug.Log("당신은 적을 공격해 " + deal + "만큼 피해를 주었습니다.");
        int hp = hhp - deal;
        return hp;
    }

    void HP(int hp)
    {
        Debug.Log("적의 체력이 " + hp + "남았습니다.");
    }
}
