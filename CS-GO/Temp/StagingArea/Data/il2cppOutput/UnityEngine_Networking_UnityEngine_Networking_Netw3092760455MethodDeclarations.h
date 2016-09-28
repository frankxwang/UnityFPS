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

// UnityEngine.Networking.NetworkTransform
struct NetworkTransform_t3092760455;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D
struct ClientMoveCallback3D_t215573746;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D
struct ClientMoveCallback2D_t215573715;
// UnityEngine.CharacterController
struct CharacterController_t2029520850;
// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;
// UnityEngine.Networking.NetworkWriter
struct NetworkWriter_t3691904682;
// UnityEngine.Networking.NetworkReader
struct NetworkReader_t3536499450;
// UnityEngine.Networking.NetworkMessage
struct NetworkMessage_t1976735906;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo585557578.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4232868287.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw4094280260.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo215573746.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netwo215573715.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3691904682.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3536499450.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1976735906.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UnityEngine.Networking.NetworkTransform::.ctor()
extern "C"  void NetworkTransform__ctor_m2939555501 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/TransformSyncMode UnityEngine.Networking.NetworkTransform::get_transformSyncMode()
extern "C"  int32_t NetworkTransform_get_transformSyncMode_m539447075 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_transformSyncMode(UnityEngine.Networking.NetworkTransform/TransformSyncMode)
extern "C"  void NetworkTransform_set_transformSyncMode_m4211278174 (NetworkTransform_t3092760455 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_sendInterval()
extern "C"  float NetworkTransform_get_sendInterval_m3921377665 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_sendInterval(System.Single)
extern "C"  void NetworkTransform_set_sendInterval_m734689482 (NetworkTransform_t3092760455 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/AxisSyncMode UnityEngine.Networking.NetworkTransform::get_syncRotationAxis()
extern "C"  int32_t NetworkTransform_get_syncRotationAxis_m4017430352 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncRotationAxis(UnityEngine.Networking.NetworkTransform/AxisSyncMode)
extern "C"  void NetworkTransform_set_syncRotationAxis_m1345018113 (NetworkTransform_t3092760455 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/CompressionSyncMode UnityEngine.Networking.NetworkTransform::get_rotationSyncCompression()
extern "C"  int32_t NetworkTransform_get_rotationSyncCompression_m2836828716 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_rotationSyncCompression(UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_set_rotationSyncCompression_m2536650625 (NetworkTransform_t3092760455 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_syncSpin()
extern "C"  bool NetworkTransform_get_syncSpin_m2337211535 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_syncSpin(System.Boolean)
extern "C"  void NetworkTransform_set_syncSpin_m4163056840 (NetworkTransform_t3092760455 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_movementTheshold()
extern "C"  float NetworkTransform_get_movementTheshold_m3902696068 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_movementTheshold(System.Single)
extern "C"  void NetworkTransform_set_movementTheshold_m2648507559 (NetworkTransform_t3092760455 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_snapThreshold()
extern "C"  float NetworkTransform_get_snapThreshold_m528936847 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_snapThreshold(System.Single)
extern "C"  void NetworkTransform_set_snapThreshold_m2835299196 (NetworkTransform_t3092760455 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateRotation()
extern "C"  float NetworkTransform_get_interpolateRotation_m3743200813 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateRotation(System.Single)
extern "C"  void NetworkTransform_set_interpolateRotation_m899343774 (NetworkTransform_t3092760455 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_interpolateMovement()
extern "C"  float NetworkTransform_get_interpolateMovement_m2967346974 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_interpolateMovement(System.Single)
extern "C"  void NetworkTransform_set_interpolateMovement_m3240971341 (NetworkTransform_t3092760455 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback3D()
extern "C"  ClientMoveCallback3D_t215573746 * NetworkTransform_get_clientMoveCallback3D_m165841627 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback3D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback3D)
extern "C"  void NetworkTransform_set_clientMoveCallback3D_m749277190 (NetworkTransform_t3092760455 * __this, ClientMoveCallback3D_t215573746 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D UnityEngine.Networking.NetworkTransform::get_clientMoveCallback2D()
extern "C"  ClientMoveCallback2D_t215573715 * NetworkTransform_get_clientMoveCallback2D_m3506550237 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_clientMoveCallback2D(UnityEngine.Networking.NetworkTransform/ClientMoveCallback2D)
extern "C"  void NetworkTransform_set_clientMoveCallback2D_m2923956326 (NetworkTransform_t3092760455 * __this, ClientMoveCallback2D_t215573715 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterController UnityEngine.Networking.NetworkTransform::get_characterContoller()
extern "C"  CharacterController_t2029520850 * NetworkTransform_get_characterContoller_m2043444668 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Networking.NetworkTransform::get_rigidbody3D()
extern "C"  Rigidbody_t1972007546 * NetworkTransform_get_rigidbody3D_m496229341 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.Networking.NetworkTransform::get_rigidbody2D()
extern "C"  Rigidbody2D_t3632243084 * NetworkTransform_get_rigidbody2D_m2736352236 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_lastSyncTime()
extern "C"  float NetworkTransform_get_lastSyncTime_m1413133714 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncPosition()
extern "C"  Vector3_t3525329789  NetworkTransform_get_targetSyncPosition_m2132060475 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::get_targetSyncVelocity()
extern "C"  Vector3_t3525329789  NetworkTransform_get_targetSyncVelocity_m3076403183 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::get_targetSyncRotation3D()
extern "C"  Quaternion_t1891715979  NetworkTransform_get_targetSyncRotation3D_m92246425 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::get_targetSyncRotation2D()
extern "C"  float NetworkTransform_get_targetSyncRotation2D_m1266579856 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::get_grounded()
extern "C"  bool NetworkTransform_get_grounded_m1467469112 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::set_grounded(System.Boolean)
extern "C"  void NetworkTransform_set_grounded_m455549361 (NetworkTransform_t3092760455 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnValidate()
extern "C"  void NetworkTransform_OnValidate_m2120404812 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Awake()
extern "C"  void NetworkTransform_Awake_m3177160720 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartServer()
extern "C"  void NetworkTransform_OnStartServer_m990969649 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::OnSerialize(UnityEngine.Networking.NetworkWriter,System.Boolean)
extern "C"  bool NetworkTransform_OnSerialize_m4255711489 (NetworkTransform_t3092760455 * __this, NetworkWriter_t3691904682 * ___writer0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeTransform(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeTransform_m2559833250 (NetworkTransform_t3092760455 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode3D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode3D_m729474689 (NetworkTransform_t3092760455 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeModeCharacterController(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeModeCharacterController_m4087703131 (NetworkTransform_t3092760455 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeMode2D(UnityEngine.Networking.NetworkWriter)
extern "C"  void NetworkTransform_SerializeMode2D_m3562861986 (NetworkTransform_t3092760455 * __this, NetworkWriter_t3691904682 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnDeserialize(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_OnDeserialize_m1241785952 (NetworkTransform_t3092760455 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeTransform(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeTransform_m2073059378 (NetworkTransform_t3092760455 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode3D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode3D_m2031868869 (NetworkTransform_t3092760455 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeMode2D(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeMode2D_m1338476164 (NetworkTransform_t3092760455 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::UnserializeModeCharacterController(UnityEngine.Networking.NetworkReader,System.Boolean)
extern "C"  void NetworkTransform_UnserializeModeCharacterController_m3592648857 (NetworkTransform_t3092760455 * __this, NetworkReader_t3536499450 * ___reader0, bool ___initialState1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdate()
extern "C"  void NetworkTransform_FixedUpdate_m462648936 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateServer()
extern "C"  void NetworkTransform_FixedUpdateServer_m539646923 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::FixedUpdateClient()
extern "C"  void NetworkTransform_FixedUpdateClient_m68951635 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode3D()
extern "C"  void NetworkTransform_InterpolateTransformMode3D_m92504918 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformModeCharacterController()
extern "C"  void NetworkTransform_InterpolateTransformModeCharacterController_m3040499618 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::InterpolateTransformMode2D()
extern "C"  void NetworkTransform_InterpolateTransformMode2D_m92475127 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::Update()
extern "C"  void NetworkTransform_Update_m2658769408 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.NetworkTransform::HasMoved()
extern "C"  bool NetworkTransform_HasMoved_m3982777314 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SendTransform()
extern "C"  void NetworkTransform_SendTransform_m2453183887 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::HandleTransform(UnityEngine.Networking.NetworkMessage)
extern "C"  void NetworkTransform_HandleTransform_m3984747559 (Il2CppObject * __this /* static, unused */, NetworkMessage_t1976735906 * ___netMsg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::WriteAngle(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_WriteAngle_m3756698824 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, float ___angle1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::ReadAngle(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_ReadAngle_m4108649116 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity3D_m2792309732 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, Vector3_t3525329789  ___velocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeVelocity2D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector2,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeVelocity2D_m2998991206 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, Vector2_t3525329788  ___velocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Quaternion,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation3D_m2828433146 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, Quaternion_t1891715979  ___rot1, int32_t ___mode2, int32_t ___compression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeRotation2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeRotation2D_m2419887288 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, float ___rot1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin3D(UnityEngine.Networking.NetworkWriter,UnityEngine.Vector3,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin3D_m798199548 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, Vector3_t3525329789  ___angularVelocity1, int32_t ___mode2, int32_t ___compression3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::SerializeSpin2D(UnityEngine.Networking.NetworkWriter,System.Single,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  void NetworkTransform_SerializeSpin2D_m4026339708 (Il2CppObject * __this /* static, unused */, NetworkWriter_t3691904682 * ___writer0, float ___angularVelocity1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t3525329789  NetworkTransform_UnserializeVelocity3D_m1412416770 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeVelocity2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t3525329789  NetworkTransform_UnserializeVelocity2D_m2611152035 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Networking.NetworkTransform::UnserializeRotation3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Quaternion_t1891715979  NetworkTransform_UnserializeRotation3D_m1705877562 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___mode1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeRotation2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeRotation2D_m711868502 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Networking.NetworkTransform::UnserializeSpin3D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/AxisSyncMode,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  Vector3_t3525329789  NetworkTransform_UnserializeSpin3D_m1313347486 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___mode1, int32_t ___compression2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::UnserializeSpin2D(UnityEngine.Networking.NetworkReader,UnityEngine.Networking.NetworkTransform/CompressionSyncMode)
extern "C"  float NetworkTransform_UnserializeSpin2D_m92269978 (Il2CppObject * __this /* static, unused */, NetworkReader_t3536499450 * ___reader0, int32_t ___compression1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.NetworkTransform::GetNetworkChannel()
extern "C"  int32_t NetworkTransform_GetNetworkChannel_m1865413086 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Networking.NetworkTransform::GetNetworkSendInterval()
extern "C"  float NetworkTransform_GetNetworkSendInterval_m4256728624 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.NetworkTransform::OnStartAuthority()
extern "C"  void NetworkTransform_OnStartAuthority_m4200725687 (NetworkTransform_t3092760455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
