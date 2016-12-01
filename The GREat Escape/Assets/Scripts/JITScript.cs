using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class JITScript : MonoBehaviour { // JUST IN TIME INSTRUCTIONS


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
				wordDisplay.text = "Press the left and right arrow to move \n\nUse spacebar to jump";
				Time.timeScale = 0.0f;
				break;
			case "Objective":
				wordDisplay.text = "Collect all of the books in the word and study their contents \n\nWatch out for enemies and dangerous objects";
				Time.timeScale = 0.0f;
				break;
			case "BeforeReview":
				wordDisplay.text = "Press the up key over the door to continue to the review section";
				Time.timeScale = 0.0f;
				break;
			}

		}
	}
}
