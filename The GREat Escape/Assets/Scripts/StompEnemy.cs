using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StompEnemy : MonoBehaviour {
	// Use this for initialization
	public Text wordDisplay;
	public BossQuestions boss;

	void Start () {
		boss = FindObjectOfType<BossQuestions> ();
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			Destroy (other.gameObject);
		}

		if (other.tag == "Boss") {
			boss.parseCorrectWords ();
			print ("Entered Collider");
			string ques = boss.pickQuestion ();
			print ("pickQuestion");
			wordDisplay.text = ques;
			Time.timeScale = 0.0f;
		}

	}
}
