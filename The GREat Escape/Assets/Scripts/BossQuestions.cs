using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Linq;

public class BossQuestions : MonoBehaviour {

<<<<<<< HEAD
	const int NumOptions = 13;
	const int NumChoices = 4;

=======
	//const int NumOptions = 13;
>>>>>>> origin/master
	public Text Question, Ans1, Ans2, Ans3, Ans4;

	public int numWords = BookScript.bookControl.words.Length;
	public char delim, delim2;
	public string wrdTmp, defTmp, currQuestion;
	public SortedDictionary<string,string> questionsAnswers; // map of questions and answers. Q is key, A is value
	public List<string> answerOptions;
	public List<string> keyList;
	public string[] multiple_choice; //Array of multiple choice options

	// Use this for initialization
	void Start () {
		questionsAnswers = new SortedDictionary<string,string> ();
		delim = ':';
		delim2 = '.';
	//	answerOptions = new List<string>[NumOptions];
		answerOptions = new List<string> ();

		//parseCorrectWords ();
		setWords ();
		print ("set words called in start");
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
	public void setWords(){
		//go through all words
		for (int i = 0; i < numWords; i++) {
			if (isInRevInd (i)) { // if in review, ignore it
				print("in set words for loop");
				//set review word in QA Map
				parseStr (BookScript.bookControl.words [i]);
				questionsAnswers [defTmp] = wrdTmp;
				continue; // go to next iteration
			}

			//only add words that weren't in review as non-correct answer options
			print("outside of set words for loop");
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
			answerOptions.Add (defTmp);
		}

	}


	public string pickQuestion(){
		//list of all keys in questionAnswers
		keyList = new List<string> (questionsAnswers.Keys);
		//assign element at a random index from 0 to size of keyList to the string randomKey (will be our question)
		string randomKey = keyList[Random.Range(0, keyList.Count-1)];
<<<<<<< HEAD
		assignAnswers (randomKey);
		return questionsAnswers [randomKey];
=======
		return randomKey;
>>>>>>> origin/master

	}

	public void assignAnswers(string correct){
		int correct_index = Random.Range (0, NumChoices-1);
	
		multiple_choice = new string[NumChoices];
		multiple_choice [correct_index] = correct;

		for (int i = 0; i <= NumChoices-1; i++) {
			if (i != correct_index) {
				print ("enter if");
				multiple_choice [i] = answerOptions[Random.Range (0, answerOptions.Count - 1)];
				print (" answerOptions assigned");
			}
			else
				continue;
		}
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
			//parseCorrectWords ();
			setWords ();
		}
	}
}
