﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t223732124;

#include "mscorlib_System_Object837106420.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PhotonPlayer
struct  PhotonPlayer_t1400510109  : public Il2CppObject
{
public:
	// System.Int32 PhotonPlayer::actorID
	int32_t ___actorID_0;
	// System.String PhotonPlayer::nameField
	String_t* ___nameField_1;
	// System.Boolean PhotonPlayer::isLocal
	bool ___isLocal_2;
	// System.Object PhotonPlayer::TagObject
	Il2CppObject * ___TagObject_3;
	// System.String PhotonPlayer::<userId>k__BackingField
	String_t* ___U3CuserIdU3Ek__BackingField_4;
	// System.Boolean PhotonPlayer::<isInactive>k__BackingField
	bool ___U3CisInactiveU3Ek__BackingField_5;
	// ExitGames.Client.Photon.Hashtable PhotonPlayer::<customProperties>k__BackingField
	Hashtable_t223732124 * ___U3CcustomPropertiesU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_actorID_0() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___actorID_0)); }
	inline int32_t get_actorID_0() const { return ___actorID_0; }
	inline int32_t* get_address_of_actorID_0() { return &___actorID_0; }
	inline void set_actorID_0(int32_t value)
	{
		___actorID_0 = value;
	}

	inline static int32_t get_offset_of_nameField_1() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___nameField_1)); }
	inline String_t* get_nameField_1() const { return ___nameField_1; }
	inline String_t** get_address_of_nameField_1() { return &___nameField_1; }
	inline void set_nameField_1(String_t* value)
	{
		___nameField_1 = value;
		Il2CppCodeGenWriteBarrier(&___nameField_1, value);
	}

	inline static int32_t get_offset_of_isLocal_2() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___isLocal_2)); }
	inline bool get_isLocal_2() const { return ___isLocal_2; }
	inline bool* get_address_of_isLocal_2() { return &___isLocal_2; }
	inline void set_isLocal_2(bool value)
	{
		___isLocal_2 = value;
	}

	inline static int32_t get_offset_of_TagObject_3() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___TagObject_3)); }
	inline Il2CppObject * get_TagObject_3() const { return ___TagObject_3; }
	inline Il2CppObject ** get_address_of_TagObject_3() { return &___TagObject_3; }
	inline void set_TagObject_3(Il2CppObject * value)
	{
		___TagObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___TagObject_3, value);
	}

	inline static int32_t get_offset_of_U3CuserIdU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___U3CuserIdU3Ek__BackingField_4)); }
	inline String_t* get_U3CuserIdU3Ek__BackingField_4() const { return ___U3CuserIdU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CuserIdU3Ek__BackingField_4() { return &___U3CuserIdU3Ek__BackingField_4; }
	inline void set_U3CuserIdU3Ek__BackingField_4(String_t* value)
	{
		___U3CuserIdU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier(&___U3CuserIdU3Ek__BackingField_4, value);
	}

	inline static int32_t get_offset_of_U3CisInactiveU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___U3CisInactiveU3Ek__BackingField_5)); }
	inline bool get_U3CisInactiveU3Ek__BackingField_5() const { return ___U3CisInactiveU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CisInactiveU3Ek__BackingField_5() { return &___U3CisInactiveU3Ek__BackingField_5; }
	inline void set_U3CisInactiveU3Ek__BackingField_5(bool value)
	{
		___U3CisInactiveU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CcustomPropertiesU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PhotonPlayer_t1400510109, ___U3CcustomPropertiesU3Ek__BackingField_6)); }
	inline Hashtable_t223732124 * get_U3CcustomPropertiesU3Ek__BackingField_6() const { return ___U3CcustomPropertiesU3Ek__BackingField_6; }
	inline Hashtable_t223732124 ** get_address_of_U3CcustomPropertiesU3Ek__BackingField_6() { return &___U3CcustomPropertiesU3Ek__BackingField_6; }
	inline void set_U3CcustomPropertiesU3Ek__BackingField_6(Hashtable_t223732124 * value)
	{
		___U3CcustomPropertiesU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier(&___U3CcustomPropertiesU3Ek__BackingField_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
