using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class Log : Photon.MonoBehaviour {
	public string log = "Log:";
	public void OnGUI () {
		GUI.Label (new Rect(Screen.width*3/4, 0, Screen.width*1/4, Screen.height*1/4), log);
	}
}
