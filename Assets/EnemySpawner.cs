using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

    public GameObject enemyPrefab;
    public GameObject enemyRightPrefab;

    public float width = 0f;
    public float height = 0f;

    private float xmin;
    private float xmax;
    public float padding = 0f;

    private bool swap = false;
    public float SPEED = 1f;
    private float spawnDelay = 0.5f;

    // Use this for initialization
    void Start ()
    {

        respawnEnemies();

        calculateBoundries();
    }
    private void OnDrawGizmos()
    {
        Gizmos.DrawWireCube(transform.position, new Vector3(width, height));
    }
    // Update is called once per frame
    void Update ()
    {
        Vector3 currentPosition = transform.position;
        if(!swap)
        {
            transform.position = new Vector3(Mathf.Clamp(transform.position.x - SPEED * Time.deltaTime, xmin, xmax), transform.position.y);

            if (transform.position.x == xmin) swap = true;
        }
        else
        {
            transform.position = new Vector3(Mathf.Clamp(transform.position.x + SPEED * Time.deltaTime, xmin, xmax), transform.position.y);
            
            if (transform.position.x == xmax) swap = false;
        }

        if(allMembersDead())
        {
            respawnEnemies();
        }
	}
    private void respawnEnemies()
    {

        Transform freePosition = NextFreePosition();
        if(freePosition)
        {
            if(width / freePosition.position.x <= 2)
            {
                GameObject enemy = Instantiate(enemyPrefab, freePosition.transform.position, Quaternion.identity);
                enemy.transform.parent = freePosition;
            }
            else
            {
                GameObject enemy = Instantiate(enemyRightPrefab, freePosition.transform.position, Quaternion.identity);
                enemy.transform.parent = freePosition;
            }
        }
        if(NextFreePosition()) Invoke("respawnEnemies", spawnDelay);
    }
    private Transform NextFreePosition()
    {
        foreach (Transform child in transform)
        {
            if (child.childCount == 0) return child;
        }
        return null;
    }
    private bool allMembersDead()
    {
        foreach (Transform child in transform)
        {
            if (child.childCount > 0)
            {
                return false;
            }
            //else width -= enemyPrefab.GetComponent<Renderer>().bounds.size.x;
        }
        return true;
    }

    private void calculateBoundries()
    {

        float distance = transform.position.z - Camera.main.transform.position.z;
        padding = 0.5f * width;

        Debug.Log(padding);
        Vector3 leftMaxX = Camera.main.ViewportToWorldPoint(new Vector3(0, 0, distance));
        Vector3 rightMaxX = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, distance));

        xmin = leftMaxX.x + padding;
        xmax = rightMaxX.x - padding;
    }


}
