using UnityEngine;
using System.Collections;

public class CameraController : MonoBehaviour {

	/*
	* Used to keep the camera following the player during gameplay
	*/

	public GameObject target; // target that the camera is following
	public float followAhead; // amount ahead of player the camera is so player isn't is dead center

	private Vector3 targetPosition;

	public float smoothing;


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		targetPosition = new Vector3 (target.transform.position.x, transform.position.y, transform.position.z);

		if (target.transform.localScale.x > 0f) { // facing right for camera ahead of player
			targetPosition = new Vector3 (targetPosition.x + followAhead, targetPosition.y, targetPosition.z);
		} 
		else { // facing left for lag behind player
			targetPosition = new Vector3 (targetPosition.x - followAhead, targetPosition.y, targetPosition.z);

		}

		//transform.position = targetPosition;

		//keeps the camera from a violent flip when character goes from left to right 
		//and the smoothing helps to make it seamless and smooth
		transform.position = Vector3.Lerp (transform.position, targetPosition, smoothing * Time.deltaTime);

	}
}
