﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.Object[]
struct ObjectU5BU5D_t775387562;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t3005369192;
// System.String
struct String_t;
// System.Exception
struct Exception_t4126934701;
// System.Reflection.MethodBase
struct MethodBase_t2048009710;
// System.Type[]
struct TypeU5BU5D_t2343983633;
// System.Runtime.Remoting.Messaging.MethodReturnDictionary
struct MethodReturnDictionary_t2747182209;
// System.Runtime.Remoting.Messaging.ArgInfo
struct ArgInfo_t2663608159;
// System.Byte[]
struct ByteU5BU5D_t146018489;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_t1962407749;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t4138268074;
// System.Collections.IEnumerator
struct IEnumerator_t2117617145;
// System.Collections.Hashtable
struct Hashtable_t487388352;
// System.Collections.IList
struct IList_t3518916547;
// System.String[]
struct StringU5BU5D_t2364483485;
// System.Collections.ArrayList
struct ArrayList_t1958500939;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t1090097488;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1667836665;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t4167809624;
// System.MarshalByRefObject
struct MarshalByRefObject_t2431518778;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t2414300508;
// System.IntPtr[]
struct IntPtrU5BU5D_t184856517;
// System.Collections.IDictionary
struct IDictionary_t2489140978;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1843873266;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t3754885824;
// System.Runtime.Remoting.ChannelData
struct ChannelData_t3158787598;
// System.Collections.Stack
struct Stack_t2722803805;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t3547600125;
// System.Runtime.Remoting.Identity
struct Identity_t2198929688;
// System.Runtime.Remoting.IChannelInfo
struct IChannelInfo_t1799194263;
// System.Runtime.Remoting.IRemotingTypeInfo
struct IRemotingTypeInfo_t3965120155;
// System.Runtime.Remoting.IEnvoyInfo
struct IEnvoyInfo_t4002676453;
// System.Runtime.Remoting.Contexts.DynamicPropertyCollection
struct DynamicPropertyCollection_t1603760009;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t917194338;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1066425247;
// System.UInt32[]
struct UInt32U5BU5D_t4103038134;
// System.Char[]
struct CharU5BU5D_t3938341699;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Int32[]
struct Int32U5BU5D_t2684699320;
// System.Void
struct Void_t648803283;
// System.WeakReference
struct WeakReference_t1883101636;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t1779311527;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1201390537;
// System.DelegateData
struct DelegateData_t1603905796;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2311277078;
// System.Runtime.Serialization.ISerializationSurrogate
struct ISerializationSurrogate_t1032479789;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t293397800;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2130346789;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t3554637334;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t2557727724;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t2866732585;
// System.Byte[,]
struct ByteU5BU2CU5D_t146018490;
// System.IAsyncResult
struct IAsyncResult_t930328726;
// System.AsyncCallback
struct AsyncCallback_t1179324502;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef RETURNMESSAGE_T3293949582_H
#define RETURNMESSAGE_T3293949582_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ReturnMessage
struct  ReturnMessage_t3293949582  : public RuntimeObject
{
public:
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_outArgs
	ObjectU5BU5D_t775387562* ____outArgs_0;
	// System.Object[] System.Runtime.Remoting.Messaging.ReturnMessage::_args
	ObjectU5BU5D_t775387562* ____args_1;
	// System.Int32 System.Runtime.Remoting.Messaging.ReturnMessage::_outArgsCount
	int32_t ____outArgsCount_2;
	// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.ReturnMessage::_callCtx
	LogicalCallContext_t3005369192 * ____callCtx_3;
	// System.Object System.Runtime.Remoting.Messaging.ReturnMessage::_returnValue
	RuntimeObject * ____returnValue_4;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_uri
	String_t* ____uri_5;
	// System.Exception System.Runtime.Remoting.Messaging.ReturnMessage::_exception
	Exception_t4126934701 * ____exception_6;
	// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.ReturnMessage::_methodBase
	MethodBase_t2048009710 * ____methodBase_7;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_methodName
	String_t* ____methodName_8;
	// System.Type[] System.Runtime.Remoting.Messaging.ReturnMessage::_methodSignature
	TypeU5BU5D_t2343983633* ____methodSignature_9;
	// System.String System.Runtime.Remoting.Messaging.ReturnMessage::_typeName
	String_t* ____typeName_10;
	// System.Runtime.Remoting.Messaging.MethodReturnDictionary System.Runtime.Remoting.Messaging.ReturnMessage::_properties
	MethodReturnDictionary_t2747182209 * ____properties_11;
	// System.Runtime.Remoting.Messaging.ArgInfo System.Runtime.Remoting.Messaging.ReturnMessage::_inArgInfo
	ArgInfo_t2663608159 * ____inArgInfo_12;

public:
	inline static int32_t get_offset_of__outArgs_0() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____outArgs_0)); }
	inline ObjectU5BU5D_t775387562* get__outArgs_0() const { return ____outArgs_0; }
	inline ObjectU5BU5D_t775387562** get_address_of__outArgs_0() { return &____outArgs_0; }
	inline void set__outArgs_0(ObjectU5BU5D_t775387562* value)
	{
		____outArgs_0 = value;
		Il2CppCodeGenWriteBarrier((&____outArgs_0), value);
	}

	inline static int32_t get_offset_of__args_1() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____args_1)); }
	inline ObjectU5BU5D_t775387562* get__args_1() const { return ____args_1; }
	inline ObjectU5BU5D_t775387562** get_address_of__args_1() { return &____args_1; }
	inline void set__args_1(ObjectU5BU5D_t775387562* value)
	{
		____args_1 = value;
		Il2CppCodeGenWriteBarrier((&____args_1), value);
	}

	inline static int32_t get_offset_of__outArgsCount_2() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____outArgsCount_2)); }
	inline int32_t get__outArgsCount_2() const { return ____outArgsCount_2; }
	inline int32_t* get_address_of__outArgsCount_2() { return &____outArgsCount_2; }
	inline void set__outArgsCount_2(int32_t value)
	{
		____outArgsCount_2 = value;
	}

	inline static int32_t get_offset_of__callCtx_3() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____callCtx_3)); }
	inline LogicalCallContext_t3005369192 * get__callCtx_3() const { return ____callCtx_3; }
	inline LogicalCallContext_t3005369192 ** get_address_of__callCtx_3() { return &____callCtx_3; }
	inline void set__callCtx_3(LogicalCallContext_t3005369192 * value)
	{
		____callCtx_3 = value;
		Il2CppCodeGenWriteBarrier((&____callCtx_3), value);
	}

	inline static int32_t get_offset_of__returnValue_4() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____returnValue_4)); }
	inline RuntimeObject * get__returnValue_4() const { return ____returnValue_4; }
	inline RuntimeObject ** get_address_of__returnValue_4() { return &____returnValue_4; }
	inline void set__returnValue_4(RuntimeObject * value)
	{
		____returnValue_4 = value;
		Il2CppCodeGenWriteBarrier((&____returnValue_4), value);
	}

	inline static int32_t get_offset_of__uri_5() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____uri_5)); }
	inline String_t* get__uri_5() const { return ____uri_5; }
	inline String_t** get_address_of__uri_5() { return &____uri_5; }
	inline void set__uri_5(String_t* value)
	{
		____uri_5 = value;
		Il2CppCodeGenWriteBarrier((&____uri_5), value);
	}

	inline static int32_t get_offset_of__exception_6() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____exception_6)); }
	inline Exception_t4126934701 * get__exception_6() const { return ____exception_6; }
	inline Exception_t4126934701 ** get_address_of__exception_6() { return &____exception_6; }
	inline void set__exception_6(Exception_t4126934701 * value)
	{
		____exception_6 = value;
		Il2CppCodeGenWriteBarrier((&____exception_6), value);
	}

	inline static int32_t get_offset_of__methodBase_7() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____methodBase_7)); }
	inline MethodBase_t2048009710 * get__methodBase_7() const { return ____methodBase_7; }
	inline MethodBase_t2048009710 ** get_address_of__methodBase_7() { return &____methodBase_7; }
	inline void set__methodBase_7(MethodBase_t2048009710 * value)
	{
		____methodBase_7 = value;
		Il2CppCodeGenWriteBarrier((&____methodBase_7), value);
	}

	inline static int32_t get_offset_of__methodName_8() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____methodName_8)); }
	inline String_t* get__methodName_8() const { return ____methodName_8; }
	inline String_t** get_address_of__methodName_8() { return &____methodName_8; }
	inline void set__methodName_8(String_t* value)
	{
		____methodName_8 = value;
		Il2CppCodeGenWriteBarrier((&____methodName_8), value);
	}

	inline static int32_t get_offset_of__methodSignature_9() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____methodSignature_9)); }
	inline TypeU5BU5D_t2343983633* get__methodSignature_9() const { return ____methodSignature_9; }
	inline TypeU5BU5D_t2343983633** get_address_of__methodSignature_9() { return &____methodSignature_9; }
	inline void set__methodSignature_9(TypeU5BU5D_t2343983633* value)
	{
		____methodSignature_9 = value;
		Il2CppCodeGenWriteBarrier((&____methodSignature_9), value);
	}

	inline static int32_t get_offset_of__typeName_10() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____typeName_10)); }
	inline String_t* get__typeName_10() const { return ____typeName_10; }
	inline String_t** get_address_of__typeName_10() { return &____typeName_10; }
	inline void set__typeName_10(String_t* value)
	{
		____typeName_10 = value;
		Il2CppCodeGenWriteBarrier((&____typeName_10), value);
	}

	inline static int32_t get_offset_of__properties_11() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____properties_11)); }
	inline MethodReturnDictionary_t2747182209 * get__properties_11() const { return ____properties_11; }
	inline MethodReturnDictionary_t2747182209 ** get_address_of__properties_11() { return &____properties_11; }
	inline void set__properties_11(MethodReturnDictionary_t2747182209 * value)
	{
		____properties_11 = value;
		Il2CppCodeGenWriteBarrier((&____properties_11), value);
	}

	inline static int32_t get_offset_of__inArgInfo_12() { return static_cast<int32_t>(offsetof(ReturnMessage_t3293949582, ____inArgInfo_12)); }
	inline ArgInfo_t2663608159 * get__inArgInfo_12() const { return ____inArgInfo_12; }
	inline ArgInfo_t2663608159 ** get_address_of__inArgInfo_12() { return &____inArgInfo_12; }
	inline void set__inArgInfo_12(ArgInfo_t2663608159 * value)
	{
		____inArgInfo_12 = value;
		Il2CppCodeGenWriteBarrier((&____inArgInfo_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNMESSAGE_T3293949582_H
#ifndef BASE64CONSTANTS_T1704004610_H
#define BASE64CONSTANTS_T1704004610_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.Base64Constants
struct  Base64Constants_t1704004610  : public RuntimeObject
{
public:

public:
};

struct Base64Constants_t1704004610_StaticFields
{
public:
	// System.Byte[] System.Security.Cryptography.Base64Constants::EncodeTable
	ByteU5BU5D_t146018489* ___EncodeTable_0;
	// System.Byte[] System.Security.Cryptography.Base64Constants::DecodeTable
	ByteU5BU5D_t146018489* ___DecodeTable_1;

public:
	inline static int32_t get_offset_of_EncodeTable_0() { return static_cast<int32_t>(offsetof(Base64Constants_t1704004610_StaticFields, ___EncodeTable_0)); }
	inline ByteU5BU5D_t146018489* get_EncodeTable_0() const { return ___EncodeTable_0; }
	inline ByteU5BU5D_t146018489** get_address_of_EncodeTable_0() { return &___EncodeTable_0; }
	inline void set_EncodeTable_0(ByteU5BU5D_t146018489* value)
	{
		___EncodeTable_0 = value;
		Il2CppCodeGenWriteBarrier((&___EncodeTable_0), value);
	}

	inline static int32_t get_offset_of_DecodeTable_1() { return static_cast<int32_t>(offsetof(Base64Constants_t1704004610_StaticFields, ___DecodeTable_1)); }
	inline ByteU5BU5D_t146018489* get_DecodeTable_1() const { return ___DecodeTable_1; }
	inline ByteU5BU5D_t146018489** get_address_of_DecodeTable_1() { return &___DecodeTable_1; }
	inline void set_DecodeTable_1(ByteU5BU5D_t146018489* value)
	{
		___DecodeTable_1 = value;
		Il2CppCodeGenWriteBarrier((&___DecodeTable_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASE64CONSTANTS_T1704004610_H
#ifndef ASYMMETRICSIGNATUREFORMATTER_T1510947669_H
#define ASYMMETRICSIGNATUREFORMATTER_T1510947669_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureFormatter
struct  AsymmetricSignatureFormatter_t1510947669  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREFORMATTER_T1510947669_H
#ifndef FORMATTERSERVICES_T872771684_H
#define FORMATTERSERVICES_T872771684_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterServices
struct  FormatterServices_t872771684  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERSERVICES_T872771684_H
#ifndef ASYMMETRICKEYEXCHANGEFORMATTER_T4294261659_H
#define ASYMMETRICKEYEXCHANGEFORMATTER_T4294261659_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricKeyExchangeFormatter
struct  AsymmetricKeyExchangeFormatter_t4294261659  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICKEYEXCHANGEFORMATTER_T4294261659_H
#ifndef ASYMMETRICALGORITHM_T3050834672_H
#define ASYMMETRICALGORITHM_T3050834672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricAlgorithm
struct  AsymmetricAlgorithm_t3050834672  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1962407749* ___LegalKeySizesValue_1;

public:
	inline static int32_t get_offset_of_KeySizeValue_0() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3050834672, ___KeySizeValue_0)); }
	inline int32_t get_KeySizeValue_0() const { return ___KeySizeValue_0; }
	inline int32_t* get_address_of_KeySizeValue_0() { return &___KeySizeValue_0; }
	inline void set_KeySizeValue_0(int32_t value)
	{
		___KeySizeValue_0 = value;
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_1() { return static_cast<int32_t>(offsetof(AsymmetricAlgorithm_t3050834672, ___LegalKeySizesValue_1)); }
	inline KeySizesU5BU5D_t1962407749* get_LegalKeySizesValue_1() const { return ___LegalKeySizesValue_1; }
	inline KeySizesU5BU5D_t1962407749** get_address_of_LegalKeySizesValue_1() { return &___LegalKeySizesValue_1; }
	inline void set_LegalKeySizesValue_1(KeySizesU5BU5D_t1962407749* value)
	{
		___LegalKeySizesValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICALGORITHM_T3050834672_H
#ifndef X509CERTIFICATE_T3498154437_H
#define X509CERTIFICATE_T3498154437_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509Certificate
struct  X509Certificate_t3498154437  : public RuntimeObject
{
public:
	// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate::x509
	X509Certificate_t4138268074 * ___x509_0;
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate::hideDates
	bool ___hideDates_1;
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::cachedCertificateHash
	ByteU5BU5D_t146018489* ___cachedCertificateHash_2;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::issuer_name
	String_t* ___issuer_name_3;
	// System.String System.Security.Cryptography.X509Certificates.X509Certificate::subject_name
	String_t* ___subject_name_4;

public:
	inline static int32_t get_offset_of_x509_0() { return static_cast<int32_t>(offsetof(X509Certificate_t3498154437, ___x509_0)); }
	inline X509Certificate_t4138268074 * get_x509_0() const { return ___x509_0; }
	inline X509Certificate_t4138268074 ** get_address_of_x509_0() { return &___x509_0; }
	inline void set_x509_0(X509Certificate_t4138268074 * value)
	{
		___x509_0 = value;
		Il2CppCodeGenWriteBarrier((&___x509_0), value);
	}

	inline static int32_t get_offset_of_hideDates_1() { return static_cast<int32_t>(offsetof(X509Certificate_t3498154437, ___hideDates_1)); }
	inline bool get_hideDates_1() const { return ___hideDates_1; }
	inline bool* get_address_of_hideDates_1() { return &___hideDates_1; }
	inline void set_hideDates_1(bool value)
	{
		___hideDates_1 = value;
	}

	inline static int32_t get_offset_of_cachedCertificateHash_2() { return static_cast<int32_t>(offsetof(X509Certificate_t3498154437, ___cachedCertificateHash_2)); }
	inline ByteU5BU5D_t146018489* get_cachedCertificateHash_2() const { return ___cachedCertificateHash_2; }
	inline ByteU5BU5D_t146018489** get_address_of_cachedCertificateHash_2() { return &___cachedCertificateHash_2; }
	inline void set_cachedCertificateHash_2(ByteU5BU5D_t146018489* value)
	{
		___cachedCertificateHash_2 = value;
		Il2CppCodeGenWriteBarrier((&___cachedCertificateHash_2), value);
	}

	inline static int32_t get_offset_of_issuer_name_3() { return static_cast<int32_t>(offsetof(X509Certificate_t3498154437, ___issuer_name_3)); }
	inline String_t* get_issuer_name_3() const { return ___issuer_name_3; }
	inline String_t** get_address_of_issuer_name_3() { return &___issuer_name_3; }
	inline void set_issuer_name_3(String_t* value)
	{
		___issuer_name_3 = value;
		Il2CppCodeGenWriteBarrier((&___issuer_name_3), value);
	}

	inline static int32_t get_offset_of_subject_name_4() { return static_cast<int32_t>(offsetof(X509Certificate_t3498154437, ___subject_name_4)); }
	inline String_t* get_subject_name_4() const { return ___subject_name_4; }
	inline String_t** get_address_of_subject_name_4() { return &___subject_name_4; }
	inline void set_subject_name_4(String_t* value)
	{
		___subject_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___subject_name_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509CERTIFICATE_T3498154437_H
#ifndef SERIALIZATIONINFOENUMERATOR_T2545483252_H
#define SERIALIZATIONINFOENUMERATOR_T2545483252_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfoEnumerator
struct  SerializationInfoEnumerator_t2545483252  : public RuntimeObject
{
public:
	// System.Collections.IEnumerator System.Runtime.Serialization.SerializationInfoEnumerator::enumerator
	RuntimeObject* ___enumerator_0;

public:
	inline static int32_t get_offset_of_enumerator_0() { return static_cast<int32_t>(offsetof(SerializationInfoEnumerator_t2545483252, ___enumerator_0)); }
	inline RuntimeObject* get_enumerator_0() const { return ___enumerator_0; }
	inline RuntimeObject** get_address_of_enumerator_0() { return &___enumerator_0; }
	inline void set_enumerator_0(RuntimeObject* value)
	{
		___enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumerator_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFOENUMERATOR_T2545483252_H
#ifndef SOAPSERVICES_T624267025_H
#define SOAPSERVICES_T624267025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices
struct  SoapServices_t624267025  : public RuntimeObject
{
public:

public:
};

struct SoapServices_t624267025_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlTypes
	Hashtable_t487388352 * ____xmlTypes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_xmlElements
	Hashtable_t487388352 * ____xmlElements_1;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActions
	Hashtable_t487388352 * ____soapActions_2;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_soapActionsMethods
	Hashtable_t487388352 * ____soapActionsMethods_3;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices::_typeInfos
	Hashtable_t487388352 * ____typeInfos_4;

public:
	inline static int32_t get_offset_of__xmlTypes_0() { return static_cast<int32_t>(offsetof(SoapServices_t624267025_StaticFields, ____xmlTypes_0)); }
	inline Hashtable_t487388352 * get__xmlTypes_0() const { return ____xmlTypes_0; }
	inline Hashtable_t487388352 ** get_address_of__xmlTypes_0() { return &____xmlTypes_0; }
	inline void set__xmlTypes_0(Hashtable_t487388352 * value)
	{
		____xmlTypes_0 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypes_0), value);
	}

	inline static int32_t get_offset_of__xmlElements_1() { return static_cast<int32_t>(offsetof(SoapServices_t624267025_StaticFields, ____xmlElements_1)); }
	inline Hashtable_t487388352 * get__xmlElements_1() const { return ____xmlElements_1; }
	inline Hashtable_t487388352 ** get_address_of__xmlElements_1() { return &____xmlElements_1; }
	inline void set__xmlElements_1(Hashtable_t487388352 * value)
	{
		____xmlElements_1 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElements_1), value);
	}

	inline static int32_t get_offset_of__soapActions_2() { return static_cast<int32_t>(offsetof(SoapServices_t624267025_StaticFields, ____soapActions_2)); }
	inline Hashtable_t487388352 * get__soapActions_2() const { return ____soapActions_2; }
	inline Hashtable_t487388352 ** get_address_of__soapActions_2() { return &____soapActions_2; }
	inline void set__soapActions_2(Hashtable_t487388352 * value)
	{
		____soapActions_2 = value;
		Il2CppCodeGenWriteBarrier((&____soapActions_2), value);
	}

	inline static int32_t get_offset_of__soapActionsMethods_3() { return static_cast<int32_t>(offsetof(SoapServices_t624267025_StaticFields, ____soapActionsMethods_3)); }
	inline Hashtable_t487388352 * get__soapActionsMethods_3() const { return ____soapActionsMethods_3; }
	inline Hashtable_t487388352 ** get_address_of__soapActionsMethods_3() { return &____soapActionsMethods_3; }
	inline void set__soapActionsMethods_3(Hashtable_t487388352 * value)
	{
		____soapActionsMethods_3 = value;
		Il2CppCodeGenWriteBarrier((&____soapActionsMethods_3), value);
	}

	inline static int32_t get_offset_of__typeInfos_4() { return static_cast<int32_t>(offsetof(SoapServices_t624267025_StaticFields, ____typeInfos_4)); }
	inline Hashtable_t487388352 * get__typeInfos_4() const { return ____typeInfos_4; }
	inline Hashtable_t487388352 ** get_address_of__typeInfos_4() { return &____typeInfos_4; }
	inline void set__typeInfos_4(Hashtable_t487388352 * value)
	{
		____typeInfos_4 = value;
		Il2CppCodeGenWriteBarrier((&____typeInfos_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPSERVICES_T624267025_H
#ifndef PROVIDERDATA_T1828329265_H
#define PROVIDERDATA_T1828329265_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ProviderData
struct  ProviderData_t1828329265  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ProviderData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ProviderData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ProviderData::Id
	String_t* ___Id_2;
	// System.Collections.Hashtable System.Runtime.Remoting.ProviderData::CustomProperties
	Hashtable_t487388352 * ___CustomProperties_3;
	// System.Collections.IList System.Runtime.Remoting.ProviderData::CustomData
	RuntimeObject* ___CustomData_4;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ProviderData_t1828329265, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ProviderData_t1828329265, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ProviderData_t1828329265, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_CustomProperties_3() { return static_cast<int32_t>(offsetof(ProviderData_t1828329265, ___CustomProperties_3)); }
	inline Hashtable_t487388352 * get_CustomProperties_3() const { return ___CustomProperties_3; }
	inline Hashtable_t487388352 ** get_address_of_CustomProperties_3() { return &___CustomProperties_3; }
	inline void set_CustomProperties_3(Hashtable_t487388352 * value)
	{
		___CustomProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&___CustomProperties_3), value);
	}

	inline static int32_t get_offset_of_CustomData_4() { return static_cast<int32_t>(offsetof(ProviderData_t1828329265, ___CustomData_4)); }
	inline RuntimeObject* get_CustomData_4() const { return ___CustomData_4; }
	inline RuntimeObject** get_address_of_CustomData_4() { return &___CustomData_4; }
	inline void set_CustomData_4(RuntimeObject* value)
	{
		___CustomData_4 = value;
		Il2CppCodeGenWriteBarrier((&___CustomData_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROVIDERDATA_T1828329265_H
#ifndef TYPEINFO_T1748233661_H
#define TYPEINFO_T1748233661_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SoapServices/TypeInfo
struct  TypeInfo_t1748233661  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Attributes
	Hashtable_t487388352 * ___Attributes_0;
	// System.Collections.Hashtable System.Runtime.Remoting.SoapServices/TypeInfo::Elements
	Hashtable_t487388352 * ___Elements_1;

public:
	inline static int32_t get_offset_of_Attributes_0() { return static_cast<int32_t>(offsetof(TypeInfo_t1748233661, ___Attributes_0)); }
	inline Hashtable_t487388352 * get_Attributes_0() const { return ___Attributes_0; }
	inline Hashtable_t487388352 ** get_address_of_Attributes_0() { return &___Attributes_0; }
	inline void set_Attributes_0(Hashtable_t487388352 * value)
	{
		___Attributes_0 = value;
		Il2CppCodeGenWriteBarrier((&___Attributes_0), value);
	}

	inline static int32_t get_offset_of_Elements_1() { return static_cast<int32_t>(offsetof(TypeInfo_t1748233661, ___Elements_1)); }
	inline Hashtable_t487388352 * get_Elements_1() const { return ___Elements_1; }
	inline Hashtable_t487388352 ** get_address_of_Elements_1() { return &___Elements_1; }
	inline void set_Elements_1(Hashtable_t487388352 * value)
	{
		___Elements_1 = value;
		Il2CppCodeGenWriteBarrier((&___Elements_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T1748233661_H
#ifndef TYPEINFO_T2608747645_H
#define TYPEINFO_T2608747645_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeInfo
struct  TypeInfo_t2608747645  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeInfo::serverType
	String_t* ___serverType_0;
	// System.String[] System.Runtime.Remoting.TypeInfo::serverHierarchy
	StringU5BU5D_t2364483485* ___serverHierarchy_1;
	// System.String[] System.Runtime.Remoting.TypeInfo::interfacesImplemented
	StringU5BU5D_t2364483485* ___interfacesImplemented_2;

public:
	inline static int32_t get_offset_of_serverType_0() { return static_cast<int32_t>(offsetof(TypeInfo_t2608747645, ___serverType_0)); }
	inline String_t* get_serverType_0() const { return ___serverType_0; }
	inline String_t** get_address_of_serverType_0() { return &___serverType_0; }
	inline void set_serverType_0(String_t* value)
	{
		___serverType_0 = value;
		Il2CppCodeGenWriteBarrier((&___serverType_0), value);
	}

	inline static int32_t get_offset_of_serverHierarchy_1() { return static_cast<int32_t>(offsetof(TypeInfo_t2608747645, ___serverHierarchy_1)); }
	inline StringU5BU5D_t2364483485* get_serverHierarchy_1() const { return ___serverHierarchy_1; }
	inline StringU5BU5D_t2364483485** get_address_of_serverHierarchy_1() { return &___serverHierarchy_1; }
	inline void set_serverHierarchy_1(StringU5BU5D_t2364483485* value)
	{
		___serverHierarchy_1 = value;
		Il2CppCodeGenWriteBarrier((&___serverHierarchy_1), value);
	}

	inline static int32_t get_offset_of_interfacesImplemented_2() { return static_cast<int32_t>(offsetof(TypeInfo_t2608747645, ___interfacesImplemented_2)); }
	inline StringU5BU5D_t2364483485* get_interfacesImplemented_2() const { return ___interfacesImplemented_2; }
	inline StringU5BU5D_t2364483485** get_address_of_interfacesImplemented_2() { return &___interfacesImplemented_2; }
	inline void set_interfacesImplemented_2(StringU5BU5D_t2364483485* value)
	{
		___interfacesImplemented_2 = value;
		Il2CppCodeGenWriteBarrier((&___interfacesImplemented_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEINFO_T2608747645_H
#ifndef SERIALIZATIONINFO_T2311277078_H
#define SERIALIZATIONINFO_T2311277078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t2311277078  : public RuntimeObject
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationInfo::serialized
	Hashtable_t487388352 * ___serialized_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationInfo::values
	ArrayList_t1958500939 * ___values_1;
	// System.String System.Runtime.Serialization.SerializationInfo::assemblyName
	String_t* ___assemblyName_2;
	// System.String System.Runtime.Serialization.SerializationInfo::fullTypeName
	String_t* ___fullTypeName_3;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::converter
	RuntimeObject* ___converter_4;

public:
	inline static int32_t get_offset_of_serialized_0() { return static_cast<int32_t>(offsetof(SerializationInfo_t2311277078, ___serialized_0)); }
	inline Hashtable_t487388352 * get_serialized_0() const { return ___serialized_0; }
	inline Hashtable_t487388352 ** get_address_of_serialized_0() { return &___serialized_0; }
	inline void set_serialized_0(Hashtable_t487388352 * value)
	{
		___serialized_0 = value;
		Il2CppCodeGenWriteBarrier((&___serialized_0), value);
	}

	inline static int32_t get_offset_of_values_1() { return static_cast<int32_t>(offsetof(SerializationInfo_t2311277078, ___values_1)); }
	inline ArrayList_t1958500939 * get_values_1() const { return ___values_1; }
	inline ArrayList_t1958500939 ** get_address_of_values_1() { return &___values_1; }
	inline void set_values_1(ArrayList_t1958500939 * value)
	{
		___values_1 = value;
		Il2CppCodeGenWriteBarrier((&___values_1), value);
	}

	inline static int32_t get_offset_of_assemblyName_2() { return static_cast<int32_t>(offsetof(SerializationInfo_t2311277078, ___assemblyName_2)); }
	inline String_t* get_assemblyName_2() const { return ___assemblyName_2; }
	inline String_t** get_address_of_assemblyName_2() { return &___assemblyName_2; }
	inline void set_assemblyName_2(String_t* value)
	{
		___assemblyName_2 = value;
		Il2CppCodeGenWriteBarrier((&___assemblyName_2), value);
	}

	inline static int32_t get_offset_of_fullTypeName_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t2311277078, ___fullTypeName_3)); }
	inline String_t* get_fullTypeName_3() const { return ___fullTypeName_3; }
	inline String_t** get_address_of_fullTypeName_3() { return &___fullTypeName_3; }
	inline void set_fullTypeName_3(String_t* value)
	{
		___fullTypeName_3 = value;
		Il2CppCodeGenWriteBarrier((&___fullTypeName_3), value);
	}

	inline static int32_t get_offset_of_converter_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t2311277078, ___converter_4)); }
	inline RuntimeObject* get_converter_4() const { return ___converter_4; }
	inline RuntimeObject** get_address_of_converter_4() { return &___converter_4; }
	inline void set_converter_4(RuntimeObject* value)
	{
		___converter_4 = value;
		Il2CppCodeGenWriteBarrier((&___converter_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONINFO_T2311277078_H
#ifndef SERIALIZATIONCALLBACKS_T886572449_H
#define SERIALIZATIONCALLBACKS_T886572449_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks
struct  SerializationCallbacks_t886572449  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializingList
	ArrayList_t1958500939 * ___onSerializingList_0;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onSerializedList
	ArrayList_t1958500939 * ___onSerializedList_1;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializingList
	ArrayList_t1958500939 * ___onDeserializingList_2;
	// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::onDeserializedList
	ArrayList_t1958500939 * ___onDeserializedList_3;

public:
	inline static int32_t get_offset_of_onSerializingList_0() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449, ___onSerializingList_0)); }
	inline ArrayList_t1958500939 * get_onSerializingList_0() const { return ___onSerializingList_0; }
	inline ArrayList_t1958500939 ** get_address_of_onSerializingList_0() { return &___onSerializingList_0; }
	inline void set_onSerializingList_0(ArrayList_t1958500939 * value)
	{
		___onSerializingList_0 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializingList_0), value);
	}

	inline static int32_t get_offset_of_onSerializedList_1() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449, ___onSerializedList_1)); }
	inline ArrayList_t1958500939 * get_onSerializedList_1() const { return ___onSerializedList_1; }
	inline ArrayList_t1958500939 ** get_address_of_onSerializedList_1() { return &___onSerializedList_1; }
	inline void set_onSerializedList_1(ArrayList_t1958500939 * value)
	{
		___onSerializedList_1 = value;
		Il2CppCodeGenWriteBarrier((&___onSerializedList_1), value);
	}

	inline static int32_t get_offset_of_onDeserializingList_2() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449, ___onDeserializingList_2)); }
	inline ArrayList_t1958500939 * get_onDeserializingList_2() const { return ___onDeserializingList_2; }
	inline ArrayList_t1958500939 ** get_address_of_onDeserializingList_2() { return &___onDeserializingList_2; }
	inline void set_onDeserializingList_2(ArrayList_t1958500939 * value)
	{
		___onDeserializingList_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializingList_2), value);
	}

	inline static int32_t get_offset_of_onDeserializedList_3() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449, ___onDeserializedList_3)); }
	inline ArrayList_t1958500939 * get_onDeserializedList_3() const { return ___onDeserializedList_3; }
	inline ArrayList_t1958500939 ** get_address_of_onDeserializedList_3() { return &___onDeserializedList_3; }
	inline void set_onDeserializedList_3(ArrayList_t1958500939 * value)
	{
		___onDeserializedList_3 = value;
		Il2CppCodeGenWriteBarrier((&___onDeserializedList_3), value);
	}
};

