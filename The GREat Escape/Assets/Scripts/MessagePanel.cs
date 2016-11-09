using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MessagePanel : MonoBehaviour {
	public Text WordDisplay;
	public GameObject button;

	// Use this for initialization
	void Start () {
		this.GetComponent<SpriteRenderer>().enabled = false;
		button.SetActive(false);
	}
	
	// Update is called once per frame
	void Update () {
		if (!string.IsNullOrEmpty (WordDisplay.text.ToString ().Trim ())) {
			this.GetComponent<SpriteRenderer>().enabled = true;
			button.SetActive(true);
		} else {
			this.GetComponent<SpriteRenderer>().enabled = false;
			button.SetActive(false);
		}
	}
}
