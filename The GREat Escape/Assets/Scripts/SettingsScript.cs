using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SettingsScript : MonoBehaviour {

	public Slider volumeSlider;

	// Use this for initialization
	void Start () {
		volumeSlider = GetComponent<Slider> ();
	}
	
	// Update is called once per frame
	void Update () {

	}
		
	public void toggleFullscreen(){
		Screen.fullScreen = !Screen.fullScreen;
	}
}
