#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Networking.NetworkLobbyPlayer
struct NetworkLobbyPlayer_t588704242;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.String
struct String_t;
// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer>
struct List_1_t1922438193;
// UnityEngine.Networking.NetworkLobbyPlayer[]
struct NetworkLobbyPlayerU5BU5D_t1928939015;
// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage
struct LobbyReadyToBeginMessage_t1996980708;
// UnityEngine.Networking.NetworkSystem.IntegerMessage
struct IntegerMessage_t1170075847;

#include "UnityEngine_Networking_UnityEngine_Networking_Netw1857071176.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Networking.NetworkLobbyManager
struct  NetworkLobbyManager_t2243710638  : public NetworkManager_t1857071176
{
public:
	// System.Boolean UnityEngine.Networking.NetworkLobbyManager::m_ShowLobbyGUI
	bool ___m_ShowLobbyGUI_48;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MaxPlayers
	int32_t ___m_MaxPlayers_49;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MaxPlayersPerConnection
	int32_t ___m_MaxPlayersPerConnection_50;
	// System.Int32 UnityEngine.Networking.NetworkLobbyManager::m_MinPlayers
	int32_t ___m_MinPlayers_51;
	// UnityEngine.Networking.NetworkLobbyPlayer UnityEngine.Networking.NetworkLobbyManager::m_LobbyPlayerPrefab
	NetworkLobbyPlayer_t588704242 * ___m_LobbyPlayerPrefab_52;
	// UnityEngine.GameObject UnityEngine.Networking.NetworkLobbyManager::m_GamePlayerPrefab
	GameObject_t4012695102 * ___m_GamePlayerPrefab_53;
	// System.String UnityEngine.Networking.NetworkLobbyManager::m_LobbyScene
	String_t* ___m_LobbyScene_54;
	// System.String UnityEngine.Networking.NetworkLobbyManager::m_PlayScene
	String_t* ___m_PlayScene_55;
	// System.Collections.Generic.List`1<UnityEngine.Networking.NetworkLobbyManager/PendingPlayer> UnityEngine.Networking.NetworkLobbyManager::m_PendingPlayers
	List_1_t1922438193 * ___m_PendingPlayers_56;
	// UnityEngine.Networking.NetworkLobbyPlayer[] UnityEngine.Networking.NetworkLobbyManager::lobbySlots
	NetworkLobbyPlayerU5BU5D_t1928939015* ___lobbySlots_57;

public:
	inline static int32_t get_offset_of_m_ShowLobbyGUI_48() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_ShowLobbyGUI_48)); }
	inline bool get_m_ShowLobbyGUI_48() const { return ___m_ShowLobbyGUI_48; }
	inline bool* get_address_of_m_ShowLobbyGUI_48() { return &___m_ShowLobbyGUI_48; }
	inline void set_m_ShowLobbyGUI_48(bool value)
	{
		___m_ShowLobbyGUI_48 = value;
	}

	inline static int32_t get_offset_of_m_MaxPlayers_49() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_MaxPlayers_49)); }
	inline int32_t get_m_MaxPlayers_49() const { return ___m_MaxPlayers_49; }
	inline int32_t* get_address_of_m_MaxPlayers_49() { return &___m_MaxPlayers_49; }
	inline void set_m_MaxPlayers_49(int32_t value)
	{
		___m_MaxPlayers_49 = value;
	}

	inline static int32_t get_offset_of_m_MaxPlayersPerConnection_50() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_MaxPlayersPerConnection_50)); }
	inline int32_t get_m_MaxPlayersPerConnection_50() const { return ___m_MaxPlayersPerConnection_50; }
	inline int32_t* get_address_of_m_MaxPlayersPerConnection_50() { return &___m_MaxPlayersPerConnection_50; }
	inline void set_m_MaxPlayersPerConnection_50(int32_t value)
	{
		___m_MaxPlayersPerConnection_50 = value;
	}

	inline static int32_t get_offset_of_m_MinPlayers_51() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_MinPlayers_51)); }
	inline int32_t get_m_MinPlayers_51() const { return ___m_MinPlayers_51; }
	inline int32_t* get_address_of_m_MinPlayers_51() { return &___m_MinPlayers_51; }
	inline void set_m_MinPlayers_51(int32_t value)
	{
		___m_MinPlayers_51 = value;
	}

	inline static int32_t get_offset_of_m_LobbyPlayerPrefab_52() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_LobbyPlayerPrefab_52)); }
	inline NetworkLobbyPlayer_t588704242 * get_m_LobbyPlayerPrefab_52() const { return ___m_LobbyPlayerPrefab_52; }
	inline NetworkLobbyPlayer_t588704242 ** get_address_of_m_LobbyPlayerPrefab_52() { return &___m_LobbyPlayerPrefab_52; }
	inline void set_m_LobbyPlayerPrefab_52(NetworkLobbyPlayer_t588704242 * value)
	{
		___m_LobbyPlayerPrefab_52 = value;
		Il2CppCodeGenWriteBarrier(&___m_LobbyPlayerPrefab_52, value);
	}

	inline static int32_t get_offset_of_m_GamePlayerPrefab_53() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_GamePlayerPrefab_53)); }
	inline GameObject_t4012695102 * get_m_GamePlayerPrefab_53() const { return ___m_GamePlayerPrefab_53; }
	inline GameObject_t4012695102 ** get_address_of_m_GamePlayerPrefab_53() { return &___m_GamePlayerPrefab_53; }
	inline void set_m_GamePlayerPrefab_53(GameObject_t4012695102 * value)
	{
		___m_GamePlayerPrefab_53 = value;
		Il2CppCodeGenWriteBarrier(&___m_GamePlayerPrefab_53, value);
	}

	inline static int32_t get_offset_of_m_LobbyScene_54() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_LobbyScene_54)); }
	inline String_t* get_m_LobbyScene_54() const { return ___m_LobbyScene_54; }
	inline String_t** get_address_of_m_LobbyScene_54() { return &___m_LobbyScene_54; }
	inline void set_m_LobbyScene_54(String_t* value)
	{
		___m_LobbyScene_54 = value;
		Il2CppCodeGenWriteBarrier(&___m_LobbyScene_54, value);
	}

	inline static int32_t get_offset_of_m_PlayScene_55() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_PlayScene_55)); }
	inline String_t* get_m_PlayScene_55() const { return ___m_PlayScene_55; }
	inline String_t** get_address_of_m_PlayScene_55() { return &___m_PlayScene_55; }
	inline void set_m_PlayScene_55(String_t* value)
	{
		___m_PlayScene_55 = value;
		Il2CppCodeGenWriteBarrier(&___m_PlayScene_55, value);
	}

	inline static int32_t get_offset_of_m_PendingPlayers_56() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___m_PendingPlayers_56)); }
	inline List_1_t1922438193 * get_m_PendingPlayers_56() const { return ___m_PendingPlayers_56; }
	inline List_1_t1922438193 ** get_address_of_m_PendingPlayers_56() { return &___m_PendingPlayers_56; }
	inline void set_m_PendingPlayers_56(List_1_t1922438193 * value)
	{
		___m_PendingPlayers_56 = value;
		Il2CppCodeGenWriteBarrier(&___m_PendingPlayers_56, value);
	}

	inline static int32_t get_offset_of_lobbySlots_57() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638, ___lobbySlots_57)); }
	inline NetworkLobbyPlayerU5BU5D_t1928939015* get_lobbySlots_57() const { return ___lobbySlots_57; }
	inline NetworkLobbyPlayerU5BU5D_t1928939015** get_address_of_lobbySlots_57() { return &___lobbySlots_57; }
	inline void set_lobbySlots_57(NetworkLobbyPlayerU5BU5D_t1928939015* value)
	{
		___lobbySlots_57 = value;
		Il2CppCodeGenWriteBarrier(&___lobbySlots_57, value);
	}
};

