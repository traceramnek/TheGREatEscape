using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class HurtPlayer : MonoBehaviour {
	// Use this for initialization

	public HealthBar Health;
	public PlayerController Player;
	void Start () {
		Health = FindObjectOfType<HealthBar> ();
		Player = FindObjectOfType<PlayerController> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D(Collider2D other){
		if (other.tag == "Player") {
			Health.changeBar (5);
			Player.hurtSound.Play ();
		}
	} 
		
}
