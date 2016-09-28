#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3092760455;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t215573746;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1633744088.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4232868287.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4094280260.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkTransformChild
struct  NetworkTransformChild_t49719623  : public NetworkBehaviour_t1633744088
{
public:
	// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::m_Target
	Transform_t284553113 * ___m_Target_10;
	// System.UInt32 UnityEngine.Networking.NetworkTransformChild::m_ChildIndex
	uint32_t ___m_ChildIndex_11;
	// UnityEngine.Networking.NetworkTransform UnityEngine.Networking.NetworkTransformChild::m_Root
	NetworkTransform_t3092760455 * ___m_Root_12;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_SendInterval
	float ___m_SendInterval_13;
	// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::m_SyncRotationAxis
	int32_t ___m_SyncRotationAxis_14;
	// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::m_RotationSyncCompression
	int32_t ___m_RotationSyncCompression_15;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_MovementThreshold
	float ___m_MovementThreshold_16;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_InterpolateRotation
	float ___m_InterpolateRotation_17;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_InterpolateMovement
	float ___m_InterpolateMovement_18;
	// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::m_ClientMoveCallback3D
	ClientMoveCallback3D_t215573746 * ___m_ClientMoveCallback3D_19;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::m_TargetSyncPosition
	Vector3_t3525329789  ___m_TargetSyncPosition_20;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::m_TargetSyncRotation3D
	Quaternion_t1891715979  ___m_TargetSyncRotation3D_21;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_LastClientSyncTime
	float ___m_LastClientSyncTime_22;
	// System.Single UnityEngine.Networking.NetworkTransformChild::m_LastClientSendTime
	float ___m_LastClientSendTime_23;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::m_PrevPosition
	Vector3_t3525329789  ___m_PrevPosition_24;
	// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::m_PrevRotation
	Quaternion_t1891715979  ___m_PrevRotation_25;
	// UnityEngine.Networking.NetworkWriter UnityEngine.Networking.NetworkTransformChild::m_LocalTransformWriter
	NetworkWriter_t3691904682 * ___m_LocalTransformWriter_26;

public:
	inline static int32_t get_offset_of_m_Target_10() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_Target_10)); }
	inline Transform_t284553113 * get_m_Target_10() const { return ___m_Target_10; }
	inline Transform_t284553113 ** get_address_of_m_Target_10() { return &___m_Target_10; }
	inline void set_m_Target_10(Transform_t284553113 * value)
	{
		___m_Target_10 = value;
		Il2CppCodeGenWriteBarrier(&___m_Target_10, value);
	}

	inline static int32_t get_offset_of_m_ChildIndex_11() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_ChildIndex_11)); }
	inline uint32_t get_m_ChildIndex_11() const { return ___m_ChildIndex_11; }
	inline uint32_t* get_address_of_m_ChildIndex_11() { return &___m_ChildIndex_11; }
	inline void set_m_ChildIndex_11(uint32_t value)
	{
		___m_ChildIndex_11 = value;
	}

	inline static int32_t get_offset_of_m_Root_12() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_Root_12)); }
	inline NetworkTransform_t3092760455 * get_m_Root_12() const { return ___m_Root_12; }
	inline NetworkTransform_t3092760455 ** get_address_of_m_Root_12() { return &___m_Root_12; }
	inline void set_m_Root_12(NetworkTransform_t3092760455 * value)
	{
		___m_Root_12 = value;
		Il2CppCodeGenWriteBarrier(&___m_Root_12, value);
	}

	inline static int32_t get_offset_of_m_SendInterval_13() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_SendInterval_13)); }
	inline float get_m_SendInterval_13() const { return ___m_SendInterval_13; }
	inline float* get_address_of_m_SendInterval_13() { return &___m_SendInterval_13; }
	inline void set_m_SendInterval_13(float value)
	{
		___m_SendInterval_13 = value;
	}

	inline static int32_t get_offset_of_m_SyncRotationAxis_14() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_SyncRotationAxis_14)); }
	inline int32_t get_m_SyncRotationAxis_14() const { return ___m_SyncRotationAxis_14; }
	inline int32_t* get_address_of_m_SyncRotationAxis_14() { return &___m_SyncRotationAxis_14; }
	inline void set_m_SyncRotationAxis_14(int32_t value)
	{
		___m_SyncRotationAxis_14 = value;
	}

	inline static int32_t get_offset_of_m_RotationSyncCompression_15() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_RotationSyncCompression_15)); }
	inline int32_t get_m_RotationSyncCompression_15() const { return ___m_RotationSyncCompression_15; }
	inline int32_t* get_address_of_m_RotationSyncCompression_15() { return &___m_RotationSyncCompression_15; }
	inline void set_m_RotationSyncCompression_15(int32_t value)
	{
		___m_RotationSyncCompression_15 = value;
	}

	inline static int32_t get_offset_of_m_MovementThreshold_16() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_MovementThreshold_16)); }
	inline float get_m_MovementThreshold_16() const { return ___m_MovementThreshold_16; }
	inline float* get_address_of_m_MovementThreshold_16() { return &___m_MovementThreshold_16; }
	inline void set_m_MovementThreshold_16(float value)
	{
		___m_MovementThreshold_16 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateRotation_17() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_InterpolateRotation_17)); }
	inline float get_m_InterpolateRotation_17() const { return ___m_InterpolateRotation_17; }
	inline float* get_address_of_m_InterpolateRotation_17() { return &___m_InterpolateRotation_17; }
	inline void set_m_InterpolateRotation_17(float value)
	{
		___m_InterpolateRotation_17 = value;
	}

	inline static int32_t get_offset_of_m_InterpolateMovement_18() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_InterpolateMovement_18)); }
	inline float get_m_InterpolateMovement_18() const { return ___m_InterpolateMovement_18; }
	inline float* get_address_of_m_InterpolateMovement_18() { return &___m_InterpolateMovement_18; }
	inline void set_m_InterpolateMovement_18(float value)
	{
		___m_InterpolateMovement_18 = value;
	}

	inline static int32_t get_offset_of_m_ClientMoveCallback3D_19() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_ClientMoveCallback3D_19)); }
	inline ClientMoveCallback3D_t215573746 * get_m_ClientMoveCallback3D_19() const { return ___m_ClientMoveCallback3D_19; }
	inline ClientMoveCallback3D_t215573746 ** get_address_of_m_ClientMoveCallback3D_19() { return &___m_ClientMoveCallback3D_19; }
	inline void set_m_ClientMoveCallback3D_19(ClientMoveCallback3D_t215573746 * value)
	{
		___m_ClientMoveCallback3D_19 = value;
		Il2CppCodeGenWriteBarrier(&___m_ClientMoveCallback3D_19, value);
	}

	inline static int32_t get_offset_of_m_TargetSyncPosition_20() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_TargetSyncPosition_20)); }
	inline Vector3_t3525329789  get_m_TargetSyncPosition_20() const { return ___m_TargetSyncPosition_20; }
	inline Vector3_t3525329789 * get_address_of_m_TargetSyncPosition_20() { return &___m_TargetSyncPosition_20; }
	inline void set_m_TargetSyncPosition_20(Vector3_t3525329789  value)
	{
		___m_TargetSyncPosition_20 = value;
	}

	inline static int32_t get_offset_of_m_TargetSyncRotation3D_21() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_TargetSyncRotation3D_21)); }
	inline Quaternion_t1891715979  get_m_TargetSyncRotation3D_21() const { return ___m_TargetSyncRotation3D_21; }
	inline Quaternion_t1891715979 * get_address_of_m_TargetSyncRotation3D_21() { return &___m_TargetSyncRotation3D_21; }
	inline void set_m_TargetSyncRotation3D_21(Quaternion_t1891715979  value)
	{
		___m_TargetSyncRotation3D_21 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSyncTime_22() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_LastClientSyncTime_22)); }
	inline float get_m_LastClientSyncTime_22() const { return ___m_LastClientSyncTime_22; }
	inline float* get_address_of_m_LastClientSyncTime_22() { return &___m_LastClientSyncTime_22; }
	inline void set_m_LastClientSyncTime_22(float value)
	{
		___m_LastClientSyncTime_22 = value;
	}

	inline static int32_t get_offset_of_m_LastClientSendTime_23() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_LastClientSendTime_23)); }
	inline float get_m_LastClientSendTime_23() const { return ___m_LastClientSendTime_23; }
	inline float* get_address_of_m_LastClientSendTime_23() { return &___m_LastClientSendTime_23; }
	inline void set_m_LastClientSendTime_23(float value)
	{
		___m_LastClientSendTime_23 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_24() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_PrevPosition_24)); }
	inline Vector3_t3525329789  get_m_PrevPosition_24() const { return ___m_PrevPosition_24; }
	inline Vector3_t3525329789 * get_address_of_m_PrevPosition_24() { return &___m_PrevPosition_24; }
	inline void set_m_PrevPosition_24(Vector3_t3525329789  value)
	{
		___m_PrevPosition_24 = value;
	}

	inline static int32_t get_offset_of_m_PrevRotation_25() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_PrevRotation_25)); }
	inline Quaternion_t1891715979  get_m_PrevRotation_25() const { return ___m_PrevRotation_25; }
	inline Quaternion_t1891715979 * get_address_of_m_PrevRotation_25() { return &___m_PrevRotation_25; }
	inline void set_m_PrevRotation_25(Quaternion_t1891715979  value)
	{
		___m_PrevRotation_25 = value;
	}

	inline static int32_t get_offset_of_m_LocalTransformWriter_26() { return static_cast<int32_t>(offsetof(NetworkTransformChild_t49719623, ___m_LocalTransformWriter_26)); }
	inline NetworkWriter_t3691904682 * get_m_LocalTransformWriter_26() const { return ___m_LocalTransformWriter_26; }
	inline NetworkWriter_t3691904682 ** get_address_of_m_LocalTransformWriter_26() { return &___m_LocalTransformWriter_26; }
	inline void set_m_LocalTransformWriter_26(NetworkWriter_t3691904682 * value)
	{
		___m_LocalTransformWriter_26 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalTransformWriter_26, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