struct NetworkLobbyManager_t2243710638_StaticFields
{
public:
	// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage UnityEngine.Networking.NetworkLobbyManager::s_ReadyToBeginMessage
	LobbyReadyToBeginMessage_t1996980708 * ___s_ReadyToBeginMessage_58;
	// UnityEngine.Networking.NetworkSystem.IntegerMessage UnityEngine.Networking.NetworkLobbyManager::s_SceneLoadedMessage
	IntegerMessage_t1170075847 * ___s_SceneLoadedMessage_59;
	// UnityEngine.Networking.NetworkSystem.LobbyReadyToBeginMessage UnityEngine.Networking.NetworkLobbyManager::s_LobbyReadyToBeginMessage
	LobbyReadyToBeginMessage_t1996980708 * ___s_LobbyReadyToBeginMessage_60;

public:
	inline static int32_t get_offset_of_s_ReadyToBeginMessage_58() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638_StaticFields, ___s_ReadyToBeginMessage_58)); }
	inline LobbyReadyToBeginMessage_t1996980708 * get_s_ReadyToBeginMessage_58() const { return ___s_ReadyToBeginMessage_58; }
	inline LobbyReadyToBeginMessage_t1996980708 ** get_address_of_s_ReadyToBeginMessage_58() { return &___s_ReadyToBeginMessage_58; }
	inline void set_s_ReadyToBeginMessage_58(LobbyReadyToBeginMessage_t1996980708 * value)
	{
		___s_ReadyToBeginMessage_58 = value;
		Il2CppCodeGenWriteBarrier(&___s_ReadyToBeginMessage_58, value);
	}

	inline static int32_t get_offset_of_s_SceneLoadedMessage_59() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638_StaticFields, ___s_SceneLoadedMessage_59)); }
	inline IntegerMessage_t1170075847 * get_s_SceneLoadedMessage_59() const { return ___s_SceneLoadedMessage_59; }
	inline IntegerMessage_t1170075847 ** get_address_of_s_SceneLoadedMessage_59() { return &___s_SceneLoadedMessage_59; }
	inline void set_s_SceneLoadedMessage_59(IntegerMessage_t1170075847 * value)
	{
		___s_SceneLoadedMessage_59 = value;
		Il2CppCodeGenWriteBarrier(&___s_SceneLoadedMessage_59, value);
	}

	inline static int32_t get_offset_of_s_LobbyReadyToBeginMessage_60() { return static_cast<int32_t>(offsetof(NetworkLobbyManager_t2243710638_StaticFields, ___s_LobbyReadyToBeginMessage_60)); }
	inline LobbyReadyToBeginMessage_t1996980708 * get_s_LobbyReadyToBeginMessage_60() const { return ___s_LobbyReadyToBeginMessage_60; }
	inline LobbyReadyToBeginMessage_t1996980708 ** get_address_of_s_LobbyReadyToBeginMessage_60() { return &___s_LobbyReadyToBeginMessage_60; }
	inline void set_s_LobbyReadyToBeginMessage_60(LobbyReadyToBeginMessage_t1996980708 * value)
	{
		___s_LobbyReadyToBeginMessage_60 = value;
		Il2CppCodeGenWriteBarrier(&___s_LobbyReadyToBeginMessage_60, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
