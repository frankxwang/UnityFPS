#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t2866526589  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject PlayerController::cam
	GameObject_t4012695102 * ___cam_3;
	// UnityEngine.GameObject PlayerController::camera
	GameObject_t4012695102 * ___camera_4;
	// UnityEngine.GameObject PlayerController::smoke
	GameObject_t4012695102 * ___smoke_5;
	// UnityEngine.GameObject PlayerController::hitParticles
	GameObject_t4012695102 * ___hitParticles_6;
	// UnityEngine.GameObject PlayerController::bulletPrefab
	GameObject_t4012695102 * ___bulletPrefab_7;
	// UnityEngine.Transform PlayerController::bulletSpawn
	Transform_t284553113 * ___bulletSpawn_8;
	// System.Single PlayerController::rate
	float ___rate_9;
	// System.Single PlayerController::lastShot
	float ___lastShot_10;
	// UnityEngine.Rigidbody PlayerController::rb
	Rigidbody_t1972007546 * ___rb_11;
	// System.Single PlayerController::lastSynchronizationTime
	float ___lastSynchronizationTime_12;
	// System.Single PlayerController::syncDelay
	float ___syncDelay_13;
	// System.Single PlayerController::syncTime
	float ___syncTime_14;
	// UnityEngine.Vector3 PlayerController::syncStartPosition
	Vector3_t3525329789  ___syncStartPosition_15;
	// UnityEngine.Vector3 PlayerController::syncEndPosition
	Vector3_t3525329789  ___syncEndPosition_16;
	// UnityEngine.Quaternion PlayerController::syncStartRotation
	Quaternion_t1891715979  ___syncStartRotation_17;
	// UnityEngine.Quaternion PlayerController::syncEndRotation
	Quaternion_t1891715979  ___syncEndRotation_18;

