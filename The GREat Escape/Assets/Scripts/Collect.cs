using UnityEngine;
using System.Collections;

public class Collect : MonoBehaviour {
	public AudioSource audioS;

	// Use this for initialization
	void Start () {
		audioS = GetComponent<AudioSource> ();
	}

	public void Sound(){
		audioS.Play();
	}
}
