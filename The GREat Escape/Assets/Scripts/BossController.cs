using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BossController : MonoBehaviour {

	public Transform target;
	public float speed = 2f;
	private float minDistance = 1f;
	private float range;
	bool canMove;

	void Update ()
	{
		range = Vector2.Distance(transform.position, target.position);

		if (range > minDistance && canMove)
		{

			transform.position = Vector2.MoveTowards(transform.position, target.position, speed * Time.deltaTime);
            transform.localScale = new Vector3(transform.position.x > target.position.x ? -5f : 5f, 
                transform.localScale.y, transform.localScale.z);
        }
	}

	void OnBecameVisible(){
		canMove = true;
	}
}