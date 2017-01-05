using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Collections.Generic;
using UnityEngine.SceneManagement;

public class ReviewScript : MonoBehaviour {

	const int NUM_REVIEW_WORDS = 4;
	public static int reviewNum = 1;
	public int canSetRev = 2; //used to mod
	public Text revWord1, revWord2, revWord3, revWord4;
	//public Text [] reviewwords;

	// Use this for initialization
	void Start () {

		//	updateReviewNum ();
		//setReviewWords ();
	}

	public static void updateReviewNum(){
		reviewNum++;

	}

	public void setReviewWords(){
		//print ("In RevScr's setRevWrds: reviewNum = " +  reviewNum);
		canSetRev++;
		switch (reviewNum) {
		case 1:	
			revWord1.text = BookScript.bookControl.reviewWords [0];
			revWord2.text = BookScript.bookControl.reviewWords [1];
			revWord3.text = BookScript.bookControl.reviewWords [2];
			revWord4.text = BookScript.bookControl.reviewWords [3];
			updateReviewNum ();
			break;
		case 2:	
			revWord1.text = BookScript.bookControl.reviewWords [4];
			revWord2.text = BookScript.bookControl.reviewWords [5];
			revWord3.text = BookScript.bookControl.reviewWords [6];
			revWord4.text = BookScript.bookControl.reviewWords [7];
			updateReviewNum ();
			break;
		case 3:	
			revWord1.text = BookScript.bookControl.reviewWords [8];
			revWord2.text = BookScript.bookControl.reviewWords [9];
			revWord3.text = BookScript.bookControl.reviewWords [10];
			revWord4.text = BookScript.bookControl.reviewWords [11];
			//updateReviewNum ();
			break;

		default:
			// nothing
			break;
		}
	}

	// Update is called once per frame
	void Update () {
		if (SceneManager.GetActiveScene ().name == "Review1") {
			//print ("In RevScr's Update!");
			if (canSetRev %2 == 0) {
				setReviewWords ();
			}
		}

	}
}
