using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour {

	/*
	 * Controls the Player's movement, and jumping ability
	 * Deals with booleans for jumping, falling, and being grounded
	 * Also handles killing and respawning the player by delegating to the Level Manager
	 * 
	*/

	public GameButtons gameButton;// object so player can pause game

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

	// Use this for initialization
	void Start () {
		myRigidBody = GetComponent<Rigidbody2D> (); // rigid body for physics
		myAnim = GetComponent<Animator> (); // animator for anim changes
		numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;

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
		if(Input.GetKeyDown (KeyCode.P) ){
			gameButton.PauseGame ();
		}


//


		//Sets variables in order to change animations
		myAnim.SetFloat("Speed", Mathf.Abs(myRigidBody.velocity.x));
		myAnim.SetBool ("Grounded", isGrounded);

	}


	void OnTriggerEnter2D(Collider2D other){
		// handle respawn
		if (other.tag == "Book") {
			numBooks++;
			numBooksCollected.text = "Books: " + numBooks + "/" + maxBooks;
			Collect c = other.GetComponent<Collect> ();
			c.Sound ();

			other.GetComponent<SpriteRenderer> ().enabled = false;
			other.GetComponent<BoxCollider2D> ().enabled = false;

			wordDisplay.text = "Word\n\nDefinition\n\nSentence"; //Should take word from book
			Destroy (other.gameObject, 1);

			Time.timeScale = 0.0f;
		}

	}







}
