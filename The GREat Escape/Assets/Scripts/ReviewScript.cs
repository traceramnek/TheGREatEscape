using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ReviewScript : MonoBehaviour {
	
	const int NUM_REVIEW_WORDS = 4;

	public Text revWord1, revWord2, revWord3, revWord4, reviewTitle;
	//public Text [] reviewwords;


	// Use this for initialization
	void Start () {
//		reviewwords = new Text[NUM_REVIEW_WORDS];
//		// set each review word somehow
//		reviewwords = GetComponents<Text> ();
//
//		for (int i = 0; i < NUM_REVIEW_WORDS; i++) {
//			
//			reviewwords [i].text = BookScript.bookControl.reviewWords [i];
//		}
		reviewTitle.text = "Word Review";

		revWord1.text = BookScript.bookControl.reviewWords[0];
		revWord2.text = BookScript.bookControl.reviewWords[1];
		revWord3.text = BookScript.bookControl.reviewWords[2];
		revWord4.text = BookScript.bookControl.reviewWords[3];
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
