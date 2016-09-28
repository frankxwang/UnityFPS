using UnityEngine;
using System.Collections;

public class Bullet : MonoBehaviour {
	Rigidbody rb;
	void Start(){
		rb = GetComponent<Rigidbody> ();
		Destroy(gameObject, 2);
	}
	void OnCollisionEnter(Collision collision)
	{
		Destroy(gameObject);
	}
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting)
		{
			stream.SendNext(rb.velocity);
		}
		else
		{
			rb.velocity = (Vector3)stream.ReceiveNext();
		}
	}
}