using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class SettingsScript : MonoBehaviour {

	public Slider volSlider;

	// Use this for initialization
	void Start () {
		volSlider = GetComponent<Slider> ();
	}
	
	// Update is called once per frame
	void Update () {
	}

	public void adjustVolume(){
		AudioListener.volume = volSlider.value / 10.0f;
	}

	public void toggleFullscreen(){
		Screen.fullScreen = !Screen.fullScreen;
	}
}
