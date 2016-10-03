using UnityEngine;
using System.Collections;

public class Flag : MonoBehaviour {
	public string team;
	public GameObject player;

	// Update is called once per frame
	void Update () {
		if(player!=null){
			transform.position = player.transform.position + Vector3.up;
		}
	}
	void OnCollisionEnter(Collision c){
		PlayerController pc = c.gameObject.GetComponent<PlayerController> ();
		if(pc != null){
			print ("yep");
			if(team == "blue" && pc.photonView.owner.GetTeam() == PunTeams.Team.red){
				player = pc.gameObject;
				pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Blue Flag has been taken by " + pc.photonView.name);
			}else if(team == "red" && pc.photonView.owner.GetTeam() == PunTeams.Team.blue){
				player = pc.gameObject;
				pc.photonView.RPC("add", PhotonTargets.AllBuffered, "The Red Flag has been taken by " + pc.photonView.name);
			}
		}
	}
}
