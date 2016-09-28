#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkCRC
struct NetworkCRC_t947711855;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t190145395;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkCRC
struct  NetworkCRC_t947711855  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UnityEngine.Networking.NetworkCRC::m_Scripts
	Dictionary_2_t190145395 * ___m_Scripts_1;
	// System.Boolean UnityEngine.Networking.NetworkCRC::m_ScriptCRCCheck
	bool ___m_ScriptCRCCheck_2;

public:
	inline static int32_t get_offset_of_m_Scripts_1() { return static_cast<int32_t>(offsetof(NetworkCRC_t947711855, ___m_Scripts_1)); }
	inline Dictionary_2_t190145395 * get_m_Scripts_1() const { return ___m_Scripts_1; }
	inline Dictionary_2_t190145395 ** get_address_of_m_Scripts_1() { return &___m_Scripts_1; }
	inline void set_m_Scripts_1(Dictionary_2_t190145395 * value)
	{
		___m_Scripts_1 = value;
		Il2CppCodeGenWriteBarrier(&___m_Scripts_1, value);
	}

	inline static int32_t get_offset_of_m_ScriptCRCCheck_2() { return static_cast<int32_t>(offsetof(NetworkCRC_t947711855, ___m_ScriptCRCCheck_2)); }
	inline bool get_m_ScriptCRCCheck_2() const { return ___m_ScriptCRCCheck_2; }
	inline bool* get_address_of_m_ScriptCRCCheck_2() { return &___m_ScriptCRCCheck_2; }
	inline void set_m_ScriptCRCCheck_2(bool value)
	{
		___m_ScriptCRCCheck_2 = value;
	}
};

struct NetworkCRC_t947711855_StaticFields
{
public:
	// UnityEngine.Networking.NetworkCRC UnityEngine.Networking.NetworkCRC::s_Singleton
	NetworkCRC_t947711855 * ___s_Singleton_0;

public:
	inline static int32_t get_offset_of_s_Singleton_0() { return static_cast<int32_t>(offsetof(NetworkCRC_t947711855_StaticFields, ___s_Singleton_0)); }
	inline NetworkCRC_t947711855 * get_s_Singleton_0() const { return ___s_Singleton_0; }
	inline NetworkCRC_t947711855 ** get_address_of_s_Singleton_0() { return &___s_Singleton_0; }
	inline void set_s_Singleton_0(NetworkCRC_t947711855 * value)
	{
		___s_Singleton_0 = value;
		Il2CppCodeGenWriteBarrier(&___s_Singleton_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