struct SerializationCallbacks_t886572449_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationCallbacks::cache
	Hashtable_t487388352 * ___cache_4;
	// System.Object System.Runtime.Serialization.SerializationCallbacks::cache_lock
	RuntimeObject * ___cache_lock_5;

public:
	inline static int32_t get_offset_of_cache_4() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449_StaticFields, ___cache_4)); }
	inline Hashtable_t487388352 * get_cache_4() const { return ___cache_4; }
	inline Hashtable_t487388352 ** get_address_of_cache_4() { return &___cache_4; }
	inline void set_cache_4(Hashtable_t487388352 * value)
	{
		___cache_4 = value;
		Il2CppCodeGenWriteBarrier((&___cache_4), value);
	}

	inline static int32_t get_offset_of_cache_lock_5() { return static_cast<int32_t>(offsetof(SerializationCallbacks_t886572449_StaticFields, ___cache_lock_5)); }
	inline RuntimeObject * get_cache_lock_5() const { return ___cache_lock_5; }
	inline RuntimeObject ** get_address_of_cache_lock_5() { return &___cache_lock_5; }
	inline void set_cache_lock_5(RuntimeObject * value)
	{
		___cache_lock_5 = value;
		Il2CppCodeGenWriteBarrier((&___cache_lock_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONCALLBACKS_T886572449_H
#ifndef BINARYCOMMON_T15838634_H
#define BINARYCOMMON_T15838634_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryCommon
struct  BinaryCommon_t15838634  : public RuntimeObject
{
public:

public:
};

struct BinaryCommon_t15838634_StaticFields
{
public:
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::BinaryHeader
	ByteU5BU5D_t146018489* ___BinaryHeader_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodesToType
	TypeU5BU5D_t2343983633* ____typeCodesToType_1;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.BinaryCommon::_typeCodeMap
	ByteU5BU5D_t146018489* ____typeCodeMap_2;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.BinaryCommon::UseReflectionSerialization
	bool ___UseReflectionSerialization_3;

public:
	inline static int32_t get_offset_of_BinaryHeader_0() { return static_cast<int32_t>(offsetof(BinaryCommon_t15838634_StaticFields, ___BinaryHeader_0)); }
	inline ByteU5BU5D_t146018489* get_BinaryHeader_0() const { return ___BinaryHeader_0; }
	inline ByteU5BU5D_t146018489** get_address_of_BinaryHeader_0() { return &___BinaryHeader_0; }
	inline void set_BinaryHeader_0(ByteU5BU5D_t146018489* value)
	{
		___BinaryHeader_0 = value;
		Il2CppCodeGenWriteBarrier((&___BinaryHeader_0), value);
	}

	inline static int32_t get_offset_of__typeCodesToType_1() { return static_cast<int32_t>(offsetof(BinaryCommon_t15838634_StaticFields, ____typeCodesToType_1)); }
	inline TypeU5BU5D_t2343983633* get__typeCodesToType_1() const { return ____typeCodesToType_1; }
	inline TypeU5BU5D_t2343983633** get_address_of__typeCodesToType_1() { return &____typeCodesToType_1; }
	inline void set__typeCodesToType_1(TypeU5BU5D_t2343983633* value)
	{
		____typeCodesToType_1 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodesToType_1), value);
	}

	inline static int32_t get_offset_of__typeCodeMap_2() { return static_cast<int32_t>(offsetof(BinaryCommon_t15838634_StaticFields, ____typeCodeMap_2)); }
	inline ByteU5BU5D_t146018489* get__typeCodeMap_2() const { return ____typeCodeMap_2; }
	inline ByteU5BU5D_t146018489** get_address_of__typeCodeMap_2() { return &____typeCodeMap_2; }
	inline void set__typeCodeMap_2(ByteU5BU5D_t146018489* value)
	{
		____typeCodeMap_2 = value;
		Il2CppCodeGenWriteBarrier((&____typeCodeMap_2), value);
	}

	inline static int32_t get_offset_of_UseReflectionSerialization_3() { return static_cast<int32_t>(offsetof(BinaryCommon_t15838634_StaticFields, ___UseReflectionSerialization_3)); }
	inline bool get_UseReflectionSerialization_3() const { return ___UseReflectionSerialization_3; }
	inline bool* get_address_of_UseReflectionSerialization_3() { return &___UseReflectionSerialization_3; }
	inline void set_UseReflectionSerialization_3(bool value)
	{
		___UseReflectionSerialization_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYCOMMON_T15838634_H
#ifndef SERIALIZATIONBINDER_T2557727724_H
#define SERIALIZATIONBINDER_T2557727724_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationBinder
struct  SerializationBinder_t2557727724  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONBINDER_T2557727724_H
#ifndef MESSAGEFORMATTER_T348641935_H
#define MESSAGEFORMATTER_T348641935_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct  MessageFormatter_t348641935  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MESSAGEFORMATTER_T348641935_H
#ifndef TYPEMETADATA_T4271117787_H
#define TYPEMETADATA_T4271117787_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata
struct  TypeMetadata_t4271117787  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::Type
	Type_t * ___Type_0;
	// System.Type[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberTypes
	TypeU5BU5D_t2343983633* ___MemberTypes_1;
	// System.String[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberNames
	StringU5BU5D_t2364483485* ___MemberNames_2;
	// System.Reflection.MemberInfo[] System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::MemberInfos
	MemberInfoU5BU5D_t1667836665* ___MemberInfos_3;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::FieldCount
	int32_t ___FieldCount_4;
	// System.Boolean System.Runtime.Serialization.Formatters.Binary.ObjectReader/TypeMetadata::NeedsSerializationInfo
	bool ___NeedsSerializationInfo_5;

public:
	inline static int32_t get_offset_of_Type_0() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___Type_0)); }
	inline Type_t * get_Type_0() const { return ___Type_0; }
	inline Type_t ** get_address_of_Type_0() { return &___Type_0; }
	inline void set_Type_0(Type_t * value)
	{
		___Type_0 = value;
		Il2CppCodeGenWriteBarrier((&___Type_0), value);
	}

	inline static int32_t get_offset_of_MemberTypes_1() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___MemberTypes_1)); }
	inline TypeU5BU5D_t2343983633* get_MemberTypes_1() const { return ___MemberTypes_1; }
	inline TypeU5BU5D_t2343983633** get_address_of_MemberTypes_1() { return &___MemberTypes_1; }
	inline void set_MemberTypes_1(TypeU5BU5D_t2343983633* value)
	{
		___MemberTypes_1 = value;
		Il2CppCodeGenWriteBarrier((&___MemberTypes_1), value);
	}

	inline static int32_t get_offset_of_MemberNames_2() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___MemberNames_2)); }
	inline StringU5BU5D_t2364483485* get_MemberNames_2() const { return ___MemberNames_2; }
	inline StringU5BU5D_t2364483485** get_address_of_MemberNames_2() { return &___MemberNames_2; }
	inline void set_MemberNames_2(StringU5BU5D_t2364483485* value)
	{
		___MemberNames_2 = value;
		Il2CppCodeGenWriteBarrier((&___MemberNames_2), value);
	}

	inline static int32_t get_offset_of_MemberInfos_3() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___MemberInfos_3)); }
	inline MemberInfoU5BU5D_t1667836665* get_MemberInfos_3() const { return ___MemberInfos_3; }
	inline MemberInfoU5BU5D_t1667836665** get_address_of_MemberInfos_3() { return &___MemberInfos_3; }
	inline void set_MemberInfos_3(MemberInfoU5BU5D_t1667836665* value)
	{
		___MemberInfos_3 = value;
		Il2CppCodeGenWriteBarrier((&___MemberInfos_3), value);
	}

	inline static int32_t get_offset_of_FieldCount_4() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___FieldCount_4)); }
	inline int32_t get_FieldCount_4() const { return ___FieldCount_4; }
	inline int32_t* get_address_of_FieldCount_4() { return &___FieldCount_4; }
	inline void set_FieldCount_4(int32_t value)
	{
		___FieldCount_4 = value;
	}

	inline static int32_t get_offset_of_NeedsSerializationInfo_5() { return static_cast<int32_t>(offsetof(TypeMetadata_t4271117787, ___NeedsSerializationInfo_5)); }
	inline bool get_NeedsSerializationInfo_5() const { return ___NeedsSerializationInfo_5; }
	inline bool* get_address_of_NeedsSerializationInfo_5() { return &___NeedsSerializationInfo_5; }
	inline void set_NeedsSerializationInfo_5(bool value)
	{
		___NeedsSerializationInfo_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEMETADATA_T4271117787_H
#ifndef ARRAYNULLFILLER_T2836451035_H
#define ARRAYNULLFILLER_T2836451035_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller
struct  ArrayNullFiller_t2836451035  : public RuntimeObject
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader/ArrayNullFiller::NullCount
	int32_t ___NullCount_0;

public:
	inline static int32_t get_offset_of_NullCount_0() { return static_cast<int32_t>(offsetof(ArrayNullFiller_t2836451035, ___NullCount_0)); }
	inline int32_t get_NullCount_0() const { return ___NullCount_0; }
	inline int32_t* get_address_of_NullCount_0() { return &___NullCount_0; }
	inline void set_NullCount_0(int32_t value)
	{
		___NullCount_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYNULLFILLER_T2836451035_H
#ifndef FORMATTERCONVERTER_T636131745_H
#define FORMATTERCONVERTER_T636131745_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FormatterConverter
struct  FormatterConverter_t636131745  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERCONVERTER_T636131745_H
#ifndef TYPEENTRY_T3811347551_H
#define TYPEENTRY_T3811347551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.TypeEntry
struct  TypeEntry_t3811347551  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.TypeEntry::assembly_name
	String_t* ___assembly_name_0;
	// System.String System.Runtime.Remoting.TypeEntry::type_name
	String_t* ___type_name_1;

public:
	inline static int32_t get_offset_of_assembly_name_0() { return static_cast<int32_t>(offsetof(TypeEntry_t3811347551, ___assembly_name_0)); }
	inline String_t* get_assembly_name_0() const { return ___assembly_name_0; }
	inline String_t** get_address_of_assembly_name_0() { return &___assembly_name_0; }
	inline void set_assembly_name_0(String_t* value)
	{
		___assembly_name_0 = value;
		Il2CppCodeGenWriteBarrier((&___assembly_name_0), value);
	}

	inline static int32_t get_offset_of_type_name_1() { return static_cast<int32_t>(offsetof(TypeEntry_t3811347551, ___type_name_1)); }
	inline String_t* get_type_name_1() const { return ___type_name_1; }
	inline String_t** get_address_of_type_name_1() { return &___type_name_1; }
	inline void set_type_name_1(String_t* value)
	{
		___type_name_1 = value;
		Il2CppCodeGenWriteBarrier((&___type_name_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEENTRY_T3811347551_H
#ifndef CHANNELDATA_T3158787598_H
#define CHANNELDATA_T3158787598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ChannelData
struct  ChannelData_t3158787598  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.ChannelData::Ref
	String_t* ___Ref_0;
	// System.String System.Runtime.Remoting.ChannelData::Type
	String_t* ___Type_1;
	// System.String System.Runtime.Remoting.ChannelData::Id
	String_t* ___Id_2;
	// System.String System.Runtime.Remoting.ChannelData::DelayLoadAsClientChannel
	String_t* ___DelayLoadAsClientChannel_3;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_serverProviders
	ArrayList_t1958500939 * ____serverProviders_4;
	// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::_clientProviders
	ArrayList_t1958500939 * ____clientProviders_5;
	// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::_customProperties
	Hashtable_t487388352 * ____customProperties_6;

public:
	inline static int32_t get_offset_of_Ref_0() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ___Ref_0)); }
	inline String_t* get_Ref_0() const { return ___Ref_0; }
	inline String_t** get_address_of_Ref_0() { return &___Ref_0; }
	inline void set_Ref_0(String_t* value)
	{
		___Ref_0 = value;
		Il2CppCodeGenWriteBarrier((&___Ref_0), value);
	}

	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ___Type_1)); }
	inline String_t* get_Type_1() const { return ___Type_1; }
	inline String_t** get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(String_t* value)
	{
		___Type_1 = value;
		Il2CppCodeGenWriteBarrier((&___Type_1), value);
	}

	inline static int32_t get_offset_of_Id_2() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ___Id_2)); }
	inline String_t* get_Id_2() const { return ___Id_2; }
	inline String_t** get_address_of_Id_2() { return &___Id_2; }
	inline void set_Id_2(String_t* value)
	{
		___Id_2 = value;
		Il2CppCodeGenWriteBarrier((&___Id_2), value);
	}

	inline static int32_t get_offset_of_DelayLoadAsClientChannel_3() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ___DelayLoadAsClientChannel_3)); }
	inline String_t* get_DelayLoadAsClientChannel_3() const { return ___DelayLoadAsClientChannel_3; }
	inline String_t** get_address_of_DelayLoadAsClientChannel_3() { return &___DelayLoadAsClientChannel_3; }
	inline void set_DelayLoadAsClientChannel_3(String_t* value)
	{
		___DelayLoadAsClientChannel_3 = value;
		Il2CppCodeGenWriteBarrier((&___DelayLoadAsClientChannel_3), value);
	}

	inline static int32_t get_offset_of__serverProviders_4() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ____serverProviders_4)); }
	inline ArrayList_t1958500939 * get__serverProviders_4() const { return ____serverProviders_4; }
	inline ArrayList_t1958500939 ** get_address_of__serverProviders_4() { return &____serverProviders_4; }
	inline void set__serverProviders_4(ArrayList_t1958500939 * value)
	{
		____serverProviders_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverProviders_4), value);
	}

	inline static int32_t get_offset_of__clientProviders_5() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ____clientProviders_5)); }
	inline ArrayList_t1958500939 * get__clientProviders_5() const { return ____clientProviders_5; }
	inline ArrayList_t1958500939 ** get_address_of__clientProviders_5() { return &____clientProviders_5; }
	inline void set__clientProviders_5(ArrayList_t1958500939 * value)
	{
		____clientProviders_5 = value;
		Il2CppCodeGenWriteBarrier((&____clientProviders_5), value);
	}

	inline static int32_t get_offset_of__customProperties_6() { return static_cast<int32_t>(offsetof(ChannelData_t3158787598, ____customProperties_6)); }
	inline Hashtable_t487388352 * get__customProperties_6() const { return ____customProperties_6; }
	inline Hashtable_t487388352 ** get_address_of__customProperties_6() { return &____customProperties_6; }
	inline void set__customProperties_6(Hashtable_t487388352 * value)
	{
		____customProperties_6 = value;
		Il2CppCodeGenWriteBarrier((&____customProperties_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHANNELDATA_T3158787598_H
#ifndef ASYMMETRICSIGNATUREDEFORMATTER_T1691525212_H
#define ASYMMETRICSIGNATUREDEFORMATTER_T1691525212_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.AsymmetricSignatureDeformatter
struct  AsymmetricSignatureDeformatter_t1691525212  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYMMETRICSIGNATUREDEFORMATTER_T1691525212_H
#ifndef REMOTINGCONFIGURATION_T2326911639_H
#define REMOTINGCONFIGURATION_T2326911639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingConfiguration
struct  RemotingConfiguration_t2326911639  : public RuntimeObject
{
public:

public:
};

struct RemotingConfiguration_t2326911639_StaticFields
{
public:
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationID
	String_t* ___applicationID_0;
	// System.String System.Runtime.Remoting.RemotingConfiguration::applicationName
	String_t* ___applicationName_1;
	// System.String System.Runtime.Remoting.RemotingConfiguration::processGuid
	String_t* ___processGuid_2;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultConfigRead
	bool ___defaultConfigRead_3;
	// System.Boolean System.Runtime.Remoting.RemotingConfiguration::defaultDelayedConfigRead
	bool ___defaultDelayedConfigRead_4;
	// System.String System.Runtime.Remoting.RemotingConfiguration::_errorMode
	String_t* ____errorMode_5;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownClientEntries
	Hashtable_t487388352 * ___wellKnownClientEntries_6;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedClientEntries
	Hashtable_t487388352 * ___activatedClientEntries_7;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::wellKnownServiceEntries
	Hashtable_t487388352 * ___wellKnownServiceEntries_8;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::activatedServiceEntries
	Hashtable_t487388352 * ___activatedServiceEntries_9;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::channelTemplates
	Hashtable_t487388352 * ___channelTemplates_10;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::clientProviderTemplates
	Hashtable_t487388352 * ___clientProviderTemplates_11;
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingConfiguration::serverProviderTemplates
	Hashtable_t487388352 * ___serverProviderTemplates_12;

public:
	inline static int32_t get_offset_of_applicationID_0() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___applicationID_0)); }
	inline String_t* get_applicationID_0() const { return ___applicationID_0; }
	inline String_t** get_address_of_applicationID_0() { return &___applicationID_0; }
	inline void set_applicationID_0(String_t* value)
	{
		___applicationID_0 = value;
		Il2CppCodeGenWriteBarrier((&___applicationID_0), value);
	}

	inline static int32_t get_offset_of_applicationName_1() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___applicationName_1)); }
	inline String_t* get_applicationName_1() const { return ___applicationName_1; }
	inline String_t** get_address_of_applicationName_1() { return &___applicationName_1; }
	inline void set_applicationName_1(String_t* value)
	{
		___applicationName_1 = value;
		Il2CppCodeGenWriteBarrier((&___applicationName_1), value);
	}

	inline static int32_t get_offset_of_processGuid_2() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___processGuid_2)); }
	inline String_t* get_processGuid_2() const { return ___processGuid_2; }
	inline String_t** get_address_of_processGuid_2() { return &___processGuid_2; }
	inline void set_processGuid_2(String_t* value)
	{
		___processGuid_2 = value;
		Il2CppCodeGenWriteBarrier((&___processGuid_2), value);
	}

	inline static int32_t get_offset_of_defaultConfigRead_3() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___defaultConfigRead_3)); }
	inline bool get_defaultConfigRead_3() const { return ___defaultConfigRead_3; }
	inline bool* get_address_of_defaultConfigRead_3() { return &___defaultConfigRead_3; }
	inline void set_defaultConfigRead_3(bool value)
	{
		___defaultConfigRead_3 = value;
	}

	inline static int32_t get_offset_of_defaultDelayedConfigRead_4() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___defaultDelayedConfigRead_4)); }
	inline bool get_defaultDelayedConfigRead_4() const { return ___defaultDelayedConfigRead_4; }
	inline bool* get_address_of_defaultDelayedConfigRead_4() { return &___defaultDelayedConfigRead_4; }
	inline void set_defaultDelayedConfigRead_4(bool value)
	{
		___defaultDelayedConfigRead_4 = value;
	}

	inline static int32_t get_offset_of__errorMode_5() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ____errorMode_5)); }
	inline String_t* get__errorMode_5() const { return ____errorMode_5; }
	inline String_t** get_address_of__errorMode_5() { return &____errorMode_5; }
	inline void set__errorMode_5(String_t* value)
	{
		____errorMode_5 = value;
		Il2CppCodeGenWriteBarrier((&____errorMode_5), value);
	}

	inline static int32_t get_offset_of_wellKnownClientEntries_6() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___wellKnownClientEntries_6)); }
	inline Hashtable_t487388352 * get_wellKnownClientEntries_6() const { return ___wellKnownClientEntries_6; }
	inline Hashtable_t487388352 ** get_address_of_wellKnownClientEntries_6() { return &___wellKnownClientEntries_6; }
	inline void set_wellKnownClientEntries_6(Hashtable_t487388352 * value)
	{
		___wellKnownClientEntries_6 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownClientEntries_6), value);
	}

	inline static int32_t get_offset_of_activatedClientEntries_7() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___activatedClientEntries_7)); }
	inline Hashtable_t487388352 * get_activatedClientEntries_7() const { return ___activatedClientEntries_7; }
	inline Hashtable_t487388352 ** get_address_of_activatedClientEntries_7() { return &___activatedClientEntries_7; }
	inline void set_activatedClientEntries_7(Hashtable_t487388352 * value)
	{
		___activatedClientEntries_7 = value;
		Il2CppCodeGenWriteBarrier((&___activatedClientEntries_7), value);
	}

	inline static int32_t get_offset_of_wellKnownServiceEntries_8() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___wellKnownServiceEntries_8)); }
	inline Hashtable_t487388352 * get_wellKnownServiceEntries_8() const { return ___wellKnownServiceEntries_8; }
	inline Hashtable_t487388352 ** get_address_of_wellKnownServiceEntries_8() { return &___wellKnownServiceEntries_8; }
	inline void set_wellKnownServiceEntries_8(Hashtable_t487388352 * value)
	{
		___wellKnownServiceEntries_8 = value;
		Il2CppCodeGenWriteBarrier((&___wellKnownServiceEntries_8), value);
	}

	inline static int32_t get_offset_of_activatedServiceEntries_9() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___activatedServiceEntries_9)); }
	inline Hashtable_t487388352 * get_activatedServiceEntries_9() const { return ___activatedServiceEntries_9; }
	inline Hashtable_t487388352 ** get_address_of_activatedServiceEntries_9() { return &___activatedServiceEntries_9; }
	inline void set_activatedServiceEntries_9(Hashtable_t487388352 * value)
	{
		___activatedServiceEntries_9 = value;
		Il2CppCodeGenWriteBarrier((&___activatedServiceEntries_9), value);
	}

	inline static int32_t get_offset_of_channelTemplates_10() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___channelTemplates_10)); }
	inline Hashtable_t487388352 * get_channelTemplates_10() const { return ___channelTemplates_10; }
	inline Hashtable_t487388352 ** get_address_of_channelTemplates_10() { return &___channelTemplates_10; }
	inline void set_channelTemplates_10(Hashtable_t487388352 * value)
	{
		___channelTemplates_10 = value;
		Il2CppCodeGenWriteBarrier((&___channelTemplates_10), value);
	}

	inline static int32_t get_offset_of_clientProviderTemplates_11() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___clientProviderTemplates_11)); }
	inline Hashtable_t487388352 * get_clientProviderTemplates_11() const { return ___clientProviderTemplates_11; }
	inline Hashtable_t487388352 ** get_address_of_clientProviderTemplates_11() { return &___clientProviderTemplates_11; }
	inline void set_clientProviderTemplates_11(Hashtable_t487388352 * value)
	{
		___clientProviderTemplates_11 = value;
		Il2CppCodeGenWriteBarrier((&___clientProviderTemplates_11), value);
	}

	inline static int32_t get_offset_of_serverProviderTemplates_12() { return static_cast<int32_t>(offsetof(RemotingConfiguration_t2326911639_StaticFields, ___serverProviderTemplates_12)); }
	inline Hashtable_t487388352 * get_serverProviderTemplates_12() const { return ___serverProviderTemplates_12; }
	inline Hashtable_t487388352 ** get_address_of_serverProviderTemplates_12() { return &___serverProviderTemplates_12; }
	inline void set_serverProviderTemplates_12(Hashtable_t487388352 * value)
	{
		___serverProviderTemplates_12 = value;
		Il2CppCodeGenWriteBarrier((&___serverProviderTemplates_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGCONFIGURATION_T2326911639_H
#ifndef SERVERCONTEXTTERMINATORSINK_T1957492439_H
#define SERVERCONTEXTTERMINATORSINK_T1957492439_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
struct  ServerContextTerminatorSink_t1957492439  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERCONTEXTTERMINATORSINK_T1957492439_H
#ifndef SERVEROBJECTTERMINATORSINK_T3916567029_H
#define SERVEROBJECTTERMINATORSINK_T3916567029_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
struct  ServerObjectTerminatorSink_t3916567029  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink::_nextSink
	RuntimeObject* ____nextSink_0;

public:
	inline static int32_t get_offset_of__nextSink_0() { return static_cast<int32_t>(offsetof(ServerObjectTerminatorSink_t3916567029, ____nextSink_0)); }
	inline RuntimeObject* get__nextSink_0() const { return ____nextSink_0; }
	inline RuntimeObject** get_address_of__nextSink_0() { return &____nextSink_0; }
	inline void set__nextSink_0(RuntimeObject* value)
	{
		____nextSink_0 = value;
		Il2CppCodeGenWriteBarrier((&____nextSink_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVEROBJECTTERMINATORSINK_T3916567029_H
#ifndef STACKBUILDERSINK_T2105036777_H
#define STACKBUILDERSINK_T2105036777_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t2105036777  : public RuntimeObject
{
public:
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t2431518778 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t2414300508 * ____rp_1;

public:
	inline static int32_t get_offset_of__target_0() { return static_cast<int32_t>(offsetof(StackBuilderSink_t2105036777, ____target_0)); }
	inline MarshalByRefObject_t2431518778 * get__target_0() const { return ____target_0; }
	inline MarshalByRefObject_t2431518778 ** get_address_of__target_0() { return &____target_0; }
	inline void set__target_0(MarshalByRefObject_t2431518778 * value)
	{
		____target_0 = value;
		Il2CppCodeGenWriteBarrier((&____target_0), value);
	}

	inline static int32_t get_offset_of__rp_1() { return static_cast<int32_t>(offsetof(StackBuilderSink_t2105036777, ____rp_1)); }
	inline RealProxy_t2414300508 * get__rp_1() const { return ____rp_1; }
	inline RealProxy_t2414300508 ** get_address_of__rp_1() { return &____rp_1; }
	inline void set__rp_1(RealProxy_t2414300508 * value)
	{
		____rp_1 = value;
		Il2CppCodeGenWriteBarrier((&____rp_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKBUILDERSINK_T2105036777_H
#ifndef EXCEPTION_T4126934701_H
#define EXCEPTION_T4126934701_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t4126934701  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t184856517* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t4126934701 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t184856517* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t184856517** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t184856517* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___inner_exception_1)); }
	inline Exception_t4126934701 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t4126934701 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t4126934701 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t4126934701, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T4126934701_H
#ifndef SYMMETRICTRANSFORM_T1851785317_H
#define SYMMETRICTRANSFORM_T1851785317_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mono.Security.Cryptography.SymmetricTransform
struct  SymmetricTransform_t1851785317  : public RuntimeObject
{
public:
	// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.Cryptography.SymmetricTransform::algo
	SymmetricAlgorithm_t1843873266 * ___algo_0;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::encrypt
	bool ___encrypt_1;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::BlockSizeByte
	int32_t ___BlockSizeByte_2;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp
	ByteU5BU5D_t146018489* ___temp_3;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::temp2
	ByteU5BU5D_t146018489* ___temp2_4;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workBuff
	ByteU5BU5D_t146018489* ___workBuff_5;
	// System.Byte[] Mono.Security.Cryptography.SymmetricTransform::workout
	ByteU5BU5D_t146018489* ___workout_6;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackByte
	int32_t ___FeedBackByte_7;
	// System.Int32 Mono.Security.Cryptography.SymmetricTransform::FeedBackIter
	int32_t ___FeedBackIter_8;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::m_disposed
	bool ___m_disposed_9;
	// System.Boolean Mono.Security.Cryptography.SymmetricTransform::lastBlock
	bool ___lastBlock_10;
	// System.Security.Cryptography.RandomNumberGenerator Mono.Security.Cryptography.SymmetricTransform::_rng
	RandomNumberGenerator_t3754885824 * ____rng_11;

public:
	inline static int32_t get_offset_of_algo_0() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___algo_0)); }
	inline SymmetricAlgorithm_t1843873266 * get_algo_0() const { return ___algo_0; }
	inline SymmetricAlgorithm_t1843873266 ** get_address_of_algo_0() { return &___algo_0; }
	inline void set_algo_0(SymmetricAlgorithm_t1843873266 * value)
	{
		___algo_0 = value;
		Il2CppCodeGenWriteBarrier((&___algo_0), value);
	}

	inline static int32_t get_offset_of_encrypt_1() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___encrypt_1)); }
	inline bool get_encrypt_1() const { return ___encrypt_1; }
	inline bool* get_address_of_encrypt_1() { return &___encrypt_1; }
	inline void set_encrypt_1(bool value)
	{
		___encrypt_1 = value;
	}

	inline static int32_t get_offset_of_BlockSizeByte_2() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___BlockSizeByte_2)); }
	inline int32_t get_BlockSizeByte_2() const { return ___BlockSizeByte_2; }
	inline int32_t* get_address_of_BlockSizeByte_2() { return &___BlockSizeByte_2; }
	inline void set_BlockSizeByte_2(int32_t value)
	{
		___BlockSizeByte_2 = value;
	}

	inline static int32_t get_offset_of_temp_3() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___temp_3)); }
	inline ByteU5BU5D_t146018489* get_temp_3() const { return ___temp_3; }
	inline ByteU5BU5D_t146018489** get_address_of_temp_3() { return &___temp_3; }
	inline void set_temp_3(ByteU5BU5D_t146018489* value)
	{
		___temp_3 = value;
		Il2CppCodeGenWriteBarrier((&___temp_3), value);
	}

	inline static int32_t get_offset_of_temp2_4() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___temp2_4)); }
	inline ByteU5BU5D_t146018489* get_temp2_4() const { return ___temp2_4; }
	inline ByteU5BU5D_t146018489** get_address_of_temp2_4() { return &___temp2_4; }
	inline void set_temp2_4(ByteU5BU5D_t146018489* value)
	{
		___temp2_4 = value;
		Il2CppCodeGenWriteBarrier((&___temp2_4), value);
	}

	inline static int32_t get_offset_of_workBuff_5() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___workBuff_5)); }
	inline ByteU5BU5D_t146018489* get_workBuff_5() const { return ___workBuff_5; }
	inline ByteU5BU5D_t146018489** get_address_of_workBuff_5() { return &___workBuff_5; }
	inline void set_workBuff_5(ByteU5BU5D_t146018489* value)
	{
		___workBuff_5 = value;
		Il2CppCodeGenWriteBarrier((&___workBuff_5), value);
	}

	inline static int32_t get_offset_of_workout_6() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___workout_6)); }
	inline ByteU5BU5D_t146018489* get_workout_6() const { return ___workout_6; }
	inline ByteU5BU5D_t146018489** get_address_of_workout_6() { return &___workout_6; }
	inline void set_workout_6(ByteU5BU5D_t146018489* value)
	{
		___workout_6 = value;
		Il2CppCodeGenWriteBarrier((&___workout_6), value);
	}

	inline static int32_t get_offset_of_FeedBackByte_7() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___FeedBackByte_7)); }
	inline int32_t get_FeedBackByte_7() const { return ___FeedBackByte_7; }
	inline int32_t* get_address_of_FeedBackByte_7() { return &___FeedBackByte_7; }
	inline void set_FeedBackByte_7(int32_t value)
	{
		___FeedBackByte_7 = value;
	}

	inline static int32_t get_offset_of_FeedBackIter_8() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___FeedBackIter_8)); }
	inline int32_t get_FeedBackIter_8() const { return ___FeedBackIter_8; }
	inline int32_t* get_address_of_FeedBackIter_8() { return &___FeedBackIter_8; }
	inline void set_FeedBackIter_8(int32_t value)
	{
		___FeedBackIter_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}

	inline static int32_t get_offset_of_lastBlock_10() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ___lastBlock_10)); }
	inline bool get_lastBlock_10() const { return ___lastBlock_10; }
	inline bool* get_address_of_lastBlock_10() { return &___lastBlock_10; }
	inline void set_lastBlock_10(bool value)
	{
		___lastBlock_10 = value;
	}

	inline static int32_t get_offset_of__rng_11() { return static_cast<int32_t>(offsetof(SymmetricTransform_t1851785317, ____rng_11)); }
	inline RandomNumberGenerator_t3754885824 * get__rng_11() const { return ____rng_11; }
	inline RandomNumberGenerator_t3754885824 ** get_address_of__rng_11() { return &____rng_11; }
	inline void set__rng_11(RandomNumberGenerator_t3754885824 * value)
	{
		____rng_11 = value;
		Il2CppCodeGenWriteBarrier((&____rng_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICTRANSFORM_T1851785317_H
#ifndef CONFIGHANDLER_T3312285854_H
#define CONFIGHANDLER_T3312285854_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ConfigHandler
struct  ConfigHandler_t3312285854  : public RuntimeObject
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::typeEntries
	ArrayList_t1958500939 * ___typeEntries_0;
	// System.Collections.ArrayList System.Runtime.Remoting.ConfigHandler::channelInstances
	ArrayList_t1958500939 * ___channelInstances_1;
	// System.Runtime.Remoting.ChannelData System.Runtime.Remoting.ConfigHandler::currentChannel
	ChannelData_t3158787598 * ___currentChannel_2;
	// System.Collections.Stack System.Runtime.Remoting.ConfigHandler::currentProviderData
	Stack_t2722803805 * ___currentProviderData_3;
	// System.String System.Runtime.Remoting.ConfigHandler::currentClientUrl
	String_t* ___currentClientUrl_4;
	// System.String System.Runtime.Remoting.ConfigHandler::appName
	String_t* ___appName_5;
	// System.String System.Runtime.Remoting.ConfigHandler::currentXmlPath
	String_t* ___currentXmlPath_6;
	// System.Boolean System.Runtime.Remoting.ConfigHandler::onlyDelayedChannels
	bool ___onlyDelayedChannels_7;

public:
	inline static int32_t get_offset_of_typeEntries_0() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___typeEntries_0)); }
	inline ArrayList_t1958500939 * get_typeEntries_0() const { return ___typeEntries_0; }
	inline ArrayList_t1958500939 ** get_address_of_typeEntries_0() { return &___typeEntries_0; }
	inline void set_typeEntries_0(ArrayList_t1958500939 * value)
	{
		___typeEntries_0 = value;
		Il2CppCodeGenWriteBarrier((&___typeEntries_0), value);
	}

	inline static int32_t get_offset_of_channelInstances_1() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___channelInstances_1)); }
	inline ArrayList_t1958500939 * get_channelInstances_1() const { return ___channelInstances_1; }
	inline ArrayList_t1958500939 ** get_address_of_channelInstances_1() { return &___channelInstances_1; }
	inline void set_channelInstances_1(ArrayList_t1958500939 * value)
	{
		___channelInstances_1 = value;
		Il2CppCodeGenWriteBarrier((&___channelInstances_1), value);
	}

	inline static int32_t get_offset_of_currentChannel_2() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___currentChannel_2)); }
	inline ChannelData_t3158787598 * get_currentChannel_2() const { return ___currentChannel_2; }
	inline ChannelData_t3158787598 ** get_address_of_currentChannel_2() { return &___currentChannel_2; }
	inline void set_currentChannel_2(ChannelData_t3158787598 * value)
	{
		___currentChannel_2 = value;
		Il2CppCodeGenWriteBarrier((&___currentChannel_2), value);
	}

	inline static int32_t get_offset_of_currentProviderData_3() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___currentProviderData_3)); }
	inline Stack_t2722803805 * get_currentProviderData_3() const { return ___currentProviderData_3; }
	inline Stack_t2722803805 ** get_address_of_currentProviderData_3() { return &___currentProviderData_3; }
	inline void set_currentProviderData_3(Stack_t2722803805 * value)
	{
		___currentProviderData_3 = value;
		Il2CppCodeGenWriteBarrier((&___currentProviderData_3), value);
	}

	inline static int32_t get_offset_of_currentClientUrl_4() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___currentClientUrl_4)); }
	inline String_t* get_currentClientUrl_4() const { return ___currentClientUrl_4; }
	inline String_t** get_address_of_currentClientUrl_4() { return &___currentClientUrl_4; }
	inline void set_currentClientUrl_4(String_t* value)
	{
		___currentClientUrl_4 = value;
		Il2CppCodeGenWriteBarrier((&___currentClientUrl_4), value);
	}

	inline static int32_t get_offset_of_appName_5() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___appName_5)); }
	inline String_t* get_appName_5() const { return ___appName_5; }
	inline String_t** get_address_of_appName_5() { return &___appName_5; }
	inline void set_appName_5(String_t* value)
	{
		___appName_5 = value;
		Il2CppCodeGenWriteBarrier((&___appName_5), value);
	}

	inline static int32_t get_offset_of_currentXmlPath_6() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___currentXmlPath_6)); }
	inline String_t* get_currentXmlPath_6() const { return ___currentXmlPath_6; }
	inline String_t** get_address_of_currentXmlPath_6() { return &___currentXmlPath_6; }
	inline void set_currentXmlPath_6(String_t* value)
	{
		___currentXmlPath_6 = value;
		Il2CppCodeGenWriteBarrier((&___currentXmlPath_6), value);
	}

	inline static int32_t get_offset_of_onlyDelayedChannels_7() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854, ___onlyDelayedChannels_7)); }
	inline bool get_onlyDelayedChannels_7() const { return ___onlyDelayedChannels_7; }
	inline bool* get_address_of_onlyDelayedChannels_7() { return &___onlyDelayedChannels_7; }
	inline void set_onlyDelayedChannels_7(bool value)
	{
		___onlyDelayedChannels_7 = value;
	}
};

