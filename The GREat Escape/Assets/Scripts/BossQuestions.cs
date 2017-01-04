using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Linq;

public class BossQuestions : MonoBehaviour {

	const int NumOptions = 13;
	const int NumChoices = 4;

	//const int NumOptions = 13;
	public Text Question, Ans1, Ans2, Ans3;

	public int numWords = BookScript.bookControl.words.Length;
	public char delim, delim2;
	public string wrdTmp, defTmp, currQuestion;
	public static SortedDictionary<string,string> questionsAnswers; // map of questions and answers. Q is key, A is value
	public List<string> answerOptions;
	public List<string> keyList;
	public static List<string> currAnswers; //Array used to make sure answers aren't repeated
	public string[] multiple_choice; //Array of multiple choice options
	public static int correct_index;
	public static List<string> questionsUsed;
	// Use this for initialization
	void Start () {
		questionsAnswers = new SortedDictionary<string,string> ();
		delim = ':';
		delim2 = '.';
	//	answerOptions = new List<string>[NumOptions];
		answerOptions = new List<string> ();
		questionsUsed = new List<string> ();
		currAnswers = new List<string> ();
		parseCorrectWords ();
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

	//checks if index is in reviewIndicies
	public bool isRevWord(string check){ 
		foreach (string i in BookScript.bookControl.reviewWords) {
			if(check == i) { 
				return true;
			}
		}
		return false;
	}

	public bool isQuesUsed(string check){
		foreach (string i in questionsUsed) {
			if (i == check)
				return true;
		}
		return false;
	}

	// sets map with questions and answers
	public void parseCorrectWords(){
		foreach (string str in BookScript.bookControl.words) {
			//			parseStr (str);
			//			questionsAnswers [defTmp] = wrdTmp;
			if (isRevWord (str)) { // if in review, ignore it
				print("in set words for loop");
				//set review word in QA Map
				parseStr (str);
				questionsAnswers [defTmp] = wrdTmp;
				continue; // go to next iteration
			}

			//only add words that weren't in review as non-correct answer options
			print("outside of set words for loop");
			parseStr (str);
			answerOptions.Add (wrdTmp);
			print ("IN PARSEWORDS " + defTmp);

		}
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
	public string pickQuestion(){
		//list of all keys in questionAnswers
		print("inside pickQuestion");
		keyList = new List<string> (questionsAnswers.Keys);

		//assign element at a random index from 0 to size of keyList to the string randomKey (will be our question)
		string randomKey = keyList[Random.Range(0, keyList.Count-1)];
		print ("randomkey chose:");
		print (randomKey);
		while (isQuesUsed (randomKey)) {
		  randomKey = keyList[Random.Range(0, keyList.Count-1)];
		}
		assignAnswers (questionsAnswers [randomKey]);
		return randomKey;

	}

	public void assignAnswers(string correct){
		correct_index = Random.Range (0, NumChoices-1);
		print("The correct index inside bossquestions is:");
		print(correct_index);
	
		multiple_choice = new string[NumChoices];
		multiple_choice [correct_index] = correct;
		currAnswers.Add (correct);

		for (int i = 0; i <= NumChoices-1; i++) {
			if (i != correct_index) {
				int rand = Random.Range (0, answerOptions.Count - 1);
				string ans = answerOptions [rand];

				while (currAnswers.Contains (ans)) {
					rand = Random.Range (0, answerOptions.Count - 1);
					ans = answerOptions [rand];
				}
				//if (answerOptions [rand] != correct )
				multiple_choice [i] = ans;
				currAnswers.Add (ans);

			}

			else
				continue;
		
		}

		currAnswers.Clear ();

	}


	public bool isQuestionUsed(string word){ // check if question was already used
		foreach (string str in questionsAnswers.Keys) {
			if ( word == str ) {
				return true;
			}
		}
		return false;
	}

	//checks if player got question correct
	public bool checkAnswer(string playerAnswer){
		if (questionsAnswers [currQuestion].Equals (playerAnswer)) {
			return true;
		}
		return false;
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			parseCorrectWords ();
		}
	}
}
