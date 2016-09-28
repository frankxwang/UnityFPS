#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Random
struct Random_t922188920;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken>
struct Dictionary_2_t3417125664;

#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Networking_Types_AppID4044676526.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Utility
struct  Utility_t982181845  : public Il2CppObject
{
public:

public:
};

struct Utility_t982181845_StaticFields
{
public:
	// System.Random UnityEngine.Networking.Utility::s_randomGenerator
	Random_t922188920 * ___s_randomGenerator_0;
	// System.Boolean UnityEngine.Networking.Utility::s_useRandomSourceID
	bool ___s_useRandomSourceID_1;
	// System.Int32 UnityEngine.Networking.Utility::s_randomSourceComponent
	int32_t ___s_randomSourceComponent_2;
	// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::s_programAppID
	uint64_t ___s_programAppID_3;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,UnityEngine.Networking.Types.NetworkAccessToken> UnityEngine.Networking.Utility::s_dictTokens
	Dictionary_2_t3417125664 * ___s_dictTokens_4;

public:
	inline static int32_t get_offset_of_s_randomGenerator_0() { return static_cast<int32_t>(offsetof(Utility_t982181845_StaticFields, ___s_randomGenerator_0)); }
	inline Random_t922188920 * get_s_randomGenerator_0() const { return ___s_randomGenerator_0; }
	inline Random_t922188920 ** get_address_of_s_randomGenerator_0() { return &___s_randomGenerator_0; }
	inline void set_s_randomGenerator_0(Random_t922188920 * value)
	{
		___s_randomGenerator_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_randomGenerator_0, value);
	}

	inline static int32_t get_offset_of_s_useRandomSourceID_1() { return static_cast<int32_t>(offsetof(Utility_t982181845_StaticFields, ___s_useRandomSourceID_1)); }
	inline bool get_s_useRandomSourceID_1() const { return ___s_useRandomSourceID_1; }
	inline bool* get_address_of_s_useRandomSourceID_1() { return &___s_useRandomSourceID_1; }
	inline void set_s_useRandomSourceID_1(bool value)
	{
		___s_useRandomSourceID_1 = value;
	}

	inline static int32_t get_offset_of_s_randomSourceComponent_2() { return static_cast<int32_t>(offsetof(Utility_t982181845_StaticFields, ___s_randomSourceComponent_2)); }
	inline int32_t get_s_randomSourceComponent_2() const { return ___s_randomSourceComponent_2; }
	inline int32_t* get_address_of_s_randomSourceComponent_2() { return &___s_randomSourceComponent_2; }
	inline void set_s_randomSourceComponent_2(int32_t value)
	{
		___s_randomSourceComponent_2 = value;
	}

	inline static int32_t get_offset_of_s_programAppID_3() { return static_cast<int32_t>(offsetof(Utility_t982181845_StaticFields, ___s_programAppID_3)); }
	inline uint64_t get_s_programAppID_3() const { return ___s_programAppID_3; }
	inline uint64_t* get_address_of_s_programAppID_3() { return &___s_programAppID_3; }
	inline void set_s_programAppID_3(uint64_t value)
	{
		___s_programAppID_3 = value;
	}

	inline static int32_t get_offset_of_s_dictTokens_4() { return static_cast<int32_t>(offsetof(Utility_t982181845_StaticFields, ___s_dictTokens_4)); }
	inline Dictionary_2_t3417125664 * get_s_dictTokens_4() const { return ___s_dictTokens_4; }
	inline Dictionary_2_t3417125664 ** get_address_of_s_dictTokens_4() { return &___s_dictTokens_4; }
	inline void set_s_dictTokens_4(Dictionary_2_t3417125664 * value)
	{
		___s_dictTokens_4 = value;
		Il2CppCodeGenWriteBarrier(&___s_dictTokens_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