struct ConfigHandler_t3312285854_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map27
	Dictionary_2_t3547600125 * ___U3CU3Ef__switchU24map27_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ConfigHandler::<>f__switch$map28
	Dictionary_2_t3547600125 * ___U3CU3Ef__switchU24map28_9;

public:
	inline static int32_t get_offset_of_U3CU3Ef__switchU24map27_8() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854_StaticFields, ___U3CU3Ef__switchU24map27_8)); }
	inline Dictionary_2_t3547600125 * get_U3CU3Ef__switchU24map27_8() const { return ___U3CU3Ef__switchU24map27_8; }
	inline Dictionary_2_t3547600125 ** get_address_of_U3CU3Ef__switchU24map27_8() { return &___U3CU3Ef__switchU24map27_8; }
	inline void set_U3CU3Ef__switchU24map27_8(Dictionary_2_t3547600125 * value)
	{
		___U3CU3Ef__switchU24map27_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map27_8), value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map28_9() { return static_cast<int32_t>(offsetof(ConfigHandler_t3312285854_StaticFields, ___U3CU3Ef__switchU24map28_9)); }
	inline Dictionary_2_t3547600125 * get_U3CU3Ef__switchU24map28_9() const { return ___U3CU3Ef__switchU24map28_9; }
	inline Dictionary_2_t3547600125 ** get_address_of_U3CU3Ef__switchU24map28_9() { return &___U3CU3Ef__switchU24map28_9; }
	inline void set_U3CU3Ef__switchU24map28_9(Dictionary_2_t3547600125 * value)
	{
		___U3CU3Ef__switchU24map28_9 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map28_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONFIGHANDLER_T3312285854_H
#ifndef TRANSPARENTPROXY_T3649280852_H
#define TRANSPARENTPROXY_T3649280852_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.TransparentProxy
struct  TransparentProxy_t3649280852  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Proxies.TransparentProxy::_rp
	RealProxy_t2414300508 * ____rp_0;

public:
	inline static int32_t get_offset_of__rp_0() { return static_cast<int32_t>(offsetof(TransparentProxy_t3649280852, ____rp_0)); }
	inline RealProxy_t2414300508 * get__rp_0() const { return ____rp_0; }
	inline RealProxy_t2414300508 ** get_address_of__rp_0() { return &____rp_0; }
	inline void set__rp_0(RealProxy_t2414300508 * value)
	{
		____rp_0 = value;
		Il2CppCodeGenWriteBarrier((&____rp_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRANSPARENTPROXY_T3649280852_H
#ifndef REALPROXY_T2414300508_H
#define REALPROXY_T2414300508_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RealProxy
struct  RealProxy_t2414300508  : public RuntimeObject
{
public:
	// System.Type System.Runtime.Remoting.Proxies.RealProxy::class_to_proxy
	Type_t * ___class_to_proxy_0;
	// System.Int32 System.Runtime.Remoting.Proxies.RealProxy::_targetDomainId
	int32_t ____targetDomainId_1;
	// System.String System.Runtime.Remoting.Proxies.RealProxy::_targetUri
	String_t* ____targetUri_2;
	// System.Runtime.Remoting.Identity System.Runtime.Remoting.Proxies.RealProxy::_objectIdentity
	Identity_t2198929688 * ____objectIdentity_3;
	// System.Object System.Runtime.Remoting.Proxies.RealProxy::_objTP
	RuntimeObject * ____objTP_4;

public:
	inline static int32_t get_offset_of_class_to_proxy_0() { return static_cast<int32_t>(offsetof(RealProxy_t2414300508, ___class_to_proxy_0)); }
	inline Type_t * get_class_to_proxy_0() const { return ___class_to_proxy_0; }
	inline Type_t ** get_address_of_class_to_proxy_0() { return &___class_to_proxy_0; }
	inline void set_class_to_proxy_0(Type_t * value)
	{
		___class_to_proxy_0 = value;
		Il2CppCodeGenWriteBarrier((&___class_to_proxy_0), value);
	}

	inline static int32_t get_offset_of__targetDomainId_1() { return static_cast<int32_t>(offsetof(RealProxy_t2414300508, ____targetDomainId_1)); }
	inline int32_t get__targetDomainId_1() const { return ____targetDomainId_1; }
	inline int32_t* get_address_of__targetDomainId_1() { return &____targetDomainId_1; }
	inline void set__targetDomainId_1(int32_t value)
	{
		____targetDomainId_1 = value;
	}

	inline static int32_t get_offset_of__targetUri_2() { return static_cast<int32_t>(offsetof(RealProxy_t2414300508, ____targetUri_2)); }
	inline String_t* get__targetUri_2() const { return ____targetUri_2; }
	inline String_t** get_address_of__targetUri_2() { return &____targetUri_2; }
	inline void set__targetUri_2(String_t* value)
	{
		____targetUri_2 = value;
		Il2CppCodeGenWriteBarrier((&____targetUri_2), value);
	}

	inline static int32_t get_offset_of__objectIdentity_3() { return static_cast<int32_t>(offsetof(RealProxy_t2414300508, ____objectIdentity_3)); }
	inline Identity_t2198929688 * get__objectIdentity_3() const { return ____objectIdentity_3; }
	inline Identity_t2198929688 ** get_address_of__objectIdentity_3() { return &____objectIdentity_3; }
	inline void set__objectIdentity_3(Identity_t2198929688 * value)
	{
		____objectIdentity_3 = value;
		Il2CppCodeGenWriteBarrier((&____objectIdentity_3), value);
	}

	inline static int32_t get_offset_of__objTP_4() { return static_cast<int32_t>(offsetof(RealProxy_t2414300508, ____objTP_4)); }
	inline RuntimeObject * get__objTP_4() const { return ____objTP_4; }
	inline RuntimeObject ** get_address_of__objTP_4() { return &____objTP_4; }
	inline void set__objTP_4(RuntimeObject * value)
	{
		____objTP_4 = value;
		Il2CppCodeGenWriteBarrier((&____objTP_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REALPROXY_T2414300508_H
#ifndef VALUETYPE_T1137770746_H
#define VALUETYPE_T1137770746_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1137770746  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1137770746_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1137770746_marshaled_com
{
};
#endif // VALUETYPE_T1137770746_H
#ifndef TRACKINGSERVICES_T1222604850_H
#define TRACKINGSERVICES_T1222604850_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Services.TrackingServices
struct  TrackingServices_t1222604850  : public RuntimeObject
{
public:

public:
};

struct TrackingServices_t1222604850_StaticFields
{
public:
	// System.Collections.ArrayList System.Runtime.Remoting.Services.TrackingServices::_handlers
	ArrayList_t1958500939 * ____handlers_0;

public:
	inline static int32_t get_offset_of__handlers_0() { return static_cast<int32_t>(offsetof(TrackingServices_t1222604850_StaticFields, ____handlers_0)); }
	inline ArrayList_t1958500939 * get__handlers_0() const { return ____handlers_0; }
	inline ArrayList_t1958500939 ** get_address_of__handlers_0() { return &____handlers_0; }
	inline void set__handlers_0(ArrayList_t1958500939 * value)
	{
		____handlers_0 = value;
		Il2CppCodeGenWriteBarrier((&____handlers_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSERVICES_T1222604850_H
#ifndef OBJREF_T917194338_H
#define OBJREF_T917194338_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ObjRef
struct  ObjRef_t917194338  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.IChannelInfo System.Runtime.Remoting.ObjRef::channel_info
	RuntimeObject* ___channel_info_0;
	// System.String System.Runtime.Remoting.ObjRef::uri
	String_t* ___uri_1;
	// System.Runtime.Remoting.IRemotingTypeInfo System.Runtime.Remoting.ObjRef::typeInfo
	RuntimeObject* ___typeInfo_2;
	// System.Runtime.Remoting.IEnvoyInfo System.Runtime.Remoting.ObjRef::envoyInfo
	RuntimeObject* ___envoyInfo_3;
	// System.Int32 System.Runtime.Remoting.ObjRef::flags
	int32_t ___flags_4;
	// System.Type System.Runtime.Remoting.ObjRef::_serverType
	Type_t * ____serverType_5;

public:
	inline static int32_t get_offset_of_channel_info_0() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ___channel_info_0)); }
	inline RuntimeObject* get_channel_info_0() const { return ___channel_info_0; }
	inline RuntimeObject** get_address_of_channel_info_0() { return &___channel_info_0; }
	inline void set_channel_info_0(RuntimeObject* value)
	{
		___channel_info_0 = value;
		Il2CppCodeGenWriteBarrier((&___channel_info_0), value);
	}

	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ___uri_1)); }
	inline String_t* get_uri_1() const { return ___uri_1; }
	inline String_t** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(String_t* value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((&___uri_1), value);
	}

	inline static int32_t get_offset_of_typeInfo_2() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ___typeInfo_2)); }
	inline RuntimeObject* get_typeInfo_2() const { return ___typeInfo_2; }
	inline RuntimeObject** get_address_of_typeInfo_2() { return &___typeInfo_2; }
	inline void set_typeInfo_2(RuntimeObject* value)
	{
		___typeInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___typeInfo_2), value);
	}

	inline static int32_t get_offset_of_envoyInfo_3() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ___envoyInfo_3)); }
	inline RuntimeObject* get_envoyInfo_3() const { return ___envoyInfo_3; }
	inline RuntimeObject** get_address_of_envoyInfo_3() { return &___envoyInfo_3; }
	inline void set_envoyInfo_3(RuntimeObject* value)
	{
		___envoyInfo_3 = value;
		Il2CppCodeGenWriteBarrier((&___envoyInfo_3), value);
	}

	inline static int32_t get_offset_of_flags_4() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ___flags_4)); }
	inline int32_t get_flags_4() const { return ___flags_4; }
	inline int32_t* get_address_of_flags_4() { return &___flags_4; }
	inline void set_flags_4(int32_t value)
	{
		___flags_4 = value;
	}

	inline static int32_t get_offset_of__serverType_5() { return static_cast<int32_t>(offsetof(ObjRef_t917194338, ____serverType_5)); }
	inline Type_t * get__serverType_5() const { return ____serverType_5; }
	inline Type_t ** get_address_of__serverType_5() { return &____serverType_5; }
	inline void set__serverType_5(Type_t * value)
	{
		____serverType_5 = value;
		Il2CppCodeGenWriteBarrier((&____serverType_5), value);
	}
};

