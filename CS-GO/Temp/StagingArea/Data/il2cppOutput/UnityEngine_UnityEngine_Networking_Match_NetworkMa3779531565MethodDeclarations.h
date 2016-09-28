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

// UnityEngine.Networking.Match.NetworkMatch
struct NetworkMatch_t3779531565;
// System.Uri
struct Uri_t2776692961;
// UnityEngine.Coroutine
struct Coroutine_t2246592261;
struct Coroutine_t2246592261_marshaled_pinvoke;
// System.String
struct String_t;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>
struct ResponseDelegate_1_t136534788;
// UnityEngine.Networking.Match.CreateMatchRequest
struct CreateMatchRequest_t1328886556;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>
struct ResponseDelegate_1_t2483245462;
// UnityEngine.Networking.Match.JoinMatchRequest
struct JoinMatchRequest_t3205702218;
// UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>
struct ResponseDelegate_1_t3115367074;
// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t3503187902;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Networking_Match_CreateMat1328886556.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Match_JoinMatch3205702218.h"
#include "UnityEngine_UnityEngine_Networking_Match_ListMatch3503187902.h"

// System.Uri UnityEngine.Networking.Match.NetworkMatch::get_baseUri()
extern "C"  Uri_t2776692961 * NetworkMatch_get_baseUri_m3090644785 (NetworkMatch_t3779531565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.NetworkMatch::set_baseUri(System.Uri)
extern "C"  void NetworkMatch_set_baseUri_m948711566 (NetworkMatch_t3779531565 * __this, Uri_t2776692961 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(System.String,System.UInt32,System.Boolean,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_CreateMatch_m2995033476 (NetworkMatch_t3779531565 * __this, String_t* ___matchName0, uint32_t ___matchSize1, bool ___matchAdvertise2, String_t* ___matchPassword3, ResponseDelegate_1_t136534788 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::CreateMatch(UnityEngine.Networking.Match.CreateMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.CreateMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_CreateMatch_m2582026679 (NetworkMatch_t3779531565 * __this, CreateMatchRequest_t1328886556 * ___req0, ResponseDelegate_1_t136534788 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Types.NetworkID,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_JoinMatch_m3559576316 (NetworkMatch_t3779531565 * __this, uint64_t ___netId0, String_t* ___matchPassword1, ResponseDelegate_1_t2483245462 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::JoinMatch(UnityEngine.Networking.Match.JoinMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.JoinMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_JoinMatch_m2740374217 (NetworkMatch_t3779531565 * __this, JoinMatchRequest_t3205702218 * ___req0, ResponseDelegate_1_t2483245462 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(System.Int32,System.Int32,System.String,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_ListMatches_m319350175 (NetworkMatch_t3779531565 * __this, int32_t ___startPageNumber0, int32_t ___resultPageSize1, String_t* ___matchNameFilter2, ResponseDelegate_1_t3115367074 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Coroutine UnityEngine.Networking.Match.NetworkMatch::ListMatches(UnityEngine.Networking.Match.ListMatchRequest,UnityEngine.Networking.Match.NetworkMatch/ResponseDelegate`1<UnityEngine.Networking.Match.ListMatchResponse>)
extern "C"  Coroutine_t2246592261 * NetworkMatch_ListMatches_m3123075267 (NetworkMatch_t3779531565 * __this, ListMatchRequest_t3503187902 * ___req0, ResponseDelegate_1_t3115367074 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
