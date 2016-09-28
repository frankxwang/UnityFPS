#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t215573746;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t215573715;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo585557578.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4232868287.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4094280260.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransform
struct  NetworkTransform_t3092760455  : public NetworkBehaviour_t1633744088
{
public:
	// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::m_TransformSyncMode
	int32_t ___m_TransformSyncMode_12;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SendInterval
	float ___m_SendInterval_13;
	// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::m_SyncRotationAxis
	int32_t ___m_SyncRotationAxis_14;
	// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::m_RotationSyncCompression
	int32_t ___m_RotationSyncCompression_15;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_SyncSpin
	bool ___m_SyncSpin_16;
	// System.Single UnityEngine.Networking.NetworkTransform::m_MovementTheshold
	float ___m_MovementTheshold_17;
	// System.Single UnityEngine.Networking.NetworkTransform::m_SnapThreshold
	float ___m_SnapThreshold_18;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateRotation
	float ___m_InterpolateRotation_19;
	// System.Single UnityEngine.Networking.NetworkTransform::m_InterpolateMovement
	float ___m_InterpolateMovement_20;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback3D
	ClientMoveCallback3D_t215573746 * ___m_ClientMoveCallback3D_21;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::m_ClientMoveCallback2D
	ClientMoveCallback2D_t215573715 * ___m_ClientMoveCallback2D_22;
	// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::m_RigidBody3D
	Rigidbody_t1972007546 * ___m_RigidBody3D_23;
	// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::m_RigidBody2D
	Rigidbody2D_t3632243084 * ___m_RigidBody2D_24;
	// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::m_CharacterController
	CharacterController_t2029520850 * ___m_CharacterController_25;
	// System.Boolean UnityEngine.Networking.NetworkTransform::m_Grounded
	bool ___m_Grounded_26;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncPosition
	Vector3_t3525329789  ___m_TargetSyncPosition_27;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncVelocity
	Vector3_t3525329789  ___m_TargetSyncVelocity_28;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_FixedPosDiff
	Vector3_t3525329789  ___m_FixedPosDiff_29;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation3D
	Quaternion_t1891715979  ___m_TargetSyncRotation3D_30;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity3D
	Vector3_t3525329789  ___m_TargetSyncAngularVelocity3D_31;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncRotation2D
	float ___m_TargetSyncRotation2D_32;
	// System.Single UnityEngine.Networking.NetworkTransform::m_TargetSyncAngularVelocity2D
	float ___m_TargetSyncAngularVelocity2D_33;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSyncTime
	float ___m_LastClientSyncTime_34;
	// System.Single UnityEngine.Networking.NetworkTransform::m_LastClientSendTime
	float ___m_LastClientSendTime_35;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::m_PrevPosition
	Vector3_t3525329789  ___m_PrevPosition_36;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::m_PrevRotation
	Quaternion_t1891715979  ___m_PrevRotation_37;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevRotation2D
	float ___m_PrevRotation2D_38;
	// System.Single UnityEngine.Networking.NetworkTransform::m_PrevVelocity
	float ___m_PrevVelocity_39;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkTransform::m_LocalTransformWriter
	NetworkWriter_t3691904682 * ___m_LocalTransformWriter_40;

public:
	inline static int32_t get_offset_of_m_TransformSyncMode_12() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TransformSyncMode_12)); }
	inline int32_t get_m_TransformSyncMode_12() const { return ___m_TransformSyncMode_12; }
	inline int32_t* get_address_of_m_TransformSyncMode_12() { return &___m_TransformSyncMode_12; }
	inline void set_m_TransformSyncMode_12(int32_t value)
	{
		___m_TransformSyncMode_12 = value;
	}

	inline static int32_t get_offset_of_m_SendInterval_13() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_SendInterval_13)); }
	inline float get_m_SendInterval_13() const { return ___m_SendInterval_13; }
	inline float* get_address_of_m_SendInterval_13() { return &___m_SendInterval_13; }
	inline void set_m_SendInterval_13(float value)
	{
		___m_SendInterval_13 = value;
	}

	inline static int32_t get_offset_of_m_SyncRotationAxis_14() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_SyncRotationAxis_14)); }
	inline int32_t get_m_SyncRotationAxis_14() const { return ___m_SyncRotationAxis_14; }
	inline int32_t* get_address_of_m_SyncRotationAxis_14() { return &___m_SyncRotationAxis_14; }
	inline void set_m_SyncRotationAxis_14(int32_t value)
	{
		___m_SyncRotationAxis_14 = value;
	}

	inline static int32_t get_offset_of_m_RotationSyncCompression_15() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_RotationSyncCompression_15)); }
	inline int32_t get_m_RotationSyncCompression_15() const { return ___m_RotationSyncCompression_15; }
	inline int32_t* get_address_of_m_RotationSyncCompression_15() { return &___m_RotationSyncCompression_15; }
	inline void set_m_RotationSyncCompression_15(int32_t value)
	{
		___m_RotationSyncCompression_15 = value;
	}

	inline static int32_t get_offset_of_m_SyncSpin_16() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_SyncSpin_16)); }
	inline bool get_m_SyncSpin_16() const { return ___m_SyncSpin_16; }
	inline bool* get_address_of_m_SyncSpin_16() { return &___m_SyncSpin_16; }
	inline void set_m_SyncSpin_16(bool value)
	{
		___m_SyncSpin_16 = value;
	}

	inline static int32_t get_offset_of_m_MovementTheshold_17() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_MovementTheshold_17)); }
	inline float get_m_MovementTheshold_17() const { return ___m_MovementTheshold_17; }
	inline float* get_address_of_m_MovementTheshold_17() { return &___m_MovementTheshold_17; }
	inline void set_m_MovementTheshold_17(float value)
	{
		___m_MovementTheshold_17 = value;
	}

	inline static int32_t get_offset_of_m_SnapThreshold_18() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_SnapThreshold_18)); }
	inline float get_m_SnapThreshold_18() const { return ___m_SnapThreshold_18; }
	inline float* get_address_of_m_SnapThreshold_18() { return &___m_SnapThreshold_18; }
	inline void set_m_SnapThreshold_18(float value)
	{
		___m_SnapThreshold_18 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateRotation_19() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_InterpolateRotation_19)); }
	inline float get_m_InterpolateRotation_19() const { return ___m_InterpolateRotation_19; }
	inline float* get_address_of_m_InterpolateRotation_19() { return &___m_InterpolateRotation_19; }
	inline void set_m_InterpolateRotation_19(float value)
	{
		___m_InterpolateRotation_19 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateMovement_20() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_InterpolateMovement_20)); }
	inline float get_m_InterpolateMovement_20() const { return ___m_InterpolateMovement_20; }
	inline float* get_address_of_m_InterpolateMovement_20() { return &___m_InterpolateMovement_20; }
	inline void set_m_InterpolateMovement_20(float value)
	{
		___m_InterpolateMovement_20 = value;
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback3D_21() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_ClientMoveCallback3D_21)); }
	inline ClientMoveCallback3D_t215573746 * get_m_ClientMoveCallback3D_21() const { return ___m_ClientMoveCallback3D_21; }
	inline ClientMoveCallback3D_t215573746 ** get_address_of_m_ClientMoveCallback3D_21() { return &___m_ClientMoveCallback3D_21; }
	inline void set_m_ClientMoveCallback3D_21(ClientMoveCallback3D_t215573746 * value)
	{
		___m_ClientMoveCallback3D_21 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClientMoveCallback3D_21, value);
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback2D_22() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_ClientMoveCallback2D_22)); }
	inline ClientMoveCallback2D_t215573715 * get_m_ClientMoveCallback2D_22() const { return ___m_ClientMoveCallback2D_22; }
	inline ClientMoveCallback2D_t215573715 ** get_address_of_m_ClientMoveCallback2D_22() { return &___m_ClientMoveCallback2D_22; }
	inline void set_m_ClientMoveCallback2D_22(ClientMoveCallback2D_t215573715 * value)
	{
		___m_ClientMoveCallback2D_22 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClientMoveCallback2D_22, value);
	}

	inline static int32_t get_offset_of_m_RigidBody3D_23() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_RigidBody3D_23)); }
	inline Rigidbody_t1972007546 * get_m_RigidBody3D_23() const { return ___m_RigidBody3D_23; }
	inline Rigidbody_t1972007546 ** get_address_of_m_RigidBody3D_23() { return &___m_RigidBody3D_23; }
	inline void set_m_RigidBody3D_23(Rigidbody_t1972007546 * value)
	{
		___m_RigidBody3D_23 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody3D_23, value);
	}

	inline static int32_t get_offset_of_m_RigidBody2D_24() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_RigidBody2D_24)); }
	inline Rigidbody2D_t3632243084 * get_m_RigidBody2D_24() const { return ___m_RigidBody2D_24; }
	inline Rigidbody2D_t3632243084 ** get_address_of_m_RigidBody2D_24() { return &___m_RigidBody2D_24; }
	inline void set_m_RigidBody2D_24(Rigidbody2D_t3632243084 * value)
	{
		___m_RigidBody2D_24 = value;
		Il2CppCodeGenWriteBarrier(&___m_RigidBody2D_24, value);
	}

	inline static int32_t get_offset_of_m_CharacterController_25() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_CharacterController_25)); }
	inline CharacterController_t2029520850 * get_m_CharacterController_25() const { return ___m_CharacterController_25; }
	inline CharacterController_t2029520850 ** get_address_of_m_CharacterController_25() { return &___m_CharacterController_25; }
	inline void set_m_CharacterController_25(CharacterController_t2029520850 * value)
	{
		___m_CharacterController_25 = value;
		Il2CppCodeGenWriteBarrier(&___m_CharacterController_25, value);
	}

	inline static int32_t get_offset_of_m_Grounded_26() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_Grounded_26)); }
	inline bool get_m_Grounded_26() const { return ___m_Grounded_26; }
	inline bool* get_address_of_m_Grounded_26() { return &___m_Grounded_26; }
	inline void set_m_Grounded_26(bool value)
	{
		___m_Grounded_26 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncPosition_27() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncPosition_27)); }
	inline Vector3_t3525329789  get_m_TargetSyncPosition_27() const { return ___m_TargetSyncPosition_27; }
	inline Vector3_t3525329789 * get_address_of_m_TargetSyncPosition_27() { return &___m_TargetSyncPosition_27; }
	inline void set_m_TargetSyncPosition_27(Vector3_t3525329789  value)
	{
		___m_TargetSyncPosition_27 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncVelocity_28() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncVelocity_28)); }
	inline Vector3_t3525329789  get_m_TargetSyncVelocity_28() const { return ___m_TargetSyncVelocity_28; }
	inline Vector3_t3525329789 * get_address_of_m_TargetSyncVelocity_28() { return &___m_TargetSyncVelocity_28; }
	inline void set_m_TargetSyncVelocity_28(Vector3_t3525329789  value)
	{
		___m_TargetSyncVelocity_28 = value;
	}

	inline static int32_t get_offset_of_m_FixedPosDiff_29() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_FixedPosDiff_29)); }
	inline Vector3_t3525329789  get_m_FixedPosDiff_29() const { return ___m_FixedPosDiff_29; }
	inline Vector3_t3525329789 * get_address_of_m_FixedPosDiff_29() { return &___m_FixedPosDiff_29; }
	inline void set_m_FixedPosDiff_29(Vector3_t3525329789  value)
	{
		___m_FixedPosDiff_29 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation3D_30() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncRotation3D_30)); }
	inline Quaternion_t1891715979  get_m_TargetSyncRotation3D_30() const { return ___m_TargetSyncRotation3D_30; }
	inline Quaternion_t1891715979 * get_address_of_m_TargetSyncRotation3D_30() { return &___m_TargetSyncRotation3D_30; }
	inline void set_m_TargetSyncRotation3D_30(Quaternion_t1891715979  value)
	{
		___m_TargetSyncRotation3D_30 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity3D_31() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncAngularVelocity3D_31)); }
	inline Vector3_t3525329789  get_m_TargetSyncAngularVelocity3D_31() const { return ___m_TargetSyncAngularVelocity3D_31; }
	inline Vector3_t3525329789 * get_address_of_m_TargetSyncAngularVelocity3D_31() { return &___m_TargetSyncAngularVelocity3D_31; }
	inline void set_m_TargetSyncAngularVelocity3D_31(Vector3_t3525329789  value)
	{
		___m_TargetSyncAngularVelocity3D_31 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation2D_32() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncRotation2D_32)); }
	inline float get_m_TargetSyncRotation2D_32() const { return ___m_TargetSyncRotation2D_32; }
	inline float* get_address_of_m_TargetSyncRotation2D_32() { return &___m_TargetSyncRotation2D_32; }
	inline void set_m_TargetSyncRotation2D_32(float value)
	{
		___m_TargetSyncRotation2D_32 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncAngularVelocity2D_33() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_TargetSyncAngularVelocity2D_33)); }
	inline float get_m_TargetSyncAngularVelocity2D_33() const { return ___m_TargetSyncAngularVelocity2D_33; }
	inline float* get_address_of_m_TargetSyncAngularVelocity2D_33() { return &___m_TargetSyncAngularVelocity2D_33; }
	inline void set_m_TargetSyncAngularVelocity2D_33(float value)
	{
		___m_TargetSyncAngularVelocity2D_33 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSyncTime_34() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_LastClientSyncTime_34)); }
	inline float get_m_LastClientSyncTime_34() const { return ___m_LastClientSyncTime_34; }
	inline float* get_address_of_m_LastClientSyncTime_34() { return &___m_LastClientSyncTime_34; }
	inline void set_m_LastClientSyncTime_34(float value)
	{
		___m_LastClientSyncTime_34 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSendTime_35() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_LastClientSendTime_35)); }
	inline float get_m_LastClientSendTime_35() const { return ___m_LastClientSendTime_35; }
	inline float* get_address_of_m_LastClientSendTime_35() { return &___m_LastClientSendTime_35; }
	inline void set_m_LastClientSendTime_35(float value)
	{
		___m_LastClientSendTime_35 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_36() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_PrevPosition_36)); }
	inline Vector3_t3525329789  get_m_PrevPosition_36() const { return ___m_PrevPosition_36; }
	inline Vector3_t3525329789 * get_address_of_m_PrevPosition_36() { return &___m_PrevPosition_36; }
	inline void set_m_PrevPosition_36(Vector3_t3525329789  value)
	{
		___m_PrevPosition_36 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation_37() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_PrevRotation_37)); }
	inline Quaternion_t1891715979  get_m_PrevRotation_37() const { return ___m_PrevRotation_37; }
	inline Quaternion_t1891715979 * get_address_of_m_PrevRotation_37() { return &___m_PrevRotation_37; }
	inline void set_m_PrevRotation_37(Quaternion_t1891715979  value)
	{
		___m_PrevRotation_37 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation2D_38() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_PrevRotation2D_38)); }
	inline float get_m_PrevRotation2D_38() const { return ___m_PrevRotation2D_38; }
	inline float* get_address_of_m_PrevRotation2D_38() { return &___m_PrevRotation2D_38; }
	inline void set_m_PrevRotation2D_38(float value)
	{
		___m_PrevRotation2D_38 = value;
	}

	inline static int32_t get_offset_of_m_PrevVelocity_39() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_PrevVelocity_39)); }
	inline float get_m_PrevVelocity_39() const { return ___m_PrevVelocity_39; }
	inline float* get_address_of_m_PrevVelocity_39() { return &___m_PrevVelocity_39; }
	inline void set_m_PrevVelocity_39(float value)
	{
		___m_PrevVelocity_39 = value;
	}

	inline static int32_t get_offset_of_m_LocalTransformWriter_40() { return static_cast<int32_t>(offsetof(NetworkTransform_t3092760455, ___m_LocalTransformWriter_40)); }
	inline NetworkWriter_t3691904682 * get_m_LocalTransformWriter_40() const { return ___m_LocalTransformWriter_40; }
	inline NetworkWriter_t3691904682 ** get_address_of_m_LocalTransformWriter_40() { return &___m_LocalTransformWriter_40; }
	inline void set_m_LocalTransformWriter_40(NetworkWriter_t3691904682 * value)
	{
		___m_LocalTransformWriter_40 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalTransformWriter_40, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
