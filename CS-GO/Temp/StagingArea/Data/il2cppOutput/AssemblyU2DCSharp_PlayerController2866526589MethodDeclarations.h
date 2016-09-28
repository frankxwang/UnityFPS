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

// PlayerController
struct PlayerController_t2866526589;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m2658519486 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void PlayerController_OnPhotonSerializeView_m3926036541 (PlayerController_t2866526589 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m1605657278 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m2536587535 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::SmoothMove()
extern "C"  void PlayerController_SmoothMove_m3661119205 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::CmdFire()
extern "C"  void PlayerController_CmdFire_m2078047916 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PlayerController::grounded()
extern "C"  bool PlayerController_grounded_m3470828736 (PlayerController_t2866526589 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
