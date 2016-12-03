using UnityEngine;
using System.Collections;

public class MovingObject : MonoBehaviour {

	public GameObject objectToMove; // object to be moved

	//points that object will move between back and forth
	public Transform startPoint; // starting point
	public Transform endPoint; // ending point

	public float moveSpeed; // for fast the object moves

	private Vector3 currentTarget; // the current point it's going to, start or end?


	// Use this for initialization
	void Start () {
		currentTarget = endPoint.position; // start currTarget as endpoint
        objectToMove.name = gameObject.name;
	}

	// Update is called once per frame
	void Update () {
		if (objectToMove != null) {
			objectToMove.transform.position = Vector3.MoveTowards (objectToMove.transform.position, currentTarget, moveSpeed * Time.deltaTime);
			if (objectToMove.transform.position == endPoint.position) {
				currentTarget = startPoint.position;
			}

			if (objectToMove.transform.position == startPoint.position) {
				currentTarget = endPoint.position;
			}
		}
	}
}
