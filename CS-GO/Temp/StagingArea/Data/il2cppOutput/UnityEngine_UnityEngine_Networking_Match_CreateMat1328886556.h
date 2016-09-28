#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t190145490;

#include "UnityEngine_UnityEngine_Networking_Match_Request2117242181.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.Match.CreateMatchRequest
struct  CreateMatchRequest_t1328886556  : public Request_t2117242181
{
public:
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_4;
	// System.UInt32 UnityEngine.Networking.Match.CreateMatchRequest::<size>k__BackingField
	uint32_t ___U3CsizeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.Match.CreateMatchRequest::<advertise>k__BackingField
	bool ___U3CadvertiseU3Ek__BackingField_6;
	// System.String UnityEngine.Networking.Match.CreateMatchRequest::<password>k__BackingField
	String_t* ___U3CpasswordU3Ek__BackingField_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.CreateMatchRequest::<matchAttributes>k__BackingField
	Dictionary_2_t190145490 * ___U3CmatchAttributesU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t1328886556, ___U3CnameU3Ek__BackingField_4)); }
	inline String_t* get_U3CnameU3Ek__BackingField_4() const { return ___U3CnameU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_4() { return &___U3CnameU3Ek__BackingField_4; }
	inline void set_U3CnameU3Ek__BackingField_4(String_t* value)
	{
		___U3CnameU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CnameU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CsizeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t1328886556, ___U3CsizeU3Ek__BackingField_5)); }
	inline uint32_t get_U3CsizeU3Ek__BackingField_5() const { return ___U3CsizeU3Ek__BackingField_5; }
	inline uint32_t* get_address_of_U3CsizeU3Ek__BackingField_5() { return &___U3CsizeU3Ek__BackingField_5; }
	inline void set_U3CsizeU3Ek__BackingField_5(uint32_t value)
	{
		___U3CsizeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CadvertiseU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t1328886556, ___U3CadvertiseU3Ek__BackingField_6)); }
	inline bool get_U3CadvertiseU3Ek__BackingField_6() const { return ___U3CadvertiseU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CadvertiseU3Ek__BackingField_6() { return &___U3CadvertiseU3Ek__BackingField_6; }
	inline void set_U3CadvertiseU3Ek__BackingField_6(bool value)
	{
		___U3CadvertiseU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CpasswordU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t1328886556, ___U3CpasswordU3Ek__BackingField_7)); }
	inline String_t* get_U3CpasswordU3Ek__BackingField_7() const { return ___U3CpasswordU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CpasswordU3Ek__BackingField_7() { return &___U3CpasswordU3Ek__BackingField_7; }
	inline void set_U3CpasswordU3Ek__BackingField_7(String_t* value)
	{
		___U3CpasswordU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CpasswordU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3CmatchAttributesU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(CreateMatchRequest_t1328886556, ___U3CmatchAttributesU3Ek__BackingField_8)); }
	inline Dictionary_2_t190145490 * get_U3CmatchAttributesU3Ek__BackingField_8() const { return ___U3CmatchAttributesU3Ek__BackingField_8; }
	inline Dictionary_2_t190145490 ** get_address_of_U3CmatchAttributesU3Ek__BackingField_8() { return &___U3CmatchAttributesU3Ek__BackingField_8; }
	inline void set_U3CmatchAttributesU3Ek__BackingField_8(Dictionary_2_t190145490 * value)
	{
		___U3CmatchAttributesU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3CmatchAttributesU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
