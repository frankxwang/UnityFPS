using UnityEngine;
using System.Collections;

public class Network : Photon.MonoBehaviour {
	public GameObject player;
	private bool connected;
	void Start()
	{
		//connect to master
		PhotonNetwork.ConnectUsingSettings("0.1");
	}
	public string roomName = "RoomName";
	void OnConnectedToMaster()
	{
		connected = true;
	}
	void OnGUI()
	{
		//is conneccted to network?
		if (!connected) {
			//make label
			GUILayout.Label (PhotonNetwork.connectionStateDetailed.ToString ());
		} else {
			// Create Room
			//room textarea
			roomName = GUI.TextArea (new Rect (0, 0, 100, 100), roomName);
			//is button preseed?
			if (GUI.Button (new Rect (0, 110, 100, 100), "Create")) {
				//create
				PhotonNetwork.CreateRoom (roomName);
			}
			// Join Room
			//is button preseed?
			if (GUI.Button (new Rect (0, 220, 100, 100), "Join")) {
				//join
				PhotonNetwork.JoinRoom (roomName);
			}
		}
	}
	void OnJoinedRoom()
	{
		// Spawn player
		GameObject p = PhotonNetwork.Instantiate (player.name, Vector3.up * 5, Quaternion.identity, 0) as GameObject;
		GameObject[] r = GameObject.FindGameObjectsWithTag ("Red");
		GameObject[] b = GameObject.FindGameObjectsWithTag ("Blue");
		foreach(GameObject obj in r){
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.red;
		}
		foreach(GameObject obj in b){
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.blue;
		}
		//choose which team based on r.length and b.length
		if (r.Length > b.Length) {
			p.tag = "Blue";
		} else if (r.Length == b.Length) {
			int rand = Random.Range (0, 2);
			if (rand == 0) {
				p.tag = "Red";
			} else {
				p.tag = "Blue";
			}
		} else {
			p.tag = "Red";
		}
		if (p.tag == "Red") {
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.red;
		} else {
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.blue;
		}
	}
}
