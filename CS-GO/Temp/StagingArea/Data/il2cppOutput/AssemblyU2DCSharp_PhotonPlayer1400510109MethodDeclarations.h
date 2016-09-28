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

// PhotonPlayer
struct PhotonPlayer_t1400510109;
// System.String
struct String_t;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_Hashtable223732124.h"
#include "mscorlib_System_Object837106420.h"
#include "AssemblyU2DCSharp_PhotonPlayer1400510109.h"

// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,System.String)
extern "C"  void PhotonPlayer__ctor_m317548062 (PhotonPlayer_t1400510109 * __this, bool ___isLocal0, int32_t ___actorID1, String_t* ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::.ctor(System.Boolean,System.Int32,ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer__ctor_m1298040232 (PhotonPlayer_t1400510109 * __this, bool ___isLocal0, int32_t ___actorID1, Hashtable_t223732124 * ___properties2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::get_ID()
extern "C"  int32_t PhotonPlayer_get_ID_m2258525368 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_name()
extern "C"  String_t* PhotonPlayer_get_name_m450311229 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_name(System.String)
extern "C"  void PhotonPlayer_set_name_m2527671604 (PhotonPlayer_t1400510109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::get_userId()
extern "C"  String_t* PhotonPlayer_get_userId_m1146342648 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_userId(System.String)
extern "C"  void PhotonPlayer_set_userId_m1813204121 (PhotonPlayer_t1400510109 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isMasterClient()
extern "C"  bool PhotonPlayer_get_isMasterClient_m1220929754 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::get_isInactive()
extern "C"  bool PhotonPlayer_get_isInactive_m2764874488 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_isInactive(System.Boolean)
extern "C"  void PhotonPlayer_set_isInactive_m2349408559 (PhotonPlayer_t1400510109 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_customProperties()
extern "C"  Hashtable_t223732124 * PhotonPlayer_get_customProperties_m563864832 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::set_customProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_set_customProperties_m1860785445 (PhotonPlayer_t1400510109 * __this, Hashtable_t223732124 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable PhotonPlayer::get_allProperties()
extern "C"  Hashtable_t223732124 * PhotonPlayer_get_allProperties_m1867860506 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Object)
extern "C"  bool PhotonPlayer_Equals_m2553265883 (PhotonPlayer_t1400510109 * __this, Il2CppObject * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::GetHashCode()
extern "C"  int32_t PhotonPlayer_GetHashCode_m3321264127 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalChangeLocalID(System.Int32)
extern "C"  void PhotonPlayer_InternalChangeLocalID_m745597830 (PhotonPlayer_t1400510109 * __this, int32_t ___newID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::InternalCacheProperties(ExitGames.Client.Photon.Hashtable)
extern "C"  void PhotonPlayer_InternalCacheProperties_m294387256 (PhotonPlayer_t1400510109 * __this, Hashtable_t223732124 * ___properties0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPlayer::SetCustomProperties(ExitGames.Client.Photon.Hashtable,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C"  void PhotonPlayer_SetCustomProperties_m4196333421 (PhotonPlayer_t1400510109 * __this, Hashtable_t223732124 * ___propertiesToSet0, Hashtable_t223732124 * ___expectedValues1, bool ___webForward2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Find(System.Int32)
extern "C"  PhotonPlayer_t1400510109 * PhotonPlayer_Find_m3647164016 (Il2CppObject * __this /* static, unused */, int32_t ___ID0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::Get(System.Int32)
extern "C"  PhotonPlayer_t1400510109 * PhotonPlayer_Get_m4005308771 (PhotonPlayer_t1400510109 * __this, int32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNext()
extern "C"  PhotonPlayer_t1400510109 * PhotonPlayer_GetNext_m4089615589 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(PhotonPlayer)
extern "C"  PhotonPlayer_t1400510109 * PhotonPlayer_GetNextFor_m2007933577 (PhotonPlayer_t1400510109 * __this, PhotonPlayer_t1400510109 * ___currentPlayer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PhotonPlayer PhotonPlayer::GetNextFor(System.Int32)
extern "C"  PhotonPlayer_t1400510109 * PhotonPlayer_GetNextFor_m2775557463 (PhotonPlayer_t1400510109 * __this, int32_t ___currentPlayerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::CompareTo(PhotonPlayer)
extern "C"  int32_t PhotonPlayer_CompareTo_m616768945 (PhotonPlayer_t1400510109 * __this, PhotonPlayer_t1400510109 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PhotonPlayer::CompareTo(System.Int32)
extern "C"  int32_t PhotonPlayer_CompareTo_m1384392831 (PhotonPlayer_t1400510109 * __this, int32_t ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(PhotonPlayer)
extern "C"  bool PhotonPlayer_Equals_m3172167772 (PhotonPlayer_t1400510109 * __this, PhotonPlayer_t1400510109 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPlayer::Equals(System.Int32)
extern "C"  bool PhotonPlayer_Equals_m3939791658 (PhotonPlayer_t1400510109 * __this, int32_t ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToString()
extern "C"  String_t* PhotonPlayer_ToString_m3190870773 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPlayer::ToStringFull()
extern "C"  String_t* PhotonPlayer_ToStringFull_m4203175908 (PhotonPlayer_t1400510109 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
