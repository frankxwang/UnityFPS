#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity>
struct Dictionary_2_t2512141248;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject>
struct Dictionary_2_t899772856;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate>
struct Dictionary_2_t3115846659;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate>
struct Dictionary_2_t2631857642;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkScene
struct  NetworkScene_t3860729255  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkInstanceId,UnityEngine.Networking.NetworkIdentity> UnityEngine.Networking.NetworkScene::m_LocalObjects
	Dictionary_2_t2512141248 * ___m_LocalObjects_0;

public:
	inline static int32_t get_offset_of_m_LocalObjects_0() { return static_cast<int32_t>(offsetof(NetworkScene_t3860729255, ___m_LocalObjects_0)); }
	inline Dictionary_2_t2512141248 * get_m_LocalObjects_0() const { return ___m_LocalObjects_0; }
	inline Dictionary_2_t2512141248 ** get_address_of_m_LocalObjects_0() { return &___m_LocalObjects_0; }
	inline void set_m_LocalObjects_0(Dictionary_2_t2512141248 * value)
	{
		___m_LocalObjects_0 = value;
		Il2CppCodeGenWriteBarrier(&___m_LocalObjects_0, value);
	}
};

struct NetworkScene_t3860729255_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.GameObject> UnityEngine.Networking.NetworkScene::s_GuidToPrefab
	Dictionary_2_t899772856 * ___s_GuidToPrefab_1;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.SpawnDelegate> UnityEngine.Networking.NetworkScene::s_SpawnHandlers
	Dictionary_2_t3115846659 * ___s_SpawnHandlers_2;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.NetworkHash128,UnityEngine.Networking.UnSpawnDelegate> UnityEngine.Networking.NetworkScene::s_UnspawnHandlers
	Dictionary_2_t2631857642 * ___s_UnspawnHandlers_3;

public:
	inline static int32_t get_offset_of_s_GuidToPrefab_1() { return static_cast<int32_t>(offsetof(NetworkScene_t3860729255_StaticFields, ___s_GuidToPrefab_1)); }
	inline Dictionary_2_t899772856 * get_s_GuidToPrefab_1() const { return ___s_GuidToPrefab_1; }
	inline Dictionary_2_t899772856 ** get_address_of_s_GuidToPrefab_1() { return &___s_GuidToPrefab_1; }
	inline void set_s_GuidToPrefab_1(Dictionary_2_t899772856 * value)
	{
		___s_GuidToPrefab_1 = value;
		Il2CppCodeGenWriteBarrier(&___s_GuidToPrefab_1, value);
	}

	inline static int32_t get_offset_of_s_SpawnHandlers_2() { return static_cast<int32_t>(offsetof(NetworkScene_t3860729255_StaticFields, ___s_SpawnHandlers_2)); }
	inline Dictionary_2_t3115846659 * get_s_SpawnHandlers_2() const { return ___s_SpawnHandlers_2; }
	inline Dictionary_2_t3115846659 ** get_address_of_s_SpawnHandlers_2() { return &___s_SpawnHandlers_2; }
	inline void set_s_SpawnHandlers_2(Dictionary_2_t3115846659 * value)
	{
		___s_SpawnHandlers_2 = value;
		Il2CppCodeGenWriteBarrier(&___s_SpawnHandlers_2, value);
	}

	inline static int32_t get_offset_of_s_UnspawnHandlers_3() { return static_cast<int32_t>(offsetof(NetworkScene_t3860729255_StaticFields, ___s_UnspawnHandlers_3)); }
	inline Dictionary_2_t2631857642 * get_s_UnspawnHandlers_3() const { return ___s_UnspawnHandlers_3; }
	inline Dictionary_2_t2631857642 ** get_address_of_s_UnspawnHandlers_3() { return &___s_UnspawnHandlers_3; }
	inline void set_s_UnspawnHandlers_3(Dictionary_2_t2631857642 * value)
	{
		___s_UnspawnHandlers_3 = value;
		Il2CppCodeGenWriteBarrier(&___s_UnspawnHandlers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
