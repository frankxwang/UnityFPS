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
// System.String[]
struct StringU5BU5D_t2956870243;
// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t2228911785;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.InputField
struct InputField_t2345609593;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Toggle
struct Toggle_t1499417981;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle>
struct Dictionary_2_t3137115885;
// System.Byte[]
struct ByteU5BU5D_t58506160;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ChatGui
struct  ChatGui_t2403745443  : public MonoBehaviour_t3012272455
{
public:
	// System.String ChatGui::ChatAppId
	String_t* ___ChatAppId_2;
	// System.String[] ChatGui::ChannelsToJoinOnConnect
	StringU5BU5D_t2956870243* ___ChannelsToJoinOnConnect_3;
	// System.Int32 ChatGui::HistoryLengthToFetch
	int32_t ___HistoryLengthToFetch_4;
	// System.String ChatGui::selectedChannelName
	String_t* ___selectedChannelName_5;
	// ExitGames.Client.Photon.Chat.ChatClient ChatGui::chatClient
	ChatClient_t2228911785 * ___chatClient_6;
	// UnityEngine.RectTransform ChatGui::ChatPanel
	RectTransform_t3317474837 * ___ChatPanel_7;
	// UnityEngine.UI.InputField ChatGui::InputFieldChat
	InputField_t2345609593 * ___InputFieldChat_8;
	// UnityEngine.UI.Text ChatGui::CurrentChannelText
	Text_t3286458198 * ___CurrentChannelText_9;
	// UnityEngine.UI.Toggle ChatGui::ChannelToggleToInstantiate
	Toggle_t1499417981 * ___ChannelToggleToInstantiate_10;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UI.Toggle> ChatGui::channelToggles
	Dictionary_2_t3137115885 * ___channelToggles_11;
	// System.Boolean ChatGui::ShowState
	bool ___ShowState_12;
	// UnityEngine.UI.Text ChatGui::StateText
	Text_t3286458198 * ___StateText_13;
	// System.String ChatGui::userIdInput
	String_t* ___userIdInput_14;
	// System.Int32 ChatGui::TestLength
	int32_t ___TestLength_17;
	// System.Byte[] ChatGui::testBytes
	ByteU5BU5D_t58506160* ___testBytes_18;
	// System.String ChatGui::<UserName>k__BackingField
	String_t* ___U3CUserNameU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_ChatAppId_2() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChatAppId_2)); }
	inline String_t* get_ChatAppId_2() const { return ___ChatAppId_2; }
	inline String_t** get_address_of_ChatAppId_2() { return &___ChatAppId_2; }
	inline void set_ChatAppId_2(String_t* value)
	{
		___ChatAppId_2 = value;
		Il2CppCodeGenWriteBarrier(&___ChatAppId_2, value);
	}

	inline static int32_t get_offset_of_ChannelsToJoinOnConnect_3() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelsToJoinOnConnect_3)); }
	inline StringU5BU5D_t2956870243* get_ChannelsToJoinOnConnect_3() const { return ___ChannelsToJoinOnConnect_3; }
	inline StringU5BU5D_t2956870243** get_address_of_ChannelsToJoinOnConnect_3() { return &___ChannelsToJoinOnConnect_3; }
	inline void set_ChannelsToJoinOnConnect_3(StringU5BU5D_t2956870243* value)
	{
		___ChannelsToJoinOnConnect_3 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelsToJoinOnConnect_3, value);
	}

	inline static int32_t get_offset_of_HistoryLengthToFetch_4() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___HistoryLengthToFetch_4)); }
	inline int32_t get_HistoryLengthToFetch_4() const { return ___HistoryLengthToFetch_4; }
	inline int32_t* get_address_of_HistoryLengthToFetch_4() { return &___HistoryLengthToFetch_4; }
	inline void set_HistoryLengthToFetch_4(int32_t value)
	{
		___HistoryLengthToFetch_4 = value;
	}

	inline static int32_t get_offset_of_selectedChannelName_5() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___selectedChannelName_5)); }
	inline String_t* get_selectedChannelName_5() const { return ___selectedChannelName_5; }
	inline String_t** get_address_of_selectedChannelName_5() { return &___selectedChannelName_5; }
	inline void set_selectedChannelName_5(String_t* value)
	{
		___selectedChannelName_5 = value;
		Il2CppCodeGenWriteBarrier(&___selectedChannelName_5, value);
	}

	inline static int32_t get_offset_of_chatClient_6() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___chatClient_6)); }
	inline ChatClient_t2228911785 * get_chatClient_6() const { return ___chatClient_6; }
	inline ChatClient_t2228911785 ** get_address_of_chatClient_6() { return &___chatClient_6; }
	inline void set_chatClient_6(ChatClient_t2228911785 * value)
	{
		___chatClient_6 = value;
		Il2CppCodeGenWriteBarrier(&___chatClient_6, value);
	}

	inline static int32_t get_offset_of_ChatPanel_7() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChatPanel_7)); }
	inline RectTransform_t3317474837 * get_ChatPanel_7() const { return ___ChatPanel_7; }
	inline RectTransform_t3317474837 ** get_address_of_ChatPanel_7() { return &___ChatPanel_7; }
	inline void set_ChatPanel_7(RectTransform_t3317474837 * value)
	{
		___ChatPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___ChatPanel_7, value);
	}

	inline static int32_t get_offset_of_InputFieldChat_8() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___InputFieldChat_8)); }
	inline InputField_t2345609593 * get_InputFieldChat_8() const { return ___InputFieldChat_8; }
	inline InputField_t2345609593 ** get_address_of_InputFieldChat_8() { return &___InputFieldChat_8; }
	inline void set_InputFieldChat_8(InputField_t2345609593 * value)
	{
		___InputFieldChat_8 = value;
		Il2CppCodeGenWriteBarrier(&___InputFieldChat_8, value);
	}

	inline static int32_t get_offset_of_CurrentChannelText_9() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___CurrentChannelText_9)); }
	inline Text_t3286458198 * get_CurrentChannelText_9() const { return ___CurrentChannelText_9; }
	inline Text_t3286458198 ** get_address_of_CurrentChannelText_9() { return &___CurrentChannelText_9; }
	inline void set_CurrentChannelText_9(Text_t3286458198 * value)
	{
		___CurrentChannelText_9 = value;
		Il2CppCodeGenWriteBarrier(&___CurrentChannelText_9, value);
	}

	inline static int32_t get_offset_of_ChannelToggleToInstantiate_10() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ChannelToggleToInstantiate_10)); }
	inline Toggle_t1499417981 * get_ChannelToggleToInstantiate_10() const { return ___ChannelToggleToInstantiate_10; }
	inline Toggle_t1499417981 ** get_address_of_ChannelToggleToInstantiate_10() { return &___ChannelToggleToInstantiate_10; }
	inline void set_ChannelToggleToInstantiate_10(Toggle_t1499417981 * value)
	{
		___ChannelToggleToInstantiate_10 = value;
		Il2CppCodeGenWriteBarrier(&___ChannelToggleToInstantiate_10, value);
	}

	inline static int32_t get_offset_of_channelToggles_11() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___channelToggles_11)); }
	inline Dictionary_2_t3137115885 * get_channelToggles_11() const { return ___channelToggles_11; }
	inline Dictionary_2_t3137115885 ** get_address_of_channelToggles_11() { return &___channelToggles_11; }
	inline void set_channelToggles_11(Dictionary_2_t3137115885 * value)
	{
		___channelToggles_11 = value;
		Il2CppCodeGenWriteBarrier(&___channelToggles_11, value);
	}

	inline static int32_t get_offset_of_ShowState_12() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___ShowState_12)); }
	inline bool get_ShowState_12() const { return ___ShowState_12; }
	inline bool* get_address_of_ShowState_12() { return &___ShowState_12; }
	inline void set_ShowState_12(bool value)
	{
		___ShowState_12 = value;
	}

	inline static int32_t get_offset_of_StateText_13() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___StateText_13)); }
	inline Text_t3286458198 * get_StateText_13() const { return ___StateText_13; }
	inline Text_t3286458198 ** get_address_of_StateText_13() { return &___StateText_13; }
	inline void set_StateText_13(Text_t3286458198 * value)
	{
		___StateText_13 = value;
		Il2CppCodeGenWriteBarrier(&___StateText_13, value);
	}

	inline static int32_t get_offset_of_userIdInput_14() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___userIdInput_14)); }
	inline String_t* get_userIdInput_14() const { return ___userIdInput_14; }
	inline String_t** get_address_of_userIdInput_14() { return &___userIdInput_14; }
	inline void set_userIdInput_14(String_t* value)
	{
		___userIdInput_14 = value;
		Il2CppCodeGenWriteBarrier(&___userIdInput_14, value);
	}

	inline static int32_t get_offset_of_TestLength_17() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___TestLength_17)); }
	inline int32_t get_TestLength_17() const { return ___TestLength_17; }
	inline int32_t* get_address_of_TestLength_17() { return &___TestLength_17; }
	inline void set_TestLength_17(int32_t value)
	{
		___TestLength_17 = value;
	}

	inline static int32_t get_offset_of_testBytes_18() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___testBytes_18)); }
	inline ByteU5BU5D_t58506160* get_testBytes_18() const { return ___testBytes_18; }
	inline ByteU5BU5D_t58506160** get_address_of_testBytes_18() { return &___testBytes_18; }
	inline void set_testBytes_18(ByteU5BU5D_t58506160* value)
	{
		___testBytes_18 = value;
		Il2CppCodeGenWriteBarrier(&___testBytes_18, value);
	}

	inline static int32_t get_offset_of_U3CUserNameU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443, ___U3CUserNameU3Ek__BackingField_19)); }
	inline String_t* get_U3CUserNameU3Ek__BackingField_19() const { return ___U3CUserNameU3Ek__BackingField_19; }
	inline String_t** get_address_of_U3CUserNameU3Ek__BackingField_19() { return &___U3CUserNameU3Ek__BackingField_19; }
	inline void set_U3CUserNameU3Ek__BackingField_19(String_t* value)
	{
		___U3CUserNameU3Ek__BackingField_19 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUserNameU3Ek__BackingField_19, value);
	}
};

struct ChatGui_t2403745443_StaticFields
{
public:
	// System.String ChatGui::WelcomeText
	String_t* ___WelcomeText_15;
	// System.String ChatGui::HelpText
	String_t* ___HelpText_16;

public:
	inline static int32_t get_offset_of_WelcomeText_15() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___WelcomeText_15)); }
	inline String_t* get_WelcomeText_15() const { return ___WelcomeText_15; }
	inline String_t** get_address_of_WelcomeText_15() { return &___WelcomeText_15; }
	inline void set_WelcomeText_15(String_t* value)
	{
		___WelcomeText_15 = value;
		Il2CppCodeGenWriteBarrier(&___WelcomeText_15, value);
	}

	inline static int32_t get_offset_of_HelpText_16() { return static_cast<int32_t>(offsetof(ChatGui_t2403745443_StaticFields, ___HelpText_16)); }
	inline String_t* get_HelpText_16() const { return ___HelpText_16; }
	inline String_t** get_address_of_HelpText_16() { return &___HelpText_16; }
	inline void set_HelpText_16(String_t* value)
	{
		___HelpText_16 = value;
		Il2CppCodeGenWriteBarrier(&___HelpText_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
