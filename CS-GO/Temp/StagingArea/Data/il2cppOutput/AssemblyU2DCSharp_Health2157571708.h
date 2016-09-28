#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "AssemblyU2DCSharp_Photon_MonoBehaviour4025988718.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Health
struct  Health_t2157571708  : public MonoBehaviour_t4025988718
{
public:
	// System.Int32 Health::currentHealth
	int32_t ___currentHealth_4;
	// UnityEngine.Texture Health::t
	Texture_t1769722184 * ___t_5;
	// UnityEngine.Texture Health::cross
	Texture_t1769722184 * ___cross_6;
	// UnityEngine.GameObject[] Health::spawn
	GameObjectU5BU5D_t3499186955* ___spawn_7;

public:
	inline static int32_t get_offset_of_currentHealth_4() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___currentHealth_4)); }
	inline int32_t get_currentHealth_4() const { return ___currentHealth_4; }
	inline int32_t* get_address_of_currentHealth_4() { return &___currentHealth_4; }
	inline void set_currentHealth_4(int32_t value)
	{
		___currentHealth_4 = value;
	}

	inline static int32_t get_offset_of_t_5() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___t_5)); }
	inline Texture_t1769722184 * get_t_5() const { return ___t_5; }
	inline Texture_t1769722184 ** get_address_of_t_5() { return &___t_5; }
	inline void set_t_5(Texture_t1769722184 * value)
	{
		___t_5 = value;
		Il2CppCodeGenWriteBarrier(&___t_5, value);
	}

	inline static int32_t get_offset_of_cross_6() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___cross_6)); }
	inline Texture_t1769722184 * get_cross_6() const { return ___cross_6; }
	inline Texture_t1769722184 ** get_address_of_cross_6() { return &___cross_6; }
	inline void set_cross_6(Texture_t1769722184 * value)
	{
		___cross_6 = value;
		Il2CppCodeGenWriteBarrier(&___cross_6, value);
	}

	inline static int32_t get_offset_of_spawn_7() { return static_cast<int32_t>(offsetof(Health_t2157571708, ___spawn_7)); }
	inline GameObjectU5BU5D_t3499186955* get_spawn_7() const { return ___spawn_7; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_spawn_7() { return &___spawn_7; }
	inline void set_spawn_7(GameObjectU5BU5D_t3499186955* value)
	{
		___spawn_7 = value;
		Il2CppCodeGenWriteBarrier(&___spawn_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
