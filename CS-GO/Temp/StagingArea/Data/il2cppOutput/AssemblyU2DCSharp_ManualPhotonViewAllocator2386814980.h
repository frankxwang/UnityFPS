﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ManualPhotonViewAllocator
struct  ManualPhotonViewAllocator_t2386814980  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject ManualPhotonViewAllocator::Prefab
	GameObject_t4012695102 * ___Prefab_2;

public:
	inline static int32_t get_offset_of_Prefab_2() { return static_cast<int32_t>(offsetof(ManualPhotonViewAllocator_t2386814980, ___Prefab_2)); }
	inline GameObject_t4012695102 * get_Prefab_2() const { return ___Prefab_2; }
	inline GameObject_t4012695102 ** get_address_of_Prefab_2() { return &___Prefab_2; }
	inline void set_Prefab_2(GameObject_t4012695102 * value)
	{
		___Prefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___Prefab_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
