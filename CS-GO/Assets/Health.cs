﻿using UnityEngine;
using UnityEngine.Networking;
public class Health : Photon.MonoBehaviour 
{
	public const int maxHealth = 100;
	public int currentHealth = maxHealth;
	public Texture t;
	public Texture cross;
	private GameObject[] spawn;
	public void Start(){
		spawn = GameObject.FindGameObjectsWithTag("Respawn");
	}
	public void TakeDamage(int amount)
	{
		photonView.RPC ("Damage", PhotonTargets.AllBuffered, amount);
	}
	public void Damage(int amount){
		currentHealth -= amount;
		if (currentHealth <= 0)
		{
			currentHealth = maxHealth;
			photonView.RPC("RpcRespawn", PhotonTargets.AllBuffered, null);
		}
	}
	public void OnGUI(){
		GUI.Box (new Rect(Screen.width/2 - 5, Screen.height/2 - 5, 10, 10), cross);
		GUI.Box (new Rect(0, 0, 200, 20), t);
		GUI.Box (new Rect(0, 0, currentHealth/maxHealth * 200, 20), t);
		GUI.Box (new Rect(0, 20, 200, 20), "Health: " + currentHealth);
	}
	[PunRPC]
	void RpcRespawn()
	{
		if(photonView.isMine){
			transform.position = spawn[Random.Range(0, spawn.Length)].transform.position;
		}
	}
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting) {
			stream.SendNext (currentHealth);
		} else if(stream.isReading && photonView.isMine){
			currentHealth = (int)stream.ReceiveNext ();
		}
	}
}