#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnClickCallMethod
struct  OnClickCallMethod_t1921998984  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.GameObject OnClickCallMethod::TargetGameObject
	GameObject_t4012695102 * ___TargetGameObject_3;
	// System.String OnClickCallMethod::TargetMethod
	String_t* ___TargetMethod_4;

public:
	inline static int32_t get_offset_of_TargetGameObject_3() { return static_cast<int32_t>(offsetof(OnClickCallMethod_t1921998984, ___TargetGameObject_3)); }
	inline GameObject_t4012695102 * get_TargetGameObject_3() const { return ___TargetGameObject_3; }
	inline GameObject_t4012695102 ** get_address_of_TargetGameObject_3() { return &___TargetGameObject_3; }
	inline void set_TargetGameObject_3(GameObject_t4012695102 * value)
	{
		___TargetGameObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___TargetGameObject_3, value);
	}

	inline static int32_t get_offset_of_TargetMethod_4() { return static_cast<int32_t>(offsetof(OnClickCallMethod_t1921998984, ___TargetMethod_4)); }
	inline String_t* get_TargetMethod_4() const { return ___TargetMethod_4; }
	inline String_t** get_address_of_TargetMethod_4() { return &___TargetMethod_4; }
	inline void set_TargetMethod_4(String_t* value)
	{
		___TargetMethod_4 = value;
		Il2CppCodeGenWriteBarrier(&___TargetMethod_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
