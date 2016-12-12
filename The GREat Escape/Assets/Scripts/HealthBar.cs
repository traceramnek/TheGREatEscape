using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class HealthBar : MonoBehaviour {
	
	public float fillAmount=1;
	public Image content;
    public Text NameText;
	public float current;

	// Use this for initialization
	void Start () {
		current = 50;
		content.fillAmount = Map (current, 0, 50, 0, 1);
        NameText.text = PlayerPrefs.GetString("CurrentPlayer");
	}
	
	// Update is called once per frame
	public void Update () {

	}


	private float Map(float value, float inMin, float inMax, float outMin, float outMax){
		return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
	}

	public void changeBar(int change){
		current = current - change;
		content.fillAmount = Map (current, 0, 50, 0, 1);

		if (current <= 0)
		SceneManager.LoadScene ("Gameover");
		

		
	}
		
}
