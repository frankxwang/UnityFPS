#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.NetworkTransformChild
struct NetworkTransformChild_t49719623;
// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t215573746;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4232868287.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4094280260.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo215573746.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"

// System.Void UnityEngine.Networking.NetworkTransformChild::.ctor()
extern "C"  void NetworkTransformChild__ctor_m853353245 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Networking.NetworkTransformChild::get_target()
extern "C"  Transform_t284553113 * NetworkTransformChild_get_target_m50533663 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_target(UnityEngine.Transform)
extern "C"  void NetworkTransformChild_set_target_m2680726504 (NetworkTransformChild_t49719623 * __this, Transform_t284553113 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 UnityEngine.Networking.NetworkTransformChild::get_childIndex()
extern "C"  uint32_t NetworkTransformChild_get_childIndex_m3958728417 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_sendInterval()
extern "C"  float NetworkTransformChild_get_sendInterval_m1946748585 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_sendInterval(System.Single)
extern "C"  void NetworkTransformChild_set_sendInterval_m2241281338 (NetworkTransformChild_t49719623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransformChild::get_syncRotationAxis()
extern "C"  int32_t NetworkTransformChild_get_syncRotationAxis_m2851946676 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransformChild_set_syncRotationAxis_m2532978321 (NetworkTransformChild_t49719623 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransformChild::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransformChild_get_rotationSyncCompression_m1958729794 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransformChild_set_rotationSyncCompression_m4166258961 (NetworkTransformChild_t49719623 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_movementThreshold()
extern "C"  float NetworkTransformChild_get_movementThreshold_m4225624802 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_movementThreshold(System.Single)
extern "C"  void NetworkTransformChild_set_movementThreshold_m1332538737 (NetworkTransformChild_t49719623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateRotation()
extern "C"  float NetworkTransformChild_get_interpolateRotation_m3574959109 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateRotation_m1462584110 (NetworkTransformChild_t49719623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_interpolateMovement()
extern "C"  float NetworkTransformChild_get_interpolateMovement_m2799105270 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransformChild_set_interpolateMovement_m3804211677 (NetworkTransformChild_t49719623 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransformChild::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t215573746 * NetworkTransformChild_get_clientMoveCallback3D_m3300390585 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransformChild_set_clientMoveCallback3D_m3700690326 (NetworkTransformChild_t49719623 * __this, ClientMoveCallback3D_t215573746 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::get_lastSyncTime()
extern "C"  float NetworkTransformChild_get_lastSyncTime_m3733471930 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransformChild::get_targetSyncPosition()
extern "C"  Vector3_t3525329789  NetworkTransformChild_get_targetSyncPosition_m2422330623 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransformChild::get_targetSyncRotation3D()
extern "C"  Quaternion_t1891715979  NetworkTransformChild_get_targetSyncRotation3D_m3802524077 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnValidate()
extern "C"  void NetworkTransformChild_OnValidate_m187105500 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Awake()
extern "C"  void NetworkTransformChild_Awake_m1090958464 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransformChild_OnSerialize_m3590911213 (NetworkTransformChild_t49719623 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransformChild_SerializeModeTransform_m557368882 (NetworkTransformChild_t49719623 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_OnDeserialize_m2139720688 (NetworkTransformChild_t49719623 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransformChild_UnserializeModeTransform_m2065096866 (NetworkTransformChild_t49719623 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdate()
extern "C"  void NetworkTransformChild_FixedUpdate_m659912408 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateServer()
extern "C"  void NetworkTransformChild_FixedUpdateServer_m4146481211 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::FixedUpdateClient()
extern "C"  void NetworkTransformChild_FixedUpdateClient_m3675785923 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::Update()
extern "C"  void NetworkTransformChild_Update_m2411008912 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransformChild::HasMoved()
extern "C"  bool NetworkTransformChild_HasMoved_m3890395342 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::SendTransform()
extern "C"  void NetworkTransformChild_SendTransform_m3044819455 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransformChild::HandleChildTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransformChild_HandleChildTransform_m2047562775 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransformChild::GetNetworkChannel()
extern "C"  int32_t NetworkTransformChild_GetNetworkChannel_m1174235006 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransformChild::GetNetworkSendInterval()
extern "C"  float NetworkTransformChild_GetNetworkSendInterval_m3974206808 (NetworkTransformChild_t49719623 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
