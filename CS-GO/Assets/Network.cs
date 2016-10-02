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
		PlayerController[] g = GameObject.FindObjectsOfType<PlayerController> ();
		int r = 0;
		int b = 0;
		foreach (PlayerController pc in g) {
			PunTeams.Team team = pc.photonView.owner.GetTeam();
			if (team == PunTeams.Team.blue) {
				pc.gameObject.tag = "Blue";
				pc.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.red;
				r++;
			} else {
				pc.gameObject.tag = "Red";
				pc.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.blue;
				b++;
			}
		}
		//choose which team based on r.length and b.length
		if (r > b) {
			PhotonNetwork.player.SetTeam(PunTeams.Team.blue);
		} else if (r == b) {
			int rand = Random.Range (0, 2);
			if (rand == 0) {
				PhotonNetwork.player.SetTeam(PunTeams.Team.blue);
			} else {
				PhotonNetwork.player.SetTeam(PunTeams.Team.red);
			}
		} else {
			PhotonNetwork.player.SetTeam(PunTeams.Team.red);
		}

		Health pH = p.GetComponent<Health> ();
		if(PhotonNetwork.player.GetTeam() == PunTeams.Team.blue){
			pH.team = "Blue";
		}else{
			pH.team = "Red";
		}
		if (PhotonNetwork.player.GetTeam() == PunTeams.Team.red) {
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.red;
			pH.spawn = GameObject.FindGameObjectsWithTag("RedSpawn");
		} else {
			p.transform.FindChild("Capsule").GetComponent<Renderer> ().material.color = Color.blue;
			pH.spawn = GameObject.FindGameObjectsWithTag("BlueSpawn");
		}
		pH.photonView.RPC("RpcRespawn", PhotonTargets.AllBuffered, null);
	}
}
