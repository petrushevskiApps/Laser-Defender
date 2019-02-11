using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MusicPlayer : MonoBehaviour {


    static MusicPlayer instance = null;

    public AudioClip startClip;
    public AudioClip gameClip;
    public AudioClip endClip;

    private AudioSource music;

    private void Awake()
    {
        
    }
    // Use this for initialization
    void Start ()
    {
        if (instance != null && instance != this) Destroy(gameObject);
        else
        {
            instance = this;
            GameObject.DontDestroyOnLoad(gameObject);
            music = GetComponent<AudioSource>();
            music.loop = true;
            music.clip = startClip;
            music.Play();
        }
    }
    private void OnLevelWasLoaded(int level)
    {
        if(music.isPlaying) music.Stop();
        if (level == 0) music.clip = startClip;
        else if (level == 1) { music.volume = 0.05f; music.clip = gameClip; }
        else if (level == 2) music.clip = endClip;
        music.loop = true;
        music.Play();
    }
    // Update is called once per frame
    void Update () {
		
	}
}
