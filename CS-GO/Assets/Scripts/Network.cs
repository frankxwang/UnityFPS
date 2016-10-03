using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Network : Photon.MonoBehaviour {
	public GameObject player;
	private bool connected;
	private bool create = false;
	void Start()
	{
		//connect to master
		PhotonNetwork.ConnectUsingSettings("0.1");
	}
	public string roomName = "RoomName";
	public string name = "Username";
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
			roomName = GUI.TextArea (new Rect (0, 0, 100, 50), roomName);
			name = GUI.TextArea (new Rect (0, 50, 100, 50), name);
			//is button preseed?
			if (GUI.Button (new Rect (0, 110, 100, 100), "Create")) {
				//create
				create = true;
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
		p.GetPhotonView ().name = name;
		PlayerController[] g = GameObject.FindObjectsOfType<PlayerController> ();
		int r = 0;
		int b = 0;
//		if(!create){
//			foreach (var teamName in PunTeams.PlayersPerTeam.Keys)
//			{
//				GUILayout.Label("Team: " + teamName.ToString());
//				List<PhotonPlayer> teamPlayers = PunTeams.PlayersPerTeam[teamName];
//				if (teamName == PunTeams.Team.blue) {
//					b = teamPlayers.Count;
//				} else if(teamName == PunTeams.Team.red){
//					r = teamPlayers.Count;
//				}
//			}
//		}
		//choose which team based on r.length and b.length
//		if (r > b) {
//			PhotonNetwork.player.SetTeam(PunTeams.Team.blue);
//		} else if (r == b) {
			int rand = Random.Range (0, 2);
			if (rand == 0) {
				PhotonNetwork.player.SetTeam(PunTeams.Team.blue);
			} else {
				PhotonNetwork.player.SetTeam(PunTeams.Team.red);
			}
//		} else {
//			PhotonNetwork.player.SetTeam(PunTeams.Team.red);
//		}

		Health pH = p.GetComponent<Health> ();
		if(PhotonNetwork.player.GetTeam() == PunTeams.Team.blue){
			pH.team = "Blue";
		}else{
			pH.team = "Red";
		}
		if (PhotonNetwork.player.GetTeam() == PunTeams.Team.red) {
			pH.photonView.RPC ("RedColor", PhotonTargets.AllBuffered);
			pH.spawn = GameObject.FindGameObjectsWithTag("RedSpawn");
		} else {
			pH.photonView.RPC ("BlueColor", PhotonTargets.AllBuffered);
			pH.spawn = GameObject.FindGameObjectsWithTag("BlueSpawn");
		}
		pH.photonView.RPC("RpcRespawn", PhotonTargets.AllBuffered, null);
	}
}
