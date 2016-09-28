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
	
	// Update is called once per frame
	void Update () {
	
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
		PhotonNetwork.Instantiate (player.name, Vector3.up * 5, Quaternion.identity, 0);
	}
}
