using UnityEngine;
using System.Collections;

public class SlimeController : MonoBehaviour {
	public float moveSpeed;
	private bool canMove;
	private Rigidbody2D myRigidbody;
	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> ();	
	}
	
	// Update is called once per frame
	void Update () {
		if (canMove) {
		}
		myRigidbody.velocity = new Vector3 (-moveSpeed, myRigidbody.velocity.y, 0f);
	}

	void onBecameVisible(){
		canMove = true;
	}

}
