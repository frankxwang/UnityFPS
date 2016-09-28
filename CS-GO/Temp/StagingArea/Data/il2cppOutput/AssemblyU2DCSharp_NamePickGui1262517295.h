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
// ChatGui
struct ChatGui_t2403745443;
// UnityEngine.RectTransform
struct RectTransform_t3317474837;
// UnityEngine.UI.InputField
struct InputField_t2345609593;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NamePickGui
struct  NamePickGui_t1262517295  : public MonoBehaviour_t3012272455
{
public:
	// ChatGui NamePickGui::chatNewComponent
	ChatGui_t2403745443 * ___chatNewComponent_3;
	// UnityEngine.RectTransform NamePickGui::AppIdInputPanel
	RectTransform_t3317474837 * ___AppIdInputPanel_4;
	// UnityEngine.RectTransform NamePickGui::NameInputPanel
	RectTransform_t3317474837 * ___NameInputPanel_5;
	// UnityEngine.UI.InputField NamePickGui::idInput
	InputField_t2345609593 * ___idInput_6;

public:
	inline static int32_t get_offset_of_chatNewComponent_3() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___chatNewComponent_3)); }
	inline ChatGui_t2403745443 * get_chatNewComponent_3() const { return ___chatNewComponent_3; }
	inline ChatGui_t2403745443 ** get_address_of_chatNewComponent_3() { return &___chatNewComponent_3; }
	inline void set_chatNewComponent_3(ChatGui_t2403745443 * value)
	{
		___chatNewComponent_3 = value;
		Il2CppCodeGenWriteBarrier(&___chatNewComponent_3, value);
	}

	inline static int32_t get_offset_of_AppIdInputPanel_4() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___AppIdInputPanel_4)); }
	inline RectTransform_t3317474837 * get_AppIdInputPanel_4() const { return ___AppIdInputPanel_4; }
	inline RectTransform_t3317474837 ** get_address_of_AppIdInputPanel_4() { return &___AppIdInputPanel_4; }
	inline void set_AppIdInputPanel_4(RectTransform_t3317474837 * value)
	{
		___AppIdInputPanel_4 = value;
		Il2CppCodeGenWriteBarrier(&___AppIdInputPanel_4, value);
	}

	inline static int32_t get_offset_of_NameInputPanel_5() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___NameInputPanel_5)); }
	inline RectTransform_t3317474837 * get_NameInputPanel_5() const { return ___NameInputPanel_5; }
	inline RectTransform_t3317474837 ** get_address_of_NameInputPanel_5() { return &___NameInputPanel_5; }
	inline void set_NameInputPanel_5(RectTransform_t3317474837 * value)
	{
		___NameInputPanel_5 = value;
		Il2CppCodeGenWriteBarrier(&___NameInputPanel_5, value);
	}

	inline static int32_t get_offset_of_idInput_6() { return static_cast<int32_t>(offsetof(NamePickGui_t1262517295, ___idInput_6)); }
	inline InputField_t2345609593 * get_idInput_6() const { return ___idInput_6; }
	inline InputField_t2345609593 ** get_address_of_idInput_6() { return &___idInput_6; }
	inline void set_idInput_6(InputField_t2345609593 * value)
	{
		___idInput_6 = value;
		Il2CppCodeGenWriteBarrier(&___idInput_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
