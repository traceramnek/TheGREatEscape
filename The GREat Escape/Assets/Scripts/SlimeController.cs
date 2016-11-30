using UnityEngine;
using System.Collections;

public class SlimeController : MonoBehaviour {
	public float moveSpeed;

	public Transform leftPoint;
	public Transform rightPoint;

	private Rigidbody2D myRigidbody;

	public bool movingRight;

	// Use this for initialization
	void Start () {
		myRigidbody = GetComponent<Rigidbody2D> ();	
	}
	
	// Update is called once per frame
	void Update () {
		if (movingRight && transform.position.x > rightPoint.position.x) {
			movingRight = false;
		}

		if (!movingRight && transform.position.x < leftPoint.position.x) {
			movingRight = true;
		}

		if (movingRight)
			myRigidbody.velocity = new Vector3 (moveSpeed, myRigidbody.velocity.y, 0f);
		else
			myRigidbody.velocity=new Vector3 (-moveSpeed, myRigidbody.velocity.y, 0f);
		
	}
		
}
