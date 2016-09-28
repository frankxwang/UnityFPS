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

// Health
struct Health_t2157571708;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void Health::.ctor()
extern "C"  void Health__ctor_m42729887 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::Start()
extern "C"  void Health_Start_m3284834975 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::TakeDamage(System.Int32)
extern "C"  void Health_TakeDamage_m3876014828 (Health_t2157571708 * __this, int32_t ___amount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::OnGUI()
extern "C"  void Health_OnGUI_m3833095833 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::RpcRespawn()
extern "C"  void Health_RpcRespawn_m3503371144 (Health_t2157571708 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Health::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void Health_OnPhotonSerializeView_m371992158 (Health_t2157571708 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
