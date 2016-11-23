using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ReviewScript : MonoBehaviour {
	const int NUM_REVIEW_WORDS = 4;

	public Text revWord1, revWord2, revWord3, revWord4;
	public List<string> reviewWords;


	// Use this for initialization
	void Start () {
		reviewWords = BookScript.bookControl.getReviewWords ();

		// set each review word somehow

	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
