using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class BossQuestions : MonoBehaviour {

	const int NumOptions = 13;
	public Text Question, Ans1, Ans2, Ans3, Ans4;


	public char delim, delim2;
	public string wrdTmp, defTmp, currQuestion;
	public SortedDictionary<string,string> questionsAnswers; // map of questions and answers. Q is key, A is value
	public List<string> answerOptions;

	// Use this for initialization
	void Start () {
		questionsAnswers = new SortedDictionary<string, string> ();
		delim = ':';
		delim2 = '.';
	//	answerOptions = new List<string>[NumOptions];
		answerOptions = new List<string> ();

		parseCorrectWords ();
		setWrongWordOptions ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
	//checks if index is in reviewIndicies
	public bool isInRevInd(int check){ 
		foreach (int i in BookScript.bookControl.reviewIndices) {
			if(i == check) { 
				return true;
			}
		}
		return false;
	}
	//sets All definitions that aren't what player already interacted with
	public void setWrongWordOptions(){
		//go through all words
		for (int i = 0; i < BookScript.bookControl.words.Length; i++) {
			if (isInRevInd (i)) { // if in review, ignore it
				continue; // go to next iteration
			}

			//only add words that weren't in review as non-correct answer options
			parseStr (BookScript.bookControl.words [i]);
			answerOptions.Add (defTmp);
			print ("IN SETWORDOPTIONS" + defTmp);
		}
	}
	// sets map with questions and answers
	public void parseCorrectWords(){
		foreach (string str in BookScript.bookControl.words) {
			parseStr (str);
			questionsAnswers [defTmp] = wrdTmp;
		}
		print ("IN PARSEWORDS" + defTmp);
	}
	//checks if player got question correct
	public bool checkAnswer(string playerAnswer){
		if (questionsAnswers [currQuestion].Equals (playerAnswer)) {
			return true;
		}
		return false;
	}
	// breaks word,def string into separate word and definition
	public void parseStr(string toParse){
		int len = toParse.IndexOf (delim);
		int len2 = toParse.IndexOf (delim2);


		if (len > 0) {
			wrdTmp = toParse.Substring (0, len); // gets word up till the :
			defTmp = toParse.Substring(len+1, (len2-len+1) ); // get def up to .
			print(wrdTmp);
			print (defTmp);
		}

	}


	public void pickQuestion(){
		//nothing yet
	}

	public bool isQuestionUsed(string word){ // check if question was already used
		foreach (string str in questionsAnswers.Keys) {
			if ( word == str ) {
				return true;
			}
		}
		return false;
	}


	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			parseCorrectWords ();
			setWrongWordOptions ();
		}
	}
}
