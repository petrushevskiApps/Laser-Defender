using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBehaviour : MonoBehaviour {

    private float health = 100;
    public GameObject laserPrefab;
    public float beamSpeed;

    private int score = 10;
    public ScoreKeeper scoreKeeper;

    public AudioClip sfxFire;
    void Start()
    {
        scoreKeeper = GameObject.Find("Score").GetComponent<ScoreKeeper>();
        DontDestroyOnLoad(scoreKeeper);
    }
    private float shotsPerFrame = 0.5f;
    public AudioClip sfxDeath;

    private void Update()
    {
        float probability = Time.deltaTime * shotsPerFrame;
        if (Random.value < probability) fire();
    }
    private void OnTriggerEnter2D(Collider2D colider) 
    {
        Projectile missile = colider.gameObject.GetComponent<Projectile>();
        if(missile)
        {
            health -= missile.GetDamage();
            if (health <= 0)
            {
                AudioSource.PlayClipAtPoint(sfxDeath, transform.position);
                scoreKeeper.Score(score);
                Destroy(gameObject);
            }
        }
    }

    void fire()
    {
        GameObject beam = Instantiate(laserPrefab, transform.position + new Vector3(0f,-0.8f, 0f), Quaternion.identity);
        beam.GetComponent<Rigidbody2D>().velocity = new Vector2(0, beamSpeed);
        AudioSource.PlayClipAtPoint(sfxFire, transform.position);
    }
}
