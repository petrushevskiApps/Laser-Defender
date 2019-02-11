using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBarController : MonoBehaviour {

    public GameObject healthUnit;

    public static GameObject[] health;
    private static int healthSize;

    // Use this for initialization
    void Start ()
    {
        healthSize = System.Convert.ToInt32(PlayerController.getHealth());
        health = new GameObject[healthSize];

        for (int i=0; i<PlayerController.getHealth(); i++)
        {
            health[i] = Instantiate(healthUnit, transform.position + new Vector3(0.5f * i, 0f, 0f), Quaternion.identity);
        }
    }
	public static void decrementHealth()
    {
        healthSize--;
        Destroy(health[healthSize]);
    }
	// Update is called once per frame
	void Update ()
    {
		
	}
}
