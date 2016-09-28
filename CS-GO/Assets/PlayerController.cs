using UnityEngine;
using UnityEngine.Networking;
public class PlayerController : Photon.MonoBehaviour
{
	public GameObject cam;
	public GameObject camera;
	public GameObject smoke;
	public GameObject hitParticles;
	public GameObject bulletPrefab;
	public Transform bulletSpawn;
	public float rate = 0.1f;
	private float lastShot = 0;
	private Rigidbody rb;
	private float lastSynchronizationTime = 0f;
	private float syncDelay = 0.1f;
	private float syncTime = 0f;
	private Vector3 syncStartPosition = Vector3.zero;
	private Vector3 syncEndPosition = Vector3.zero;
	private Quaternion syncStartRotation = Quaternion.identity;
	private Quaternion syncEndRotation = Quaternion.identity;
	void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
	{
		if (stream.isWriting)
		{
			stream.SendNext(rb.position);
			stream.SendNext(rb.rotation);
		}
		else
		{
			Vector3 pos = (Vector3)stream.ReceiveNext();
			syncEndPosition = pos;
			syncStartPosition = rb.position;

			Quaternion rot = (Quaternion)stream.ReceiveNext();
			syncEndRotation = rot;
			syncStartRotation = rb.rotation;

			syncTime = 0f;
			syncDelay = Time.time - lastSynchronizationTime;
			lastSynchronizationTime = Time.time;
		}
	}

	void Start()
	{
		rb = GetComponent<Rigidbody> ();
		if (!photonView.isMine)
		{
			camera.SetActive(false);
			return;
		}
		Cursor.lockState = CursorLockMode.Locked;
		Cursor.visible = false;
	}
	void Update()
	{
		if (Input.GetKey (KeyCode.Escape)) {
			Cursor.lockState = CursorLockMode.None;
			Cursor.visible = true;
		} else if (Input.GetKey ("e")) {
			Cursor.lockState = CursorLockMode.Locked;
			Cursor.visible = false;
		}
			
		float mul = 1;
		if (Input.GetKey(KeyCode.LeftShift))
		{
			mul = 2;
		}
		if (!photonView.isMine)
		{
			SmoothMove ();
			return;
		}
		var x = Input.GetAxis("Horizontal") * Time.deltaTime * 3.0f;
		var z = Input.GetAxis("Vertical") * Time.deltaTime * 3.0f;

		transform.Rotate(0, Input.GetAxis("Mouse X") * Time.deltaTime*150, 0);
		cam.transform.Rotate(Input.GetAxis("Mouse Y") * -1 *Time.deltaTime*150, 
			0, 0);
		rb.rotation = Quaternion.Euler(0, rb.rotation.eulerAngles.y, 0);
		transform.Translate(x*mul, 0, z*mul);

		if (Input.GetMouseButton(0) && rate + lastShot < Time.time)
		{
			lastShot = Time.time;
			CmdFire();
		}
		if(Input.GetKeyDown(KeyCode.Space) && grounded()){
			rb.AddForce(0, 250, 0);
		}
	}
	private void SmoothMove()
	{
		syncTime += Time.deltaTime;
//		rb.position = Vector3.Lerp(syncStartPosition, syncEndPosition, syncTime / syncDelay);
//		rb.rotation = Quaternion.Lerp(syncStartRotation, syncEndRotation, syncTime / syncDelay);
		rb.position = syncEndPosition;
		rb.rotation = syncEndRotation;
	}
	void CmdFire()
	{
		//smoke
		GameObject smokeParticles = (GameObject)Instantiate(smoke, bulletSpawn.position, Quaternion.identity);
		ParticleSystem[] psa = smokeParticles.GetComponentsInChildren<ParticleSystem> ();
		foreach(ParticleSystem ps in psa){
			ps.Emit(2);
		}
		PhotonNetwork.Instantiate (smoke.name, bulletSpawn.position, Quaternion.identity, 0);
		// Create the Bullet from the Bullet Prefab
		var bullet = (GameObject)Instantiate(
			bulletPrefab,
			bulletSpawn.position,
			bulletSpawn.rotation);

		// Add velocity to the bullet
		bullet.GetComponent<Rigidbody>().velocity = camera.transform.forward * 600;

		PhotonNetwork.Instantiate (bulletPrefab.name, bulletSpawn.position, bulletSpawn.rotation, 0);

		// Destroy the bullet after 2 seconds
		Destroy(bullet, 2.0f);

		RaycastHit hit;
		if(Physics.Raycast(camera.transform.position, camera.transform.forward, out hit, 999)){
			var health = hit.transform.gameObject.GetComponent<Health>();
			if (health  != null)
			{
				//hit particles
				GameObject particles = (GameObject)Instantiate(hitParticles, hit.point, Quaternion.identity);
//				particles.GetComponent<ParticleSystem> ().Emit(10);
				PhotonNetwork.Instantiate (hitParticles.name, hit.point, Quaternion.identity, 0);
				health.GetComponent<PhotonView> ().RPC ("TakeDamage", PhotonTargets.AllBuffered, 10);
			}

		}
	}
	bool grounded(){
		RaycastHit hit;
		if(Physics.Raycast(transform.position, -Vector3.up, out hit)){
			Debug.DrawLine (transform.position, hit.point, Color.cyan);
			if(hit.distance < 1.5 && hit.distance > 0){
				return true;
			}
		}	
		return false;
	}
}