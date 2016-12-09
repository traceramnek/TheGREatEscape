using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {

	/*
	 * Controls the Player's movement, and jumping ability
	 * Deals with booleans for jumping, falling, and being grounded
	 * Also handles killing and respawning the player by delegating to the Level Manager
	 * 
	*/

	public GameButtons gameButton;// object so player can pause game
	//public BookScript currBook;

	public float moveSpeed; // how fast the player moves 
	public float jumpSpeed; // how high player jumps

	public int numBooks;
	public int maxBooks;

	public Text numBooksCollected;
	public Text wordDisplay;

	private Rigidbody2D myRigidBody; // rigid body used for moving and jumping
	private Animator myAnim; // animator to set values to cause animations

	public Vector3 respawnPosition; // position where player respawns

	//variables for checking if player is on ground or not
	public Transform groundCheck;
	public float groundCheckRadius; // radius of ground check space
	public LayerMask whatIsGround;

	public bool isGrounded; // know if player is on ground
	public bool isJumping; // know if player is jumping

	public AudioSource jumpSound; //sound of player jumping
	public AudioSource hurtSound; 
	public bool isPaused;

	public HealthBar health;

	public List<string> bookNames = new List<string> ();

	public Canvas questionCanvas;

	// Use this for initialization
	void Start () {
		health = FindObjectOfType<HealthBar> ();
		myRigidBody = GetComponent<Rigidbody2D> (); // rigid body for physics
		myAnim = GetComponent<Animator> (); // animator for anim changes
		//numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
		isPaused = false;
		questionCanvas.GetComponent<Canvas> ().enabled = false;
	
	}

	// Update is called once per frame
	void Update () {

		isGrounded = Physics2D.OverlapCircle (groundCheck.position,groundCheckRadius,whatIsGround);

		//HorizontaL input is either 0(no input), 1(going right), or -1(going left)

		//checking RIGHT input
		if (Input.GetAxisRaw ("Horizontal") > 0f) {         //don't change y value
			myRigidBody.velocity = new Vector3 (moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (3f, 3f, 1f); // 3 b/c that's the sprites scale
		} 

		//Checking LEFT input
		else if (Input.GetAxisRaw ("Horizontal") < 0f) {
			myRigidBody.velocity = new Vector3 (-moveSpeed, myRigidBody.velocity.y, 0f);
			transform.localScale = new Vector3 (-3f, 3f, 1f);
		} 
		//NO INPUT
		else {
			myRigidBody.velocity = new Vector3 (0f, myRigidBody.velocity.y, 0f);
		}


		// checking jump input(space or up)
		if (Input.GetButtonDown ("Jump") && isGrounded) {
			// put jumpSpeed in y to move up by moveSpeed
			jumpSound.Play();
			myRigidBody.velocity = new Vector3 (myRigidBody.velocity.x, jumpSpeed, 0f);
			isJumping = true;
			myAnim.SetBool ("Jumping", true);
		}
		// if on the ground, set falling and jumping to false
		else if(isGrounded){ 
			myAnim.SetBool ("Jumping", false);
			isJumping = false;

		}

		//if p is pressed, pause the game
		if(Input.GetKeyDown (KeyCode.P)){
			if (!isPaused) {
				isPaused = true;
				gameButton.PauseGame ();
			} else {
				isPaused = false;
				gameButton.ResumeGame ();
			}

		}


		//Sets variables in order to change animations
		myAnim.SetFloat("Speed", Mathf.Abs(myRigidBody.velocity.x));
		myAnim.SetBool ("Grounded", isGrounded);

//		if (BookScript.bookControl.numBooks == BookScript.bookControl.maxBooks) {
//
//				BookScript.bookControl.setReviewWords ();
//				SceneManager.LoadScene ("Review1");
//		}

	}

//	string pickWord(){
//		string[] words;
//		 words = new string[] {
//				"Abate: Become less in amount or intensity. \n \n In an hour or so the storm would abate and they could leave.",
//				"Chicanery: The use of tricks to decieve someone. \n\n Instead of being truthful on his campaign for sheriff, he resorted to chicanery.",
//				"Disseminate: Spread or disperse. \n\n Cover your mouth while sneezing so that you do not disseminate bacteria.",
//				"Garrulous: Full of trivial conversation. \n\n Due to Jake's garrulous nature, asking him to keep a secret is impossible.",
//				"Laud: Praise, glorify, or honor. \n\n The purpose of the awards is to laud students for their academic excellence.",
//				"Cogent: Powerfully persuasive. \n\n The angry husband hired a detective to find cogent proof of his wife's extramarital affair.",
//				"Coagulate: Change from a liquid to a thickened or solid state. \n\n Over time the milk will coagulate and become a bottle of disgusting clots.",
//				"Lethargic: Deficient in alertness or activity. \n\n You can find my lethargic cat curled up asleep in the warmest spot she can find.",
//				"Gainsay: Take contradict or deny. \n\n It would be unwise to gainsay your doctor's suggestions and stop taking your prescription medication. ",
//				"Latent: Potentially existing but not presently evident or realized.\n\n The detective asked the lab technician to search the room for latent fingerprints.",
//				"Aberrant: Markedly different from an accepted norm.\n\n Sarah's aberrant manners led to her being kicked out of the movie theater.",
//				"Abeyance: Temporary cessation or suspension.\n\n Jane's cancer has returned after being in abeyance for nearly two years.",
//				"Dissonance: A lack of agreement.\n\n There is a great deal of dissonance between what a liar says and does.",
//				"Goad: Prove or annoy so as to stimulate some action or reaction.\n\n Jordan tried to goad his daughter into doing her chores by freezing her allowance payments.",
//				"Abscond: Run away, often taking something or somebody along.\n\n He made plans to abscond with the stolen money.",
//				"Distend: Cause to expand as if my iternal pressure.\n\n The excess food consumption made her stomach distend from bloat.",
//				"Gouge: An impression in a surface, as made by a blow.\n\n The channel had been gouged out by the ebbing water.",
//
//			};
//		int randomNumber = Random.Range (0, words.Length);
//		return words [randomNumber];
//		}

	void OnTriggerEnter2D(Collider2D other){
		// handle respawn
		if (other.tag == "Book") {
			addBook (other.name);
//			numBooks++;
//			numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
			BookScript.bookControl.updateBookTracker();
			Collect c = other.GetComponent<Collect> ();
			c.Sound ();

			other.GetComponent<SpriteRenderer> ().enabled = false;
			other.GetComponent<BoxCollider2D> ().enabled = false;

			//currBook = other.GetComponent<BookScript> ();

			wordDisplay.text = BookScript.bookControl.pickWord ();  //Should take word from book
			Destroy (other.gameObject, 1);

			Time.timeScale = 0.0f;
		}
		if (other.tag == "Door") {
			if (BookScript.bookControl.numBooksCheck()) {
//				if (Input.GetKeyDown(KeyCode.UpArrow)) {
					BookScript.bookControl.setReviewWords ();
					SceneManager.LoadScene ("Review1");
//				}
			}
		
		}
		if (other.tag == "KillPlane") {
		//	gameObject.SetActive (false);

			transform.position = respawnPosition;
			health.changeBar (5);

		}

		if (other.tag == "Checkpoint") {
			respawnPosition = other.transform.position;
		}

	}

	void OnCollisionEnter2D(Collision2D other){
		//handle player on moving platforms, so it doesn't slide off
		if (other.gameObject.tag == "MovingPlatform") {
			//make player's parent the platform to move player at same speed
			transform.parent = other.transform;
		}
	}

	void OnCollisionExit2D(Collision2D other){

		if (other.gameObject.tag == "MovingPlatform") {
			transform.parent = null; // stop making the platform a parent
		}
	}

	public void addBook(string bName){
		bookNames.Add (bName);
	}






}
