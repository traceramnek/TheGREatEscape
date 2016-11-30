using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HealthBar : MonoBehaviour {
	
	public float fillAmount=1;

	public Image content;
	float current;

	// Use this for initialization
	void Start () {
		current = 50;
	}
	
	// Update is called once per frame
	public void Update () {
		content.fillAmount = Map (current, 0, 50, 0, 1);

	}


	private float Map(float value, float inMin, float inMax, float outMin, float outMax){
		return (value - inMin) * (outMax - outMin) / (inMax - inMin) + outMin;
	}

	public void changeBar(int change){
		current = current - change;
		Update ();
	}
		
}
