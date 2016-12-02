using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour {

	public void PlayGame()
	{
		SceneManager.LoadScene ("EnterName");
	}

    public void ResumeGame()
    {
        
        SceneManager.LoadScene("Level1");
    }

	public void GoToBoss(){
		SceneManager.LoadScene ("Boss Battle");
	}

	public void GoToInstructions(){
		SceneManager.LoadScene ("Instructions");
		// continue animation for instructions scene
		Time.timeScale = 1f;
	}

	public void Settings(){
		SceneManager.LoadScene ("Settings");
	}

	public void QuitGame()
	{
        PlayerPrefs.DeleteKey("CurrentPlayer");
		Application.Quit ();
	}

	public void GoToWelcome(){
		SceneManager.LoadScene ("Welcome");
	}
	public void GoToEnterName(){
		SceneManager.LoadScene ("EnterName");
	}

}