struct ObjRef_t917194338_StaticFields
{
public:
	// System.Int32 System.Runtime.Remoting.ObjRef::MarshalledObjectRef
	int32_t ___MarshalledObjectRef_6;
	// System.Int32 System.Runtime.Remoting.ObjRef::WellKnowObjectRef
	int32_t ___WellKnowObjectRef_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Remoting.ObjRef::<>f__switch$map26
	Dictionary_2_t3547600125 * ___U3CU3Ef__switchU24map26_8;

public:
	inline static int32_t get_offset_of_MarshalledObjectRef_6() { return static_cast<int32_t>(offsetof(ObjRef_t917194338_StaticFields, ___MarshalledObjectRef_6)); }
	inline int32_t get_MarshalledObjectRef_6() const { return ___MarshalledObjectRef_6; }
	inline int32_t* get_address_of_MarshalledObjectRef_6() { return &___MarshalledObjectRef_6; }
	inline void set_MarshalledObjectRef_6(int32_t value)
	{
		___MarshalledObjectRef_6 = value;
	}

	inline static int32_t get_offset_of_WellKnowObjectRef_7() { return static_cast<int32_t>(offsetof(ObjRef_t917194338_StaticFields, ___WellKnowObjectRef_7)); }
	inline int32_t get_WellKnowObjectRef_7() const { return ___WellKnowObjectRef_7; }
	inline int32_t* get_address_of_WellKnowObjectRef_7() { return &___WellKnowObjectRef_7; }
	inline void set_WellKnowObjectRef_7(int32_t value)
	{
		___WellKnowObjectRef_7 = value;
	}

	inline static int32_t get_offset_of_U3CU3Ef__switchU24map26_8() { return static_cast<int32_t>(offsetof(ObjRef_t917194338_StaticFields, ___U3CU3Ef__switchU24map26_8)); }
	inline Dictionary_2_t3547600125 * get_U3CU3Ef__switchU24map26_8() const { return ___U3CU3Ef__switchU24map26_8; }
	inline Dictionary_2_t3547600125 ** get_address_of_U3CU3Ef__switchU24map26_8() { return &___U3CU3Ef__switchU24map26_8; }
	inline void set_U3CU3Ef__switchU24map26_8(Dictionary_2_t3547600125 * value)
	{
		___U3CU3Ef__switchU24map26_8 = value;
		Il2CppCodeGenWriteBarrier((&___U3CU3Ef__switchU24map26_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJREF_T917194338_H
#ifndef INTERNALREMOTINGSERVICES_T3279769985_H
#define INTERNALREMOTINGSERVICES_T3279769985_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.InternalRemotingServices
struct  InternalRemotingServices_t3279769985  : public RuntimeObject
{
public:

public:
};

struct InternalRemotingServices_t3279769985_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.InternalRemotingServices::_soapAttributes
	Hashtable_t487388352 * ____soapAttributes_0;

public:
	inline static int32_t get_offset_of__soapAttributes_0() { return static_cast<int32_t>(offsetof(InternalRemotingServices_t3279769985_StaticFields, ____soapAttributes_0)); }
	inline Hashtable_t487388352 * get__soapAttributes_0() const { return ____soapAttributes_0; }
	inline Hashtable_t487388352 ** get_address_of__soapAttributes_0() { return &____soapAttributes_0; }
	inline void set__soapAttributes_0(Hashtable_t487388352 * value)
	{
		____soapAttributes_0 = value;
		Il2CppCodeGenWriteBarrier((&____soapAttributes_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTERNALREMOTINGSERVICES_T3279769985_H
#ifndef CRYPTOCONFIG_T970297761_H
#define CRYPTOCONFIG_T970297761_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptoConfig
struct  CryptoConfig_t970297761  : public RuntimeObject
{
public:

public:
};

struct CryptoConfig_t970297761_StaticFields
{
public:
	// System.Object System.Security.Cryptography.CryptoConfig::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::algorithms
	Hashtable_t487388352 * ___algorithms_1;
	// System.Collections.Hashtable System.Security.Cryptography.CryptoConfig::oid
	Hashtable_t487388352 * ___oid_2;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(CryptoConfig_t970297761_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((&___lockObject_0), value);
	}

	inline static int32_t get_offset_of_algorithms_1() { return static_cast<int32_t>(offsetof(CryptoConfig_t970297761_StaticFields, ___algorithms_1)); }
	inline Hashtable_t487388352 * get_algorithms_1() const { return ___algorithms_1; }
	inline Hashtable_t487388352 ** get_address_of_algorithms_1() { return &___algorithms_1; }
	inline void set_algorithms_1(Hashtable_t487388352 * value)
	{
		___algorithms_1 = value;
		Il2CppCodeGenWriteBarrier((&___algorithms_1), value);
	}

	inline static int32_t get_offset_of_oid_2() { return static_cast<int32_t>(offsetof(CryptoConfig_t970297761_StaticFields, ___oid_2)); }
	inline Hashtable_t487388352 * get_oid_2() const { return ___oid_2; }
	inline Hashtable_t487388352 ** get_address_of_oid_2() { return &___oid_2; }
	inline void set_oid_2(Hashtable_t487388352 * value)
	{
		___oid_2 = value;
		Il2CppCodeGenWriteBarrier((&___oid_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOCONFIG_T970297761_H
#ifndef IDENTITY_T2198929688_H
#define IDENTITY_T2198929688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Identity
struct  Identity_t2198929688  : public RuntimeObject
{
public:
	// System.String System.Runtime.Remoting.Identity::_objectUri
	String_t* ____objectUri_0;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_channelSink
	RuntimeObject* ____channelSink_1;
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Identity::_envoySink
	RuntimeObject* ____envoySink_2;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_clientDynamicProperties
	DynamicPropertyCollection_t1603760009 * ____clientDynamicProperties_3;
	// System.Runtime.Remoting.Contexts.DynamicPropertyCollection System.Runtime.Remoting.Identity::_serverDynamicProperties
	DynamicPropertyCollection_t1603760009 * ____serverDynamicProperties_4;
	// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.Identity::_objRef
	ObjRef_t917194338 * ____objRef_5;
	// System.Boolean System.Runtime.Remoting.Identity::_disposed
	bool ____disposed_6;

public:
	inline static int32_t get_offset_of__objectUri_0() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____objectUri_0)); }
	inline String_t* get__objectUri_0() const { return ____objectUri_0; }
	inline String_t** get_address_of__objectUri_0() { return &____objectUri_0; }
	inline void set__objectUri_0(String_t* value)
	{
		____objectUri_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectUri_0), value);
	}

	inline static int32_t get_offset_of__channelSink_1() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____channelSink_1)); }
	inline RuntimeObject* get__channelSink_1() const { return ____channelSink_1; }
	inline RuntimeObject** get_address_of__channelSink_1() { return &____channelSink_1; }
	inline void set__channelSink_1(RuntimeObject* value)
	{
		____channelSink_1 = value;
		Il2CppCodeGenWriteBarrier((&____channelSink_1), value);
	}

	inline static int32_t get_offset_of__envoySink_2() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____envoySink_2)); }
	inline RuntimeObject* get__envoySink_2() const { return ____envoySink_2; }
	inline RuntimeObject** get_address_of__envoySink_2() { return &____envoySink_2; }
	inline void set__envoySink_2(RuntimeObject* value)
	{
		____envoySink_2 = value;
		Il2CppCodeGenWriteBarrier((&____envoySink_2), value);
	}

	inline static int32_t get_offset_of__clientDynamicProperties_3() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____clientDynamicProperties_3)); }
	inline DynamicPropertyCollection_t1603760009 * get__clientDynamicProperties_3() const { return ____clientDynamicProperties_3; }
	inline DynamicPropertyCollection_t1603760009 ** get_address_of__clientDynamicProperties_3() { return &____clientDynamicProperties_3; }
	inline void set__clientDynamicProperties_3(DynamicPropertyCollection_t1603760009 * value)
	{
		____clientDynamicProperties_3 = value;
		Il2CppCodeGenWriteBarrier((&____clientDynamicProperties_3), value);
	}

	inline static int32_t get_offset_of__serverDynamicProperties_4() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____serverDynamicProperties_4)); }
	inline DynamicPropertyCollection_t1603760009 * get__serverDynamicProperties_4() const { return ____serverDynamicProperties_4; }
	inline DynamicPropertyCollection_t1603760009 ** get_address_of__serverDynamicProperties_4() { return &____serverDynamicProperties_4; }
	inline void set__serverDynamicProperties_4(DynamicPropertyCollection_t1603760009 * value)
	{
		____serverDynamicProperties_4 = value;
		Il2CppCodeGenWriteBarrier((&____serverDynamicProperties_4), value);
	}

	inline static int32_t get_offset_of__objRef_5() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____objRef_5)); }
	inline ObjRef_t917194338 * get__objRef_5() const { return ____objRef_5; }
	inline ObjRef_t917194338 ** get_address_of__objRef_5() { return &____objRef_5; }
	inline void set__objRef_5(ObjRef_t917194338 * value)
	{
		____objRef_5 = value;
		Il2CppCodeGenWriteBarrier((&____objRef_5), value);
	}

	inline static int32_t get_offset_of__disposed_6() { return static_cast<int32_t>(offsetof(Identity_t2198929688, ____disposed_6)); }
	inline bool get__disposed_6() const { return ____disposed_6; }
	inline bool* get_address_of__disposed_6() { return &____disposed_6; }
	inline void set__disposed_6(bool value)
	{
		____disposed_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IDENTITY_T2198929688_H
#ifndef ATTRIBUTE_T2024656619_H
#define ATTRIBUTE_T2024656619_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t2024656619  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T2024656619_H
#ifndef BASEFIXUPRECORD_T2130346789_H
#define BASEFIXUPRECORD_T2130346789_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.BaseFixupRecord
struct  BaseFixupRecord_t2130346789  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t1066425247 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t1066425247 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t2130346789 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t2130346789 * ___NextSameRequired_3;

public:
	inline static int32_t get_offset_of_ObjectToBeFixed_0() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2130346789, ___ObjectToBeFixed_0)); }
	inline ObjectRecord_t1066425247 * get_ObjectToBeFixed_0() const { return ___ObjectToBeFixed_0; }
	inline ObjectRecord_t1066425247 ** get_address_of_ObjectToBeFixed_0() { return &___ObjectToBeFixed_0; }
	inline void set_ObjectToBeFixed_0(ObjectRecord_t1066425247 * value)
	{
		___ObjectToBeFixed_0 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectToBeFixed_0), value);
	}

	inline static int32_t get_offset_of_ObjectRequired_1() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2130346789, ___ObjectRequired_1)); }
	inline ObjectRecord_t1066425247 * get_ObjectRequired_1() const { return ___ObjectRequired_1; }
	inline ObjectRecord_t1066425247 ** get_address_of_ObjectRequired_1() { return &___ObjectRequired_1; }
	inline void set_ObjectRequired_1(ObjectRecord_t1066425247 * value)
	{
		___ObjectRequired_1 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectRequired_1), value);
	}

	inline static int32_t get_offset_of_NextSameContainer_2() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2130346789, ___NextSameContainer_2)); }
	inline BaseFixupRecord_t2130346789 * get_NextSameContainer_2() const { return ___NextSameContainer_2; }
	inline BaseFixupRecord_t2130346789 ** get_address_of_NextSameContainer_2() { return &___NextSameContainer_2; }
	inline void set_NextSameContainer_2(BaseFixupRecord_t2130346789 * value)
	{
		___NextSameContainer_2 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameContainer_2), value);
	}

	inline static int32_t get_offset_of_NextSameRequired_3() { return static_cast<int32_t>(offsetof(BaseFixupRecord_t2130346789, ___NextSameRequired_3)); }
	inline BaseFixupRecord_t2130346789 * get_NextSameRequired_3() const { return ___NextSameRequired_3; }
	inline BaseFixupRecord_t2130346789 ** get_address_of_NextSameRequired_3() { return &___NextSameRequired_3; }
	inline void set_NextSameRequired_3(BaseFixupRecord_t2130346789 * value)
	{
		___NextSameRequired_3 = value;
		Il2CppCodeGenWriteBarrier((&___NextSameRequired_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEFIXUPRECORD_T2130346789_H
#ifndef ENVOYINFO_T1026864678_H
#define ENVOYINFO_T1026864678_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.EnvoyInfo
struct  EnvoyInfo_t1026864678  : public RuntimeObject
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.EnvoyInfo::envoySinks
	RuntimeObject* ___envoySinks_0;

public:
	inline static int32_t get_offset_of_envoySinks_0() { return static_cast<int32_t>(offsetof(EnvoyInfo_t1026864678, ___envoySinks_0)); }
	inline RuntimeObject* get_envoySinks_0() const { return ___envoySinks_0; }
	inline RuntimeObject** get_address_of_envoySinks_0() { return &___envoySinks_0; }
	inline void set_envoySinks_0(RuntimeObject* value)
	{
		___envoySinks_0 = value;
		Il2CppCodeGenWriteBarrier((&___envoySinks_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ENVOYINFO_T1026864678_H
#ifndef ONSERIALIZINGATTRIBUTE_T2189702594_H
#define ONSERIALIZINGATTRIBUTE_T2189702594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializingAttribute
struct  OnSerializingAttribute_t2189702594  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZINGATTRIBUTE_T2189702594_H
#ifndef ONSERIALIZEDATTRIBUTE_T2466467288_H
#define ONSERIALIZEDATTRIBUTE_T2466467288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnSerializedAttribute
struct  OnSerializedAttribute_t2466467288  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONSERIALIZEDATTRIBUTE_T2466467288_H
#ifndef ONDESERIALIZINGATTRIBUTE_T896035672_H
#define ONDESERIALIZINGATTRIBUTE_T896035672_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializingAttribute
struct  OnDeserializingAttribute_t896035672  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZINGATTRIBUTE_T896035672_H
#ifndef DESTRANSFORM_T3439168403_H
#define DESTRANSFORM_T3439168403_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DESTransform
struct  DESTransform_t3439168403  : public SymmetricTransform_t1851785317
{
public:
	// System.Byte[] System.Security.Cryptography.DESTransform::keySchedule
	ByteU5BU5D_t146018489* ___keySchedule_16;
	// System.Byte[] System.Security.Cryptography.DESTransform::byteBuff
	ByteU5BU5D_t146018489* ___byteBuff_17;
	// System.UInt32[] System.Security.Cryptography.DESTransform::dwordBuff
	UInt32U5BU5D_t4103038134* ___dwordBuff_18;

public:
	inline static int32_t get_offset_of_keySchedule_16() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403, ___keySchedule_16)); }
	inline ByteU5BU5D_t146018489* get_keySchedule_16() const { return ___keySchedule_16; }
	inline ByteU5BU5D_t146018489** get_address_of_keySchedule_16() { return &___keySchedule_16; }
	inline void set_keySchedule_16(ByteU5BU5D_t146018489* value)
	{
		___keySchedule_16 = value;
		Il2CppCodeGenWriteBarrier((&___keySchedule_16), value);
	}

	inline static int32_t get_offset_of_byteBuff_17() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403, ___byteBuff_17)); }
	inline ByteU5BU5D_t146018489* get_byteBuff_17() const { return ___byteBuff_17; }
	inline ByteU5BU5D_t146018489** get_address_of_byteBuff_17() { return &___byteBuff_17; }
	inline void set_byteBuff_17(ByteU5BU5D_t146018489* value)
	{
		___byteBuff_17 = value;
		Il2CppCodeGenWriteBarrier((&___byteBuff_17), value);
	}

	inline static int32_t get_offset_of_dwordBuff_18() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403, ___dwordBuff_18)); }
	inline UInt32U5BU5D_t4103038134* get_dwordBuff_18() const { return ___dwordBuff_18; }
	inline UInt32U5BU5D_t4103038134** get_address_of_dwordBuff_18() { return &___dwordBuff_18; }
	inline void set_dwordBuff_18(UInt32U5BU5D_t4103038134* value)
	{
		___dwordBuff_18 = value;
		Il2CppCodeGenWriteBarrier((&___dwordBuff_18), value);
	}
};

