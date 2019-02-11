using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public LevelManager levelManager;

    private float MOVE_SPEED = 5f;
    private float padding = 0.5f;

    public GameObject laserPrefab;

    float xmin;
    float xmax;
    float ymin;
    float ymax;

    public float beamSpeed;
    public float fireRate;

    private static float health = 300;

    public AudioClip sfxFire; 
    public AudioClip sfxDeath; 
    // Use this for initialization
    void Start ()
    {

        float distance = transform.position.z - Camera.main.transform.position.z;

        Vector3 leftMaxX = Camera.main.ViewportToWorldPoint(new Vector3(0,0,distance));
        Vector3 rightMaxX = Camera.main.ViewportToWorldPoint(new Vector3(1, 0, distance));

        Vector3 bottomMaxY = Camera.main.ViewportToWorldPoint(new Vector3(1,0, distance));
        Vector3 topMaxY = Camera.main.ViewportToWorldPoint(new Vector3(1, 1, distance));

        xmin = leftMaxX.x + padding;
        xmax = rightMaxX.x - padding;

        ymin = bottomMaxY.y + padding;
        ymax = topMaxY.y - padding;
    }

    public static float getHealth()
    {
        return health / 100;
    }
    public static void resetHealth()
    {
        health = 300;
    }
    // Update is called once per frame
    void Update ()
    {
        if(Input.GetKeyDown(KeyCode.Space)) InvokeRepeating("fire", 0.000001f, fireRate);
        
        if (Input.GetKeyUp(KeyCode.Space)) CancelInvoke("fire");

        if (Input.GetKey(KeyCode.A))
        {
            transform.position = new Vector3(Mathf.Clamp(transform.position.x - MOVE_SPEED * Time.deltaTime,xmin,xmax), transform.position.y);
        }
        else if(Input.GetKey(KeyCode.D))
        {
            transform.position = new Vector3(Mathf.Clamp(transform.position.x + MOVE_SPEED * Time.deltaTime, xmin, xmax), transform.position.y);
        }
        else if (Input.GetKey(KeyCode.W))
        {
            transform.position = new Vector3(transform.position.x, Mathf.Clamp(transform.position.y + MOVE_SPEED * Time.deltaTime,ymin,ymax));
        }
        else if (Input.GetKey(KeyCode.S))
        {
            transform.position = new Vector3(transform.position.x, Mathf.Clamp(transform.position.y - MOVE_SPEED * Time.deltaTime, ymin, ymax));
        }
    }
    void fire()
    {
        GameObject beam = Instantiate(laserPrefab, transform.position + new Vector3(0f, 0.7f, 0f), Quaternion.identity);
        beam.GetComponent<Rigidbody2D>().velocity = new Vector2(0, beamSpeed);
        AudioSource.PlayClipAtPoint(sfxFire, transform.position);
    }

    private void OnTriggerEnter2D(Collider2D collider)
    {
        Projectile missile = collider.gameObject.GetComponent<Projectile>();
        if (missile)
        {
            health -= missile.GetDamage();
            HealthBarController.decrementHealth();
            if (health <= 0)
            {
                AudioSource.PlayClipAtPoint(sfxDeath, transform.position);
                levelManager.LoadNextLevel();
                Destroy(gameObject);
                
            }
        }
    }
}
