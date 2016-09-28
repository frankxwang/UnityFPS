using UnityEngine;
using UnityEngine.Networking;
public class Health : Photon.MonoBehaviour 
{
	public const int maxHealth = 100;
	public int currentHealth = maxHealth;
	public Texture t;
	public Texture cross;
	private NetworkStartPosition[] spawn;
	public void Start(){
		spawn = FindObjectsOfType<NetworkStartPosition> ();
	}
	public void TakeDamage(int amount)
	{
		currentHealth -= amount;
		if (currentHealth <= 0)
		{
			currentHealth = maxHealth;
			RpcRespawn ();
		}
	}
	public void OnGUI(){
		GUI.Box (new Rect(Screen.width/2 - 5, Screen.height/2 - 5, 10, 10), cross);
		GUI.Box (new Rect(0, 0, 200, 20), t);
		GUI.Box (new Rect(0, 0, currentHealth/maxHealth * 200, 20), t);
		GUI.Box (new Rect(0, 20, 200, 20), "Health: " + currentHealth);
	}
	void RpcRespawn()
	{
		if(photonView.isMine){
			transform.position = spawn[Random.Range(0, spawn.Length)].transform.position;
		}
	}
}