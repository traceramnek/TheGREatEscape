using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;

public class ReviewScript : MonoBehaviour {
	
	const int NUM_REVIEW_WORDS = 4;
	public static int reviewNum = 0;
	public Text revWord1, revWord2, revWord3, revWord4, reviewTitle;
	//public Text [] reviewwords;

	// Use this for initialization
	void Start () {

		reviewTitle.text = "Word Review";

		switch (reviewNum) {
		case 1:	
			revWord1.text = BookScript.bookControl.reviewWords [0];
			revWord2.text = BookScript.bookControl.reviewWords [1];
			revWord3.text = BookScript.bookControl.reviewWords [2];
			revWord4.text = BookScript.bookControl.reviewWords [3];
			break;
		case 2:	
			revWord1.text = BookScript.bookControl.reviewWords [4];
			revWord2.text = BookScript.bookControl.reviewWords [5];
			revWord3.text = BookScript.bookControl.reviewWords [6];
			revWord4.text = BookScript.bookControl.reviewWords [7];
			break;
		default:
			// nothing
			break;
		}


		//setReviewWords ();
	}

	public static void updateReviewNum(){
			reviewNum++;
		
	}

	public void setReviewWords(){
		switch (reviewNum) {
		case 1:	
			revWord1.text = BookScript.bookControl.reviewWords [0];
			revWord2.text = BookScript.bookControl.reviewWords [1];
			revWord3.text = BookScript.bookControl.reviewWords [2];
			revWord4.text = BookScript.bookControl.reviewWords [3];
			break;
		case 2:	
			revWord1.text = BookScript.bookControl.reviewWords [4];
			revWord2.text = BookScript.bookControl.reviewWords [5];
			revWord3.text = BookScript.bookControl.reviewWords [6];
			revWord4.text = BookScript.bookControl.reviewWords [7];
			break;
		default:
			// nothing
			break;
		}
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
