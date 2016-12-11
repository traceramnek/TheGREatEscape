using UnityEngine;
using System.Collections;

public class ButtonPushed : MonoBehaviour {

	public string Name;
	public int chosen;
	public BossQuestions bq;
	public int correct_answer;
	public HealthBar Health;
	public PlayerController player;
	public GameButtons clear;

	// Use this for initialization
	void Start () {
		Health = FindObjectOfType<HealthBar> ();
		player = FindObjectOfType<PlayerController> ();
		bq = FindObjectOfType<BossQuestions> ();
		clear = FindObjectOfType<GameButtons> ();
		correct_answer = bq.correct_index;
		print ("correct answer inside buttonpushed is");
		print(correct_answer);
		Name = gameObject.name;
		print ("Name is");
		print (Name);
		chosen = int.Parse (Name);
	}
		
	public void Pushed(){
		if (chosen == correct_answer) {
			player.rightSound.Play ();
		} 
		else {

			Health.changeBar (10);	
			player.wrongSound.Play ();
		}
		clear.ClearQuestionDisplay ();
	}
		
}
