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

// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t568435417;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Networking_Types_SourceID1497205096.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID4044676526.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID3752984187.h"
#include "UnityEngine_UnityEngine_Networking_Types_NetworkAcc568435417.h"

// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C"  void Utility__cctor_m782813746 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C"  uint64_t Utility_GetSourceID_m3662081952 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern "C"  uint64_t Utility_GetAppID_m3304399546 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken)
extern "C"  void Utility_SetAccessTokenForNetwork_m1264070461 (Il2CppObject * __this /* static, unused */, uint64_t ___netId0, NetworkAccessToken_t568435417 * ___accessToken1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
