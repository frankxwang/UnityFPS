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
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"
#include "AssemblyU2DCSharp_ServerSettings_HostingOption1200108079.h"
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionP3367452146.h"
#include "AssemblyU2DCSharp_CloudRegionCode3866731254.h"
#include "AssemblyU2DCSharp_CloudRegionFlag3866817653.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServerSettings
struct  ServerSettings_t602941606  : public ScriptableObject_t184905905
{
public:
	// ServerSettings/HostingOption ServerSettings::HostType
	int32_t ___HostType_2;
	// ExitGames.Client.Photon.ConnectionProtocol ServerSettings::Protocol
	uint8_t ___Protocol_3;
	// System.String ServerSettings::ServerAddress
	String_t* ___ServerAddress_4;
	// System.Int32 ServerSettings::ServerPort
	int32_t ___ServerPort_5;
	// System.String ServerSettings::AppID
	String_t* ___AppID_6;
	// System.String ServerSettings::VoiceAppID
	String_t* ___VoiceAppID_7;
	// CloudRegionCode ServerSettings::PreferredRegion
	int32_t ___PreferredRegion_8;
	// CloudRegionFlag ServerSettings::EnabledRegions
	int32_t ___EnabledRegions_9;
	// System.Boolean ServerSettings::JoinLobby
	bool ___JoinLobby_10;
	// System.Boolean ServerSettings::EnableLobbyStatistics
	bool ___EnableLobbyStatistics_11;
	// System.Collections.Generic.List`1<System.String> ServerSettings::RpcList
	List_1_t1765447871 * ___RpcList_12;
	// System.Boolean ServerSettings::DisableAutoOpenWizard
	bool ___DisableAutoOpenWizard_13;

public:
	inline static int32_t get_offset_of_HostType_2() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___HostType_2)); }
	inline int32_t get_HostType_2() const { return ___HostType_2; }
	inline int32_t* get_address_of_HostType_2() { return &___HostType_2; }
	inline void set_HostType_2(int32_t value)
	{
		___HostType_2 = value;
	}

	inline static int32_t get_offset_of_Protocol_3() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___Protocol_3)); }
	inline uint8_t get_Protocol_3() const { return ___Protocol_3; }
	inline uint8_t* get_address_of_Protocol_3() { return &___Protocol_3; }
	inline void set_Protocol_3(uint8_t value)
	{
		___Protocol_3 = value;
	}

	inline static int32_t get_offset_of_ServerAddress_4() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___ServerAddress_4)); }
	inline String_t* get_ServerAddress_4() const { return ___ServerAddress_4; }
	inline String_t** get_address_of_ServerAddress_4() { return &___ServerAddress_4; }
	inline void set_ServerAddress_4(String_t* value)
	{
		___ServerAddress_4 = value;
		Il2CppCodeGenWriteBarrier(&___ServerAddress_4, value);
	}

	inline static int32_t get_offset_of_ServerPort_5() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___ServerPort_5)); }
	inline int32_t get_ServerPort_5() const { return ___ServerPort_5; }
	inline int32_t* get_address_of_ServerPort_5() { return &___ServerPort_5; }
	inline void set_ServerPort_5(int32_t value)
	{
		___ServerPort_5 = value;
	}

	inline static int32_t get_offset_of_AppID_6() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___AppID_6)); }
	inline String_t* get_AppID_6() const { return ___AppID_6; }
	inline String_t** get_address_of_AppID_6() { return &___AppID_6; }
	inline void set_AppID_6(String_t* value)
	{
		___AppID_6 = value;
		Il2CppCodeGenWriteBarrier(&___AppID_6, value);
	}

	inline static int32_t get_offset_of_VoiceAppID_7() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___VoiceAppID_7)); }
	inline String_t* get_VoiceAppID_7() const { return ___VoiceAppID_7; }
	inline String_t** get_address_of_VoiceAppID_7() { return &___VoiceAppID_7; }
	inline void set_VoiceAppID_7(String_t* value)
	{
		___VoiceAppID_7 = value;
		Il2CppCodeGenWriteBarrier(&___VoiceAppID_7, value);
	}

	inline static int32_t get_offset_of_PreferredRegion_8() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___PreferredRegion_8)); }
	inline int32_t get_PreferredRegion_8() const { return ___PreferredRegion_8; }
	inline int32_t* get_address_of_PreferredRegion_8() { return &___PreferredRegion_8; }
	inline void set_PreferredRegion_8(int32_t value)
	{
		___PreferredRegion_8 = value;
	}

	inline static int32_t get_offset_of_EnabledRegions_9() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___EnabledRegions_9)); }
	inline int32_t get_EnabledRegions_9() const { return ___EnabledRegions_9; }
	inline int32_t* get_address_of_EnabledRegions_9() { return &___EnabledRegions_9; }
	inline void set_EnabledRegions_9(int32_t value)
	{
		___EnabledRegions_9 = value;
	}

	inline static int32_t get_offset_of_JoinLobby_10() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___JoinLobby_10)); }
	inline bool get_JoinLobby_10() const { return ___JoinLobby_10; }
	inline bool* get_address_of_JoinLobby_10() { return &___JoinLobby_10; }
	inline void set_JoinLobby_10(bool value)
	{
		___JoinLobby_10 = value;
	}

	inline static int32_t get_offset_of_EnableLobbyStatistics_11() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___EnableLobbyStatistics_11)); }
	inline bool get_EnableLobbyStatistics_11() const { return ___EnableLobbyStatistics_11; }
	inline bool* get_address_of_EnableLobbyStatistics_11() { return &___EnableLobbyStatistics_11; }
	inline void set_EnableLobbyStatistics_11(bool value)
	{
		___EnableLobbyStatistics_11 = value;
	}

	inline static int32_t get_offset_of_RpcList_12() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___RpcList_12)); }
	inline List_1_t1765447871 * get_RpcList_12() const { return ___RpcList_12; }
	inline List_1_t1765447871 ** get_address_of_RpcList_12() { return &___RpcList_12; }
	inline void set_RpcList_12(List_1_t1765447871 * value)
	{
		___RpcList_12 = value;
		Il2CppCodeGenWriteBarrier(&___RpcList_12, value);
	}

	inline static int32_t get_offset_of_DisableAutoOpenWizard_13() { return static_cast<int32_t>(offsetof(ServerSettings_t602941606, ___DisableAutoOpenWizard_13)); }
	inline bool get_DisableAutoOpenWizard_13() const { return ___DisableAutoOpenWizard_13; }
	inline bool* get_address_of_DisableAutoOpenWizard_13() { return &___DisableAutoOpenWizard_13; }
	inline void set_DisableAutoOpenWizard_13(bool value)
	{
		___DisableAutoOpenWizard_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
