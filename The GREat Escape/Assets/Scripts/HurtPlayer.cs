using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HurtPlayer : MonoBehaviour {
	// Use this for initialization

	public HealthBar Health;
	void Start () {
		Health = FindObjectOfType<HealthBar> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player")
			Health.changeBar(5);
	} 
		
}
