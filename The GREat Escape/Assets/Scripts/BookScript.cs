using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class BookScript : MonoBehaviour {
	
	const int NUM_REVIEW_WORDS = 4;

	public static BookScript bookControl;

	// list of all the words
	public string[] words;
	public List<string> reviewWords;
	// indices of already picked books so they aren't reused and can be accessed for review
	public List<int> reviewIndices; 

	public int numBooks;
	public int maxBooks;
	public Text numBooksCollected;

	void Awake(){
		if (bookControl == null) {
			DontDestroyOnLoad (gameObject);
			bookControl = this;
		} else {
			Destroy (gameObject);
		}
	}

	// Use this for initialization
	void Start () {
		words = new string[] {
			"Abate: Become less in amount or intensity. \n \n In an hour or so the storm would abate and they could leave.",
			"Chicanery: The use of tricks to decieve someone. \n\n Instead of being truthful on his campaign for sheriff, he resorted to chicanery.",
			"Disseminate: Spread or disperse. \n\n Cover your mouth while sneezing so that you do not disseminate bacteria.",
			"Garrulous: Full of trivial conversation. \n\n Due to Jake's garrulous nature, asking him to keep a secret is impossible.",
			"Laud: Praise, glorify, or honor. \n\n The purpose of the awards is to laud students for their academic excellence.",
			"Cogent: Powerfully persuasive. \n\n The angry husband hired a detective to find cogent proof of his wife's extramarital affair.",
			"Coagulate: Change from a liquid to a thickened or solid state. \n\n Over time the milk will coagulate and become a bottle of disgusting clots.",
			"Lethargic: Deficient in alertness or activity. \n\n You can find my lethargic cat curled up asleep in the warmest spot she can find.",
			"Gainsay: Take contradict or deny. \n\n It would be unwise to gainsay your doctor's suggestions and stop taking your prescription medication. ",
			"Latent: Potentially existing but not presently evident or realized.\n\n The detective asked the lab technician to search the room for latent fingerprints.",
			"Aberrant: Markedly different from an accepted norm.\n\n Sarah's aberrant manners led to her being kicked out of the movie theater.",
			"Abeyance: Temporary cessation or suspension.\n\n Jane's cancer has returned after being in abeyance for nearly two years.",
			"Dissonance: A lack of agreement.\n\n There is a great deal of dissonance between what a liar says and does.",
			"Goad: Prove or annoy so as to stimulate some action or reaction.\n\n Jordan tried to goad his daughter into doing her chores by freezing her allowance payments.",
			"Abscond: Run away, often taking something or somebody along.\n\n He made plans to abscond with the stolen money.",
			"Distend: Cause to expand as if by iternal pressure.\n\n The excess food consumption made her stomach distend from bloat.",
			"Gouge: An impression in a surface, as made by a blow.\n\n The channel had been gouged out by the ebbing water.",

		};

		reviewIndices = new List<int>();
		reviewWords = new List<string> ();
//		numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;

	}
	
	// Update is called once per frame
	void Update () {
	
	}
 

	//increment book count and change the text
	public void updateBookTracker(){
		numBooks++;
		numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
	}

	public string pickWord(){
		int randomNumber = Random.Range (0, words.Length);
		while (isWordUsed (randomNumber)) {
			randomNumber = Random.Range (0, words.Length);
		}

		reviewIndices.Add (randomNumber); // add it to the list so it won't be picked more than once
			
		return words [randomNumber];
	}

	public bool isWordUsed (int wordIndex){

		foreach (int i in reviewIndices) {
			if ( wordIndex == i ) {
				return true;
			}
		}
		return false;
	}

	public void setReviewWords(){
		foreach (int i in reviewIndices) {
			reviewWords.Add (words [i]); // add only the words that were picked;
		}
	}
	public List<string> getReviewWords(){
		return reviewWords;
	}

}
