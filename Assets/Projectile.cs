using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{

    private float damage = 100f;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public float GetDamage()
    {
        Hit();
        return damage;
    }
    void Hit()
    {
        Destroy(gameObject);
    }
}