using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StompEnemy : MonoBehaviour {
	// Use this for initialization
	public Text wordDisplay;

	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Enemy") {
			Destroy (other.gameObject);
		}

		if (other.tag == "Boss") {
			wordDisplay.text = "Multiple Choice";
		}

	}
}
