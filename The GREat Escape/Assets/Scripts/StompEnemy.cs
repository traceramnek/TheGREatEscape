using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class StompEnemy : MonoBehaviour {
	// Use this for initialization
	public Text questionDisplay;
	public BossQuestions boss;
	public Button choice1;
	public Button choice2;
	public Button choice3;
	public Button choice4;
	public QuestionCanvas qCanvas;
	public QuestionPanel panel;
	public int answer;

	void Start () {
		boss = FindObjectOfType<BossQuestions> ();
		qCanvas = FindObjectOfType<QuestionCanvas> ();
		panel = FindObjectOfType<QuestionPanel> ();


	}
	
	// Update is called once per frame
	void Update () {

	}

	void MC(){
		//assign word choices to button texts
		choice1.GetComponentInChildren<Text>().text = boss.multiple_choice [0];
		choice2.GetComponentInChildren<Text>().text = boss.multiple_choice [1];
		choice3.GetComponentInChildren<Text>().text = boss.multiple_choice [2];
		choice4.GetComponentInChildren<Text>().text = boss.multiple_choice [3];

	}

	/*void answerQuestion(int answer){
		
		print ("inside answer question");
		if (EventSystem.current.currentSelectedGameObject.name == "Choice1") {
			if (answer != 0) {
				Health.changeBar (10);	
				player.wrongSound.Play ();
			} else
				player.rightSound.Play ();
		}
		if (EventSystem.current.currentSelectedGameObject.name == "Choice2") {
			if (answer != 1) {
				Health.changeBar (10);	
				player.wrongSound.Play ();
			} else
				player.rightSound.Play ();
		}
		if (EventSystem.current.currentSelectedGameObject.name == "Choice3") {
			
			if (answer != 2) {
				Health.changeBar (10);	
				player.wrongSound.Play ();
			} else
				player.rightSound.Play ();
		}
		if (EventSystem.current.currentSelectedGameObject.name == "Choice4") {
			if (answer != 3) {
				Health.changeBar (10);	
				player.wrongSound.Play ();
			} else
				player.rightSound.Play ();
		}
			

	}

*/

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			Destroy (other.gameObject);
		}

		if (other.tag == "Boss") {
			qCanvas.enableQuestionCanvas ();
			panel.enable ();

			string ques = boss.pickQuestion ();
			questionDisplay.text = ques;
			MC ();

			Time.timeScale = 0.0f;

		}

	}
}
