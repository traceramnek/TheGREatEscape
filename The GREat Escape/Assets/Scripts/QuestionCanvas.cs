using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class QuestionCanvas : MonoBehaviour {

	bool enable;
	public CanvasGroup canvas;

	// Use this for initialization
	void Start () {
		canvas.alpha = 0;
	}
	
	// Update is called once per frame
	void Update () {
	//	if (enable)
	//		enableQuestionCanvas ();
	//	else
	//		disableQuestionCanvas ();
		
	}

	public void enableQuestionCanvas(){
		print ("enabled");
		//gameObject.GetComponent<CanvasGroup>().alpha=1;
		canvas.alpha = 1;
	}

	public void disableQuestionCanvas(){
		print ("disabled");
		//gameObject.GetComponent<CanvasGroup> ().alpha = 0;
		canvas.alpha=0;

	}
}