struct DESTransform_t3439168403_StaticFields
{
public:
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BIT_SIZE
	int32_t ___KEY_BIT_SIZE_12;
	// System.Int32 System.Security.Cryptography.DESTransform::KEY_BYTE_SIZE
	int32_t ___KEY_BYTE_SIZE_13;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BIT_SIZE
	int32_t ___BLOCK_BIT_SIZE_14;
	// System.Int32 System.Security.Cryptography.DESTransform::BLOCK_BYTE_SIZE
	int32_t ___BLOCK_BYTE_SIZE_15;
	// System.UInt32[] System.Security.Cryptography.DESTransform::spBoxes
	UInt32U5BU5D_t4103038134* ___spBoxes_19;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC1
	ByteU5BU5D_t146018489* ___PC1_20;
	// System.Byte[] System.Security.Cryptography.DESTransform::leftRotTotal
	ByteU5BU5D_t146018489* ___leftRotTotal_21;
	// System.Byte[] System.Security.Cryptography.DESTransform::PC2
	ByteU5BU5D_t146018489* ___PC2_22;
	// System.UInt32[] System.Security.Cryptography.DESTransform::ipTab
	UInt32U5BU5D_t4103038134* ___ipTab_23;
	// System.UInt32[] System.Security.Cryptography.DESTransform::fpTab
	UInt32U5BU5D_t4103038134* ___fpTab_24;

public:
	inline static int32_t get_offset_of_KEY_BIT_SIZE_12() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___KEY_BIT_SIZE_12)); }
	inline int32_t get_KEY_BIT_SIZE_12() const { return ___KEY_BIT_SIZE_12; }
	inline int32_t* get_address_of_KEY_BIT_SIZE_12() { return &___KEY_BIT_SIZE_12; }
	inline void set_KEY_BIT_SIZE_12(int32_t value)
	{
		___KEY_BIT_SIZE_12 = value;
	}

	inline static int32_t get_offset_of_KEY_BYTE_SIZE_13() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___KEY_BYTE_SIZE_13)); }
	inline int32_t get_KEY_BYTE_SIZE_13() const { return ___KEY_BYTE_SIZE_13; }
	inline int32_t* get_address_of_KEY_BYTE_SIZE_13() { return &___KEY_BYTE_SIZE_13; }
	inline void set_KEY_BYTE_SIZE_13(int32_t value)
	{
		___KEY_BYTE_SIZE_13 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BIT_SIZE_14() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___BLOCK_BIT_SIZE_14)); }
	inline int32_t get_BLOCK_BIT_SIZE_14() const { return ___BLOCK_BIT_SIZE_14; }
	inline int32_t* get_address_of_BLOCK_BIT_SIZE_14() { return &___BLOCK_BIT_SIZE_14; }
	inline void set_BLOCK_BIT_SIZE_14(int32_t value)
	{
		___BLOCK_BIT_SIZE_14 = value;
	}

	inline static int32_t get_offset_of_BLOCK_BYTE_SIZE_15() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___BLOCK_BYTE_SIZE_15)); }
	inline int32_t get_BLOCK_BYTE_SIZE_15() const { return ___BLOCK_BYTE_SIZE_15; }
	inline int32_t* get_address_of_BLOCK_BYTE_SIZE_15() { return &___BLOCK_BYTE_SIZE_15; }
	inline void set_BLOCK_BYTE_SIZE_15(int32_t value)
	{
		___BLOCK_BYTE_SIZE_15 = value;
	}

	inline static int32_t get_offset_of_spBoxes_19() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___spBoxes_19)); }
	inline UInt32U5BU5D_t4103038134* get_spBoxes_19() const { return ___spBoxes_19; }
	inline UInt32U5BU5D_t4103038134** get_address_of_spBoxes_19() { return &___spBoxes_19; }
	inline void set_spBoxes_19(UInt32U5BU5D_t4103038134* value)
	{
		___spBoxes_19 = value;
		Il2CppCodeGenWriteBarrier((&___spBoxes_19), value);
	}

	inline static int32_t get_offset_of_PC1_20() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___PC1_20)); }
	inline ByteU5BU5D_t146018489* get_PC1_20() const { return ___PC1_20; }
	inline ByteU5BU5D_t146018489** get_address_of_PC1_20() { return &___PC1_20; }
	inline void set_PC1_20(ByteU5BU5D_t146018489* value)
	{
		___PC1_20 = value;
		Il2CppCodeGenWriteBarrier((&___PC1_20), value);
	}

	inline static int32_t get_offset_of_leftRotTotal_21() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___leftRotTotal_21)); }
	inline ByteU5BU5D_t146018489* get_leftRotTotal_21() const { return ___leftRotTotal_21; }
	inline ByteU5BU5D_t146018489** get_address_of_leftRotTotal_21() { return &___leftRotTotal_21; }
	inline void set_leftRotTotal_21(ByteU5BU5D_t146018489* value)
	{
		___leftRotTotal_21 = value;
		Il2CppCodeGenWriteBarrier((&___leftRotTotal_21), value);
	}

	inline static int32_t get_offset_of_PC2_22() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___PC2_22)); }
	inline ByteU5BU5D_t146018489* get_PC2_22() const { return ___PC2_22; }
	inline ByteU5BU5D_t146018489** get_address_of_PC2_22() { return &___PC2_22; }
	inline void set_PC2_22(ByteU5BU5D_t146018489* value)
	{
		___PC2_22 = value;
		Il2CppCodeGenWriteBarrier((&___PC2_22), value);
	}

	inline static int32_t get_offset_of_ipTab_23() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___ipTab_23)); }
	inline UInt32U5BU5D_t4103038134* get_ipTab_23() const { return ___ipTab_23; }
	inline UInt32U5BU5D_t4103038134** get_address_of_ipTab_23() { return &___ipTab_23; }
	inline void set_ipTab_23(UInt32U5BU5D_t4103038134* value)
	{
		___ipTab_23 = value;
		Il2CppCodeGenWriteBarrier((&___ipTab_23), value);
	}

	inline static int32_t get_offset_of_fpTab_24() { return static_cast<int32_t>(offsetof(DESTransform_t3439168403_StaticFields, ___fpTab_24)); }
	inline UInt32U5BU5D_t4103038134* get_fpTab_24() const { return ___fpTab_24; }
	inline UInt32U5BU5D_t4103038134** get_address_of_fpTab_24() { return &___fpTab_24; }
	inline void set_fpTab_24(UInt32U5BU5D_t4103038134* value)
	{
		___fpTab_24 = value;
		Il2CppCodeGenWriteBarrier((&___fpTab_24), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DESTRANSFORM_T3439168403_H
#ifndef VOID_T648803283_H
#define VOID_T648803283_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t648803283 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T648803283_H
#ifndef DELAYEDFIXUPRECORD_T1085324391_H
#define DELAYEDFIXUPRECORD_T1085324391_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.DelayedFixupRecord
struct  DelayedFixupRecord_t1085324391  : public BaseFixupRecord_t2130346789
{
public:
	// System.String System.Runtime.Serialization.DelayedFixupRecord::_memberName
	String_t* ____memberName_4;

public:
	inline static int32_t get_offset_of__memberName_4() { return static_cast<int32_t>(offsetof(DelayedFixupRecord_t1085324391, ____memberName_4)); }
	inline String_t* get__memberName_4() const { return ____memberName_4; }
	inline String_t** get_address_of__memberName_4() { return &____memberName_4; }
	inline void set__memberName_4(String_t* value)
	{
		____memberName_4 = value;
		Il2CppCodeGenWriteBarrier((&____memberName_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELAYEDFIXUPRECORD_T1085324391_H
#ifndef SERIALIZATIONENTRY_T4006045359_H
#define SERIALIZATIONENTRY_T4006045359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationEntry
struct  SerializationEntry_t4006045359 
{
public:
	// System.String System.Runtime.Serialization.SerializationEntry::name
	String_t* ___name_0;
	// System.Type System.Runtime.Serialization.SerializationEntry::objectType
	Type_t * ___objectType_1;
	// System.Object System.Runtime.Serialization.SerializationEntry::value
	RuntimeObject * ___value_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SerializationEntry_t4006045359, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((&___name_0), value);
	}

	inline static int32_t get_offset_of_objectType_1() { return static_cast<int32_t>(offsetof(SerializationEntry_t4006045359, ___objectType_1)); }
	inline Type_t * get_objectType_1() const { return ___objectType_1; }
	inline Type_t ** get_address_of_objectType_1() { return &___objectType_1; }
	inline void set_objectType_1(Type_t * value)
	{
		___objectType_1 = value;
		Il2CppCodeGenWriteBarrier((&___objectType_1), value);
	}

	inline static int32_t get_offset_of_value_2() { return static_cast<int32_t>(offsetof(SerializationEntry_t4006045359, ___value_2)); }
	inline RuntimeObject * get_value_2() const { return ___value_2; }
	inline RuntimeObject ** get_address_of_value_2() { return &___value_2; }
	inline void set_value_2(RuntimeObject * value)
	{
		___value_2 = value;
		Il2CppCodeGenWriteBarrier((&___value_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t4006045359_marshaled_pinvoke
{
	char* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
// Native definition for COM marshalling of System.Runtime.Serialization.SerializationEntry
struct SerializationEntry_t4006045359_marshaled_com
{
	Il2CppChar* ___name_0;
	Type_t * ___objectType_1;
	Il2CppIUnknown* ___value_2;
};
#endif // SERIALIZATIONENTRY_T4006045359_H
#ifndef ENUM_T1069429491_H
#define ENUM_T1069429491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t1069429491  : public ValueType_t1137770746
{
public:

public:
};

struct Enum_t1069429491_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3938341699* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t1069429491_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3938341699* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3938341699** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3938341699* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t1069429491_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t1069429491_marshaled_com
{
};
#endif // ENUM_T1069429491_H
#ifndef FIXUPRECORD_T3681476652_H
#define FIXUPRECORD_T3681476652_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.FixupRecord
struct  FixupRecord_t3681476652  : public BaseFixupRecord_t2130346789
{
public:
	// System.Reflection.MemberInfo System.Runtime.Serialization.FixupRecord::_member
	MemberInfo_t * ____member_4;

public:
	inline static int32_t get_offset_of__member_4() { return static_cast<int32_t>(offsetof(FixupRecord_t3681476652, ____member_4)); }
	inline MemberInfo_t * get__member_4() const { return ____member_4; }
	inline MemberInfo_t ** get_address_of__member_4() { return &____member_4; }
	inline void set__member_4(MemberInfo_t * value)
	{
		____member_4 = value;
		Il2CppCodeGenWriteBarrier((&____member_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FIXUPRECORD_T3681476652_H
#ifndef MULTIARRAYFIXUPRECORD_T1651674147_H
#define MULTIARRAYFIXUPRECORD_T1651674147_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.MultiArrayFixupRecord
struct  MultiArrayFixupRecord_t1651674147  : public BaseFixupRecord_t2130346789
{
public:
	// System.Int32[] System.Runtime.Serialization.MultiArrayFixupRecord::_indices
	Int32U5BU5D_t2684699320* ____indices_4;

public:
	inline static int32_t get_offset_of__indices_4() { return static_cast<int32_t>(offsetof(MultiArrayFixupRecord_t1651674147, ____indices_4)); }
	inline Int32U5BU5D_t2684699320* get__indices_4() const { return ____indices_4; }
	inline Int32U5BU5D_t2684699320** get_address_of__indices_4() { return &____indices_4; }
	inline void set__indices_4(Int32U5BU5D_t2684699320* value)
	{
		____indices_4 = value;
		Il2CppCodeGenWriteBarrier((&____indices_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTIARRAYFIXUPRECORD_T1651674147_H
#ifndef ARRAYFIXUPRECORD_T146443186_H
#define ARRAYFIXUPRECORD_T146443186_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ArrayFixupRecord
struct  ArrayFixupRecord_t146443186  : public BaseFixupRecord_t2130346789
{
public:
	// System.Int32 System.Runtime.Serialization.ArrayFixupRecord::_index
	int32_t ____index_4;

public:
	inline static int32_t get_offset_of__index_4() { return static_cast<int32_t>(offsetof(ArrayFixupRecord_t146443186, ____index_4)); }
	inline int32_t get__index_4() const { return ____index_4; }
	inline int32_t* get_address_of__index_4() { return &____index_4; }
	inline void set__index_4(int32_t value)
	{
		____index_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARRAYFIXUPRECORD_T146443186_H
#ifndef SYSTEMEXCEPTION_T2101658722_H
#define SYSTEMEXCEPTION_T2101658722_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t2101658722  : public Exception_t4126934701
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T2101658722_H
#ifndef ONDESERIALIZEDATTRIBUTE_T3960193767_H
#define ONDESERIALIZEDATTRIBUTE_T3960193767_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.OnDeserializedAttribute
struct  OnDeserializedAttribute_t3960193767  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ONDESERIALIZEDATTRIBUTE_T3960193767_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ACTIVATEDCLIENTTYPEENTRY_T3039534281_H
#define ACTIVATEDCLIENTTYPEENTRY_T3039534281_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedClientTypeEntry
struct  ActivatedClientTypeEntry_t3039534281  : public TypeEntry_t3811347551
{
public:
	// System.String System.Runtime.Remoting.ActivatedClientTypeEntry::applicationUrl
	String_t* ___applicationUrl_2;
	// System.Type System.Runtime.Remoting.ActivatedClientTypeEntry::obj_type
	Type_t * ___obj_type_3;

public:
	inline static int32_t get_offset_of_applicationUrl_2() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t3039534281, ___applicationUrl_2)); }
	inline String_t* get_applicationUrl_2() const { return ___applicationUrl_2; }
	inline String_t** get_address_of_applicationUrl_2() { return &___applicationUrl_2; }
	inline void set_applicationUrl_2(String_t* value)
	{
		___applicationUrl_2 = value;
		Il2CppCodeGenWriteBarrier((&___applicationUrl_2), value);
	}

	inline static int32_t get_offset_of_obj_type_3() { return static_cast<int32_t>(offsetof(ActivatedClientTypeEntry_t3039534281, ___obj_type_3)); }
	inline Type_t * get_obj_type_3() const { return ___obj_type_3; }
	inline Type_t ** get_address_of_obj_type_3() { return &___obj_type_3; }
	inline void set_obj_type_3(Type_t * value)
	{
		___obj_type_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDCLIENTTYPEENTRY_T3039534281_H
#ifndef SOAPATTRIBUTE_T3145506660_H
#define SOAPATTRIBUTE_T3145506660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapAttribute
struct  SoapAttribute_t3145506660  : public Attribute_t2024656619
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapAttribute::_useAttribute
	bool ____useAttribute_0;
	// System.String System.Runtime.Remoting.Metadata.SoapAttribute::ProtXmlNamespace
	String_t* ___ProtXmlNamespace_1;
	// System.Object System.Runtime.Remoting.Metadata.SoapAttribute::ReflectInfo
	RuntimeObject * ___ReflectInfo_2;

public:
	inline static int32_t get_offset_of__useAttribute_0() { return static_cast<int32_t>(offsetof(SoapAttribute_t3145506660, ____useAttribute_0)); }
	inline bool get__useAttribute_0() const { return ____useAttribute_0; }
	inline bool* get_address_of__useAttribute_0() { return &____useAttribute_0; }
	inline void set__useAttribute_0(bool value)
	{
		____useAttribute_0 = value;
	}

	inline static int32_t get_offset_of_ProtXmlNamespace_1() { return static_cast<int32_t>(offsetof(SoapAttribute_t3145506660, ___ProtXmlNamespace_1)); }
	inline String_t* get_ProtXmlNamespace_1() const { return ___ProtXmlNamespace_1; }
	inline String_t** get_address_of_ProtXmlNamespace_1() { return &___ProtXmlNamespace_1; }
	inline void set_ProtXmlNamespace_1(String_t* value)
	{
		___ProtXmlNamespace_1 = value;
		Il2CppCodeGenWriteBarrier((&___ProtXmlNamespace_1), value);
	}

	inline static int32_t get_offset_of_ReflectInfo_2() { return static_cast<int32_t>(offsetof(SoapAttribute_t3145506660, ___ReflectInfo_2)); }
	inline RuntimeObject * get_ReflectInfo_2() const { return ___ReflectInfo_2; }
	inline RuntimeObject ** get_address_of_ReflectInfo_2() { return &___ReflectInfo_2; }
	inline void set_ReflectInfo_2(RuntimeObject * value)
	{
		___ReflectInfo_2 = value;
		Il2CppCodeGenWriteBarrier((&___ReflectInfo_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPATTRIBUTE_T3145506660_H
#ifndef FORMATTERDATA_T3541554216_H
#define FORMATTERDATA_T3541554216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.FormatterData
struct  FormatterData_t3541554216  : public ProviderData_t1828329265
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERDATA_T3541554216_H
#ifndef WELLKNOWNCLIENTTYPEENTRY_T4214979564_H
#define WELLKNOWNCLIENTTYPEENTRY_T4214979564_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownClientTypeEntry
struct  WellKnownClientTypeEntry_t4214979564  : public TypeEntry_t3811347551
{
public:
	// System.Type System.Runtime.Remoting.WellKnownClientTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::obj_url
	String_t* ___obj_url_3;
	// System.String System.Runtime.Remoting.WellKnownClientTypeEntry::app_url
	String_t* ___app_url_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t4214979564, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_url_3() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t4214979564, ___obj_url_3)); }
	inline String_t* get_obj_url_3() const { return ___obj_url_3; }
	inline String_t** get_address_of_obj_url_3() { return &___obj_url_3; }
	inline void set_obj_url_3(String_t* value)
	{
		___obj_url_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_url_3), value);
	}

	inline static int32_t get_offset_of_app_url_4() { return static_cast<int32_t>(offsetof(WellKnownClientTypeEntry_t4214979564, ___app_url_4)); }
	inline String_t* get_app_url_4() const { return ___app_url_4; }
	inline String_t** get_address_of_app_url_4() { return &___app_url_4; }
	inline void set_app_url_4(String_t* value)
	{
		___app_url_4 = value;
		Il2CppCodeGenWriteBarrier((&___app_url_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNCLIENTTYPEENTRY_T4214979564_H
#ifndef CLIENTIDENTITY_T2106485056_H
#define CLIENTIDENTITY_T2106485056_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientIdentity
struct  ClientIdentity_t2106485056  : public Identity_t2198929688
{
public:
	// System.WeakReference System.Runtime.Remoting.ClientIdentity::_proxyReference
	WeakReference_t1883101636 * ____proxyReference_7;

public:
	inline static int32_t get_offset_of__proxyReference_7() { return static_cast<int32_t>(offsetof(ClientIdentity_t2106485056, ____proxyReference_7)); }
	inline WeakReference_t1883101636 * get__proxyReference_7() const { return ____proxyReference_7; }
	inline WeakReference_t1883101636 ** get_address_of__proxyReference_7() { return &____proxyReference_7; }
	inline void set__proxyReference_7(WeakReference_t1883101636 * value)
	{
		____proxyReference_7 = value;
		Il2CppCodeGenWriteBarrier((&____proxyReference_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTIDENTITY_T2106485056_H
#ifndef PROXYATTRIBUTE_T71460944_H
#define PROXYATTRIBUTE_T71460944_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.ProxyAttribute
struct  ProxyAttribute_t71460944  : public Attribute_t2024656619
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROXYATTRIBUTE_T71460944_H
#ifndef REMOTINGPROXY_T3778350894_H
#define REMOTINGPROXY_T3778350894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Proxies.RemotingProxy
struct  RemotingProxy_t3778350894  : public RealProxy_t2414300508
{
public:
	// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.Proxies.RemotingProxy::_sink
	RuntimeObject* ____sink_7;
	// System.Boolean System.Runtime.Remoting.Proxies.RemotingProxy::_hasEnvoySink
	bool ____hasEnvoySink_8;
	// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Proxies.RemotingProxy::_ctorCall
	ConstructionCall_t1779311527 * ____ctorCall_9;

public:
	inline static int32_t get_offset_of__sink_7() { return static_cast<int32_t>(offsetof(RemotingProxy_t3778350894, ____sink_7)); }
	inline RuntimeObject* get__sink_7() const { return ____sink_7; }
	inline RuntimeObject** get_address_of__sink_7() { return &____sink_7; }
	inline void set__sink_7(RuntimeObject* value)
	{
		____sink_7 = value;
		Il2CppCodeGenWriteBarrier((&____sink_7), value);
	}

	inline static int32_t get_offset_of__hasEnvoySink_8() { return static_cast<int32_t>(offsetof(RemotingProxy_t3778350894, ____hasEnvoySink_8)); }
	inline bool get__hasEnvoySink_8() const { return ____hasEnvoySink_8; }
	inline bool* get_address_of__hasEnvoySink_8() { return &____hasEnvoySink_8; }
	inline void set__hasEnvoySink_8(bool value)
	{
		____hasEnvoySink_8 = value;
	}

	inline static int32_t get_offset_of__ctorCall_9() { return static_cast<int32_t>(offsetof(RemotingProxy_t3778350894, ____ctorCall_9)); }
	inline ConstructionCall_t1779311527 * get__ctorCall_9() const { return ____ctorCall_9; }
	inline ConstructionCall_t1779311527 ** get_address_of__ctorCall_9() { return &____ctorCall_9; }
	inline void set__ctorCall_9(ConstructionCall_t1779311527 * value)
	{
		____ctorCall_9 = value;
		Il2CppCodeGenWriteBarrier((&____ctorCall_9), value);
	}
};

struct RemotingProxy_t3778350894_StaticFields
{
public:
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetTypeMethod
	MethodInfo_t * ____cache_GetTypeMethod_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.Proxies.RemotingProxy::_cache_GetHashCodeMethod
	MethodInfo_t * ____cache_GetHashCodeMethod_6;

public:
	inline static int32_t get_offset_of__cache_GetTypeMethod_5() { return static_cast<int32_t>(offsetof(RemotingProxy_t3778350894_StaticFields, ____cache_GetTypeMethod_5)); }
	inline MethodInfo_t * get__cache_GetTypeMethod_5() const { return ____cache_GetTypeMethod_5; }
	inline MethodInfo_t ** get_address_of__cache_GetTypeMethod_5() { return &____cache_GetTypeMethod_5; }
	inline void set__cache_GetTypeMethod_5(MethodInfo_t * value)
	{
		____cache_GetTypeMethod_5 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetTypeMethod_5), value);
	}

	inline static int32_t get_offset_of__cache_GetHashCodeMethod_6() { return static_cast<int32_t>(offsetof(RemotingProxy_t3778350894_StaticFields, ____cache_GetHashCodeMethod_6)); }
	inline MethodInfo_t * get__cache_GetHashCodeMethod_6() const { return ____cache_GetHashCodeMethod_6; }
	inline MethodInfo_t ** get_address_of__cache_GetHashCodeMethod_6() { return &____cache_GetHashCodeMethod_6; }
	inline void set__cache_GetHashCodeMethod_6(MethodInfo_t * value)
	{
		____cache_GetHashCodeMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&____cache_GetHashCodeMethod_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGPROXY_T3778350894_H
#ifndef SERVERIDENTITY_T2585654465_H
#define SERVERIDENTITY_T2585654465_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ServerIdentity
struct  ServerIdentity_t2585654465  : public Identity_t2198929688
{
public:
	// System.Type System.Runtime.Remoting.ServerIdentity::_objectType
	Type_t * ____objectType_7;
	// System.MarshalByRefObject System.Runtime.Remoting.ServerIdentity::_serverObject
	MarshalByRefObject_t2431518778 * ____serverObject_8;
	// System.Runtime.Remoting.Contexts.Context System.Runtime.Remoting.ServerIdentity::_context
	Context_t1201390537 * ____context_9;

public:
	inline static int32_t get_offset_of__objectType_7() { return static_cast<int32_t>(offsetof(ServerIdentity_t2585654465, ____objectType_7)); }
	inline Type_t * get__objectType_7() const { return ____objectType_7; }
	inline Type_t ** get_address_of__objectType_7() { return &____objectType_7; }
	inline void set__objectType_7(Type_t * value)
	{
		____objectType_7 = value;
		Il2CppCodeGenWriteBarrier((&____objectType_7), value);
	}

	inline static int32_t get_offset_of__serverObject_8() { return static_cast<int32_t>(offsetof(ServerIdentity_t2585654465, ____serverObject_8)); }
	inline MarshalByRefObject_t2431518778 * get__serverObject_8() const { return ____serverObject_8; }
	inline MarshalByRefObject_t2431518778 ** get_address_of__serverObject_8() { return &____serverObject_8; }
	inline void set__serverObject_8(MarshalByRefObject_t2431518778 * value)
	{
		____serverObject_8 = value;
		Il2CppCodeGenWriteBarrier((&____serverObject_8), value);
	}

	inline static int32_t get_offset_of__context_9() { return static_cast<int32_t>(offsetof(ServerIdentity_t2585654465, ____context_9)); }
	inline Context_t1201390537 * get__context_9() const { return ____context_9; }
	inline Context_t1201390537 ** get_address_of__context_9() { return &____context_9; }
	inline void set__context_9(Context_t1201390537 * value)
	{
		____context_9 = value;
		Il2CppCodeGenWriteBarrier((&____context_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERVERIDENTITY_T2585654465_H
#ifndef ACTIVATEDSERVICETYPEENTRY_T3075187956_H
#define ACTIVATEDSERVICETYPEENTRY_T3075187956_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ActivatedServiceTypeEntry
struct  ActivatedServiceTypeEntry_t3075187956  : public TypeEntry_t3811347551
{
public:
	// System.Type System.Runtime.Remoting.ActivatedServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(ActivatedServiceTypeEntry_t3075187956, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTIVATEDSERVICETYPEENTRY_T3075187956_H
#ifndef REMOTINGEXCEPTION_T2310402158_H
#define REMOTINGEXCEPTION_T2310402158_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingException
struct  RemotingException_t2310402158  : public SystemException_t2101658722
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGEXCEPTION_T2310402158_H
#ifndef CIPHERMODE_T2029975223_H
#define CIPHERMODE_T2029975223_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CipherMode
struct  CipherMode_t2029975223 
{
public:
	// System.Int32 System.Security.Cryptography.CipherMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CipherMode_t2029975223, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CIPHERMODE_T2029975223_H
#ifndef CRYPTOGRAPHICEXCEPTION_T1462342019_H
#define CRYPTOGRAPHICEXCEPTION_T1462342019_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicException
struct  CryptographicException_t1462342019  : public SystemException_t2101658722
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICEXCEPTION_T1462342019_H
#ifndef PADDINGMODE_T3291353280_H
#define PADDINGMODE_T3291353280_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.PaddingMode
struct  PaddingMode_t3291353280 
{
public:
	// System.Int32 System.Security.Cryptography.PaddingMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PaddingMode_t3291353280, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PADDINGMODE_T3291353280_H
#ifndef BINDINGFLAGS_T3550003983_H
#define BINDINGFLAGS_T3550003983_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t3550003983 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BindingFlags_t3550003983, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T3550003983_H
#ifndef SOAPTYPEATTRIBUTE_T4174234895_H
#define SOAPTYPEATTRIBUTE_T4174234895_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapTypeAttribute
struct  SoapTypeAttribute_t4174234895  : public SoapAttribute_t3145506660
{
public:
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_useAttribute
	bool ____useAttribute_3;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlElementName
	String_t* ____xmlElementName_4;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlNamespace
	String_t* ____xmlNamespace_5;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeName
	String_t* ____xmlTypeName_6;
	// System.String System.Runtime.Remoting.Metadata.SoapTypeAttribute::_xmlTypeNamespace
	String_t* ____xmlTypeNamespace_7;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isType
	bool ____isType_8;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapTypeAttribute::_isElement
	bool ____isElement_9;

public:
	inline static int32_t get_offset_of__useAttribute_3() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____useAttribute_3)); }
	inline bool get__useAttribute_3() const { return ____useAttribute_3; }
	inline bool* get_address_of__useAttribute_3() { return &____useAttribute_3; }
	inline void set__useAttribute_3(bool value)
	{
		____useAttribute_3 = value;
	}

	inline static int32_t get_offset_of__xmlElementName_4() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____xmlElementName_4)); }
	inline String_t* get__xmlElementName_4() const { return ____xmlElementName_4; }
	inline String_t** get_address_of__xmlElementName_4() { return &____xmlElementName_4; }
	inline void set__xmlElementName_4(String_t* value)
	{
		____xmlElementName_4 = value;
		Il2CppCodeGenWriteBarrier((&____xmlElementName_4), value);
	}

	inline static int32_t get_offset_of__xmlNamespace_5() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____xmlNamespace_5)); }
	inline String_t* get__xmlNamespace_5() const { return ____xmlNamespace_5; }
	inline String_t** get_address_of__xmlNamespace_5() { return &____xmlNamespace_5; }
	inline void set__xmlNamespace_5(String_t* value)
	{
		____xmlNamespace_5 = value;
		Il2CppCodeGenWriteBarrier((&____xmlNamespace_5), value);
	}

	inline static int32_t get_offset_of__xmlTypeName_6() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____xmlTypeName_6)); }
	inline String_t* get__xmlTypeName_6() const { return ____xmlTypeName_6; }
	inline String_t** get_address_of__xmlTypeName_6() { return &____xmlTypeName_6; }
	inline void set__xmlTypeName_6(String_t* value)
	{
		____xmlTypeName_6 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeName_6), value);
	}

	inline static int32_t get_offset_of__xmlTypeNamespace_7() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____xmlTypeNamespace_7)); }
	inline String_t* get__xmlTypeNamespace_7() const { return ____xmlTypeNamespace_7; }
	inline String_t** get_address_of__xmlTypeNamespace_7() { return &____xmlTypeNamespace_7; }
	inline void set__xmlTypeNamespace_7(String_t* value)
	{
		____xmlTypeNamespace_7 = value;
		Il2CppCodeGenWriteBarrier((&____xmlTypeNamespace_7), value);
	}

	inline static int32_t get_offset_of__isType_8() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____isType_8)); }
	inline bool get__isType_8() const { return ____isType_8; }
	inline bool* get_address_of__isType_8() { return &____isType_8; }
	inline void set__isType_8(bool value)
	{
		____isType_8 = value;
	}

	inline static int32_t get_offset_of__isElement_9() { return static_cast<int32_t>(offsetof(SoapTypeAttribute_t4174234895, ____isElement_9)); }
	inline bool get__isElement_9() const { return ____isElement_9; }
	inline bool* get_address_of__isElement_9() { return &____isElement_9; }
	inline void set__isElement_9(bool value)
	{
		____isElement_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPTYPEATTRIBUTE_T4174234895_H
#ifndef SOAPPARAMETERATTRIBUTE_T3961367023_H
#define SOAPPARAMETERATTRIBUTE_T3961367023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapParameterAttribute
struct  SoapParameterAttribute_t3961367023  : public SoapAttribute_t3145506660
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPPARAMETERATTRIBUTE_T3961367023_H
#ifndef SOAPMETHODATTRIBUTE_T335858483_H
#define SOAPMETHODATTRIBUTE_T335858483_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapMethodAttribute
struct  SoapMethodAttribute_t335858483  : public SoapAttribute_t3145506660
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseElement
	String_t* ____responseElement_3;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_responseNamespace
	String_t* ____responseNamespace_4;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_returnElement
	String_t* ____returnElement_5;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_soapAction
	String_t* ____soapAction_6;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapMethodAttribute::_useAttribute
	bool ____useAttribute_7;
	// System.String System.Runtime.Remoting.Metadata.SoapMethodAttribute::_namespace
	String_t* ____namespace_8;

public:
	inline static int32_t get_offset_of__responseElement_3() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____responseElement_3)); }
	inline String_t* get__responseElement_3() const { return ____responseElement_3; }
	inline String_t** get_address_of__responseElement_3() { return &____responseElement_3; }
	inline void set__responseElement_3(String_t* value)
	{
		____responseElement_3 = value;
		Il2CppCodeGenWriteBarrier((&____responseElement_3), value);
	}

	inline static int32_t get_offset_of__responseNamespace_4() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____responseNamespace_4)); }
	inline String_t* get__responseNamespace_4() const { return ____responseNamespace_4; }
	inline String_t** get_address_of__responseNamespace_4() { return &____responseNamespace_4; }
	inline void set__responseNamespace_4(String_t* value)
	{
		____responseNamespace_4 = value;
		Il2CppCodeGenWriteBarrier((&____responseNamespace_4), value);
	}

	inline static int32_t get_offset_of__returnElement_5() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____returnElement_5)); }
	inline String_t* get__returnElement_5() const { return ____returnElement_5; }
	inline String_t** get_address_of__returnElement_5() { return &____returnElement_5; }
	inline void set__returnElement_5(String_t* value)
	{
		____returnElement_5 = value;
		Il2CppCodeGenWriteBarrier((&____returnElement_5), value);
	}

	inline static int32_t get_offset_of__soapAction_6() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____soapAction_6)); }
	inline String_t* get__soapAction_6() const { return ____soapAction_6; }
	inline String_t** get_address_of__soapAction_6() { return &____soapAction_6; }
	inline void set__soapAction_6(String_t* value)
	{
		____soapAction_6 = value;
		Il2CppCodeGenWriteBarrier((&____soapAction_6), value);
	}

	inline static int32_t get_offset_of__useAttribute_7() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____useAttribute_7)); }
	inline bool get__useAttribute_7() const { return ____useAttribute_7; }
	inline bool* get_address_of__useAttribute_7() { return &____useAttribute_7; }
	inline void set__useAttribute_7(bool value)
	{
		____useAttribute_7 = value;
	}

	inline static int32_t get_offset_of__namespace_8() { return static_cast<int32_t>(offsetof(SoapMethodAttribute_t335858483, ____namespace_8)); }
	inline String_t* get__namespace_8() const { return ____namespace_8; }
	inline String_t** get_address_of__namespace_8() { return &____namespace_8; }
	inline void set__namespace_8(String_t* value)
	{
		____namespace_8 = value;
		Il2CppCodeGenWriteBarrier((&____namespace_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPMETHODATTRIBUTE_T335858483_H
#ifndef SOAPFIELDATTRIBUTE_T1515225073_H
#define SOAPFIELDATTRIBUTE_T1515225073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.Metadata.SoapFieldAttribute
struct  SoapFieldAttribute_t1515225073  : public SoapAttribute_t3145506660
{
public:
	// System.String System.Runtime.Remoting.Metadata.SoapFieldAttribute::_elementName
	String_t* ____elementName_3;
	// System.Boolean System.Runtime.Remoting.Metadata.SoapFieldAttribute::_isElement
	bool ____isElement_4;

public:
	inline static int32_t get_offset_of__elementName_3() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t1515225073, ____elementName_3)); }
	inline String_t* get__elementName_3() const { return ____elementName_3; }
	inline String_t** get_address_of__elementName_3() { return &____elementName_3; }
	inline void set__elementName_3(String_t* value)
	{
		____elementName_3 = value;
		Il2CppCodeGenWriteBarrier((&____elementName_3), value);
	}

	inline static int32_t get_offset_of__isElement_4() { return static_cast<int32_t>(offsetof(SoapFieldAttribute_t1515225073, ____isElement_4)); }
	inline bool get__isElement_4() const { return ____isElement_4; }
	inline bool* get_address_of__isElement_4() { return &____isElement_4; }
	inline void set__isElement_4(bool value)
	{
		____isElement_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SOAPFIELDATTRIBUTE_T1515225073_H
#ifndef DELEGATE_T360127155_H
#define DELEGATE_T360127155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t360127155  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1603905796 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t360127155, ___data_8)); }
	inline DelegateData_t1603905796 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1603905796 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1603905796 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T360127155_H
#ifndef CSPPROVIDERFLAGS_T2449607442_H
#define CSPPROVIDERFLAGS_T2449607442_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspProviderFlags
struct  CspProviderFlags_t2449607442 
{
public:
	// System.Int32 System.Security.Cryptography.CspProviderFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CspProviderFlags_t2449607442, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPROVIDERFLAGS_T2449607442_H
#ifndef CLIENTACTIVATEDIDENTITY_T71964569_H
#define CLIENTACTIVATEDIDENTITY_T71964569_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.ClientActivatedIdentity
struct  ClientActivatedIdentity_t71964569  : public ServerIdentity_t2585654465
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLIENTACTIVATEDIDENTITY_T71964569_H
#ifndef TYPEFILTERLEVEL_T4270771694_H
#define TYPEFILTERLEVEL_T4270771694_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t4270771694 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t4270771694, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEFILTERLEVEL_T4270771694_H
#ifndef SINGLETONIDENTITY_T2393382586_H
#define SINGLETONIDENTITY_T2393382586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingletonIdentity
struct  SingletonIdentity_t2393382586  : public ServerIdentity_t2585654465
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLETONIDENTITY_T2393382586_H
#ifndef FORMATTERTYPESTYLE_T1416953768_H
#define FORMATTERTYPESTYLE_T1416953768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_t1416953768 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_t1416953768, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERTYPESTYLE_T1416953768_H
#ifndef FORMATTERASSEMBLYSTYLE_T1939484379_H
#define FORMATTERASSEMBLYSTYLE_T1939484379_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t1939484379 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t1939484379, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FORMATTERASSEMBLYSTYLE_T1939484379_H
#ifndef OBJECTRECORDSTATUS_T183477525_H
#define OBJECTRECORDSTATUS_T183477525_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecordStatus
struct  ObjectRecordStatus_t183477525 
{
public:
	// System.Byte System.Runtime.Serialization.ObjectRecordStatus::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ObjectRecordStatus_t183477525, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORDSTATUS_T183477525_H
#ifndef RETURNTYPETAG_T1834352041_H
#define RETURNTYPETAG_T1834352041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag
struct  ReturnTypeTag_t1834352041 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.ReturnTypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ReturnTypeTag_t1834352041, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RETURNTYPETAG_T1834352041_H
#ifndef METHODFLAGS_T1261829092_H
#define METHODFLAGS_T1261829092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.MethodFlags
struct  MethodFlags_t1261829092 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.MethodFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(MethodFlags_t1261829092, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // METHODFLAGS_T1261829092_H
#ifndef TYPETAG_T1257736419_H
#define TYPETAG_T1257736419_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.TypeTag
struct  TypeTag_t1257736419 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.TypeTag::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TypeTag_t1257736419, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPETAG_T1257736419_H
#ifndef X509KEYSTORAGEFLAGS_T3172352629_H
#define X509KEYSTORAGEFLAGS_T3172352629_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.X509Certificates.X509KeyStorageFlags
struct  X509KeyStorageFlags_t3172352629 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509KeyStorageFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(X509KeyStorageFlags_t3172352629, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // X509KEYSTORAGEFLAGS_T3172352629_H
#ifndef BINARYELEMENT_T3565312067_H
#define BINARYELEMENT_T3565312067_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryElement
struct  BinaryElement_t3565312067 
{
public:
	// System.Byte System.Runtime.Serialization.Formatters.Binary.BinaryElement::value__
	uint8_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(BinaryElement_t3565312067, ___value___1)); }
	inline uint8_t get_value___1() const { return ___value___1; }
	inline uint8_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(uint8_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYELEMENT_T3565312067_H
#ifndef STREAMINGCONTEXTSTATES_T958393866_H
#define STREAMINGCONTEXTSTATES_T958393866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_t958393866 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(StreamingContextStates_t958393866, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STREAMINGCONTEXTSTATES_T958393866_H
#ifndef WELLKNOWNOBJECTMODE_T2930458831_H
#define WELLKNOWNOBJECTMODE_T2930458831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownObjectMode
struct  WellKnownObjectMode_t2930458831 
{
public:
	// System.Int32 System.Runtime.Remoting.WellKnownObjectMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(WellKnownObjectMode_t2930458831, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNOBJECTMODE_T2930458831_H
#ifndef SERIALIZATIONEXCEPTION_T1925194324_H
#define SERIALIZATIONEXCEPTION_T1925194324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationException
struct  SerializationException_t1925194324  : public SystemException_t2101658722
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZATIONEXCEPTION_T1925194324_H
#ifndef SINGLECALLIDENTITY_T386886573_H
#define SINGLECALLIDENTITY_T386886573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.SingleCallIdentity
struct  SingleCallIdentity_t386886573  : public ServerIdentity_t2585654465
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLECALLIDENTITY_T386886573_H
#ifndef MULTICASTDELEGATE_T764574315_H
#define MULTICASTDELEGATE_T764574315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t764574315  : public Delegate_t360127155
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t764574315 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t764574315 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t764574315, ___prev_9)); }
	inline MulticastDelegate_t764574315 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t764574315 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t764574315 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t764574315, ___kpm_next_10)); }
	inline MulticastDelegate_t764574315 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t764574315 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t764574315 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T764574315_H
#ifndef SYMMETRICALGORITHM_T1843873266_H
#define SYMMETRICALGORITHM_T1843873266_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.SymmetricAlgorithm
struct  SymmetricAlgorithm_t1843873266  : public RuntimeObject
{
public:
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::BlockSizeValue
	int32_t ___BlockSizeValue_0;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::IVValue
	ByteU5BU5D_t146018489* ___IVValue_1;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_2;
	// System.Byte[] System.Security.Cryptography.SymmetricAlgorithm::KeyValue
	ByteU5BU5D_t146018489* ___KeyValue_3;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalBlockSizesValue
	KeySizesU5BU5D_t1962407749* ___LegalBlockSizesValue_4;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.SymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_t1962407749* ___LegalKeySizesValue_5;
	// System.Int32 System.Security.Cryptography.SymmetricAlgorithm::FeedbackSizeValue
	int32_t ___FeedbackSizeValue_6;
	// System.Security.Cryptography.CipherMode System.Security.Cryptography.SymmetricAlgorithm::ModeValue
	int32_t ___ModeValue_7;
	// System.Security.Cryptography.PaddingMode System.Security.Cryptography.SymmetricAlgorithm::PaddingValue
	int32_t ___PaddingValue_8;
	// System.Boolean System.Security.Cryptography.SymmetricAlgorithm::m_disposed
	bool ___m_disposed_9;

public:
	inline static int32_t get_offset_of_BlockSizeValue_0() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___BlockSizeValue_0)); }
	inline int32_t get_BlockSizeValue_0() const { return ___BlockSizeValue_0; }
	inline int32_t* get_address_of_BlockSizeValue_0() { return &___BlockSizeValue_0; }
	inline void set_BlockSizeValue_0(int32_t value)
	{
		___BlockSizeValue_0 = value;
	}

	inline static int32_t get_offset_of_IVValue_1() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___IVValue_1)); }
	inline ByteU5BU5D_t146018489* get_IVValue_1() const { return ___IVValue_1; }
	inline ByteU5BU5D_t146018489** get_address_of_IVValue_1() { return &___IVValue_1; }
	inline void set_IVValue_1(ByteU5BU5D_t146018489* value)
	{
		___IVValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___IVValue_1), value);
	}

	inline static int32_t get_offset_of_KeySizeValue_2() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___KeySizeValue_2)); }
	inline int32_t get_KeySizeValue_2() const { return ___KeySizeValue_2; }
	inline int32_t* get_address_of_KeySizeValue_2() { return &___KeySizeValue_2; }
	inline void set_KeySizeValue_2(int32_t value)
	{
		___KeySizeValue_2 = value;
	}

	inline static int32_t get_offset_of_KeyValue_3() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___KeyValue_3)); }
	inline ByteU5BU5D_t146018489* get_KeyValue_3() const { return ___KeyValue_3; }
	inline ByteU5BU5D_t146018489** get_address_of_KeyValue_3() { return &___KeyValue_3; }
	inline void set_KeyValue_3(ByteU5BU5D_t146018489* value)
	{
		___KeyValue_3 = value;
		Il2CppCodeGenWriteBarrier((&___KeyValue_3), value);
	}

	inline static int32_t get_offset_of_LegalBlockSizesValue_4() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___LegalBlockSizesValue_4)); }
	inline KeySizesU5BU5D_t1962407749* get_LegalBlockSizesValue_4() const { return ___LegalBlockSizesValue_4; }
	inline KeySizesU5BU5D_t1962407749** get_address_of_LegalBlockSizesValue_4() { return &___LegalBlockSizesValue_4; }
	inline void set_LegalBlockSizesValue_4(KeySizesU5BU5D_t1962407749* value)
	{
		___LegalBlockSizesValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___LegalBlockSizesValue_4), value);
	}

	inline static int32_t get_offset_of_LegalKeySizesValue_5() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___LegalKeySizesValue_5)); }
	inline KeySizesU5BU5D_t1962407749* get_LegalKeySizesValue_5() const { return ___LegalKeySizesValue_5; }
	inline KeySizesU5BU5D_t1962407749** get_address_of_LegalKeySizesValue_5() { return &___LegalKeySizesValue_5; }
	inline void set_LegalKeySizesValue_5(KeySizesU5BU5D_t1962407749* value)
	{
		___LegalKeySizesValue_5 = value;
		Il2CppCodeGenWriteBarrier((&___LegalKeySizesValue_5), value);
	}

	inline static int32_t get_offset_of_FeedbackSizeValue_6() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___FeedbackSizeValue_6)); }
	inline int32_t get_FeedbackSizeValue_6() const { return ___FeedbackSizeValue_6; }
	inline int32_t* get_address_of_FeedbackSizeValue_6() { return &___FeedbackSizeValue_6; }
	inline void set_FeedbackSizeValue_6(int32_t value)
	{
		___FeedbackSizeValue_6 = value;
	}

	inline static int32_t get_offset_of_ModeValue_7() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___ModeValue_7)); }
	inline int32_t get_ModeValue_7() const { return ___ModeValue_7; }
	inline int32_t* get_address_of_ModeValue_7() { return &___ModeValue_7; }
	inline void set_ModeValue_7(int32_t value)
	{
		___ModeValue_7 = value;
	}

	inline static int32_t get_offset_of_PaddingValue_8() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___PaddingValue_8)); }
	inline int32_t get_PaddingValue_8() const { return ___PaddingValue_8; }
	inline int32_t* get_address_of_PaddingValue_8() { return &___PaddingValue_8; }
	inline void set_PaddingValue_8(int32_t value)
	{
		___PaddingValue_8 = value;
	}

	inline static int32_t get_offset_of_m_disposed_9() { return static_cast<int32_t>(offsetof(SymmetricAlgorithm_t1843873266, ___m_disposed_9)); }
	inline bool get_m_disposed_9() const { return ___m_disposed_9; }
	inline bool* get_address_of_m_disposed_9() { return &___m_disposed_9; }
	inline void set_m_disposed_9(bool value)
	{
		___m_disposed_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYMMETRICALGORITHM_T1843873266_H
#ifndef STREAMINGCONTEXT_T1606507491_H
#define STREAMINGCONTEXT_T1606507491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t1606507491 
{
public:
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::state
	int32_t ___state_0;
	// System.Object System.Runtime.Serialization.StreamingContext::additional
	RuntimeObject * ___additional_1;

public:
	inline static int32_t get_offset_of_state_0() { return static_cast<int32_t>(offsetof(StreamingContext_t1606507491, ___state_0)); }
	inline int32_t get_state_0() const { return ___state_0; }
	inline int32_t* get_address_of_state_0() { return &___state_0; }
	inline void set_state_0(int32_t value)
	{
		___state_0 = value;
	}

	inline static int32_t get_offset_of_additional_1() { return static_cast<int32_t>(offsetof(StreamingContext_t1606507491, ___additional_1)); }
	inline RuntimeObject * get_additional_1() const { return ___additional_1; }
	inline RuntimeObject ** get_address_of_additional_1() { return &___additional_1; }
	inline void set_additional_1(RuntimeObject * value)
	{
		___additional_1 = value;
		Il2CppCodeGenWriteBarrier((&___additional_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1606507491_marshaled_pinvoke
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t1606507491_marshaled_com
{
	int32_t ___state_0;
	Il2CppIUnknown* ___additional_1;
};
#endif // STREAMINGCONTEXT_T1606507491_H
#ifndef OBJECTRECORD_T1066425247_H
#define OBJECTRECORD_T1066425247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectRecord
struct  ObjectRecord_t1066425247  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecordStatus System.Runtime.Serialization.ObjectRecord::Status
	uint8_t ___Status_0;
	// System.Object System.Runtime.Serialization.ObjectRecord::OriginalObject
	RuntimeObject * ___OriginalObject_1;
	// System.Object System.Runtime.Serialization.ObjectRecord::ObjectInstance
	RuntimeObject * ___ObjectInstance_2;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::ObjectID
	int64_t ___ObjectID_3;
	// System.Runtime.Serialization.SerializationInfo System.Runtime.Serialization.ObjectRecord::Info
	SerializationInfo_t2311277078 * ___Info_4;
	// System.Int64 System.Runtime.Serialization.ObjectRecord::IdOfContainingObj
	int64_t ___IdOfContainingObj_5;
	// System.Runtime.Serialization.ISerializationSurrogate System.Runtime.Serialization.ObjectRecord::Surrogate
	RuntimeObject* ___Surrogate_6;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectRecord::SurrogateSelector
	RuntimeObject* ___SurrogateSelector_7;
	// System.Reflection.MemberInfo System.Runtime.Serialization.ObjectRecord::Member
	MemberInfo_t * ___Member_8;
	// System.Int32[] System.Runtime.Serialization.ObjectRecord::ArrayIndex
	Int32U5BU5D_t2684699320* ___ArrayIndex_9;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsContainer
	BaseFixupRecord_t2130346789 * ___FixupChainAsContainer_10;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.ObjectRecord::FixupChainAsRequired
	BaseFixupRecord_t2130346789 * ___FixupChainAsRequired_11;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectRecord::Next
	ObjectRecord_t1066425247 * ___Next_12;

public:
	inline static int32_t get_offset_of_Status_0() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___Status_0)); }
	inline uint8_t get_Status_0() const { return ___Status_0; }
	inline uint8_t* get_address_of_Status_0() { return &___Status_0; }
	inline void set_Status_0(uint8_t value)
	{
		___Status_0 = value;
	}

	inline static int32_t get_offset_of_OriginalObject_1() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___OriginalObject_1)); }
	inline RuntimeObject * get_OriginalObject_1() const { return ___OriginalObject_1; }
	inline RuntimeObject ** get_address_of_OriginalObject_1() { return &___OriginalObject_1; }
	inline void set_OriginalObject_1(RuntimeObject * value)
	{
		___OriginalObject_1 = value;
		Il2CppCodeGenWriteBarrier((&___OriginalObject_1), value);
	}

	inline static int32_t get_offset_of_ObjectInstance_2() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___ObjectInstance_2)); }
	inline RuntimeObject * get_ObjectInstance_2() const { return ___ObjectInstance_2; }
	inline RuntimeObject ** get_address_of_ObjectInstance_2() { return &___ObjectInstance_2; }
	inline void set_ObjectInstance_2(RuntimeObject * value)
	{
		___ObjectInstance_2 = value;
		Il2CppCodeGenWriteBarrier((&___ObjectInstance_2), value);
	}

	inline static int32_t get_offset_of_ObjectID_3() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___ObjectID_3)); }
	inline int64_t get_ObjectID_3() const { return ___ObjectID_3; }
	inline int64_t* get_address_of_ObjectID_3() { return &___ObjectID_3; }
	inline void set_ObjectID_3(int64_t value)
	{
		___ObjectID_3 = value;
	}

	inline static int32_t get_offset_of_Info_4() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___Info_4)); }
	inline SerializationInfo_t2311277078 * get_Info_4() const { return ___Info_4; }
	inline SerializationInfo_t2311277078 ** get_address_of_Info_4() { return &___Info_4; }
	inline void set_Info_4(SerializationInfo_t2311277078 * value)
	{
		___Info_4 = value;
		Il2CppCodeGenWriteBarrier((&___Info_4), value);
	}

	inline static int32_t get_offset_of_IdOfContainingObj_5() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___IdOfContainingObj_5)); }
	inline int64_t get_IdOfContainingObj_5() const { return ___IdOfContainingObj_5; }
	inline int64_t* get_address_of_IdOfContainingObj_5() { return &___IdOfContainingObj_5; }
	inline void set_IdOfContainingObj_5(int64_t value)
	{
		___IdOfContainingObj_5 = value;
	}

	inline static int32_t get_offset_of_Surrogate_6() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___Surrogate_6)); }
	inline RuntimeObject* get_Surrogate_6() const { return ___Surrogate_6; }
	inline RuntimeObject** get_address_of_Surrogate_6() { return &___Surrogate_6; }
	inline void set_Surrogate_6(RuntimeObject* value)
	{
		___Surrogate_6 = value;
		Il2CppCodeGenWriteBarrier((&___Surrogate_6), value);
	}

	inline static int32_t get_offset_of_SurrogateSelector_7() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___SurrogateSelector_7)); }
	inline RuntimeObject* get_SurrogateSelector_7() const { return ___SurrogateSelector_7; }
	inline RuntimeObject** get_address_of_SurrogateSelector_7() { return &___SurrogateSelector_7; }
	inline void set_SurrogateSelector_7(RuntimeObject* value)
	{
		___SurrogateSelector_7 = value;
		Il2CppCodeGenWriteBarrier((&___SurrogateSelector_7), value);
	}

	inline static int32_t get_offset_of_Member_8() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___Member_8)); }
	inline MemberInfo_t * get_Member_8() const { return ___Member_8; }
	inline MemberInfo_t ** get_address_of_Member_8() { return &___Member_8; }
	inline void set_Member_8(MemberInfo_t * value)
	{
		___Member_8 = value;
		Il2CppCodeGenWriteBarrier((&___Member_8), value);
	}

	inline static int32_t get_offset_of_ArrayIndex_9() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___ArrayIndex_9)); }
	inline Int32U5BU5D_t2684699320* get_ArrayIndex_9() const { return ___ArrayIndex_9; }
	inline Int32U5BU5D_t2684699320** get_address_of_ArrayIndex_9() { return &___ArrayIndex_9; }
	inline void set_ArrayIndex_9(Int32U5BU5D_t2684699320* value)
	{
		___ArrayIndex_9 = value;
		Il2CppCodeGenWriteBarrier((&___ArrayIndex_9), value);
	}

	inline static int32_t get_offset_of_FixupChainAsContainer_10() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___FixupChainAsContainer_10)); }
	inline BaseFixupRecord_t2130346789 * get_FixupChainAsContainer_10() const { return ___FixupChainAsContainer_10; }
	inline BaseFixupRecord_t2130346789 ** get_address_of_FixupChainAsContainer_10() { return &___FixupChainAsContainer_10; }
	inline void set_FixupChainAsContainer_10(BaseFixupRecord_t2130346789 * value)
	{
		___FixupChainAsContainer_10 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsContainer_10), value);
	}

	inline static int32_t get_offset_of_FixupChainAsRequired_11() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___FixupChainAsRequired_11)); }
	inline BaseFixupRecord_t2130346789 * get_FixupChainAsRequired_11() const { return ___FixupChainAsRequired_11; }
	inline BaseFixupRecord_t2130346789 ** get_address_of_FixupChainAsRequired_11() { return &___FixupChainAsRequired_11; }
	inline void set_FixupChainAsRequired_11(BaseFixupRecord_t2130346789 * value)
	{
		___FixupChainAsRequired_11 = value;
		Il2CppCodeGenWriteBarrier((&___FixupChainAsRequired_11), value);
	}

	inline static int32_t get_offset_of_Next_12() { return static_cast<int32_t>(offsetof(ObjectRecord_t1066425247, ___Next_12)); }
	inline ObjectRecord_t1066425247 * get_Next_12() const { return ___Next_12; }
	inline ObjectRecord_t1066425247 ** get_address_of_Next_12() { return &___Next_12; }
	inline void set_Next_12(ObjectRecord_t1066425247 * value)
	{
		___Next_12 = value;
		Il2CppCodeGenWriteBarrier((&___Next_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTRECORD_T1066425247_H
#ifndef REMOTINGSERVICES_T3486501519_H
#define REMOTINGSERVICES_T3486501519_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.RemotingServices
struct  RemotingServices_t3486501519  : public RuntimeObject
{
public:

public:
};

struct RemotingServices_t3486501519_StaticFields
{
public:
	// System.Collections.Hashtable System.Runtime.Remoting.RemotingServices::uri_hash
	Hashtable_t487388352 * ___uri_hash_0;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_serializationFormatter
	BinaryFormatter_t3554637334 * ____serializationFormatter_1;
	// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter System.Runtime.Remoting.RemotingServices::_deserializationFormatter
	BinaryFormatter_t3554637334 * ____deserializationFormatter_2;
	// System.String System.Runtime.Remoting.RemotingServices::app_id
	String_t* ___app_id_3;
	// System.Int32 System.Runtime.Remoting.RemotingServices::next_id
	int32_t ___next_id_4;
	// System.Reflection.BindingFlags System.Runtime.Remoting.RemotingServices::methodBindings
	int32_t ___methodBindings_5;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldSetterMethod
	MethodInfo_t * ___FieldSetterMethod_6;
	// System.Reflection.MethodInfo System.Runtime.Remoting.RemotingServices::FieldGetterMethod
	MethodInfo_t * ___FieldGetterMethod_7;

public:
	inline static int32_t get_offset_of_uri_hash_0() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___uri_hash_0)); }
	inline Hashtable_t487388352 * get_uri_hash_0() const { return ___uri_hash_0; }
	inline Hashtable_t487388352 ** get_address_of_uri_hash_0() { return &___uri_hash_0; }
	inline void set_uri_hash_0(Hashtable_t487388352 * value)
	{
		___uri_hash_0 = value;
		Il2CppCodeGenWriteBarrier((&___uri_hash_0), value);
	}

	inline static int32_t get_offset_of__serializationFormatter_1() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ____serializationFormatter_1)); }
	inline BinaryFormatter_t3554637334 * get__serializationFormatter_1() const { return ____serializationFormatter_1; }
	inline BinaryFormatter_t3554637334 ** get_address_of__serializationFormatter_1() { return &____serializationFormatter_1; }
	inline void set__serializationFormatter_1(BinaryFormatter_t3554637334 * value)
	{
		____serializationFormatter_1 = value;
		Il2CppCodeGenWriteBarrier((&____serializationFormatter_1), value);
	}

	inline static int32_t get_offset_of__deserializationFormatter_2() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ____deserializationFormatter_2)); }
	inline BinaryFormatter_t3554637334 * get__deserializationFormatter_2() const { return ____deserializationFormatter_2; }
	inline BinaryFormatter_t3554637334 ** get_address_of__deserializationFormatter_2() { return &____deserializationFormatter_2; }
	inline void set__deserializationFormatter_2(BinaryFormatter_t3554637334 * value)
	{
		____deserializationFormatter_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializationFormatter_2), value);
	}

	inline static int32_t get_offset_of_app_id_3() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___app_id_3)); }
	inline String_t* get_app_id_3() const { return ___app_id_3; }
	inline String_t** get_address_of_app_id_3() { return &___app_id_3; }
	inline void set_app_id_3(String_t* value)
	{
		___app_id_3 = value;
		Il2CppCodeGenWriteBarrier((&___app_id_3), value);
	}

	inline static int32_t get_offset_of_next_id_4() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___next_id_4)); }
	inline int32_t get_next_id_4() const { return ___next_id_4; }
	inline int32_t* get_address_of_next_id_4() { return &___next_id_4; }
	inline void set_next_id_4(int32_t value)
	{
		___next_id_4 = value;
	}

	inline static int32_t get_offset_of_methodBindings_5() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___methodBindings_5)); }
	inline int32_t get_methodBindings_5() const { return ___methodBindings_5; }
	inline int32_t* get_address_of_methodBindings_5() { return &___methodBindings_5; }
	inline void set_methodBindings_5(int32_t value)
	{
		___methodBindings_5 = value;
	}

	inline static int32_t get_offset_of_FieldSetterMethod_6() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___FieldSetterMethod_6)); }
	inline MethodInfo_t * get_FieldSetterMethod_6() const { return ___FieldSetterMethod_6; }
	inline MethodInfo_t ** get_address_of_FieldSetterMethod_6() { return &___FieldSetterMethod_6; }
	inline void set_FieldSetterMethod_6(MethodInfo_t * value)
	{
		___FieldSetterMethod_6 = value;
		Il2CppCodeGenWriteBarrier((&___FieldSetterMethod_6), value);
	}

	inline static int32_t get_offset_of_FieldGetterMethod_7() { return static_cast<int32_t>(offsetof(RemotingServices_t3486501519_StaticFields, ___FieldGetterMethod_7)); }
	inline MethodInfo_t * get_FieldGetterMethod_7() const { return ___FieldGetterMethod_7; }
	inline MethodInfo_t ** get_address_of_FieldGetterMethod_7() { return &___FieldGetterMethod_7; }
	inline void set_FieldGetterMethod_7(MethodInfo_t * value)
	{
		___FieldGetterMethod_7 = value;
		Il2CppCodeGenWriteBarrier((&___FieldGetterMethod_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTINGSERVICES_T3486501519_H
#ifndef CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424390842_H
#define CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424390842_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CryptographicUnexpectedOperationException
struct  CryptographicUnexpectedOperationException_t424390842  : public CryptographicException_t1462342019
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CRYPTOGRAPHICUNEXPECTEDOPERATIONEXCEPTION_T424390842_H
#ifndef WELLKNOWNSERVICETYPEENTRY_T2402109986_H
#define WELLKNOWNSERVICETYPEENTRY_T2402109986_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Remoting.WellKnownServiceTypeEntry
struct  WellKnownServiceTypeEntry_t2402109986  : public TypeEntry_t3811347551
{
public:
	// System.Type System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_type
	Type_t * ___obj_type_2;
	// System.String System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_uri
	String_t* ___obj_uri_3;
	// System.Runtime.Remoting.WellKnownObjectMode System.Runtime.Remoting.WellKnownServiceTypeEntry::obj_mode
	int32_t ___obj_mode_4;

public:
	inline static int32_t get_offset_of_obj_type_2() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2402109986, ___obj_type_2)); }
	inline Type_t * get_obj_type_2() const { return ___obj_type_2; }
	inline Type_t ** get_address_of_obj_type_2() { return &___obj_type_2; }
	inline void set_obj_type_2(Type_t * value)
	{
		___obj_type_2 = value;
		Il2CppCodeGenWriteBarrier((&___obj_type_2), value);
	}

	inline static int32_t get_offset_of_obj_uri_3() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2402109986, ___obj_uri_3)); }
	inline String_t* get_obj_uri_3() const { return ___obj_uri_3; }
	inline String_t** get_address_of_obj_uri_3() { return &___obj_uri_3; }
	inline void set_obj_uri_3(String_t* value)
	{
		___obj_uri_3 = value;
		Il2CppCodeGenWriteBarrier((&___obj_uri_3), value);
	}

	inline static int32_t get_offset_of_obj_mode_4() { return static_cast<int32_t>(offsetof(WellKnownServiceTypeEntry_t2402109986, ___obj_mode_4)); }
	inline int32_t get_obj_mode_4() const { return ___obj_mode_4; }
	inline int32_t* get_address_of_obj_mode_4() { return &___obj_mode_4; }
	inline void set_obj_mode_4(int32_t value)
	{
		___obj_mode_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WELLKNOWNSERVICETYPEENTRY_T2402109986_H
#ifndef CSPPARAMETERS_T3726936782_H
#define CSPPARAMETERS_T3726936782_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.CspParameters
struct  CspParameters_t3726936782  : public RuntimeObject
{
public:
	// System.Security.Cryptography.CspProviderFlags System.Security.Cryptography.CspParameters::_Flags
	int32_t ____Flags_0;
	// System.String System.Security.Cryptography.CspParameters::KeyContainerName
	String_t* ___KeyContainerName_1;
	// System.Int32 System.Security.Cryptography.CspParameters::KeyNumber
	int32_t ___KeyNumber_2;
	// System.String System.Security.Cryptography.CspParameters::ProviderName
	String_t* ___ProviderName_3;
	// System.Int32 System.Security.Cryptography.CspParameters::ProviderType
	int32_t ___ProviderType_4;

public:
	inline static int32_t get_offset_of__Flags_0() { return static_cast<int32_t>(offsetof(CspParameters_t3726936782, ____Flags_0)); }
	inline int32_t get__Flags_0() const { return ____Flags_0; }
	inline int32_t* get_address_of__Flags_0() { return &____Flags_0; }
	inline void set__Flags_0(int32_t value)
	{
		____Flags_0 = value;
	}

	inline static int32_t get_offset_of_KeyContainerName_1() { return static_cast<int32_t>(offsetof(CspParameters_t3726936782, ___KeyContainerName_1)); }
	inline String_t* get_KeyContainerName_1() const { return ___KeyContainerName_1; }
	inline String_t** get_address_of_KeyContainerName_1() { return &___KeyContainerName_1; }
	inline void set_KeyContainerName_1(String_t* value)
	{
		___KeyContainerName_1 = value;
		Il2CppCodeGenWriteBarrier((&___KeyContainerName_1), value);
	}

	inline static int32_t get_offset_of_KeyNumber_2() { return static_cast<int32_t>(offsetof(CspParameters_t3726936782, ___KeyNumber_2)); }
	inline int32_t get_KeyNumber_2() const { return ___KeyNumber_2; }
	inline int32_t* get_address_of_KeyNumber_2() { return &___KeyNumber_2; }
	inline void set_KeyNumber_2(int32_t value)
	{
		___KeyNumber_2 = value;
	}

	inline static int32_t get_offset_of_ProviderName_3() { return static_cast<int32_t>(offsetof(CspParameters_t3726936782, ___ProviderName_3)); }
	inline String_t* get_ProviderName_3() const { return ___ProviderName_3; }
	inline String_t** get_address_of_ProviderName_3() { return &___ProviderName_3; }
	inline void set_ProviderName_3(String_t* value)
	{
		___ProviderName_3 = value;
		Il2CppCodeGenWriteBarrier((&___ProviderName_3), value);
	}

	inline static int32_t get_offset_of_ProviderType_4() { return static_cast<int32_t>(offsetof(CspParameters_t3726936782, ___ProviderType_4)); }
	inline int32_t get_ProviderType_4() const { return ___ProviderType_4; }
	inline int32_t* get_address_of_ProviderType_4() { return &___ProviderType_4; }
	inline void set_ProviderType_4(int32_t value)
	{
		___ProviderType_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CSPPARAMETERS_T3726936782_H
#ifndef BINARYFORMATTER_T3554637334_H
#define BINARYFORMATTER_T3554637334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_t3554637334  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::assembly_format
	int32_t ___assembly_format_0;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::binder
	SerializationBinder_t2557727724 * ___binder_1;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::context
	StreamingContext_t1606507491  ___context_2;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::surrogate_selector
	RuntimeObject* ___surrogate_selector_3;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::type_format
	int32_t ___type_format_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::filter_level
	int32_t ___filter_level_5;

public:
	inline static int32_t get_offset_of_assembly_format_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___assembly_format_0)); }
	inline int32_t get_assembly_format_0() const { return ___assembly_format_0; }
	inline int32_t* get_address_of_assembly_format_0() { return &___assembly_format_0; }
	inline void set_assembly_format_0(int32_t value)
	{
		___assembly_format_0 = value;
	}

	inline static int32_t get_offset_of_binder_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___binder_1)); }
	inline SerializationBinder_t2557727724 * get_binder_1() const { return ___binder_1; }
	inline SerializationBinder_t2557727724 ** get_address_of_binder_1() { return &___binder_1; }
	inline void set_binder_1(SerializationBinder_t2557727724 * value)
	{
		___binder_1 = value;
		Il2CppCodeGenWriteBarrier((&___binder_1), value);
	}

	inline static int32_t get_offset_of_context_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___context_2)); }
	inline StreamingContext_t1606507491  get_context_2() const { return ___context_2; }
	inline StreamingContext_t1606507491 * get_address_of_context_2() { return &___context_2; }
	inline void set_context_2(StreamingContext_t1606507491  value)
	{
		___context_2 = value;
	}

	inline static int32_t get_offset_of_surrogate_selector_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___surrogate_selector_3)); }
	inline RuntimeObject* get_surrogate_selector_3() const { return ___surrogate_selector_3; }
	inline RuntimeObject** get_address_of_surrogate_selector_3() { return &___surrogate_selector_3; }
	inline void set_surrogate_selector_3(RuntimeObject* value)
	{
		___surrogate_selector_3 = value;
		Il2CppCodeGenWriteBarrier((&___surrogate_selector_3), value);
	}

	inline static int32_t get_offset_of_type_format_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___type_format_4)); }
	inline int32_t get_type_format_4() const { return ___type_format_4; }
	inline int32_t* get_address_of_type_format_4() { return &___type_format_4; }
	inline void set_type_format_4(int32_t value)
	{
		___type_format_4 = value;
	}

	inline static int32_t get_offset_of_filter_level_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334, ___filter_level_5)); }
	inline int32_t get_filter_level_5() const { return ___filter_level_5; }
	inline int32_t* get_address_of_filter_level_5() { return &___filter_level_5; }
	inline void set_filter_level_5(int32_t value)
	{
		___filter_level_5 = value;
	}
};

