using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class JITScript : MonoBehaviour { 
	// JUST IN TIME INSTRUCTIONS

	public Text wordDisplay;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			switch (this.tag) {

			case "BeginLevel":
				wordDisplay.text = "Use the left and right arrow keys to move the player. \n Use spacebar to jump.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Objective":
				wordDisplay.text = "Collect all of the books in the world and study their contents. \n\n Watch out for enemies and dangerous objects. Press the left and right arrow to move \n\nUse spacebar to jump.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "BeforeReview":
				wordDisplay.text = "Press the up key over the door to continue to the review section.";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "BossJIT":
				wordDisplay.text = "Get ready to battle the boss\n\n Answer the questions and keep an eye on your health meter";
				Time.timeScale = 0.0f;
				Destroy (this.gameObject);
				break;
			case "Level2JIT":
				BookScript.bookControl.ResetBooks ();
				SceneManager.LoadScene("Level2");
				break;
			}


		}
	}
}
