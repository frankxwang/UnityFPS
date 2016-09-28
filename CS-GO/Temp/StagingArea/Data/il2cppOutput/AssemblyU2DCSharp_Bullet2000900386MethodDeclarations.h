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

// Bullet
struct Bullet_t2000900386;
// UnityEngine.Collision
struct Collision_t1119538015;
// PhotonStream
struct PhotonStream_t1494272828;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"
#include "AssemblyU2DCSharp_PhotonStream1494272828.h"
#include "AssemblyU2DCSharp_PhotonMessageInfo259585817.h"

// System.Void Bullet::.ctor()
extern "C"  void Bullet__ctor_m4277156281 (Bullet_t2000900386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::Start()
extern "C"  void Bullet_Start_m3224294073 (Bullet_t2000900386 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void Bullet_OnCollisionEnter_m4238071687 (Bullet_t2000900386 * __this, Collision_t1119538015 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Bullet::OnPhotonSerializeView(PhotonStream,PhotonMessageInfo)
extern "C"  void Bullet_OnPhotonSerializeView_m2857779448 (Bullet_t2000900386 * __this, PhotonStream_t1494272828 * ___stream0, PhotonMessageInfo_t259585817  ___info1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