struct BinaryFormatter_t3554637334_StaticFields
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::<DefaultSurrogateSelector>k__BackingField
	RuntimeObject* ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_t3554637334_StaticFields, ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6)); }
	inline RuntimeObject* get_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() const { return ___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline RuntimeObject** get_address_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6() { return &___U3CDefaultSurrogateSelectorU3Ek__BackingField_6; }
	inline void set_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(RuntimeObject* value)
	{
		___U3CDefaultSurrogateSelectorU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CDefaultSurrogateSelectorU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINARYFORMATTER_T3554637334_H
#ifndef OBJECTREADER_T1270359987_H
#define OBJECTREADER_T1270359987_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.Formatters.Binary.ObjectReader
struct  ObjectReader_t1270359987  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.ObjectReader::_surrogateSelector
	RuntimeObject* ____surrogateSelector_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.ObjectReader::_context
	StreamingContext_t1606507491  ____context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.ObjectReader::_binder
	SerializationBinder_t2557727724 * ____binder_2;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.ObjectReader::_filterLevel
	int32_t ____filterLevel_3;
	// System.Runtime.Serialization.ObjectManager System.Runtime.Serialization.Formatters.Binary.ObjectReader::_manager
	ObjectManager_t2866732585 * ____manager_4;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_registeredAssemblies
	Hashtable_t487388352 * ____registeredAssemblies_5;
	// System.Collections.Hashtable System.Runtime.Serialization.Formatters.Binary.ObjectReader::_typeMetadataCache
	Hashtable_t487388352 * ____typeMetadataCache_6;
	// System.Object System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObject
	RuntimeObject * ____lastObject_7;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_lastObjectID
	int64_t ____lastObjectID_8;
	// System.Int64 System.Runtime.Serialization.Formatters.Binary.ObjectReader::_rootObjectID
	int64_t ____rootObjectID_9;
	// System.Byte[] System.Runtime.Serialization.Formatters.Binary.ObjectReader::arrayBuffer
	ByteU5BU5D_t146018489* ___arrayBuffer_10;
	// System.Int32 System.Runtime.Serialization.Formatters.Binary.ObjectReader::ArrayBufferLength
	int32_t ___ArrayBufferLength_11;

public:
	inline static int32_t get_offset_of__surrogateSelector_0() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____surrogateSelector_0)); }
	inline RuntimeObject* get__surrogateSelector_0() const { return ____surrogateSelector_0; }
	inline RuntimeObject** get_address_of__surrogateSelector_0() { return &____surrogateSelector_0; }
	inline void set__surrogateSelector_0(RuntimeObject* value)
	{
		____surrogateSelector_0 = value;
		Il2CppCodeGenWriteBarrier((&____surrogateSelector_0), value);
	}

	inline static int32_t get_offset_of__context_1() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____context_1)); }
	inline StreamingContext_t1606507491  get__context_1() const { return ____context_1; }
	inline StreamingContext_t1606507491 * get_address_of__context_1() { return &____context_1; }
	inline void set__context_1(StreamingContext_t1606507491  value)
	{
		____context_1 = value;
	}

	inline static int32_t get_offset_of__binder_2() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____binder_2)); }
	inline SerializationBinder_t2557727724 * get__binder_2() const { return ____binder_2; }
	inline SerializationBinder_t2557727724 ** get_address_of__binder_2() { return &____binder_2; }
	inline void set__binder_2(SerializationBinder_t2557727724 * value)
	{
		____binder_2 = value;
		Il2CppCodeGenWriteBarrier((&____binder_2), value);
	}

	inline static int32_t get_offset_of__filterLevel_3() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____filterLevel_3)); }
	inline int32_t get__filterLevel_3() const { return ____filterLevel_3; }
	inline int32_t* get_address_of__filterLevel_3() { return &____filterLevel_3; }
	inline void set__filterLevel_3(int32_t value)
	{
		____filterLevel_3 = value;
	}

	inline static int32_t get_offset_of__manager_4() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____manager_4)); }
	inline ObjectManager_t2866732585 * get__manager_4() const { return ____manager_4; }
	inline ObjectManager_t2866732585 ** get_address_of__manager_4() { return &____manager_4; }
	inline void set__manager_4(ObjectManager_t2866732585 * value)
	{
		____manager_4 = value;
		Il2CppCodeGenWriteBarrier((&____manager_4), value);
	}

	inline static int32_t get_offset_of__registeredAssemblies_5() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____registeredAssemblies_5)); }
	inline Hashtable_t487388352 * get__registeredAssemblies_5() const { return ____registeredAssemblies_5; }
	inline Hashtable_t487388352 ** get_address_of__registeredAssemblies_5() { return &____registeredAssemblies_5; }
	inline void set__registeredAssemblies_5(Hashtable_t487388352 * value)
	{
		____registeredAssemblies_5 = value;
		Il2CppCodeGenWriteBarrier((&____registeredAssemblies_5), value);
	}

	inline static int32_t get_offset_of__typeMetadataCache_6() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____typeMetadataCache_6)); }
	inline Hashtable_t487388352 * get__typeMetadataCache_6() const { return ____typeMetadataCache_6; }
	inline Hashtable_t487388352 ** get_address_of__typeMetadataCache_6() { return &____typeMetadataCache_6; }
	inline void set__typeMetadataCache_6(Hashtable_t487388352 * value)
	{
		____typeMetadataCache_6 = value;
		Il2CppCodeGenWriteBarrier((&____typeMetadataCache_6), value);
	}

	inline static int32_t get_offset_of__lastObject_7() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____lastObject_7)); }
	inline RuntimeObject * get__lastObject_7() const { return ____lastObject_7; }
	inline RuntimeObject ** get_address_of__lastObject_7() { return &____lastObject_7; }
	inline void set__lastObject_7(RuntimeObject * value)
	{
		____lastObject_7 = value;
		Il2CppCodeGenWriteBarrier((&____lastObject_7), value);
	}

	inline static int32_t get_offset_of__lastObjectID_8() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____lastObjectID_8)); }
	inline int64_t get__lastObjectID_8() const { return ____lastObjectID_8; }
	inline int64_t* get_address_of__lastObjectID_8() { return &____lastObjectID_8; }
	inline void set__lastObjectID_8(int64_t value)
	{
		____lastObjectID_8 = value;
	}

	inline static int32_t get_offset_of__rootObjectID_9() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ____rootObjectID_9)); }
	inline int64_t get__rootObjectID_9() const { return ____rootObjectID_9; }
	inline int64_t* get_address_of__rootObjectID_9() { return &____rootObjectID_9; }
	inline void set__rootObjectID_9(int64_t value)
	{
		____rootObjectID_9 = value;
	}

	inline static int32_t get_offset_of_arrayBuffer_10() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ___arrayBuffer_10)); }
	inline ByteU5BU5D_t146018489* get_arrayBuffer_10() const { return ___arrayBuffer_10; }
	inline ByteU5BU5D_t146018489** get_address_of_arrayBuffer_10() { return &___arrayBuffer_10; }
	inline void set_arrayBuffer_10(ByteU5BU5D_t146018489* value)
	{
		___arrayBuffer_10 = value;
		Il2CppCodeGenWriteBarrier((&___arrayBuffer_10), value);
	}

	inline static int32_t get_offset_of_ArrayBufferLength_11() { return static_cast<int32_t>(offsetof(ObjectReader_t1270359987, ___ArrayBufferLength_11)); }
	inline int32_t get_ArrayBufferLength_11() const { return ___ArrayBufferLength_11; }
	inline int32_t* get_address_of_ArrayBufferLength_11() { return &___ArrayBufferLength_11; }
	inline void set_ArrayBufferLength_11(int32_t value)
	{
		___ArrayBufferLength_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTREADER_T1270359987_H
#ifndef DES_T2239717501_H
#define DES_T2239717501_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Security.Cryptography.DES
struct  DES_t2239717501  : public SymmetricAlgorithm_t1843873266
{
public:

public:
};

struct DES_t2239717501_StaticFields
{
public:
	// System.Byte[,] System.Security.Cryptography.DES::weakKeys
	ByteU5BU2CU5D_t146018490* ___weakKeys_10;
	// System.Byte[,] System.Security.Cryptography.DES::semiWeakKeys
	ByteU5BU2CU5D_t146018490* ___semiWeakKeys_11;

public:
	inline static int32_t get_offset_of_weakKeys_10() { return static_cast<int32_t>(offsetof(DES_t2239717501_StaticFields, ___weakKeys_10)); }
	inline ByteU5BU2CU5D_t146018490* get_weakKeys_10() const { return ___weakKeys_10; }
	inline ByteU5BU2CU5D_t146018490** get_address_of_weakKeys_10() { return &___weakKeys_10; }
	inline void set_weakKeys_10(ByteU5BU2CU5D_t146018490* value)
	{
		___weakKeys_10 = value;
		Il2CppCodeGenWriteBarrier((&___weakKeys_10), value);
	}

	inline static int32_t get_offset_of_semiWeakKeys_11() { return static_cast<int32_t>(offsetof(DES_t2239717501_StaticFields, ___semiWeakKeys_11)); }
	inline ByteU5BU2CU5D_t146018490* get_semiWeakKeys_11() const { return ___semiWeakKeys_11; }
	inline ByteU5BU2CU5D_t146018490** get_address_of_semiWeakKeys_11() { return &___semiWeakKeys_11; }
	inline void set_semiWeakKeys_11(ByteU5BU2CU5D_t146018490* value)
	{
		___semiWeakKeys_11 = value;
		Il2CppCodeGenWriteBarrier((&___semiWeakKeys_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DES_T2239717501_H
#ifndef OBJECTMANAGER_T2866732585_H
#define OBJECTMANAGER_T2866732585_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.ObjectManager
struct  ObjectManager_t2866732585  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_objectRecordChain
	ObjectRecord_t1066425247 * ____objectRecordChain_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.ObjectManager::_lastObjectRecord
	ObjectRecord_t1066425247 * ____lastObjectRecord_1;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_deserializedRecords
	ArrayList_t1958500939 * ____deserializedRecords_2;
	// System.Collections.ArrayList System.Runtime.Serialization.ObjectManager::_onDeserializedCallbackRecords
	ArrayList_t1958500939 * ____onDeserializedCallbackRecords_3;
	// System.Collections.Hashtable System.Runtime.Serialization.ObjectManager::_objectRecords
	Hashtable_t487388352 * ____objectRecords_4;
	// System.Boolean System.Runtime.Serialization.ObjectManager::_finalFixup
	bool ____finalFixup_5;
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.ObjectManager::_selector
	RuntimeObject* ____selector_6;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.ObjectManager::_context
	StreamingContext_t1606507491  ____context_7;
	// System.Int32 System.Runtime.Serialization.ObjectManager::_registeredObjectsCount
	int32_t ____registeredObjectsCount_8;

public:
	inline static int32_t get_offset_of__objectRecordChain_0() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____objectRecordChain_0)); }
	inline ObjectRecord_t1066425247 * get__objectRecordChain_0() const { return ____objectRecordChain_0; }
	inline ObjectRecord_t1066425247 ** get_address_of__objectRecordChain_0() { return &____objectRecordChain_0; }
	inline void set__objectRecordChain_0(ObjectRecord_t1066425247 * value)
	{
		____objectRecordChain_0 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecordChain_0), value);
	}

	inline static int32_t get_offset_of__lastObjectRecord_1() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____lastObjectRecord_1)); }
	inline ObjectRecord_t1066425247 * get__lastObjectRecord_1() const { return ____lastObjectRecord_1; }
	inline ObjectRecord_t1066425247 ** get_address_of__lastObjectRecord_1() { return &____lastObjectRecord_1; }
	inline void set__lastObjectRecord_1(ObjectRecord_t1066425247 * value)
	{
		____lastObjectRecord_1 = value;
		Il2CppCodeGenWriteBarrier((&____lastObjectRecord_1), value);
	}

	inline static int32_t get_offset_of__deserializedRecords_2() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____deserializedRecords_2)); }
	inline ArrayList_t1958500939 * get__deserializedRecords_2() const { return ____deserializedRecords_2; }
	inline ArrayList_t1958500939 ** get_address_of__deserializedRecords_2() { return &____deserializedRecords_2; }
	inline void set__deserializedRecords_2(ArrayList_t1958500939 * value)
	{
		____deserializedRecords_2 = value;
		Il2CppCodeGenWriteBarrier((&____deserializedRecords_2), value);
	}

	inline static int32_t get_offset_of__onDeserializedCallbackRecords_3() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____onDeserializedCallbackRecords_3)); }
	inline ArrayList_t1958500939 * get__onDeserializedCallbackRecords_3() const { return ____onDeserializedCallbackRecords_3; }
	inline ArrayList_t1958500939 ** get_address_of__onDeserializedCallbackRecords_3() { return &____onDeserializedCallbackRecords_3; }
	inline void set__onDeserializedCallbackRecords_3(ArrayList_t1958500939 * value)
	{
		____onDeserializedCallbackRecords_3 = value;
		Il2CppCodeGenWriteBarrier((&____onDeserializedCallbackRecords_3), value);
	}

	inline static int32_t get_offset_of__objectRecords_4() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____objectRecords_4)); }
	inline Hashtable_t487388352 * get__objectRecords_4() const { return ____objectRecords_4; }
	inline Hashtable_t487388352 ** get_address_of__objectRecords_4() { return &____objectRecords_4; }
	inline void set__objectRecords_4(Hashtable_t487388352 * value)
	{
		____objectRecords_4 = value;
		Il2CppCodeGenWriteBarrier((&____objectRecords_4), value);
	}

	inline static int32_t get_offset_of__finalFixup_5() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____finalFixup_5)); }
	inline bool get__finalFixup_5() const { return ____finalFixup_5; }
	inline bool* get_address_of__finalFixup_5() { return &____finalFixup_5; }
	inline void set__finalFixup_5(bool value)
	{
		____finalFixup_5 = value;
	}

	inline static int32_t get_offset_of__selector_6() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____selector_6)); }
	inline RuntimeObject* get__selector_6() const { return ____selector_6; }
	inline RuntimeObject** get_address_of__selector_6() { return &____selector_6; }
	inline void set__selector_6(RuntimeObject* value)
	{
		____selector_6 = value;
		Il2CppCodeGenWriteBarrier((&____selector_6), value);
	}

	inline static int32_t get_offset_of__context_7() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____context_7)); }
	inline StreamingContext_t1606507491  get__context_7() const { return ____context_7; }
	inline StreamingContext_t1606507491 * get_address_of__context_7() { return &____context_7; }
	inline void set__context_7(StreamingContext_t1606507491  value)
	{
		____context_7 = value;
	}

	inline static int32_t get_offset_of__registeredObjectsCount_8() { return static_cast<int32_t>(offsetof(ObjectManager_t2866732585, ____registeredObjectsCount_8)); }
	inline int32_t get__registeredObjectsCount_8() const { return ____registeredObjectsCount_8; }
	inline int32_t* get_address_of__registeredObjectsCount_8() { return &____registeredObjectsCount_8; }
	inline void set__registeredObjectsCount_8(int32_t value)
	{
		____registeredObjectsCount_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // OBJECTMANAGER_T2866732585_H
#ifndef CALLBACKHANDLER_T1403760267_H
#define CALLBACKHANDLER_T1403760267_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct  CallbackHandler_t1403760267  : public MulticastDelegate_t764574315
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CALLBACKHANDLER_T1403760267_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize500 = { sizeof (ReturnMessage_t3293949582), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable500[13] = 
{
	ReturnMessage_t3293949582::get_offset_of__outArgs_0(),
	ReturnMessage_t3293949582::get_offset_of__args_1(),
	ReturnMessage_t3293949582::get_offset_of__outArgsCount_2(),
	ReturnMessage_t3293949582::get_offset_of__callCtx_3(),
	ReturnMessage_t3293949582::get_offset_of__returnValue_4(),
	ReturnMessage_t3293949582::get_offset_of__uri_5(),
	ReturnMessage_t3293949582::get_offset_of__exception_6(),
	ReturnMessage_t3293949582::get_offset_of__methodBase_7(),
	ReturnMessage_t3293949582::get_offset_of__methodName_8(),
	ReturnMessage_t3293949582::get_offset_of__methodSignature_9(),
	ReturnMessage_t3293949582::get_offset_of__typeName_10(),
	ReturnMessage_t3293949582::get_offset_of__properties_11(),
	ReturnMessage_t3293949582::get_offset_of__inArgInfo_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize501 = { sizeof (ServerContextTerminatorSink_t1957492439), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize502 = { sizeof (ServerObjectTerminatorSink_t3916567029), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable502[1] = 
{
	ServerObjectTerminatorSink_t3916567029::get_offset_of__nextSink_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize503 = { sizeof (StackBuilderSink_t2105036777), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable503[2] = 
{
	StackBuilderSink_t2105036777::get_offset_of__target_0(),
	StackBuilderSink_t2105036777::get_offset_of__rp_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize504 = { sizeof (SoapAttribute_t3145506660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable504[3] = 
{
	SoapAttribute_t3145506660::get_offset_of__useAttribute_0(),
	SoapAttribute_t3145506660::get_offset_of_ProtXmlNamespace_1(),
	SoapAttribute_t3145506660::get_offset_of_ReflectInfo_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize505 = { sizeof (SoapFieldAttribute_t1515225073), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable505[2] = 
{
	SoapFieldAttribute_t1515225073::get_offset_of__elementName_3(),
	SoapFieldAttribute_t1515225073::get_offset_of__isElement_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize506 = { sizeof (SoapMethodAttribute_t335858483), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable506[6] = 
{
	SoapMethodAttribute_t335858483::get_offset_of__responseElement_3(),
	SoapMethodAttribute_t335858483::get_offset_of__responseNamespace_4(),
	SoapMethodAttribute_t335858483::get_offset_of__returnElement_5(),
	SoapMethodAttribute_t335858483::get_offset_of__soapAction_6(),
	SoapMethodAttribute_t335858483::get_offset_of__useAttribute_7(),
	SoapMethodAttribute_t335858483::get_offset_of__namespace_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize507 = { sizeof (SoapParameterAttribute_t3961367023), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize508 = { sizeof (SoapTypeAttribute_t4174234895), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable508[7] = 
{
	SoapTypeAttribute_t4174234895::get_offset_of__useAttribute_3(),
	SoapTypeAttribute_t4174234895::get_offset_of__xmlElementName_4(),
	SoapTypeAttribute_t4174234895::get_offset_of__xmlNamespace_5(),
	SoapTypeAttribute_t4174234895::get_offset_of__xmlTypeName_6(),
	SoapTypeAttribute_t4174234895::get_offset_of__xmlTypeNamespace_7(),
	SoapTypeAttribute_t4174234895::get_offset_of__isType_8(),
	SoapTypeAttribute_t4174234895::get_offset_of__isElement_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize509 = { sizeof (ProxyAttribute_t71460944), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize510 = { sizeof (TransparentProxy_t3649280852), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable510[1] = 
{
	TransparentProxy_t3649280852::get_offset_of__rp_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize511 = { sizeof (RealProxy_t2414300508), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable511[5] = 
{
	RealProxy_t2414300508::get_offset_of_class_to_proxy_0(),
	RealProxy_t2414300508::get_offset_of__targetDomainId_1(),
	RealProxy_t2414300508::get_offset_of__targetUri_2(),
	RealProxy_t2414300508::get_offset_of__objectIdentity_3(),
	RealProxy_t2414300508::get_offset_of__objTP_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize512 = { sizeof (RemotingProxy_t3778350894), -1, sizeof(RemotingProxy_t3778350894_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable512[5] = 
{
	RemotingProxy_t3778350894_StaticFields::get_offset_of__cache_GetTypeMethod_5(),
	RemotingProxy_t3778350894_StaticFields::get_offset_of__cache_GetHashCodeMethod_6(),
	RemotingProxy_t3778350894::get_offset_of__sink_7(),
	RemotingProxy_t3778350894::get_offset_of__hasEnvoySink_8(),
	RemotingProxy_t3778350894::get_offset_of__ctorCall_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize513 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize514 = { sizeof (TrackingServices_t1222604850), -1, sizeof(TrackingServices_t1222604850_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable514[1] = 
{
	TrackingServices_t1222604850_StaticFields::get_offset_of__handlers_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize515 = { sizeof (ActivatedClientTypeEntry_t3039534281), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable515[2] = 
{
	ActivatedClientTypeEntry_t3039534281::get_offset_of_applicationUrl_2(),
	ActivatedClientTypeEntry_t3039534281::get_offset_of_obj_type_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize516 = { sizeof (ActivatedServiceTypeEntry_t3075187956), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable516[1] = 
{
	ActivatedServiceTypeEntry_t3075187956::get_offset_of_obj_type_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize517 = { sizeof (EnvoyInfo_t1026864678), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable517[1] = 
{
	EnvoyInfo_t1026864678::get_offset_of_envoySinks_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize518 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize519 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize520 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize521 = { sizeof (Identity_t2198929688), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable521[7] = 
{
	Identity_t2198929688::get_offset_of__objectUri_0(),
	Identity_t2198929688::get_offset_of__channelSink_1(),
	Identity_t2198929688::get_offset_of__envoySink_2(),
	Identity_t2198929688::get_offset_of__clientDynamicProperties_3(),
	Identity_t2198929688::get_offset_of__serverDynamicProperties_4(),
	Identity_t2198929688::get_offset_of__objRef_5(),
	Identity_t2198929688::get_offset_of__disposed_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize522 = { sizeof (ClientIdentity_t2106485056), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable522[1] = 
{
	ClientIdentity_t2106485056::get_offset_of__proxyReference_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize523 = { sizeof (InternalRemotingServices_t3279769985), -1, sizeof(InternalRemotingServices_t3279769985_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable523[1] = 
{
	InternalRemotingServices_t3279769985_StaticFields::get_offset_of__soapAttributes_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize524 = { sizeof (ObjRef_t917194338), -1, sizeof(ObjRef_t917194338_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable524[9] = 
{
	ObjRef_t917194338::get_offset_of_channel_info_0(),
	ObjRef_t917194338::get_offset_of_uri_1(),
	ObjRef_t917194338::get_offset_of_typeInfo_2(),
	ObjRef_t917194338::get_offset_of_envoyInfo_3(),
	ObjRef_t917194338::get_offset_of_flags_4(),
	ObjRef_t917194338::get_offset_of__serverType_5(),
	ObjRef_t917194338_StaticFields::get_offset_of_MarshalledObjectRef_6(),
	ObjRef_t917194338_StaticFields::get_offset_of_WellKnowObjectRef_7(),
	ObjRef_t917194338_StaticFields::get_offset_of_U3CU3Ef__switchU24map26_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize525 = { sizeof (RemotingConfiguration_t2326911639), -1, sizeof(RemotingConfiguration_t2326911639_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable525[13] = 
{
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_applicationID_0(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_applicationName_1(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_processGuid_2(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_defaultConfigRead_3(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_defaultDelayedConfigRead_4(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of__errorMode_5(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_wellKnownClientEntries_6(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_activatedClientEntries_7(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_wellKnownServiceEntries_8(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_activatedServiceEntries_9(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_channelTemplates_10(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_clientProviderTemplates_11(),
	RemotingConfiguration_t2326911639_StaticFields::get_offset_of_serverProviderTemplates_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize526 = { sizeof (ConfigHandler_t3312285854), -1, sizeof(ConfigHandler_t3312285854_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable526[10] = 
{
	ConfigHandler_t3312285854::get_offset_of_typeEntries_0(),
	ConfigHandler_t3312285854::get_offset_of_channelInstances_1(),
	ConfigHandler_t3312285854::get_offset_of_currentChannel_2(),
	ConfigHandler_t3312285854::get_offset_of_currentProviderData_3(),
	ConfigHandler_t3312285854::get_offset_of_currentClientUrl_4(),
	ConfigHandler_t3312285854::get_offset_of_appName_5(),
	ConfigHandler_t3312285854::get_offset_of_currentXmlPath_6(),
	ConfigHandler_t3312285854::get_offset_of_onlyDelayedChannels_7(),
	ConfigHandler_t3312285854_StaticFields::get_offset_of_U3CU3Ef__switchU24map27_8(),
	ConfigHandler_t3312285854_StaticFields::get_offset_of_U3CU3Ef__switchU24map28_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize527 = { sizeof (ChannelData_t3158787598), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable527[7] = 
{
	ChannelData_t3158787598::get_offset_of_Ref_0(),
	ChannelData_t3158787598::get_offset_of_Type_1(),
	ChannelData_t3158787598::get_offset_of_Id_2(),
	ChannelData_t3158787598::get_offset_of_DelayLoadAsClientChannel_3(),
	ChannelData_t3158787598::get_offset_of__serverProviders_4(),
	ChannelData_t3158787598::get_offset_of__clientProviders_5(),
	ChannelData_t3158787598::get_offset_of__customProperties_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize528 = { sizeof (ProviderData_t1828329265), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable528[5] = 
{
	ProviderData_t1828329265::get_offset_of_Ref_0(),
	ProviderData_t1828329265::get_offset_of_Type_1(),
	ProviderData_t1828329265::get_offset_of_Id_2(),
	ProviderData_t1828329265::get_offset_of_CustomProperties_3(),
	ProviderData_t1828329265::get_offset_of_CustomData_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize529 = { sizeof (FormatterData_t3541554216), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize530 = { sizeof (RemotingException_t2310402158), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize531 = { sizeof (RemotingServices_t3486501519), -1, sizeof(RemotingServices_t3486501519_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable531[8] = 
{
	RemotingServices_t3486501519_StaticFields::get_offset_of_uri_hash_0(),
	RemotingServices_t3486501519_StaticFields::get_offset_of__serializationFormatter_1(),
	RemotingServices_t3486501519_StaticFields::get_offset_of__deserializationFormatter_2(),
	RemotingServices_t3486501519_StaticFields::get_offset_of_app_id_3(),
	RemotingServices_t3486501519_StaticFields::get_offset_of_next_id_4(),
	RemotingServices_t3486501519_StaticFields::get_offset_of_methodBindings_5(),
	RemotingServices_t3486501519_StaticFields::get_offset_of_FieldSetterMethod_6(),
	RemotingServices_t3486501519_StaticFields::get_offset_of_FieldGetterMethod_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize532 = { sizeof (ServerIdentity_t2585654465), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable532[3] = 
{
	ServerIdentity_t2585654465::get_offset_of__objectType_7(),
	ServerIdentity_t2585654465::get_offset_of__serverObject_8(),
	ServerIdentity_t2585654465::get_offset_of__context_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize533 = { sizeof (ClientActivatedIdentity_t71964569), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize534 = { sizeof (SingletonIdentity_t2393382586), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize535 = { sizeof (SingleCallIdentity_t386886573), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize536 = { sizeof (SoapServices_t624267025), -1, sizeof(SoapServices_t624267025_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable536[5] = 
{
	SoapServices_t624267025_StaticFields::get_offset_of__xmlTypes_0(),
	SoapServices_t624267025_StaticFields::get_offset_of__xmlElements_1(),
	SoapServices_t624267025_StaticFields::get_offset_of__soapActions_2(),
	SoapServices_t624267025_StaticFields::get_offset_of__soapActionsMethods_3(),
	SoapServices_t624267025_StaticFields::get_offset_of__typeInfos_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize537 = { sizeof (TypeInfo_t1748233661), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable537[2] = 
{
	TypeInfo_t1748233661::get_offset_of_Attributes_0(),
	TypeInfo_t1748233661::get_offset_of_Elements_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize538 = { sizeof (TypeEntry_t3811347551), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable538[2] = 
{
	TypeEntry_t3811347551::get_offset_of_assembly_name_0(),
	TypeEntry_t3811347551::get_offset_of_type_name_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize539 = { sizeof (TypeInfo_t2608747645), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable539[3] = 
{
	TypeInfo_t2608747645::get_offset_of_serverType_0(),
	TypeInfo_t2608747645::get_offset_of_serverHierarchy_1(),
	TypeInfo_t2608747645::get_offset_of_interfacesImplemented_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize540 = { sizeof (WellKnownClientTypeEntry_t4214979564), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable540[3] = 
{
	WellKnownClientTypeEntry_t4214979564::get_offset_of_obj_type_2(),
	WellKnownClientTypeEntry_t4214979564::get_offset_of_obj_url_3(),
	WellKnownClientTypeEntry_t4214979564::get_offset_of_app_url_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize541 = { sizeof (WellKnownObjectMode_t2930458831)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable541[3] = 
{
	WellKnownObjectMode_t2930458831::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize542 = { sizeof (WellKnownServiceTypeEntry_t2402109986), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable542[3] = 
{
	WellKnownServiceTypeEntry_t2402109986::get_offset_of_obj_type_2(),
	WellKnownServiceTypeEntry_t2402109986::get_offset_of_obj_uri_3(),
	WellKnownServiceTypeEntry_t2402109986::get_offset_of_obj_mode_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize543 = { sizeof (BinaryCommon_t15838634), -1, sizeof(BinaryCommon_t15838634_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable543[4] = 
{
	BinaryCommon_t15838634_StaticFields::get_offset_of_BinaryHeader_0(),
	BinaryCommon_t15838634_StaticFields::get_offset_of__typeCodesToType_1(),
	BinaryCommon_t15838634_StaticFields::get_offset_of__typeCodeMap_2(),
	BinaryCommon_t15838634_StaticFields::get_offset_of_UseReflectionSerialization_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize544 = { sizeof (BinaryElement_t3565312067)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable544[24] = 
{
	BinaryElement_t3565312067::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize545 = { sizeof (TypeTag_t1257736419)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable545[9] = 
{
	TypeTag_t1257736419::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize546 = { sizeof (MethodFlags_t1261829092)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable546[11] = 
{
	MethodFlags_t1261829092::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize547 = { sizeof (ReturnTypeTag_t1834352041)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable547[5] = 
{
	ReturnTypeTag_t1834352041::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize548 = { sizeof (BinaryFormatter_t3554637334), -1, sizeof(BinaryFormatter_t3554637334_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable548[7] = 
{
	BinaryFormatter_t3554637334::get_offset_of_assembly_format_0(),
	BinaryFormatter_t3554637334::get_offset_of_binder_1(),
	BinaryFormatter_t3554637334::get_offset_of_context_2(),
	BinaryFormatter_t3554637334::get_offset_of_surrogate_selector_3(),
	BinaryFormatter_t3554637334::get_offset_of_type_format_4(),
	BinaryFormatter_t3554637334::get_offset_of_filter_level_5(),
	BinaryFormatter_t3554637334_StaticFields::get_offset_of_U3CDefaultSurrogateSelectorU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize549 = { sizeof (MessageFormatter_t348641935), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize550 = { sizeof (ObjectReader_t1270359987), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable550[12] = 
{
	ObjectReader_t1270359987::get_offset_of__surrogateSelector_0(),
	ObjectReader_t1270359987::get_offset_of__context_1(),
	ObjectReader_t1270359987::get_offset_of__binder_2(),
	ObjectReader_t1270359987::get_offset_of__filterLevel_3(),
	ObjectReader_t1270359987::get_offset_of__manager_4(),
	ObjectReader_t1270359987::get_offset_of__registeredAssemblies_5(),
	ObjectReader_t1270359987::get_offset_of__typeMetadataCache_6(),
	ObjectReader_t1270359987::get_offset_of__lastObject_7(),
	ObjectReader_t1270359987::get_offset_of__lastObjectID_8(),
	ObjectReader_t1270359987::get_offset_of__rootObjectID_9(),
	ObjectReader_t1270359987::get_offset_of_arrayBuffer_10(),
	ObjectReader_t1270359987::get_offset_of_ArrayBufferLength_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize551 = { sizeof (TypeMetadata_t4271117787), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable551[6] = 
{
	TypeMetadata_t4271117787::get_offset_of_Type_0(),
	TypeMetadata_t4271117787::get_offset_of_MemberTypes_1(),
	TypeMetadata_t4271117787::get_offset_of_MemberNames_2(),
	TypeMetadata_t4271117787::get_offset_of_MemberInfos_3(),
	TypeMetadata_t4271117787::get_offset_of_FieldCount_4(),
	TypeMetadata_t4271117787::get_offset_of_NeedsSerializationInfo_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize552 = { sizeof (ArrayNullFiller_t2836451035), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable552[1] = 
{
	ArrayNullFiller_t2836451035::get_offset_of_NullCount_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize553 = { sizeof (FormatterAssemblyStyle_t1939484379)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable553[3] = 
{
	FormatterAssemblyStyle_t1939484379::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize554 = { sizeof (FormatterTypeStyle_t1416953768)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable554[4] = 
{
	FormatterTypeStyle_t1416953768::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize555 = { sizeof (TypeFilterLevel_t4270771694)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable555[3] = 
{
	TypeFilterLevel_t4270771694::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize556 = { sizeof (FormatterConverter_t636131745), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize557 = { sizeof (FormatterServices_t872771684), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize558 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize559 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize560 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize561 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize562 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize563 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize564 = { sizeof (ObjectManager_t2866732585), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable564[9] = 
{
	ObjectManager_t2866732585::get_offset_of__objectRecordChain_0(),
	ObjectManager_t2866732585::get_offset_of__lastObjectRecord_1(),
	ObjectManager_t2866732585::get_offset_of__deserializedRecords_2(),
	ObjectManager_t2866732585::get_offset_of__onDeserializedCallbackRecords_3(),
	ObjectManager_t2866732585::get_offset_of__objectRecords_4(),
	ObjectManager_t2866732585::get_offset_of__finalFixup_5(),
	ObjectManager_t2866732585::get_offset_of__selector_6(),
	ObjectManager_t2866732585::get_offset_of__context_7(),
	ObjectManager_t2866732585::get_offset_of__registeredObjectsCount_8(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize565 = { sizeof (BaseFixupRecord_t2130346789), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable565[4] = 
{
	BaseFixupRecord_t2130346789::get_offset_of_ObjectToBeFixed_0(),
	BaseFixupRecord_t2130346789::get_offset_of_ObjectRequired_1(),
	BaseFixupRecord_t2130346789::get_offset_of_NextSameContainer_2(),
	BaseFixupRecord_t2130346789::get_offset_of_NextSameRequired_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize566 = { sizeof (ArrayFixupRecord_t146443186), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable566[1] = 
{
	ArrayFixupRecord_t146443186::get_offset_of__index_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize567 = { sizeof (MultiArrayFixupRecord_t1651674147), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable567[1] = 
{
	MultiArrayFixupRecord_t1651674147::get_offset_of__indices_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize568 = { sizeof (FixupRecord_t3681476652), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable568[1] = 
{
	FixupRecord_t3681476652::get_offset_of__member_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize569 = { sizeof (DelayedFixupRecord_t1085324391), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable569[1] = 
{
	DelayedFixupRecord_t1085324391::get_offset_of__memberName_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize570 = { sizeof (ObjectRecordStatus_t183477525)+ sizeof (RuntimeObject), sizeof(uint8_t), 0, 0 };
extern const int32_t g_FieldOffsetTable570[5] = 
{
	ObjectRecordStatus_t183477525::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize571 = { sizeof (ObjectRecord_t1066425247), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable571[13] = 
{
	ObjectRecord_t1066425247::get_offset_of_Status_0(),
	ObjectRecord_t1066425247::get_offset_of_OriginalObject_1(),
	ObjectRecord_t1066425247::get_offset_of_ObjectInstance_2(),
	ObjectRecord_t1066425247::get_offset_of_ObjectID_3(),
	ObjectRecord_t1066425247::get_offset_of_Info_4(),
	ObjectRecord_t1066425247::get_offset_of_IdOfContainingObj_5(),
	ObjectRecord_t1066425247::get_offset_of_Surrogate_6(),
	ObjectRecord_t1066425247::get_offset_of_SurrogateSelector_7(),
	ObjectRecord_t1066425247::get_offset_of_Member_8(),
	ObjectRecord_t1066425247::get_offset_of_ArrayIndex_9(),
	ObjectRecord_t1066425247::get_offset_of_FixupChainAsContainer_10(),
	ObjectRecord_t1066425247::get_offset_of_FixupChainAsRequired_11(),
	ObjectRecord_t1066425247::get_offset_of_Next_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize572 = { sizeof (OnDeserializedAttribute_t3960193767), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize573 = { sizeof (OnDeserializingAttribute_t896035672), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize574 = { sizeof (OnSerializedAttribute_t2466467288), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize575 = { sizeof (OnSerializingAttribute_t2189702594), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize576 = { sizeof (SerializationBinder_t2557727724), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize577 = { sizeof (SerializationCallbacks_t886572449), -1, sizeof(SerializationCallbacks_t886572449_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable577[6] = 
{
	SerializationCallbacks_t886572449::get_offset_of_onSerializingList_0(),
	SerializationCallbacks_t886572449::get_offset_of_onSerializedList_1(),
	SerializationCallbacks_t886572449::get_offset_of_onDeserializingList_2(),
	SerializationCallbacks_t886572449::get_offset_of_onDeserializedList_3(),
	SerializationCallbacks_t886572449_StaticFields::get_offset_of_cache_4(),
	SerializationCallbacks_t886572449_StaticFields::get_offset_of_cache_lock_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize578 = { sizeof (CallbackHandler_t1403760267), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize579 = { sizeof (SerializationEntry_t4006045359)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable579[3] = 
{
	SerializationEntry_t4006045359::get_offset_of_name_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t4006045359::get_offset_of_objectType_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	SerializationEntry_t4006045359::get_offset_of_value_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize580 = { sizeof (SerializationException_t1925194324), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize581 = { sizeof (SerializationInfo_t2311277078), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable581[5] = 
{
	SerializationInfo_t2311277078::get_offset_of_serialized_0(),
	SerializationInfo_t2311277078::get_offset_of_values_1(),
	SerializationInfo_t2311277078::get_offset_of_assemblyName_2(),
	SerializationInfo_t2311277078::get_offset_of_fullTypeName_3(),
	SerializationInfo_t2311277078::get_offset_of_converter_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize582 = { sizeof (SerializationInfoEnumerator_t2545483252), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable582[1] = 
{
	SerializationInfoEnumerator_t2545483252::get_offset_of_enumerator_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize583 = { sizeof (StreamingContext_t1606507491)+ sizeof (RuntimeObject), sizeof(StreamingContext_t1606507491_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable583[2] = 
{
	StreamingContext_t1606507491::get_offset_of_state_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	StreamingContext_t1606507491::get_offset_of_additional_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize584 = { sizeof (StreamingContextStates_t958393866)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable584[10] = 
{
	StreamingContextStates_t958393866::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize585 = { sizeof (X509Certificate_t3498154437), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable585[5] = 
{
	X509Certificate_t3498154437::get_offset_of_x509_0(),
	X509Certificate_t3498154437::get_offset_of_hideDates_1(),
	X509Certificate_t3498154437::get_offset_of_cachedCertificateHash_2(),
	X509Certificate_t3498154437::get_offset_of_issuer_name_3(),
	X509Certificate_t3498154437::get_offset_of_subject_name_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize586 = { sizeof (X509KeyStorageFlags_t3172352629)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable586[7] = 
{
	X509KeyStorageFlags_t3172352629::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize587 = { sizeof (AsymmetricAlgorithm_t3050834672), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable587[2] = 
{
	AsymmetricAlgorithm_t3050834672::get_offset_of_KeySizeValue_0(),
	AsymmetricAlgorithm_t3050834672::get_offset_of_LegalKeySizesValue_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize588 = { sizeof (AsymmetricKeyExchangeFormatter_t4294261659), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize589 = { sizeof (AsymmetricSignatureDeformatter_t1691525212), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize590 = { sizeof (AsymmetricSignatureFormatter_t1510947669), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize591 = { sizeof (Base64Constants_t1704004610), -1, sizeof(Base64Constants_t1704004610_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable591[2] = 
{
	Base64Constants_t1704004610_StaticFields::get_offset_of_EncodeTable_0(),
	Base64Constants_t1704004610_StaticFields::get_offset_of_DecodeTable_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize592 = { sizeof (CipherMode_t2029975223)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable592[6] = 
{
	CipherMode_t2029975223::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize593 = { sizeof (CryptoConfig_t970297761), -1, sizeof(CryptoConfig_t970297761_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable593[3] = 
{
	CryptoConfig_t970297761_StaticFields::get_offset_of_lockObject_0(),
	CryptoConfig_t970297761_StaticFields::get_offset_of_algorithms_1(),
	CryptoConfig_t970297761_StaticFields::get_offset_of_oid_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize594 = { sizeof (CryptographicException_t1462342019), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize595 = { sizeof (CryptographicUnexpectedOperationException_t424390842), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize596 = { sizeof (CspParameters_t3726936782), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable596[5] = 
{
	CspParameters_t3726936782::get_offset_of__Flags_0(),
	CspParameters_t3726936782::get_offset_of_KeyContainerName_1(),
	CspParameters_t3726936782::get_offset_of_KeyNumber_2(),
	CspParameters_t3726936782::get_offset_of_ProviderName_3(),
	CspParameters_t3726936782::get_offset_of_ProviderType_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize597 = { sizeof (CspProviderFlags_t2449607442)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable597[9] = 
{
	CspProviderFlags_t2449607442::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize598 = { sizeof (DES_t2239717501), -1, sizeof(DES_t2239717501_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable598[2] = 
{
	DES_t2239717501_StaticFields::get_offset_of_weakKeys_10(),
	DES_t2239717501_StaticFields::get_offset_of_semiWeakKeys_11(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize599 = { sizeof (DESTransform_t3439168403), -1, sizeof(DESTransform_t3439168403_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable599[13] = 
{
	DESTransform_t3439168403_StaticFields::get_offset_of_KEY_BIT_SIZE_12(),
	DESTransform_t3439168403_StaticFields::get_offset_of_KEY_BYTE_SIZE_13(),
	DESTransform_t3439168403_StaticFields::get_offset_of_BLOCK_BIT_SIZE_14(),
	DESTransform_t3439168403_StaticFields::get_offset_of_BLOCK_BYTE_SIZE_15(),
	DESTransform_t3439168403::get_offset_of_keySchedule_16(),
	DESTransform_t3439168403::get_offset_of_byteBuff_17(),
	DESTransform_t3439168403::get_offset_of_dwordBuff_18(),
	DESTransform_t3439168403_StaticFields::get_offset_of_spBoxes_19(),
	DESTransform_t3439168403_StaticFields::get_offset_of_PC1_20(),
	DESTransform_t3439168403_StaticFields::get_offset_of_leftRotTotal_21(),
	DESTransform_t3439168403_StaticFields::get_offset_of_PC2_22(),
	DESTransform_t3439168403_StaticFields::get_offset_of_ipTab_23(),
	DESTransform_t3439168403_StaticFields::get_offset_of_fpTab_24(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
