using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BossHealthBar : MonoBehaviour {


	public float fillAmount=1;
	public Image content;
	public static float current;

	// Use this for initialization
	void Start () {
		current = 30;
		content.fillAmount = Map (current, 0, 30, 0, 1);
	}

	// Update is called once per frame
	public void Update () {

	}


	private float Map(float value, float inMin, float inMax, float outMin, float outMax){
		return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
	}

	public void changeBar(int change){
		current = current - change;
		content.fillAmount = Map (current, 0, 30, 0, 1);

		if (current == 0) {
			BookScript.bookControl.ResetBooks();
			BossQuestions.questionsUsed.Clear ();
			BossQuestions.questionsAnswers.Clear ();
			BossQuestions.currAnswers.Clear ();
			Destroy (GameObject.FindGameObjectWithTag ("Boss"));

		}
			
	}
}
