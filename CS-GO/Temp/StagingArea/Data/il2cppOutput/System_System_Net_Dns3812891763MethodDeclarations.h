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

// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t1363551830;
// System.Object
struct Il2CppObject;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t3494006030;
// System.String[]
struct StringU5BU5D_t2956870243;
// System.Net.IPHostEntry
struct IPHostEntry_t4205702573;
// System.Net.IPAddress
struct IPAddress_t3220500535;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_AsyncCallback1363551830.h"
#include "mscorlib_System_Object837106420.h"
#include "System_System_Net_IPAddress3220500535.h"

// System.Void System.Net.Dns::.cctor()
extern "C"  void Dns__cctor_m2243593610 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostAddresses(System.String,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Dns_BeginGetHostAddresses_m2422772154 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, AsyncCallback_t1363551830 * ___requestCallback1, Il2CppObject * ___stateObject2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::EndGetHostAddresses(System.IAsyncResult)
extern "C"  IPAddressU5BU5D_t3494006030* Dns_EndGetHostAddresses_m1749643331 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___asyncResult0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByName_internal_m3697903137 (Il2CppObject * __this /* static, unused */, String_t* ___host0, String_t** ___h_name1, StringU5BU5D_t2956870243** ___h_aliases2, StringU5BU5D_t2956870243** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C"  bool Dns_GetHostByAddr_internal_m516933499 (Il2CppObject * __this /* static, unused */, String_t* ___addr0, String_t** ___h_name1, StringU5BU5D_t2956870243** ___h_aliases2, StringU5BU5D_t2956870243** ___h_addr_list3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C"  IPHostEntry_t4205702573 * Dns_hostent_to_IPHostEntry_m818428846 (Il2CppObject * __this /* static, unused */, String_t* ___h_name0, StringU5BU5D_t2956870243* ___h_aliases1, StringU5BU5D_t2956870243* ___h_addrlist2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostByAddressFromString_m1166485506 (Il2CppObject * __this /* static, unused */, String_t* ___address0, bool ___parse1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostEntry_m1150532033 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostEntry_m3712714308 (Il2CppObject * __this /* static, unused */, IPAddress_t3220500535 * ___address0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C"  IPAddressU5BU5D_t3494006030* Dns_GetHostAddresses_m1512328765 (Il2CppObject * __this /* static, unused */, String_t* ___hostNameOrAddress0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C"  IPHostEntry_t4205702573 * Dns_GetHostByName_m840368461 (Il2CppObject * __this /* static, unused */, String_t* ___hostName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
