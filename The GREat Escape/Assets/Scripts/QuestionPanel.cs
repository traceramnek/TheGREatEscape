using UnityEngine;
using System.Collections;

public class QuestionPanel : MonoBehaviour {

	// Use this for initialization
	void Start () {
		
		this.GetComponent<SpriteRenderer>().enabled = false;

	}
	
	// Update is called once per frame
	public void enable () {
		this.GetComponent<SpriteRenderer>().enabled = true;

	}
}
