#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

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

// System.ComponentModel.TypeInfo
struct  TypeInfo_t3632586193  : public Info_t4246869879
{
public:
	// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::_events
	EventDescriptorCollection_t2663519152 * ____events_6;
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::_properties
	PropertyDescriptorCollection_t3591325611 * ____properties_7;

public:
	inline static int32_t get_offset_of__events_6() { return static_cast<int32_t>(offsetof(TypeInfo_t3632586193, ____events_6)); }
	inline EventDescriptorCollection_t2663519152 * get__events_6() const { return ____events_6; }
	inline EventDescriptorCollection_t2663519152 ** get_address_of__events_6() { return &____events_6; }
	inline void set__events_6(EventDescriptorCollection_t2663519152 * value)
	{
		____events_6 = value;
		Il2CppCodeGenWriteBarrier(&____events_6, value);
	}

	inline static int32_t get_offset_of__properties_7() { return static_cast<int32_t>(offsetof(TypeInfo_t3632586193, ____properties_7)); }
	inline PropertyDescriptorCollection_t3591325611 * get__properties_7() const { return ____properties_7; }
	inline PropertyDescriptorCollection_t3591325611 ** get_address_of__properties_7() { return &____properties_7; }
	inline void set__properties_7(PropertyDescriptorCollection_t3591325611 * value)
	{
		____properties_7 = value;
		Il2CppCodeGenWriteBarrier(&____properties_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
