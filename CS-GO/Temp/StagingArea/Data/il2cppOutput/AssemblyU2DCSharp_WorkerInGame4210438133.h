﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WorkerInGame
struct  WorkerInGame_t4210438133  : public MonoBehaviour_t4025988718
{
public:
	// UnityEngine.Transform WorkerInGame::playerPrefab
	Transform_t284553113 * ___playerPrefab_3;

public:
	inline static int32_t get_offset_of_playerPrefab_3() { return static_cast<int32_t>(offsetof(WorkerInGame_t4210438133, ___playerPrefab_3)); }
	inline Transform_t284553113 * get_playerPrefab_3() const { return ___playerPrefab_3; }
	inline Transform_t284553113 ** get_address_of_playerPrefab_3() { return &___playerPrefab_3; }
	inline void set_playerPrefab_3(Transform_t284553113 * value)
	{
		___playerPrefab_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerPrefab_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
