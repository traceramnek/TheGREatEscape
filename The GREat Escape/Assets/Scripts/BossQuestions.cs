using UnityEngine;
using System.Collections;

public class BossQuestions : MonoBehaviour {

	public char delim, delim2;
	public string wrdTmp, defTmp;

	// Use this for initialization
	void Start () {
		delim = ':';
		delim2 = '.';

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void parseStr(string toParse){
		int len = toParse.IndexOf (delim);
		int len2 = toParse.IndexOf (delim2);


		if (len > 0) {
			wrdTmp = toParse.Substring (0, len); // gets word up till the :
			defTmp = toParse.Substring(len+1, (len2-len+1) ); // get def up to .
			print(wrdTmp);
			print (defTmp);
		}

	}
}
