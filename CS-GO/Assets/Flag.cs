using UnityEngine;
using System.Collections;

public class Flag : MonoBehaviour {
	public string team;
	public GameObject player;
	private Vector3 startPos;
	private Flag other;
	void Start(){
		startPos = new Vector3(transform.position.x, transform.position.y, transform.position.z);
		Flag[] f = FindObjectsOfType<Flag> ();
		foreach(Flag fl in f){
			if(fl != this){
				other = fl;
				break;
			}
		}
	}
	// Update is called once per frame
	void Update () {
		if (player != null) {
			transform.position = player.transform.position + Vector3.up * 2;
		} else {
			transform.position = startPos;
		}
	}
	void OnCollisionEnter(Collision c){
		PlayerController pc = c.gameObject.GetComponent<PlayerController> ();
		if(pc != null){
			if(team == "blue" && pc.photonView.owner.GetTeam() == PunTeams.Team.red){
				pc.hasFlag = true;
				player = pc.gameObject;
				pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Blue Flag has been taken by " + pc.photonView.name);
			}else if(team == "red" && pc.photonView.owner.GetTeam() == PunTeams.Team.blue){
				pc.hasFlag = true;
				player = pc.gameObject;
				pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Red Flag has been taken by " + pc.photonView.name);
			}
			if (team == "blue" && pc.photonView.owner.GetTeam () == PunTeams.Team.blue) {
				if (pc.hasFlag) {
					pc.hasFlag = false;
					other.player = null;
					pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Red Flag has been captured by " + pc.photonView.name);
				}
			} else if (team == "red" && pc.photonView.owner.GetTeam () == PunTeams.Team.red) {
				if (pc.hasFlag) {
					pc.hasFlag = false;
					other.player = null;
					pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Blue Flag has been captured by " + pc.photonView.name);
				}
			}
		}
	}
}
