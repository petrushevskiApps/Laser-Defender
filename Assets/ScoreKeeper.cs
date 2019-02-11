using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScoreKeeper : MonoBehaviour {

    public static int score;
    private Text scoreText;

    public void Score(int points)
    {
        score += points;
        scoreText.text = score.ToString();
    }
    public static void ResetScore()
    {
        score = 0;
    }
    public int getScore()
    {
        return score;
    }
    // Use this for initialization
    void Start ()
    {
        scoreText = GetComponent<Text>();
	}
	
	// Update is called once per frame
	void Update ()
    {
		
	}
}
