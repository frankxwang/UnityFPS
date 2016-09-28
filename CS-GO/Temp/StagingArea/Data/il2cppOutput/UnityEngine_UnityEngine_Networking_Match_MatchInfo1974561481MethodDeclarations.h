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

// UnityEngine.Networking.Match.MatchInfo
struct MatchInfo_t1974561481;
// UnityEngine.Networking.Match.CreateMatchResponse
struct CreateMatchResponse_t411996224;
// UnityEngine.Networking.Match.JoinMatchResponse
struct JoinMatchResponse_t2758706898;
// System.String
struct String_t;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t568435417;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMatc411996224.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch2758706898.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAcc568435417.h"
#include "UnityEngine_UnityEngine_Networking_Types_NodeID2024896911.h"

// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.CreateMatchResponse)
extern "C"  void MatchInfo__ctor_m304684511 (MatchInfo_t1974561481 * __this, CreateMatchResponse_t411996224 * ___matchResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::.ctor(UnityEngine.Networking.Match.JoinMatchResponse)
extern "C"  void MatchInfo__ctor_m1051586957 (MatchInfo_t1974561481 * __this, JoinMatchResponse_t2758706898 * ___matchResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::get_address()
extern "C"  String_t* MatchInfo_get_address_m125495171 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_address(System.String)
extern "C"  void MatchInfo_set_address_m833340976 (MatchInfo_t1974561481 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.MatchInfo::get_port()
extern "C"  int32_t MatchInfo_get_port_m427749201 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_port(System.Int32)
extern "C"  void MatchInfo_set_port_m1929060886 (MatchInfo_t1974561481 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkID UnityEngine.Networking.Match.MatchInfo::get_networkId()
extern "C"  uint64_t MatchInfo_get_networkId_m1146515261 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_networkId(UnityEngine.Networking.Types.NetworkID)
extern "C"  void MatchInfo_set_networkId_m1969107286 (MatchInfo_t1974561481 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_accessToken(UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void MatchInfo_set_accessToken_m1951145920 (MatchInfo_t1974561481 * __this, NetworkAccessToken_t568435417 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NodeID UnityEngine.Networking.Match.MatchInfo::get_nodeId()
extern "C"  uint16_t MatchInfo_get_nodeId_m1980131307 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_nodeId(UnityEngine.Networking.Types.NodeID)
extern "C"  void MatchInfo_set_nodeId_m2186637724 (MatchInfo_t1974561481 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.MatchInfo::get_usingRelay()
extern "C"  bool MatchInfo_get_usingRelay_m2033125731 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.MatchInfo::set_usingRelay(System.Boolean)
extern "C"  void MatchInfo_set_usingRelay_m2663128744 (MatchInfo_t1974561481 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.MatchInfo::ToString()
extern "C"  String_t* MatchInfo_ToString_m4053241526 (MatchInfo_t1974561481 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
