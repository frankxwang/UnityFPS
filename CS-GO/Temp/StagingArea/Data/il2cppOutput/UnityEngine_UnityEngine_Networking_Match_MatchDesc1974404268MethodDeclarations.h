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

// UnityEngine.Networking.Match.MatchDesc
struct MatchDesc_t1974404268;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t190145490;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>
struct List_1_t877680057;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"
#include "mscorlib_System_Object837106420.h"

// System.Void UnityEngine.Networking.Match.MatchDesc::.ctor()
extern "C"  void MatchDesc__ctor_m493457018 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchDesc::get_networkId()
extern "C"  uint64_t MatchDesc_get_networkId_m460945338 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchDesc_set_networkId_m125039635 (MatchDesc_t1974404268 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::get_name()
extern "C"  String_t* MatchDesc_get_name_m130862433 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_name(System.String)
extern "C"  void MatchDesc_set_name_m1853525776 (MatchDesc_t1974404268 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_averageEloScore()
extern "C"  int32_t MatchDesc_get_averageEloScore_m3293338774 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_maxSize()
extern "C"  int32_t MatchDesc_get_maxSize_m814909076 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_maxSize(System.Int32)
extern "C"  void MatchDesc_set_maxSize_m3474930289 (MatchDesc_t1974404268 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchDesc::get_currentSize()
extern "C"  int32_t MatchDesc_get_currentSize_m2538415081 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_currentSize(System.Int32)
extern "C"  void MatchDesc_set_currentSize_m613308998 (MatchDesc_t1974404268 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchDesc::get_isPrivate()
extern "C"  bool MatchDesc_get_isPrivate_m1087677026 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_isPrivate(System.Boolean)
extern "C"  void MatchDesc_set_isPrivate_m3373932939 (MatchDesc_t1974404268 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.MatchDesc::get_matchAttributes()
extern "C"  Dictionary_2_t190145490 * MatchDesc_get_matchAttributes_m3896106407 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchDesc::get_hostNodeId()
extern "C"  uint16_t MatchDesc_get_hostNodeId_m1374429782 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo> UnityEngine.Networking.Match.MatchDesc::get_directConnectInfos()
extern "C"  List_1_t877680057 * MatchDesc_get_directConnectInfos_m2983832160 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::set_directConnectInfos(System.Collections.Generic.List`1<UnityEngine.Networking.Match.MatchDirectConnectInfo>)
extern "C"  void MatchDesc_set_directConnectInfos_m3723937829 (MatchDesc_t1974404268 * __this, List_1_t877680057 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchDesc::ToString()
extern "C"  String_t* MatchDesc_ToString_m2871421977 (MatchDesc_t1974404268 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchDesc::Parse(System.Object)
extern "C"  void MatchDesc_Parse_m2946706921 (MatchDesc_t1974404268 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
