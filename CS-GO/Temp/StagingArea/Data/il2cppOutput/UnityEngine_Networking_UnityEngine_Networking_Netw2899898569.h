#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "UnityEngine_Networking_UnityEngine_Networking_Messa226723297.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw3860307911.h"
#include "UnityEngine_Networking_UnityEngine_Networking_Netw1719292676.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage
struct  ObjectSpawnMessage_t2899898569  : public MessageBase_t226723297
{
public:
	// UnityEngine.Networking.NetworkInstanceId UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::netId
	NetworkInstanceId_t3860307911  ___netId_0;
	// UnityEngine.Networking.NetworkHash128 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::assetId
	NetworkHash128_t1719292676  ___assetId_1;
	// UnityEngine.Vector3 UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::position
	Vector3_t3525329789  ___position_2;
	// System.Byte[] UnityEngine.Networking.NetworkSystem.ObjectSpawnMessage::payload
	ByteU5BU5D_t58506160* ___payload_3;

public:
	inline static int32_t get_offset_of_netId_0() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2899898569, ___netId_0)); }
	inline NetworkInstanceId_t3860307911  get_netId_0() const { return ___netId_0; }
	inline NetworkInstanceId_t3860307911 * get_address_of_netId_0() { return &___netId_0; }
	inline void set_netId_0(NetworkInstanceId_t3860307911  value)
	{
		___netId_0 = value;
	}

	inline static int32_t get_offset_of_assetId_1() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2899898569, ___assetId_1)); }
	inline NetworkHash128_t1719292676  get_assetId_1() const { return ___assetId_1; }
	inline NetworkHash128_t1719292676 * get_address_of_assetId_1() { return &___assetId_1; }
	inline void set_assetId_1(NetworkHash128_t1719292676  value)
	{
		___assetId_1 = value;
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2899898569, ___position_2)); }
	inline Vector3_t3525329789  get_position_2() const { return ___position_2; }
	inline Vector3_t3525329789 * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t3525329789  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_payload_3() { return static_cast<int32_t>(offsetof(ObjectSpawnMessage_t2899898569, ___payload_3)); }
	inline ByteU5BU5D_t58506160* get_payload_3() const { return ___payload_3; }
	inline ByteU5BU5D_t58506160** get_address_of_payload_3() { return &___payload_3; }
	inline void set_payload_3(ByteU5BU5D_t58506160* value)
	{
		___payload_3 = value;
		Il2CppCodeGenWriteBarrier(&___payload_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
