using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class MenuButtons : MonoBehaviour {

	public static int currLevel = 1;

	public void PlayGame()
	{
		SceneManager.LoadScene ("EnterName");
	}

    public void ResumeGame()
    {
        
        SceneManager.LoadScene("Level1");
    }

	public void PickBossToGoTo(){
		if (currLevel == 1) {
			GoToBoss ();
			currLevel++;
		} else if (currLevel == 2) {
			GoToBoss2 ();
			currLevel++;
		} else if (currLevel == 3) {
			GoToBoss3 ();
			currLevel++;
		}

	}

	public void GoToBoss(){
		SceneManager.LoadScene ("Boss Battle");
	}

	public void GoToBoss2(){
		SceneManager.LoadScene ("Boss Battle 2");
	}

	public void GoToBoss3(){
		SceneManager.LoadScene ("Boss Battle 3");
	}

	public void GoToInstructions(){
		SceneManager.LoadScene ("Instructions");
		// continue animation for instructions scene
		Time.timeScale = 1f;
	}

	public void StartOver(){
		SceneManager.LoadScene ("TitleScreen");
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

	public void GoToReview1(){
		SceneManager.LoadScene ("Review1");
	}

	public void GoToLevel2(){
		SceneManager.LoadScene ("Level2");
	}

	public void HomeScreen(){
		SceneManager.LoadScene ("Home");
	}

	public void GoToTitle(){
		SceneManager.LoadScene ("TitleScreen");
	}
	public void GoToCredits(){
		SceneManager.LoadScene ("Credits");
	}

	public void GoToNextLevel(){
		SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1); // go to next level in game
	}

	public void TryAgain(){
		BookScript.bookControl.ResetBooks ();
		BookScript.bookControl.reviewIndices.Clear ();
		SceneManager.LoadScene ("EnterName");
	}
}
