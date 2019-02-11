using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Position : MonoBehaviour {

    public GameObject enemyPrefab;

    private void OnDrawGizmos()
    {
        float x = enemyPrefab.GetComponent<Renderer>().bounds.size.x;
        float y = enemyPrefab.GetComponent<Renderer>().bounds.size.y;

        Gizmos.DrawWireSphere(transform.position, x / 2f);
    }
}