public:
	inline static int32_t get_offset_of_cam_3() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___cam_3)); }
	inline GameObject_t4012695102 * get_cam_3() const { return ___cam_3; }
	inline GameObject_t4012695102 ** get_address_of_cam_3() { return &___cam_3; }
	inline void set_cam_3(GameObject_t4012695102 * value)
	{
		___cam_3 = value;
		Il2CppCodeGenWriteBarrier(&___cam_3, value);
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___camera_4)); }
	inline GameObject_t4012695102 * get_camera_4() const { return ___camera_4; }
	inline GameObject_t4012695102 ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(GameObject_t4012695102 * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___camera_4, value);
	}

	inline static int32_t get_offset_of_smoke_5() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___smoke_5)); }
	inline GameObject_t4012695102 * get_smoke_5() const { return ___smoke_5; }
	inline GameObject_t4012695102 ** get_address_of_smoke_5() { return &___smoke_5; }
	inline void set_smoke_5(GameObject_t4012695102 * value)
	{
		___smoke_5 = value;
		Il2CppCodeGenWriteBarrier(&___smoke_5, value);
	}

	inline static int32_t get_offset_of_hitParticles_6() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___hitParticles_6)); }
	inline GameObject_t4012695102 * get_hitParticles_6() const { return ___hitParticles_6; }
	inline GameObject_t4012695102 ** get_address_of_hitParticles_6() { return &___hitParticles_6; }
	inline void set_hitParticles_6(GameObject_t4012695102 * value)
	{
		___hitParticles_6 = value;
		Il2CppCodeGenWriteBarrier(&___hitParticles_6, value);
	}

	inline static int32_t get_offset_of_bulletPrefab_7() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___bulletPrefab_7)); }
	inline GameObject_t4012695102 * get_bulletPrefab_7() const { return ___bulletPrefab_7; }
	inline GameObject_t4012695102 ** get_address_of_bulletPrefab_7() { return &___bulletPrefab_7; }
	inline void set_bulletPrefab_7(GameObject_t4012695102 * value)
	{
		___bulletPrefab_7 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_7, value);
	}

	inline static int32_t get_offset_of_bulletSpawn_8() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___bulletSpawn_8)); }
	inline Transform_t284553113 * get_bulletSpawn_8() const { return ___bulletSpawn_8; }
	inline Transform_t284553113 ** get_address_of_bulletSpawn_8() { return &___bulletSpawn_8; }
	inline void set_bulletSpawn_8(Transform_t284553113 * value)
	{
		___bulletSpawn_8 = value;
		Il2CppCodeGenWriteBarrier(&___bulletSpawn_8, value);
	}

	inline static int32_t get_offset_of_rate_9() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rate_9)); }
	inline float get_rate_9() const { return ___rate_9; }
	inline float* get_address_of_rate_9() { return &___rate_9; }
	inline void set_rate_9(float value)
	{
		___rate_9 = value;
	}

	inline static int32_t get_offset_of_lastShot_10() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___lastShot_10)); }
	inline float get_lastShot_10() const { return ___lastShot_10; }
	inline float* get_address_of_lastShot_10() { return &___lastShot_10; }
	inline void set_lastShot_10(float value)
	{
		___lastShot_10 = value;
	}

	inline static int32_t get_offset_of_rb_11() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___rb_11)); }
	inline Rigidbody_t1972007546 * get_rb_11() const { return ___rb_11; }
	inline Rigidbody_t1972007546 ** get_address_of_rb_11() { return &___rb_11; }
	inline void set_rb_11(Rigidbody_t1972007546 * value)
	{
		___rb_11 = value;
		Il2CppCodeGenWriteBarrier(&___rb_11, value);
	}

	inline static int32_t get_offset_of_lastSynchronizationTime_12() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___lastSynchronizationTime_12)); }
	inline float get_lastSynchronizationTime_12() const { return ___lastSynchronizationTime_12; }
	inline float* get_address_of_lastSynchronizationTime_12() { return &___lastSynchronizationTime_12; }
	inline void set_lastSynchronizationTime_12(float value)
	{
		___lastSynchronizationTime_12 = value;
	}

	inline static int32_t get_offset_of_syncDelay_13() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncDelay_13)); }
	inline float get_syncDelay_13() const { return ___syncDelay_13; }
	inline float* get_address_of_syncDelay_13() { return &___syncDelay_13; }
	inline void set_syncDelay_13(float value)
	{
		___syncDelay_13 = value;
	}

	inline static int32_t get_offset_of_syncTime_14() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncTime_14)); }
	inline float get_syncTime_14() const { return ___syncTime_14; }
	inline float* get_address_of_syncTime_14() { return &___syncTime_14; }
	inline void set_syncTime_14(float value)
	{
		___syncTime_14 = value;
	}

	inline static int32_t get_offset_of_syncStartPosition_15() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncStartPosition_15)); }
	inline Vector3_t3525329789  get_syncStartPosition_15() const { return ___syncStartPosition_15; }
	inline Vector3_t3525329789 * get_address_of_syncStartPosition_15() { return &___syncStartPosition_15; }
	inline void set_syncStartPosition_15(Vector3_t3525329789  value)
	{
		___syncStartPosition_15 = value;
	}

	inline static int32_t get_offset_of_syncEndPosition_16() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncEndPosition_16)); }
	inline Vector3_t3525329789  get_syncEndPosition_16() const { return ___syncEndPosition_16; }
	inline Vector3_t3525329789 * get_address_of_syncEndPosition_16() { return &___syncEndPosition_16; }
	inline void set_syncEndPosition_16(Vector3_t3525329789  value)
	{
		___syncEndPosition_16 = value;
	}

	inline static int32_t get_offset_of_syncStartRotation_17() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncStartRotation_17)); }
	inline Quaternion_t1891715979  get_syncStartRotation_17() const { return ___syncStartRotation_17; }
	inline Quaternion_t1891715979 * get_address_of_syncStartRotation_17() { return &___syncStartRotation_17; }
	inline void set_syncStartRotation_17(Quaternion_t1891715979  value)
	{
		___syncStartRotation_17 = value;
	}

	inline static int32_t get_offset_of_syncEndRotation_18() { return static_cast<int32_t>(offsetof(PlayerController_t2866526589, ___syncEndRotation_18)); }
	inline Quaternion_t1891715979  get_syncEndRotation_18() const { return ___syncEndRotation_18; }
	inline Quaternion_t1891715979 * get_address_of_syncEndRotation_18() { return &___syncEndRotation_18; }
	inline void set_syncEndRotation_18(Quaternion_t1891715979  value)
	{
		___syncEndRotation_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
