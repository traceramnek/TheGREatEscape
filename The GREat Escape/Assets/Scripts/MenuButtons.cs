using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour {

	public void PlayGame()
	{
		SceneManager.LoadScene ("Level1");
	}

	public void GoToInstructions(){
		SceneManager.LoadScene ("Instructions");
	}

	public void Settings(){
		SceneManager.LoadScene ("Settings");
	}

	public void QuitGame()
	{
		Application.Quit ();
	}
}
