#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Networking.Match.ListMatchRequest
struct ListMatchRequest_t3503187902;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64>
struct Dictionary_2_t190145490;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void UnityEngine.Networking.Match.ListMatchRequest::.ctor()
extern "C"  void ListMatchRequest__ctor_m3217570030 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageSize()
extern "C"  int32_t ListMatchRequest_get_pageSize_m1261391023 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageSize(System.Int32)
extern "C"  void ListMatchRequest_set_pageSize_m1444444532 (ListMatchRequest_t3503187902 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Networking.Match.ListMatchRequest::get_pageNum()
extern "C"  int32_t ListMatchRequest_get_pageNum_m2530267514 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_pageNum(System.Int32)
extern "C"  void ListMatchRequest_set_pageNum_m1626311511 (ListMatchRequest_t3503187902 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::get_nameFilter()
extern "C"  String_t* ListMatchRequest_get_nameFilter_m204473055 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Match.ListMatchRequest::set_nameFilter(System.String)
extern "C"  void ListMatchRequest_set_nameFilter_m1675608236 (ListMatchRequest_t3503187902 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Networking.Match.ListMatchRequest::get_includePasswordMatches()
extern "C"  bool ListMatchRequest_get_includePasswordMatches_m2591905577 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterLessThan()
extern "C"  Dictionary_2_t190145490 * ListMatchRequest_get_matchAttributeFilterLessThan_m1016084548 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Int64> UnityEngine.Networking.Match.ListMatchRequest::get_matchAttributeFilterGreaterThan()
extern "C"  Dictionary_2_t190145490 * ListMatchRequest_get_matchAttributeFilterGreaterThan_m3896867699 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Networking.Match.ListMatchRequest::ToString()
extern "C"  String_t* ListMatchRequest_ToString_m4193492095 (ListMatchRequest_t3503187902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
