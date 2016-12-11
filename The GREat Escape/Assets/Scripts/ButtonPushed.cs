using UnityEngine;
using System.Collections;

public class ButtonPushed : MonoBehaviour {

	public string Name;
	public int chosen;
	public int correct_answer;
	public HealthBar Health;
	public BossHealthBar bossHealth;
	public PlayerController player;
	public GameButtons clear;

	// Use this for initialization
	void Start () {
		Health = FindObjectOfType<HealthBar> ();
		bossHealth = FindObjectOfType<BossHealthBar> ();
		player = FindObjectOfType<PlayerController> ();
		clear = FindObjectOfType<GameButtons> ();

	}
		
	public void Pushed(){
		correct_answer = BossQuestions.correct_index;
		print ("correct answer inside buttonpushed is");
		print(correct_answer);
		Name = gameObject.name;
		print ("Name is");
		print (Name);
		chosen = int.Parse (Name);

		if (chosen == correct_answer) {
			player.rightSound.Play ();
			bossHealth.changeBar (10);
			BossQuestions.questionsUsed.Add (StompEnemy.ques);
	
		} 
		if (chosen != correct_answer)
		{
			Health.changeBar (10);	
			player.wrongSound.Play ();
		}
		clear.ClearQuestionDisplay ();
	}
		
}
