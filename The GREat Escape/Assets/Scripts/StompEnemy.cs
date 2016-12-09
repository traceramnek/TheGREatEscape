using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StompEnemy : MonoBehaviour {
	// Use this for initialization
	public Text questionDisplay;
	public BossQuestions boss;
	public Button choice1;
	public Button choice2;
	public Button choice3;
	public Button choice4;
	public Canvas questionCanvas;

	void Start () {
		boss = FindObjectOfType<BossQuestions> ();
	
	}
	
	// Update is called once per frame
	void Update () {

	}
	void EnableButtons(){
		
		GameObject.FindGameObjectWithTag ("Choice1").SetActive (true);
		GameObject.FindGameObjectWithTag ("Choice2").SetActive (true);
		GameObject.FindGameObjectWithTag ("Choice3").SetActive (true);
		GameObject.FindGameObjectWithTag ("Choice4").SetActive (true);

	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			Destroy (other.gameObject);
		}

		if (other.tag == "Boss") {
			questionCanvas.GetComponent<Canvas> ().enabled = true;

			boss.parseCorrectWords ();
			print ("Entered Collider");
			string ques = boss.pickQuestion ();
			print ("pickQuestion");
			questionDisplay.text = ques;
			EnableButtons ();
		//	choice1.guiText = boss.multiple_choice [0];
		//	choice2.guiText = boss.multiple_choice [1];
		//	choice3.guiText = boss.multiple_choice [2];
		//	choice4.guiText = boss.multiple_choice [3];

			Time.timeScale = 0.0f;
		}

	}
}
