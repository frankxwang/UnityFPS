#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.ComponentModel.IComponent
struct IComponent_t3388063069;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2663519152;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t3591325611;

#include "System_System_ComponentModel_Info4246869879.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ComponentModel.ComponentInfo
struct  ComponentInfo_t2454691284  : public Info_t4246869879
{
public:
	// System.ComponentModel.IComponent System.ComponentModel.ComponentInfo::_component
	Il2CppObject * ____component_6;
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::_events
	EventDescriptorCollection_t2663519152 * ____events_7;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::_properties
	PropertyDescriptorCollection_t3591325611 * ____properties_8;

public:
	inline static int32_t get_offset_of__component_6() { return static_cast<int32_t>(offsetof(ComponentInfo_t2454691284, ____component_6)); }
	inline Il2CppObject * get__component_6() const { return ____component_6; }
	inline Il2CppObject ** get_address_of__component_6() { return &____component_6; }
	inline void set__component_6(Il2CppObject * value)
	{
		____component_6 = value;
		Il2CppCodeGenWriteBarrier(&____component_6, value);
	}

	inline static int32_t get_offset_of__events_7() { return static_cast<int32_t>(offsetof(ComponentInfo_t2454691284, ____events_7)); }
	inline EventDescriptorCollection_t2663519152 * get__events_7() const { return ____events_7; }
	inline EventDescriptorCollection_t2663519152 ** get_address_of__events_7() { return &____events_7; }
	inline void set__events_7(EventDescriptorCollection_t2663519152 * value)
	{
		____events_7 = value;
		Il2CppCodeGenWriteBarrier(&____events_7, value);
	}

	inline static int32_t get_offset_of__properties_8() { return static_cast<int32_t>(offsetof(ComponentInfo_t2454691284, ____properties_8)); }
	inline PropertyDescriptorCollection_t3591325611 * get__properties_8() const { return ____properties_8; }
	inline PropertyDescriptorCollection_t3591325611 ** get_address_of__properties_8() { return &____properties_8; }
	inline void set__properties_8(PropertyDescriptorCollection_t3591325611 * value)
	{
		____properties_8 = value;
		Il2CppCodeGenWriteBarrier(&____properties_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
