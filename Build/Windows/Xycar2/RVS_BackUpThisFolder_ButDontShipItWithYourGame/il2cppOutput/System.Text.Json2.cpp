#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualFuncInvoker5
{
	typedef R (*Func)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Buffers.ArrayBufferWriter`1<System.Byte>
struct ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Text.Json.ImmutableCollectionCreator>
struct ConcurrentDictionary_2_t9E8336443E367ADA55DB0DEAD5B096FC9A8E7639;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo>
struct ConcurrentDictionary_2_tB4D3E5B26039FE6FD2093CBB442DF1508C13F049;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonPropertyInfo>
struct ConcurrentDictionary_2_t6B4D79BF3C4F079A38D46F67497C334082B2DEDC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter>
struct Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9;
// System.Buffers.IBufferWriter`1<System.Byte>
struct IBufferWriter_1_t09B22D28ED83DD9237FC6D4E8014388593A8C897;
// System.Collections.Generic.IEnumerator`1<System.Text.Json.Serialization.JsonConverter>
struct IEnumerator_1_tE7F10C0D57FD8C28D632F1D51473F527D6F8ED05;
// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter>
struct IList_1_tC0B13B2863B707AF8F570191723FA59FC26BABEA;
// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>
struct JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287;
// System.Text.Json.Serialization.JsonConverter`1<System.Boolean>
struct JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C;
// System.Text.Json.Serialization.JsonConverter`1<System.Byte>
struct JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE;
// System.Text.Json.Serialization.JsonConverter`1<System.Char>
struct JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C;
// System.Text.Json.Serialization.JsonConverter`1<System.DateTime>
struct JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7;
// System.Text.Json.Serialization.JsonConverter`1<System.DateTimeOffset>
struct JsonConverter_1_t04904770CF218F2075F200194327943875E976F9;
// System.Text.Json.Serialization.JsonConverter`1<System.Decimal>
struct JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747;
// System.Text.Json.Serialization.JsonConverter`1<System.Double>
struct JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7;
// System.Text.Json.Serialization.JsonConverter`1<System.Guid>
struct JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74;
// System.Text.Json.Serialization.JsonConverter`1<System.Int16>
struct JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B;
// System.Text.Json.Serialization.JsonConverter`1<System.Int32>
struct JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C;
// System.Text.Json.Serialization.JsonConverter`1<System.Int64>
struct JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E;
// System.Text.Json.Serialization.JsonConverter`1<System.Text.Json.JsonElement>
struct JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC;
// System.Text.Json.Serialization.JsonConverter`1<System.Object>
struct JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95;
// System.Text.Json.Serialization.JsonConverter`1<System.SByte>
struct JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17;
// System.Text.Json.Serialization.JsonConverter`1<System.Single>
struct JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4;
// System.Text.Json.Serialization.JsonConverter`1<System.String>
struct JsonConverter_1_t8241521B099007C1100E472568EEE1247E3FC687;
// System.Text.Json.Serialization.JsonConverter`1<System.UInt16>
struct JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D;
// System.Text.Json.Serialization.JsonConverter`1<System.UInt32>
struct JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840;
// System.Text.Json.Serialization.JsonConverter`1<System.UInt64>
struct JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346;
// System.Text.Json.Serialization.JsonConverter`1<System.Uri>
struct JsonConverter_1_t2F5B0A5E3F604E7D3BA8BED6B173199C031E37EC;
// System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>
struct List_1_t348C0367BE83EC0E260451D431D269265C31E47B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Text.Json.PropertyRef>
struct List_1_t0577F20C5F0F01C75AAD81FA46210F032ED427BC;
// System.Collections.Generic.List`1<System.Text.Json.ReadStackFrame>
struct List_1_t05EDD0E38AC529D7BE97CD531686F72E70CD6A1E;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Globalization.Calendar
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
// System.Globalization.CompareInfo
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
// System.Text.Json.Serialization.ConverterList
struct ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D;
// System.Globalization.CultureData
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
// System.Text.Json.Serialization.Converters.DefaultArrayConverter
struct DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605;
// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter
struct DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6;
// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter
struct DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E;
// System.Text.Json.Serialization.Converters.DefaultICollectionConverter
struct DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F;
// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter
struct DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58;
// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter
struct DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C;
// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter
struct DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Text.Json.ImmutableCollectionCreator
struct ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Text.Encodings.Web.JavaScriptEncoder
struct JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2;
// System.Text.Json.JsonClassInfo
struct JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E;
// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8;
// System.Text.Json.Serialization.JsonConverterAttribute
struct JsonConverterAttribute_t468EC35E7E2180AE3E8CDBC3E5335699AF8C4A3E;
// System.Text.Json.Serialization.Converters.JsonConverterBoolean
struct JsonConverterBoolean_t4ABA9E66F0DC55F4BFDAEF641BDE795A338F46D9;
// System.Text.Json.Serialization.Converters.JsonConverterByte
struct JsonConverterByte_tFCF41149F5F65B2E5864E22D280C700B228D47B6;
// System.Text.Json.Serialization.Converters.JsonConverterByteArray
struct JsonConverterByteArray_t8DD88D87914DE2BCD32996B2E65653D2C78AFC4A;
// System.Text.Json.Serialization.Converters.JsonConverterChar
struct JsonConverterChar_t4953CA56C64173331D0755B0AC1BEB0F705D4434;
// System.Text.Json.Serialization.Converters.JsonConverterDateTime
struct JsonConverterDateTime_t66F56F26173DC32E41347853EAC5F6078BFD28DB;
// System.Text.Json.Serialization.Converters.JsonConverterDateTimeOffset
struct JsonConverterDateTimeOffset_tF18C52F3B0DC5EACD371429AB46FA88F27B1EA45;
// System.Text.Json.Serialization.Converters.JsonConverterDecimal
struct JsonConverterDecimal_t9384E371E1980789B48CF9A6342F89E4F3E09DD1;
// System.Text.Json.Serialization.Converters.JsonConverterDouble
struct JsonConverterDouble_t29103CD0520F75D6BA18D59998B8ED8E9EFE4C16;
// System.Text.Json.Serialization.Converters.JsonConverterEnum
struct JsonConverterEnum_t06AFD43F844954B7867C6E6FF6E5245DB18145B4;
// System.Text.Json.Serialization.JsonConverterFactory
struct JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853;
// System.Text.Json.Serialization.Converters.JsonConverterGuid
struct JsonConverterGuid_t388A98D1645FD6921EC98E1FC436C5F08F2A15B1;
// System.Text.Json.Serialization.Converters.JsonConverterInt16
struct JsonConverterInt16_tEC09F78322D5C86C53709C4879D1D385A3D38259;
// System.Text.Json.Serialization.Converters.JsonConverterInt32
struct JsonConverterInt32_tA3371AEF4296BB66B901E71C5890A71F0F510F92;
// System.Text.Json.Serialization.Converters.JsonConverterInt64
struct JsonConverterInt64_t44779F6CCBD40E6722DD9303C621FB0D6EA51B53;
// System.Text.Json.Serialization.Converters.JsonConverterJsonElement
struct JsonConverterJsonElement_tA1E75CCA91058562E976D43D8B7BCE6B8B2F8D80;
// System.Text.Json.Serialization.Converters.JsonConverterObject
struct JsonConverterObject_t907F00E38500F320DD135CD2644784A6ECB6813A;
// System.Text.Json.Serialization.Converters.JsonConverterSByte
struct JsonConverterSByte_tEB847CD062F5E5D2956D6A493804144426998E76;
// System.Text.Json.Serialization.Converters.JsonConverterSingle
struct JsonConverterSingle_t422A9F3BDE1A9E4D41CE1B4B27E988EC1C19CB26;
// System.Text.Json.Serialization.Converters.JsonConverterString
struct JsonConverterString_t47FC313C9A9452C153780F3C415C33F17365C7DC;
// System.Text.Json.Serialization.Converters.JsonConverterUInt16
struct JsonConverterUInt16_tEBAAFD3605404E473369A95961C0E9272A156B9D;
// System.Text.Json.Serialization.Converters.JsonConverterUInt32
struct JsonConverterUInt32_t3151F5762B8C1CD6AF1BE5914F143ADB32E56341;
// System.Text.Json.Serialization.Converters.JsonConverterUInt64
struct JsonConverterUInt64_t3175483DDE41B3C27B88BE416D23931A23978429;
// System.Text.Json.Serialization.Converters.JsonConverterUri
struct JsonConverterUri_t7D867CAABA9476D0B41778C3245BF576D9DCD78D;
// System.Text.Json.Serialization.Converters.JsonDictionaryConverter
struct JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E;
// System.Text.Json.JsonDocument
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F;
// System.Text.Json.Serialization.Converters.JsonEnumerableConverter
struct JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3;
// System.Text.Json.Serialization.Converters.JsonKeyValuePairConverter
struct JsonKeyValuePairConverter_t10E05414FDB76FD28169C5B9499D5CF991C0DDA5;
// System.Text.Json.JsonNamingPolicy
struct JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4;
// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA;
// System.Text.Json.Serialization.JsonPropertyNameAttribute
struct JsonPropertyNameAttribute_t6DA36821E2ECC006A0FA7377496AC3E7CCC6CCBA;
// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD;
// System.Text.Json.MemberAccessor
struct MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// System.Globalization.TextInfo
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumConverterOptions_t04BFD73F4179D143CBB0D6D28D643F97A75A3E35_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t348C0367BE83EC0E260451D431D269265C31E47B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeArray_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0970355F339FE6FF1C222547CF241398A1C378A9;
IL2CPP_EXTERN_C String_t* _stringLiteral136926B654432552F29A067979EE9E9D569C7895;
IL2CPP_EXTERN_C String_t* _stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521;
IL2CPP_EXTERN_C String_t* _stringLiteral35DE67C929967618347FCE340E2E87102A932FEB;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral49AA63440730594CB862C148C034957D190DBB80;
IL2CPP_EXTERN_C String_t* _stringLiteral59E5E11BFC1B758617E7403A28E45E8E18562B95;
IL2CPP_EXTERN_C String_t* _stringLiteral678C8068977C934D424C4D57A19F629825D2A4BB;
IL2CPP_EXTERN_C String_t* _stringLiteral6933B3473F816EDB2EEF7A7CEF6EFA018D17C6B3;
IL2CPP_EXTERN_C String_t* _stringLiteral6A0B34AAFB24E098ABCB1BE882BD0878913C3D28;
IL2CPP_EXTERN_C String_t* _stringLiteral6CC89AE92D5E497F1202B3C349634C66958E8423;
IL2CPP_EXTERN_C String_t* _stringLiteral72D121639A07E322A737215D5BD5E08E4194BC92;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral87C02C6ED924DBDF9E706ECBA4CF02938714E608;
IL2CPP_EXTERN_C String_t* _stringLiteral8B4B3F4658F5299CF25AA8C483513A423A6C1E5D;
IL2CPP_EXTERN_C String_t* _stringLiteral9F5D597C1F916FE878F01CF7090052DBF4EE07E1;
IL2CPP_EXTERN_C String_t* _stringLiteralA52838C9E06400FD794AE6DF33C5AE83BE60D878;
IL2CPP_EXTERN_C String_t* _stringLiteralAAEAF54173166405B926BB5574839DE67CA541AB;
IL2CPP_EXTERN_C String_t* _stringLiteralC89ED2A5E7C138031837DF70004D15D0B608F982;
IL2CPP_EXTERN_C String_t* _stringLiteralCD26DE29642C27888155DD7EC5F53F6D1A55BA2D;
IL2CPP_EXTERN_C String_t* _stringLiteralDDB0068F06DC4CE0D4EC2AC5016BF557B2BA6EE7;
IL2CPP_EXTERN_C String_t* _stringLiteralEE3B7AB722A7F6C702B293A2D07B91E051ECD568;
IL2CPP_EXTERN_C String_t* _stringLiteralF125FE9766275C94D708AE1B19214A966542F343;
IL2CPP_EXTERN_C String_t* _stringLiteralF4755C417A8BAD97BCCC04B580B977A4D1964112;
IL2CPP_EXTERN_C const RuntimeMethod* ConverterList_Add_m980F6953ECE005778CE39AF01E80BA737D24C016_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConverterList_Insert_mF9607457DB86C593C5D6791318F02B52FE13928F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConverterList_set_Item_mB3A908ACE6F9BE728544B4AA53DD70BDA1356A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverterObject_Write_mCFE15F2F9ECFD4C067197221AEFD147C43B23BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m0BFB6833B554014A637CDEF309F1F1D6CD1079A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mC3A5B62CB1D4FE42917C99B62D209E5305B5245E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mACEFA07C833FD4E5C5171A6E0930559E788F1F3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8A3DB4EA1C8174359A4E4D26ECB803C3219F80E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m234A5DF098A9DCE3E2636CD86B7D23C709FBC270_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m03B7830006716BBEDB1428FF5BD80CBCE23E82EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_mBCEA699F3C84FB35B12BE6229FB1136B8B53F026_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Insert_m645302915B0D08E5DB919640D2E557F63E0AC474_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mE32795E00B40A73E981D12FD9749997AA06346EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mCE2280E34032D54BEE42BC4752A86D8F175A37A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m84B064819653A09A54B21056A2B8340E7B105DCC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF1C60986C1297DA175120C7257BDD0C77C0A797C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF7A0FB477D4A7861D540E4313A6149AAFF8674E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mA4B175E8158E0BB008954E4B6C41985FEFDAF785_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConverterEnum_1_t3229A0D145BACC3153F689F909381794DD2B0196_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonKeyValuePairConverter_2_t199CDD58CBE96B8655358CD28275B6F510272F34_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>
struct List_1_t348C0367BE83EC0E260451D431D269265C31E47B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t348C0367BE83EC0E260451D431D269265C31E47B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235  : public RuntimeObject
{
};

// System.Text.Json.Serialization.ConverterList
struct ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D  : public RuntimeObject
{
	// System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.Serialization.ConverterList::_list
	List_1_t348C0367BE83EC0E260451D431D269265C31E47B* ____list_0;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.Serialization.ConverterList::_options
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ____options_1;
};

// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;
};

struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject* ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture_34;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture_35;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number_36;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name_37;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::s_UserPreferredCultureInfoInAppX
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX_38;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_39;
};
// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo_10;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo_11;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar_24;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Text.Json.ImmutableCollectionCreator
struct ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF  : public RuntimeObject
{
};

// System.Text.Json.Serialization.JsonConverter
struct JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8  : public RuntimeObject
{
};

// System.Text.Json.Serialization.Converters.JsonDictionaryConverter
struct JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E  : public RuntimeObject
{
};

// System.Text.Json.Serialization.Converters.JsonEnumerableConverter
struct JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3  : public RuntimeObject
{
};

// System.Text.Json.JsonSerializerOptions
struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonClassInfo> System.Text.Json.JsonSerializerOptions::_classes
	ConcurrentDictionary_2_tB4D3E5B26039FE6FD2093CBB442DF1508C13F049* ____classes_1;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.JsonPropertyInfo> System.Text.Json.JsonSerializerOptions::_objectJsonProperties
	ConcurrentDictionary_2_t6B4D79BF3C4F079A38D46F67497C334082B2DEDC* ____objectJsonProperties_2;
	// System.Text.Json.MemberAccessor System.Text.Json.JsonSerializerOptions::_memberAccessorStrategy
	MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC* ____memberAccessorStrategy_4;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_dictionayKeyPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____dictionayKeyPolicy_5;
	// System.Text.Json.JsonNamingPolicy System.Text.Json.JsonSerializerOptions::_jsonPropertyNamingPolicy
	JsonNamingPolicy_tF52DC40FDD225060731BD06BE8478CFA52216BC4* ____jsonPropertyNamingPolicy_6;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonSerializerOptions::_readCommentHandling
	uint8_t ____readCommentHandling_7;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonSerializerOptions::_encoder
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ____encoder_8;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_defaultBufferSize
	int32_t ____defaultBufferSize_9;
	// System.Int32 System.Text.Json.JsonSerializerOptions::_maxDepth
	int32_t ____maxDepth_10;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_allowTrailingCommas
	bool ____allowTrailingCommas_11;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_haveTypesBeenCreated
	bool ____haveTypesBeenCreated_12;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreNullValues
	bool ____ignoreNullValues_13;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_ignoreReadOnlyProperties
	bool ____ignoreReadOnlyProperties_14;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_propertyNameCaseInsensitive
	bool ____propertyNameCaseInsensitive_15;
	// System.Boolean System.Text.Json.JsonSerializerOptions::_writeIndented
	bool ____writeIndented_16;
	// System.Int32 System.Text.Json.JsonSerializerOptions::<EffectiveMaxDepth>k__BackingField
	int32_t ___U3CEffectiveMaxDepthU3Ek__BackingField_17;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::_converters
	ConcurrentDictionary_2_t847EC94864EAD4D4DAAC178360D815D61414FB0D* ____converters_20;
	// System.Collections.Generic.IList`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_21;
};

struct JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD_StaticFields
{
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonSerializerOptions::s_defaultOptions
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___s_defaultOptions_0;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.String,System.Text.Json.ImmutableCollectionCreator> System.Text.Json.JsonSerializerOptions::s_createRangeDelegates
	ConcurrentDictionary_2_t9E8336443E367ADA55DB0DEAD5B096FC9A8E7639* ___s_createRangeDelegates_3;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultSimpleConverters
	Dictionary_2_t0483416E2612BB76C51CC68E3BC2D3CCAB6198D9* ___s_defaultSimpleConverters_18;
	// System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.JsonSerializerOptions::s_defaultFactoryConverters
	List_1_t348C0367BE83EC0E260451D431D269265C31E47B* ___s_defaultFactoryConverters_19;
};

// System.Text.Json.MemberAccessor
struct MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Collections.Generic.List`1/Enumerator<System.Text.Json.Serialization.JsonConverter>
struct Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t348C0367BE83EC0E260451D431D269265C31E47B* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>
struct JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Boolean>
struct JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Byte>
struct JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Char>
struct JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.DateTime>
struct JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.DateTimeOffset>
struct JsonConverter_1_t04904770CF218F2075F200194327943875E976F9  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Decimal>
struct JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Double>
struct JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Guid>
struct JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Int16>
struct JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Int32>
struct JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Int64>
struct JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Text.Json.JsonElement>
struct JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Object>
struct JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.SByte>
struct JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Single>
struct JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.String>
struct JsonConverter_1_t8241521B099007C1100E472568EEE1247E3FC687  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.UInt16>
struct JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.UInt32>
struct JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.UInt64>
struct JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.Serialization.JsonConverter`1<System.Uri>
struct JsonConverter_1_t2F5B0A5E3F604E7D3BA8BED6B173199C031E37EC  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Memory`1<System.Byte>
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	// System.Object System.Memory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.Memory`1::_index
	int32_t ____index_1;
	// System.Int32 System.Memory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.Memory`1
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.ReadOnlyMemory`1<System.Byte>
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	// System.Object System.ReadOnlyMemory`1::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.ReadOnlyMemory`1::_index
	int32_t ____index_1;
	// System.Int32 System.ReadOnlyMemory`1::_length
	int32_t ____length_2;
};
// Native definition for P/Invoke marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif
// Native definition for COM marshalling of System.ReadOnlyMemory`1
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____index_1;
	int32_t ____length_2;
};
#endif

// System.Buffers.ReadOnlySequence`1<System.Byte>
struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A 
{
	// System.Object System.Buffers.ReadOnlySequence`1::_startObject
	RuntimeObject* ____startObject_0;
	// System.Object System.Buffers.ReadOnlySequence`1::_endObject
	RuntimeObject* ____endObject_1;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_startInteger
	int32_t ____startInteger_2;
	// System.Int32 System.Buffers.ReadOnlySequence`1::_endInteger
	int32_t ____endInteger_3;
};

struct ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A_StaticFields
{
	// System.Buffers.ReadOnlySequence`1<T> System.Buffers.ReadOnlySequence`1::Empty
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___Empty_4;
};

// System.ValueTuple`2<System.Int32,System.String>
struct ValueTuple_2_t401848AEFAD85958596581A12FE51C58224D202B 
{
	// T1 System.ValueTuple`2::Item1
	int32_t ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	String_t* ___Item2_1;
};

// System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 
{
	// System.Int32[] System.Text.Json.BitStack::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.UInt64 System.Text.Json.BitStack::_allocationFreeContainer
	uint64_t ____allocationFreeContainer_1;
	// System.Int32 System.Text.Json.BitStack::_currentDepth
	int32_t ____currentDepth_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};
// Native definition for COM marshalling of System.Text.Json.BitStack
struct BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____array_0;
	uint64_t ____allocationFreeContainer_1;
	int32_t ____currentDepth_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Text.Json.Serialization.Converters.DefaultArrayConverter
struct DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter
struct DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter
struct DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultICollectionConverter
struct DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter
struct DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter
struct DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C  : public JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E
{
};

// System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter
struct DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D  : public JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3
{
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Text.Json.Serialization.JsonAttribute
struct JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Text.Json.Serialization.JsonConverterFactory
struct JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853  : public JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8
{
};

// System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 
{
	// System.Text.Json.JsonDocument System.Text.Json.JsonElement::_parent
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	// System.Int32 System.Text.Json.JsonElement::_idx
	int32_t ____idx_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_pinvoke
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	int32_t ____idx_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonElement
struct JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_marshaled_com
{
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* ____parent_0;
	int32_t ____idx_1;
};

// System.Text.Json.JsonEncodedText
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 
{
	// System.Byte[] System.Text.Json.JsonEncodedText::_utf8Value
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____utf8Value_0;
	// System.String System.Text.Json.JsonEncodedText::_value
	String_t* ____value_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	char* ____value_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonEncodedText
struct JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ____utf8Value_0;
	Il2CppChar* ____value_1;
};

// System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 
{
	// System.Int32 System.Text.Json.JsonReaderOptions::_maxDepth
	int32_t ____maxDepth_0;
	// System.Text.Json.JsonCommentHandling System.Text.Json.JsonReaderOptions::_commentHandling
	uint8_t ____commentHandling_1;
	// System.Boolean System.Text.Json.JsonReaderOptions::<AllowTrailingCommas>k__BackingField
	bool ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};
// Native definition for COM marshalling of System.Text.Json.JsonReaderOptions
struct JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com
{
	int32_t ____maxDepth_0;
	uint8_t ____commentHandling_1;
	int32_t ___U3CAllowTrailingCommasU3Ek__BackingField_2;
};

// System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 
{
	// System.Int32 System.Text.Json.JsonWriterOptions::_optionsMask
	int32_t ____optionsMask_0;
	// System.Text.Encodings.Web.JavaScriptEncoder System.Text.Json.JsonWriterOptions::<Encoder>k__BackingField
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_pinvoke
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonWriterOptions
struct JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397_marshaled_com
{
	int32_t ____optionsMask_0;
	JavaScriptEncoder_tB923B5C026111225AE05B65AB4B46D258AD72AA2* ___U3CEncoderU3Ek__BackingField_1;
};

// System.Text.Json.ReadStackFrame
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A 
{
	// System.Object System.Text.Json.ReadStackFrame::ReturnValue
	RuntimeObject* ___ReturnValue_0;
	// System.Text.Json.JsonClassInfo System.Text.Json.ReadStackFrame::JsonClassInfo
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ___JsonClassInfo_1;
	// System.String System.Text.Json.ReadStackFrame::KeyName
	String_t* ___KeyName_2;
	// System.Byte[] System.Text.Json.ReadStackFrame::JsonPropertyName
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___JsonPropertyName_3;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.ReadStackFrame::JsonPropertyInfo
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ___JsonPropertyInfo_4;
	// System.Collections.IList System.Text.Json.ReadStackFrame::TempEnumerableValues
	RuntimeObject* ___TempEnumerableValues_5;
	// System.Boolean System.Text.Json.ReadStackFrame::CollectionPropertyInitialized
	bool ___CollectionPropertyInitialized_6;
	// System.Boolean System.Text.Json.ReadStackFrame::Drain
	bool ___Drain_7;
	// System.Collections.IDictionary System.Text.Json.ReadStackFrame::TempDictionaryValues
	RuntimeObject* ___TempDictionaryValues_8;
	// System.Int32 System.Text.Json.ReadStackFrame::PropertyIndex
	int32_t ___PropertyIndex_9;
	// System.Collections.Generic.List`1<System.Text.Json.PropertyRef> System.Text.Json.ReadStackFrame::PropertyRefCache
	List_1_t0577F20C5F0F01C75AAD81FA46210F032ED427BC* ___PropertyRefCache_10;
};
// Native definition for P/Invoke marshalling of System.Text.Json.ReadStackFrame
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_pinvoke
{
	Il2CppIUnknown* ___ReturnValue_0;
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ___JsonClassInfo_1;
	char* ___KeyName_2;
	Il2CppSafeArray/*NONE*/* ___JsonPropertyName_3;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ___JsonPropertyInfo_4;
	RuntimeObject* ___TempEnumerableValues_5;
	int32_t ___CollectionPropertyInitialized_6;
	int32_t ___Drain_7;
	RuntimeObject* ___TempDictionaryValues_8;
	int32_t ___PropertyIndex_9;
	List_1_t0577F20C5F0F01C75AAD81FA46210F032ED427BC* ___PropertyRefCache_10;
};
// Native definition for COM marshalling of System.Text.Json.ReadStackFrame
struct ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_com
{
	Il2CppIUnknown* ___ReturnValue_0;
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ___JsonClassInfo_1;
	Il2CppChar* ___KeyName_2;
	Il2CppSafeArray/*NONE*/* ___JsonPropertyName_3;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ___JsonPropertyInfo_4;
	RuntimeObject* ___TempEnumerableValues_5;
	int32_t ___CollectionPropertyInitialized_6;
	int32_t ___Drain_7;
	RuntimeObject* ___TempDictionaryValues_8;
	int32_t ___PropertyIndex_9;
	List_1_t0577F20C5F0F01C75AAD81FA46210F032ED427BC* ___PropertyRefCache_10;
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 
{
	// System.Object System.SequencePosition::_object
	RuntimeObject* ____object_0;
	// System.Int32 System.SequencePosition::_integer
	int32_t ____integer_1;
};
// Native definition for P/Invoke marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};
// Native definition for COM marshalling of System.SequencePosition
struct SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com
{
	Il2CppIUnknown* ____object_0;
	int32_t ____integer_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.Buffers.StandardFormat
struct StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF 
{
	// System.Byte System.Buffers.StandardFormat::_format
	uint8_t ____format_0;
	// System.Byte System.Buffers.StandardFormat::_precision
	uint8_t ____precision_1;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_t7C6718D265C3C3728137B8DCD8AF599BF66F1157 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_t7C6718D265C3C3728137B8DCD8AF599BF66F1157__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083__padding[5];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225__padding[52];
	};
};
#pragma pack(pop, tp)

// System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545 
{
	// System.Int32 System.Text.Json.JsonDocument/MetadataDb::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_0;
	// System.Byte[] System.Text.Json.JsonDocument/MetadataDb::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_1;
};
// Native definition for P/Invoke marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545_marshaled_pinvoke
{
	int32_t ___U3CLengthU3Ek__BackingField_0;
	Il2CppSafeArray/*NONE*/* ____data_1;
};
// Native definition for COM marshalling of System.Text.Json.JsonDocument/MetadataDb
struct MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545_marshaled_com
{
	int32_t ___U3CLengthU3Ek__BackingField_0;
	Il2CppSafeArray/*NONE*/* ____data_1;
};

// System.ByReference`1<System.Byte>
struct ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC 
{
	// System.IntPtr System.ByReference`1::_value
	intptr_t ____value_0;
};

// System.Nullable`1<System.Text.Json.JsonEncodedText>
struct Nullable_1_tD7EAB61A039FDDE94CBE5D0406FFC75D43B91BA0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	JsonEncodedText_tCBC417E15CEE99E4865E048489B637A186628D23 ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t004C9CA18CD0145AB1E17746ED05EB70DEB971A1_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::1A373AA9A5E91C03714106E20498C6E475FEFACE
	__StaticArrayInitTypeSizeU3D256_tB3210ED98CD2DDFA33E1D23E65FF7A42E4980D39 ___1A373AA9A5E91C03714106E20498C6E475FEFACE_0;
	// System.Int32 <PrivateImplementationDetails>::2BE88CA4242C76E8253AC62474851065032D6833
	int32_t ___2BE88CA4242C76E8253AC62474851065032D6833_1;
	// System.Int32 <PrivateImplementationDetails>::5FFE533B830F08A0326348A9160AFAFC8ADA44DB
	int32_t ___5FFE533B830F08A0326348A9160AFAFC8ADA44DB_2;
	// System.Int64 <PrivateImplementationDetails>::69ED884E7E05C208C95AD237494D414CB5BB9C47
	int64_t ___69ED884E7E05C208C95AD237494D414CB5BB9C47_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=5 <PrivateImplementationDetails>::7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04
	__StaticArrayInitTypeSizeU3D5_t9D0D7EC2F93A2F2DC5A0A8713D1B85165C0EB083 ___7CB6EFB98BA5972A9B5090DC2E517FE14D12CB04_4;
	// System.Int64 <PrivateImplementationDetails>::A8CA6D2B4193F7CFDB67B7BD38A880BE0EF7564D
	int64_t ___A8CA6D2B4193F7CFDB67B7BD38A880BE0EF7564D_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::DD3AEFEADB1CD615F3017763F1568179FEE640B0
	__StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 ___DD3AEFEADB1CD615F3017763F1568179FEE640B0_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::E289D9D3D233BC253E8C0FA8C2AFDD86A407CE30
	__StaticArrayInitTypeSizeU3D36_t7C6718D265C3C3728137B8DCD8AF599BF66F1157 ___E289D9D3D233BC253E8C0FA8C2AFDD86A407CE30_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=52 <PrivateImplementationDetails>::E92B39D8233061927D9ACDE54665E68E7535635A
	__StaticArrayInitTypeSizeU3D52_t8017941DB9A55758C86707E029ADDFEBE7496225 ___E92B39D8233061927D9ACDE54665E68E7535635A_8;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Text.Json.Serialization.JsonConverterAttribute
struct JsonConverterAttribute_t468EC35E7E2180AE3E8CDBC3E5335699AF8C4A3E  : public JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5
{
	// System.Type System.Text.Json.Serialization.JsonConverterAttribute::<ConverterType>k__BackingField
	Type_t* ___U3CConverterTypeU3Ek__BackingField_0;
};

// System.Text.Json.Serialization.Converters.JsonConverterBoolean
struct JsonConverterBoolean_t4ABA9E66F0DC55F4BFDAEF641BDE795A338F46D9  : public JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C
{
};

// System.Text.Json.Serialization.Converters.JsonConverterByte
struct JsonConverterByte_tFCF41149F5F65B2E5864E22D280C700B228D47B6  : public JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE
{
};

// System.Text.Json.Serialization.Converters.JsonConverterByteArray
struct JsonConverterByteArray_t8DD88D87914DE2BCD32996B2E65653D2C78AFC4A  : public JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287
{
};

// System.Text.Json.Serialization.Converters.JsonConverterChar
struct JsonConverterChar_t4953CA56C64173331D0755B0AC1BEB0F705D4434  : public JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C
{
};

// System.Text.Json.Serialization.Converters.JsonConverterDateTime
struct JsonConverterDateTime_t66F56F26173DC32E41347853EAC5F6078BFD28DB  : public JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7
{
};

// System.Text.Json.Serialization.Converters.JsonConverterDateTimeOffset
struct JsonConverterDateTimeOffset_tF18C52F3B0DC5EACD371429AB46FA88F27B1EA45  : public JsonConverter_1_t04904770CF218F2075F200194327943875E976F9
{
};

// System.Text.Json.Serialization.Converters.JsonConverterDecimal
struct JsonConverterDecimal_t9384E371E1980789B48CF9A6342F89E4F3E09DD1  : public JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747
{
};

// System.Text.Json.Serialization.Converters.JsonConverterDouble
struct JsonConverterDouble_t29103CD0520F75D6BA18D59998B8ED8E9EFE4C16  : public JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7
{
};

// System.Text.Json.Serialization.Converters.JsonConverterEnum
struct JsonConverterEnum_t06AFD43F844954B7867C6E6FF6E5245DB18145B4  : public JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853
{
};

// System.Text.Json.Serialization.Converters.JsonConverterGuid
struct JsonConverterGuid_t388A98D1645FD6921EC98E1FC436C5F08F2A15B1  : public JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74
{
};

// System.Text.Json.Serialization.Converters.JsonConverterInt16
struct JsonConverterInt16_tEC09F78322D5C86C53709C4879D1D385A3D38259  : public JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B
{
};

// System.Text.Json.Serialization.Converters.JsonConverterInt32
struct JsonConverterInt32_tA3371AEF4296BB66B901E71C5890A71F0F510F92  : public JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C
{
};

// System.Text.Json.Serialization.Converters.JsonConverterInt64
struct JsonConverterInt64_t44779F6CCBD40E6722DD9303C621FB0D6EA51B53  : public JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E
{
};

// System.Text.Json.Serialization.Converters.JsonConverterJsonElement
struct JsonConverterJsonElement_tA1E75CCA91058562E976D43D8B7BCE6B8B2F8D80  : public JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC
{
};

// System.Text.Json.Serialization.Converters.JsonConverterObject
struct JsonConverterObject_t907F00E38500F320DD135CD2644784A6ECB6813A  : public JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95
{
};

// System.Text.Json.Serialization.Converters.JsonConverterSByte
struct JsonConverterSByte_tEB847CD062F5E5D2956D6A493804144426998E76  : public JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17
{
};

// System.Text.Json.Serialization.Converters.JsonConverterSingle
struct JsonConverterSingle_t422A9F3BDE1A9E4D41CE1B4B27E988EC1C19CB26  : public JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4
{
};

// System.Text.Json.Serialization.Converters.JsonConverterString
struct JsonConverterString_t47FC313C9A9452C153780F3C415C33F17365C7DC  : public JsonConverter_1_t8241521B099007C1100E472568EEE1247E3FC687
{
};

// System.Text.Json.Serialization.Converters.JsonConverterUInt16
struct JsonConverterUInt16_tEBAAFD3605404E473369A95961C0E9272A156B9D  : public JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D
{
};

// System.Text.Json.Serialization.Converters.JsonConverterUInt32
struct JsonConverterUInt32_t3151F5762B8C1CD6AF1BE5914F143ADB32E56341  : public JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840
{
};

// System.Text.Json.Serialization.Converters.JsonConverterUInt64
struct JsonConverterUInt64_t3175483DDE41B3C27B88BE416D23931A23978429  : public JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346
{
};

// System.Text.Json.Serialization.Converters.JsonConverterUri
struct JsonConverterUri_t7D867CAABA9476D0B41778C3245BF576D9DCD78D  : public JsonConverter_1_t2F5B0A5E3F604E7D3BA8BED6B173199C031E37EC
{
};

// System.Text.Json.JsonDocument
struct JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F  : public RuntimeObject
{
	// System.ReadOnlyMemory`1<System.Byte> System.Text.Json.JsonDocument::_utf8Json
	ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 ____utf8Json_0;
	// System.Text.Json.JsonDocument/MetadataDb System.Text.Json.JsonDocument::_parsedData
	MetadataDb_tD3FE33D093F9BFEEED874AEEAF550C2337AC7545 ____parsedData_1;
	// System.Byte[] System.Text.Json.JsonDocument::_extraRentedBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____extraRentedBytes_2;
	// System.ValueTuple`2<System.Int32,System.String> System.Text.Json.JsonDocument::_lastIndexAndString
	ValueTuple_2_t401848AEFAD85958596581A12FE51C58224D202B ____lastIndexAndString_3;
	// System.Boolean System.Text.Json.JsonDocument::<IsDisposable>k__BackingField
	bool ___U3CIsDisposableU3Ek__BackingField_4;
};

// System.Text.Json.Serialization.JsonExtensionDataAttribute
struct JsonExtensionDataAttribute_t3685C51FADFC1B0C902FB1851F231CE2EB1F70A8  : public JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5
{
};

// System.Text.Json.Serialization.JsonIgnoreAttribute
struct JsonIgnoreAttribute_t1428D9C93258F5BB795C8B650FACF63C4669B836  : public JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5
{
};

// System.Text.Json.Serialization.Converters.JsonKeyValuePairConverter
struct JsonKeyValuePairConverter_t10E05414FDB76FD28169C5B9499D5CF991C0DDA5  : public JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853
{
};

// System.Text.Json.Serialization.JsonPropertyNameAttribute
struct JsonPropertyNameAttribute_t6DA36821E2ECC006A0FA7377496AC3E7CCC6CCBA  : public JsonAttribute_t2C1F51A77670413D08ED2D67E1A8561CEEB45AE5
{
	// System.String System.Text.Json.Serialization.JsonPropertyNameAttribute::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_0;
};

// System.Text.Json.ReadStack
struct ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9 
{
	// System.Text.Json.ReadStackFrame System.Text.Json.ReadStack::Current
	ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A ___Current_1;
	// System.Collections.Generic.List`1<System.Text.Json.ReadStackFrame> System.Text.Json.ReadStack::_previous
	List_1_t05EDD0E38AC529D7BE97CD531686F72E70CD6A1E* ____previous_2;
	// System.Int32 System.Text.Json.ReadStack::_index
	int32_t ____index_3;
	// System.Int64 System.Text.Json.ReadStack::BytesConsumed
	int64_t ___BytesConsumed_4;
	// System.Boolean System.Text.Json.ReadStack::ReadAhead
	bool ___ReadAhead_5;
};

struct ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9_StaticFields
{
	// System.Char[] System.Text.Json.ReadStack::SpecialCharacters
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___SpecialCharacters_0;
};
// Native definition for P/Invoke marshalling of System.Text.Json.ReadStack
struct ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9_marshaled_pinvoke
{
	ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_pinvoke ___Current_1;
	List_1_t05EDD0E38AC529D7BE97CD531686F72E70CD6A1E* ____previous_2;
	int32_t ____index_3;
	int64_t ___BytesConsumed_4;
	int32_t ___ReadAhead_5;
};
// Native definition for COM marshalling of System.Text.Json.ReadStack
struct ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9_marshaled_com
{
	ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A_marshaled_com ___Current_1;
	List_1_t05EDD0E38AC529D7BE97CD531686F72E70CD6A1E* ____previous_2;
	int32_t ____index_3;
	int64_t ___BytesConsumed_4;
	int32_t ___ReadAhead_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Text.Json.Utf8JsonWriter
struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0  : public RuntimeObject
{
	// System.Buffers.IBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_output
	RuntimeObject* ____output_1;
	// System.IO.Stream System.Text.Json.Utf8JsonWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_2;
	// System.Buffers.ArrayBufferWriter`1<System.Byte> System.Text.Json.Utf8JsonWriter::_arrayBufferWriter
	ArrayBufferWriter_1_t1BC1DECDD156A1043C7214DF1E3DA071F93894A3* ____arrayBufferWriter_3;
	// System.Memory`1<System.Byte> System.Text.Json.Utf8JsonWriter::_memory
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ____memory_4;
	// System.Boolean System.Text.Json.Utf8JsonWriter::_inObject
	bool ____inObject_5;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonWriter::_tokenType
	uint8_t ____tokenType_6;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonWriter::_bitStack
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack_7;
	// System.Int32 System.Text.Json.Utf8JsonWriter::_currentDepth
	int32_t ____currentDepth_8;
	// System.Text.Json.JsonWriterOptions System.Text.Json.Utf8JsonWriter::_options
	JsonWriterOptions_tDB35565F2F04D544AA46578697124F259D974397 ____options_9;
	// System.Int32 System.Text.Json.Utf8JsonWriter::<BytesPending>k__BackingField
	int32_t ___U3CBytesPendingU3Ek__BackingField_10;
	// System.Int64 System.Text.Json.Utf8JsonWriter::<BytesCommitted>k__BackingField
	int64_t ___U3CBytesCommittedU3Ek__BackingField_11;
};

struct Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0_StaticFields
{
	// System.Int32 System.Text.Json.Utf8JsonWriter::s_newLineLength
	int32_t ___s_newLineLength_0;
	// System.Char[] System.Text.Json.Utf8JsonWriter::s_singleLineCommentDelimiter
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_singleLineCommentDelimiter_12;
	// System.Buffers.StandardFormat System.Text.Json.Utf8JsonWriter::s_dateTimeStandardFormat
	StandardFormat_tEEF45AD161B3118652894C0675C4C4D6AE4CB3BF ___s_dateTimeStandardFormat_13;
};

// System.ReadOnlySpan`1<System.Byte>
struct ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D 
{
	// System.ByReference`1<T> System.ReadOnlySpan`1::_pointer
	ByReference_1_t9C85BCCAAF8C525B6C06B07E922D8D217BE8D6FC ____pointer_0;
	// System.Int32 System.ReadOnlySpan`1::_length
	int32_t ____length_1;
};

// System.Text.Json.JsonPropertyInfo
struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA  : public RuntimeObject
{
	// System.Text.Json.JsonClassInfo System.Text.Json.JsonPropertyInfo::_elementClassInfo
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ____elementClassInfo_8;
	// System.Text.Json.JsonClassInfo System.Text.Json.JsonPropertyInfo::_runtimeClassInfo
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ____runtimeClassInfo_9;
	// System.Text.Json.JsonClassInfo System.Text.Json.JsonPropertyInfo::_declaredTypeClassInfo
	JsonClassInfo_tFD8648573B07E8116BE3D07E1F9AB6304F192F1E* ____declaredTypeClassInfo_10;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::_dictionaryValuePropertyPolicy
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ____dictionaryValuePropertyPolicy_11;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<CanBeNull>k__BackingField
	bool ___U3CCanBeNullU3Ek__BackingField_12;
	// System.Text.Json.ClassType System.Text.Json.JsonPropertyInfo::ClassType
	uint8_t ___ClassType_13;
	// System.Type System.Text.Json.JsonPropertyInfo::<DeclaredPropertyType>k__BackingField
	Type_t* ___U3CDeclaredPropertyTypeU3Ek__BackingField_14;
	// System.Type System.Text.Json.JsonPropertyInfo::<ImplementedPropertyType>k__BackingField
	Type_t* ___U3CImplementedPropertyTypeU3Ek__BackingField_15;
	// System.Type System.Text.Json.JsonPropertyInfo::<ElementType>k__BackingField
	Type_t* ___U3CElementTypeU3Ek__BackingField_16;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::<EnumerableConverter>k__BackingField
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___U3CEnumerableConverterU3Ek__BackingField_17;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::<DictionaryConverter>k__BackingField
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___U3CDictionaryConverterU3Ek__BackingField_18;
	// System.Nullable`1<System.Text.Json.JsonEncodedText> System.Text.Json.JsonPropertyInfo::EscapedName
	Nullable_1_tD7EAB61A039FDDE94CBE5D0406FFC75D43B91BA0 ___EscapedName_19;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<HasGetter>k__BackingField
	bool ___U3CHasGetterU3Ek__BackingField_20;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<HasSetter>k__BackingField
	bool ___U3CHasSetterU3Ek__BackingField_21;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<HasInternalConverter>k__BackingField
	bool ___U3CHasInternalConverterU3Ek__BackingField_22;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IgnoreNullValues>k__BackingField
	bool ___U3CIgnoreNullValuesU3Ek__BackingField_23;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IsNullableType>k__BackingField
	bool ___U3CIsNullableTypeU3Ek__BackingField_24;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<IsPropertyPolicy>k__BackingField
	bool ___U3CIsPropertyPolicyU3Ek__BackingField_25;
	// System.Byte[] System.Text.Json.JsonPropertyInfo::<JsonPropertyName>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CJsonPropertyNameU3Ek__BackingField_26;
	// System.Byte[] System.Text.Json.JsonPropertyInfo::<Name>k__BackingField
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___U3CNameU3Ek__BackingField_27;
	// System.String System.Text.Json.JsonPropertyInfo::<NameAsString>k__BackingField
	String_t* ___U3CNameAsStringU3Ek__BackingField_28;
	// System.UInt64 System.Text.Json.JsonPropertyInfo::<PropertyNameKey>k__BackingField
	uint64_t ___U3CPropertyNameKeyU3Ek__BackingField_29;
	// System.Text.Json.JsonSerializerOptions System.Text.Json.JsonPropertyInfo::<Options>k__BackingField
	JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___U3COptionsU3Ek__BackingField_30;
	// System.Type System.Text.Json.JsonPropertyInfo::<ParentClassType>k__BackingField
	Type_t* ___U3CParentClassTypeU3Ek__BackingField_31;
	// System.Reflection.PropertyInfo System.Text.Json.JsonPropertyInfo::<PropertyInfo>k__BackingField
	PropertyInfo_t* ___U3CPropertyInfoU3Ek__BackingField_32;
	// System.Type System.Text.Json.JsonPropertyInfo::<RuntimePropertyType>k__BackingField
	Type_t* ___U3CRuntimePropertyTypeU3Ek__BackingField_33;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldSerialize>k__BackingField
	bool ___U3CShouldSerializeU3Ek__BackingField_34;
	// System.Boolean System.Text.Json.JsonPropertyInfo::<ShouldDeserialize>k__BackingField
	bool ___U3CShouldDeserializeU3Ek__BackingField_35;
};

struct JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA_StaticFields
{
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonDerivedEnumerableConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonDerivedEnumerableConverter_0;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonArrayConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonArrayConverter_1;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonICollectionConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonICollectionConverter_2;
	// System.Text.Json.Serialization.Converters.JsonEnumerableConverter System.Text.Json.JsonPropertyInfo::s_jsonImmutableEnumerableConverter
	JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* ___s_jsonImmutableEnumerableConverter_3;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonDerivedDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonDerivedDictionaryConverter_4;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonIDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonIDictionaryConverter_5;
	// System.Text.Json.Serialization.Converters.JsonDictionaryConverter System.Text.Json.JsonPropertyInfo::s_jsonImmutableDictionaryConverter
	JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* ___s_jsonImmutableDictionaryConverter_6;
	// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonPropertyInfo::s_missingProperty
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* ___s_missingProperty_7;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8 
{
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::_buffer
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isFinalBlock
	bool ____isFinalBlock_1;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isInputSequence
	bool ____isInputSequence_2;
	// System.Int64 System.Text.Json.Utf8JsonReader::_lineNumber
	int64_t ____lineNumber_3;
	// System.Int64 System.Text.Json.Utf8JsonReader::_bytePositionInLine
	int64_t ____bytePositionInLine_4;
	// System.Int32 System.Text.Json.Utf8JsonReader::_consumed
	int32_t ____consumed_5;
	// System.Boolean System.Text.Json.Utf8JsonReader::_inObject
	bool ____inObject_6;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isNotPrimitive
	bool ____isNotPrimitive_7;
	// System.Char System.Text.Json.Utf8JsonReader::_numberFormat
	Il2CppChar ____numberFormat_8;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_tokenType
	uint8_t ____tokenType_9;
	// System.Text.Json.JsonTokenType System.Text.Json.Utf8JsonReader::_previousTokenType
	uint8_t ____previousTokenType_10;
	// System.Text.Json.JsonReaderOptions System.Text.Json.Utf8JsonReader::_readerOptions
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32 ____readerOptions_11;
	// System.Text.Json.BitStack System.Text.Json.Utf8JsonReader::_bitStack
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5 ____bitStack_12;
	// System.Int64 System.Text.Json.Utf8JsonReader::_totalConsumed
	int64_t ____totalConsumed_13;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isLastSegment
	bool ____isLastSegment_14;
	// System.Boolean System.Text.Json.Utf8JsonReader::_stringHasEscaping
	bool ____stringHasEscaping_15;
	// System.Boolean System.Text.Json.Utf8JsonReader::_isMultiSegment
	bool ____isMultiSegment_16;
	// System.Boolean System.Text.Json.Utf8JsonReader::_trailingCommaBeforeComment
	bool ____trailingCommaBeforeComment_17;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_nextPosition
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____nextPosition_18;
	// System.SequencePosition System.Text.Json.Utf8JsonReader::_currentPosition
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14 ____currentPosition_19;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::_sequence
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_20;
	// System.ReadOnlySpan`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSpan>k__BackingField
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_21;
	// System.Int64 System.Text.Json.Utf8JsonReader::<TokenStartIndex>k__BackingField
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	// System.Boolean System.Text.Json.Utf8JsonReader::<HasValueSequence>k__BackingField
	bool ___U3CHasValueSequenceU3Ek__BackingField_23;
	// System.Buffers.ReadOnlySequence`1<System.Byte> System.Text.Json.Utf8JsonReader::<ValueSequence>k__BackingField
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_24;
};
// Native definition for P/Invoke marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8_marshaled_pinvoke
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____numberFormat_8;
	uint8_t ____tokenType_9;
	uint8_t ____previousTokenType_10;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_pinvoke ____readerOptions_11;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_pinvoke ____bitStack_12;
	int64_t ____totalConsumed_13;
	int32_t ____isLastSegment_14;
	int32_t ____stringHasEscaping_15;
	int32_t ____isMultiSegment_16;
	int32_t ____trailingCommaBeforeComment_17;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke ____nextPosition_18;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_pinvoke ____currentPosition_19;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_20;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_21;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_23;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_24;
};
// Native definition for COM marshalling of System.Text.Json.Utf8JsonReader
struct Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8_marshaled_com
{
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ____buffer_0;
	int32_t ____isFinalBlock_1;
	int32_t ____isInputSequence_2;
	int64_t ____lineNumber_3;
	int64_t ____bytePositionInLine_4;
	int32_t ____consumed_5;
	int32_t ____inObject_6;
	int32_t ____isNotPrimitive_7;
	uint8_t ____numberFormat_8;
	uint8_t ____tokenType_9;
	uint8_t ____previousTokenType_10;
	JsonReaderOptions_t947F34FBFA3AD2E8E137B660EC0FAFE4571D7E32_marshaled_com ____readerOptions_11;
	BitStack_t460BCC3E60CEEB19DD5A9535794E2702E50121B5_marshaled_com ____bitStack_12;
	int64_t ____totalConsumed_13;
	int32_t ____isLastSegment_14;
	int32_t ____stringHasEscaping_15;
	int32_t ____isMultiSegment_16;
	int32_t ____trailingCommaBeforeComment_17;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com ____nextPosition_18;
	SequencePosition_tF4FA2B48A1A5B3A50EFDA1174069C749D986EA14_marshaled_com ____currentPosition_19;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ____sequence_20;
	ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___U3CValueSpanU3Ek__BackingField_21;
	int64_t ___U3CTokenStartIndexU3Ek__BackingField_22;
	int32_t ___U3CHasValueSequenceU3Ek__BackingField_23;
	ReadOnlySequence_1_t85097489C00952FC58DF9F3ACE926EAE9A51898A ___U3CValueSequenceU3Ek__BackingField_24;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Text.Json.Serialization.JsonConverter[]
struct JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3  : public RuntimeArray
{
	ALIGN_FIELD (8) JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* m_Items[1];

	inline JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Insert(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, RuntimeObject* ___item1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF_gshared (JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Byte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB_gshared (JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_gshared (JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Char>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8_gshared (JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.DateTime>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37_gshared (JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.DateTimeOffset>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9_gshared (JsonConverter_1_t04904770CF218F2075F200194327943875E976F9* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Decimal>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB_gshared (JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9_gshared (JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Guid>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115_gshared (JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int16>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7_gshared (JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E_gshared (JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81_gshared (JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Text.Json.JsonElement>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C_gshared (JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.SByte>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6_gshared (JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3_gshared (JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt16>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48_gshared (JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34_gshared (JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt64>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE_gshared (JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346* __this, const RuntimeMethod* method) ;

// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::.ctor()
inline void List_1__ctor_m84B064819653A09A54B21056A2B8340E7B105DCC (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::get_Item(System.Int32)
inline JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* List_1_get_Item_mF7A0FB477D4A7861D540E4313A6149AAFF8674E7 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonSerializerOptions::VerifyMutable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::set_Item(System.Int32,T)
inline void List_1_set_Item_mA4B175E8158E0BB008954E4B6C41985FEFDAF785 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, int32_t ___index0, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, int32_t, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_set_Item_m3C58DBC69A321AF2826595584FF3E9F43C07EA56_gshared)(__this, ___index0, ___value1, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::get_Count()
inline int32_t List_1_get_Count_mF1C60986C1297DA175120C7257BDD0C77C0A797C_inline (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::Add(T)
inline void List_1_Add_mACEFA07C833FD4E5C5171A6E0930559E788F1F3E_inline (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::Clear()
inline void List_1_Clear_m8A3DB4EA1C8174359A4E4D26ECB803C3219F80E0_inline (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::Contains(T)
inline bool List_1_Contains_m234A5DF098A9DCE3E2636CD86B7D23C709FBC270 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::CopyTo(T[],System.Int32)
inline void List_1_CopyTo_m03B7830006716BBEDB1428FF5BD80CBCE23E82EF (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3*, int32_t, const RuntimeMethod*))List_1_CopyTo_m1210D480F3EF1C250A53086148C1204B7A99B931_gshared)(__this, ___array0, ___arrayIndex1, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::GetEnumerator()
inline Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::IndexOf(T)
inline int32_t List_1_IndexOf_mBCEA699F3C84FB35B12BE6229FB1136B8B53F026 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_IndexOf_m378F61BA812B79DEE58D86FE8AA9F20E3FC7D85F_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::Insert(System.Int32,T)
inline void List_1_Insert_m645302915B0D08E5DB919640D2E557F63E0AC474 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, int32_t ___index0, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, int32_t, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_Insert_m9C9559248941FED50561DB029D55DF08DEF3B094_gshared)(__this, ___index0, ___item1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::Remove(T)
inline bool List_1_Remove_mCE2280E34032D54BEE42BC4752A86D8F175A37A3 (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Text.Json.Serialization.JsonConverter>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mE32795E00B40A73E981D12FD9749997AA06346EB (List_1_t348C0367BE83EC0E260451D431D269265C31E47B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___index0, method);
}
// System.Void System.Text.Json.Serialization.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m23EFDEA2C29481891A2DA60D4E39F996475129EF (JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* __this, const RuntimeMethod* method) ;
// System.Type System.Text.Json.JsonPropertyInfo::get_ElementType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonPropertyInfo System.Text.Json.JsonSerializerOptions::GetJsonPropertyInfoFromClassInfo(System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, Type_t* ___objectType0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.JsonDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D (JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.Converters.JsonEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E (JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* __this, const RuntimeMethod* method) ;
// System.Type System.Text.Json.ReadStackFrame::GetElementType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReadStackFrame_GetElementType_mB5D520FD3D54FFEC6D882A8E587EF646368E95E5 (ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Array System.Array::CreateInstance(System.Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___elementType0, int32_t ___length1, const RuntimeMethod* method) ;
// System.Void System.Array::SetValue(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___value0, int32_t ___index1, const RuntimeMethod* method) ;
// System.Type System.Text.Json.JsonPropertyInfo::get_RuntimePropertyType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m49E2E4F63C1CBDA71284D33E4FFA5C738240F7D9 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.NotSupportedException System.Text.Json.ThrowHelper::GetNotSupportedException_SerializationNotSupportedCollection(System.Type,System.Type,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* ThrowHelper_GetNotSupportedException_SerializationNotSupportedCollection_mC57C5A8FA96EF3A72378783BCC7A09E38C8A3B61 (Type_t* ___propertyType0, Type_t* ___parentType1, MemberInfo_t* ___memberInfo2, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::GetDelegateKey(System.Type,System.Type,System.Type&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519 (Type_t* ___immutableCollectionType0, Type_t* ___elementType1, Type_t** ___underlyingType2, String_t** ___constructingTypeName3, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonSerializerOptions::CreateRangeDelegatesContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSerializerOptions_CreateRangeDelegatesContainsKey_m2C5F1C9E27A6A33EBBCC9F0675EFD1F5B8B3C3F6 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, String_t* ___key0, const RuntimeMethod* method) ;
// System.Text.Json.MemberAccessor System.Text.Json.JsonSerializerOptions::get_MemberAccessorStrategy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC* JsonSerializerOptions_get_MemberAccessorStrategy_m4A5B819731E3EBA23BDB9DBBD7606148A4620B88 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.JsonSerializerOptions::TryAddCreateRangeDelegate(System.String,System.Text.Json.ImmutableCollectionCreator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonSerializerOptions_TryAddCreateRangeDelegate_m40F08A5B9F186174484019B0D99FEB562CC28D85 (JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* __this, String_t* ___key0, ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* ___createRangeDelegate1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Object System.Activator::CreateInstance(System.Type,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Activator_CreateInstance_m0DFAA1415ABA9B28430FDC70A9915BE437C04B04 (Type_t* ___type0, int32_t ___bindingAttr1, Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___binder2, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args3, CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___culture4, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterFactory__ctor_m411B07ED997EEDA8B37628F05D4F8DA392BB1956 (JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853* __this, const RuntimeMethod* method) ;
// System.Boolean System.Text.Json.Utf8JsonReader::GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Utf8JsonReader_GetBoolean_m4A0CCA2B3FF77D11CDEF65077936B5CA951962C6 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteBooleanValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBooleanValue_mA04EC87538557C4D69DA626CE79295F85A722BFF (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Boolean>::.ctor()
inline void JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF (JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_tC3AFD0A7A31ABB2CD8D2C23102F26CB77FC7DE4C*, const RuntimeMethod*))JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF_gshared)(__this, method);
}
// System.Byte System.Text.Json.Utf8JsonReader::GetByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Utf8JsonReader_GetByte_mEC280899A1AD56A59AABAF6F35E061C5A257A232 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Byte>::.ctor()
inline void JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB (JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t178E69C3D81E8C86393FF1DCEE29AE8C84BCFFEE*, const RuntimeMethod*))JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB_gshared)(__this, method);
}
// System.Byte[] System.Text.Json.Utf8JsonReader::GetBytesFromBase64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Utf8JsonReader_GetBytesFromBase64_mBD400780F573FB4057B04E9B6CE298AC931ACD5A (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.ReadOnlySpan`1<T> System.ReadOnlySpan`1<System.Byte>::op_Implicit(T[])
inline ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___array0, const RuntimeMethod* method)
{
	return ((  ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D (*) (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_gshared)(___array0, method);
}
// System.Void System.Text.Json.Utf8JsonWriter::WriteBase64StringValue(System.ReadOnlySpan`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteBase64StringValue_m4CC0DAD92DF2723492C5DF18B8B3028BA6009C00 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D ___bytes0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Byte[]>::.ctor()
inline void JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4 (JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t87134F2FDE6C85D3BC65F2583D387D617C578287*, const RuntimeMethod*))JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_gshared)(__this, method);
}
// System.String System.Text.Json.Utf8JsonReader::GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_m348BACAA9A8628253717C938871B084D8AB48D80 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Char>::.ctor()
inline void JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8 (JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t3B9EB91AEF43281BFEB3C2A5342A6CD5FD263A7C*, const RuntimeMethod*))JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8_gshared)(__this, method);
}
// System.DateTime System.Text.Json.Utf8JsonReader::GetDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D Utf8JsonReader_GetDateTime_mE98D9A548388D8526C4F0CC35899D2F14D43B22F (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mE130AF1B2A2C307C9A4BE3282CDCA46E708BDAC0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.DateTime>::.ctor()
inline void JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37 (JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_tC1E7BFB15EEF562FF5E9060FED746458EFCFB3B7*, const RuntimeMethod*))JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37_gshared)(__this, method);
}
// System.DateTimeOffset System.Text.Json.Utf8JsonReader::GetDateTimeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 Utf8JsonReader_GetDateTimeOffset_m34029D75821CEB4740BF1D8B359747D6475C88B9 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_mDB0C7D389DBCAA8408DB0FFD6BE056F4DB179732 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.DateTimeOffset>::.ctor()
inline void JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9 (JsonConverter_1_t04904770CF218F2075F200194327943875E976F9* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t04904770CF218F2075F200194327943875E976F9*, const RuntimeMethod*))JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9_gshared)(__this, method);
}
// System.Decimal System.Text.Json.Utf8JsonReader::GetDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F Utf8JsonReader_GetDecimal_m0F141F3F50CD249A6EA21E01188DE311EAE86F41 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m95366FE40CF93FC6091A43A618B70867460869D6 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Decimal>::.ctor()
inline void JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB (JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t0A22804A19955A32397A3ED1E652EDFCAD0FC747*, const RuntimeMethod*))JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB_gshared)(__this, method);
}
// System.Double System.Text.Json.Utf8JsonReader::GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utf8JsonReader_GetDouble_m8B6B801EAD7C30EFEFCEE8CEF6D1522CA4778EE1 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_mF264282A28EF611A3174E363C56C810583DE103E (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Double>::.ctor()
inline void JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9 (JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t6E3073683039FBAE658B682BF7F5F34186E012C7*, const RuntimeMethod*))JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9_gshared)(__this, method);
}
// System.Guid System.Text.Json.Utf8JsonReader::GetGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Utf8JsonReader_GetGuid_mF53227165B93F42BCC17F4212C98AE792D47699A (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteStringValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteStringValue_m3797F39346137A2D7232677B84B2F690896C4E6A (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, Guid_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Guid>::.ctor()
inline void JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115 (JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t359D60499CA1D78CCEF63B2DF294A5321F2E7E74*, const RuntimeMethod*))JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115_gshared)(__this, method);
}
// System.Int16 System.Text.Json.Utf8JsonReader::GetInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Utf8JsonReader_GetInt16_m486F6B00F180588F76CF037EA708079C921D5C2B (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int16>::.ctor()
inline void JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7 (JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t852B1991CCD6E01F906E5B6985B6087C28E0EA7B*, const RuntimeMethod*))JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7_gshared)(__this, method);
}
// System.Int32 System.Text.Json.Utf8JsonReader::GetInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Utf8JsonReader_GetInt32_m9994A31A6BBC68EC25BFEA942924684639E0A350 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int32>::.ctor()
inline void JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E (JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t9D0216C07DAF765279A23DA0D409D8685001319C*, const RuntimeMethod*))JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E_gshared)(__this, method);
}
// System.Int64 System.Text.Json.Utf8JsonReader::GetInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utf8JsonReader_GetInt64_m8F101B63B25099413DEC5D297BB5FFE578DE165A (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m04B3E8A97F3FFECFFCCD5F17B74488E285482FA1 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Int64>::.ctor()
inline void JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81 (JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_tA5D1DAB6102179E1CFD09BE2CFBB13936A6FB87E*, const RuntimeMethod*))JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81_gshared)(__this, method);
}
// System.Text.Json.JsonDocument System.Text.Json.JsonDocument::ParseValue(System.Text.Json.Utf8JsonReader&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* JsonDocument_ParseValue_m088FB4B1ACC350C2FED324556EC221C06C6CB786 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement System.Text.Json.JsonDocument::get_RootElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195 (JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* __this, const RuntimeMethod* method) ;
// System.Text.Json.JsonElement System.Text.Json.JsonElement::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 JsonElement_Clone_mCD2B3D79FE552E8FA4A29C9244675D1926B7EC50 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.JsonElement::WriteTo(System.Text.Json.Utf8JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonElement_WriteTo_m8802C6ABB5C038C5E111274B0FED5702BFB72B10 (JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Text.Json.JsonElement>::.ctor()
inline void JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C (JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t58D99574AE08F5DBC4E2CED4151E00B446E0C1AC*, const RuntimeMethod*))JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C_gshared)(__this, method);
}
// System.Void System.InvalidOperationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Object>::.ctor()
inline void JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42 (JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t042D1DBFAF6211CC2A043EBE30CD2A056235DD95*, const RuntimeMethod*))JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_gshared)(__this, method);
}
// System.SByte System.Text.Json.Utf8JsonReader::GetSByte()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Utf8JsonReader_GetSByte_m86C5D95B6393261601AB9C07BEABB0675C00846A (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.SByte>::.ctor()
inline void JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6 (JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t39B2A4440F8852A2559F44EDD27EE49146C1CA17*, const RuntimeMethod*))JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6_gshared)(__this, method);
}
// System.Single System.Text.Json.Utf8JsonReader::GetSingle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Utf8JsonReader_GetSingle_mE9EEE464C1E81A3F019BBA55FC21105525AEEE42 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m94C41B349B7D55EB269FA36E4454661C72DED51D (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Single>::.ctor()
inline void JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3 (JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t7529683EFEC0818DFDB1C760CCBC34D7267DBBB4*, const RuntimeMethod*))JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3_gshared)(__this, method);
}
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.String>::.ctor()
inline void JsonConverter_1__ctor_mC3A5B62CB1D4FE42917C99B62D209E5305B5245E (JsonConverter_1_t8241521B099007C1100E472568EEE1247E3FC687* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t8241521B099007C1100E472568EEE1247E3FC687*, const RuntimeMethod*))JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_gshared)(__this, method);
}
// System.UInt16 System.Text.Json.Utf8JsonReader::GetUInt16()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Utf8JsonReader_GetUInt16_mDADEC8D0157630B34BA4BED95BEC8FC0FB103F36 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt16>::.ctor()
inline void JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48 (JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_tEBD65F09D329DB7A1B96E74D8FA3FB1868ED0B6D*, const RuntimeMethod*))JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48_gshared)(__this, method);
}
// System.UInt32 System.Text.Json.Utf8JsonReader::GetUInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Utf8JsonReader_GetUInt32_m727AE5A5ECBB3D29C4E592193706C81080C3AA75 (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m89BBC1D792A2DD977776AA582F1DB31A7A76E7B0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt32>::.ctor()
inline void JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34 (JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t61CAAA9901DE16ED07B5D1EEA6658344603B8840*, const RuntimeMethod*))JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34_gshared)(__this, method);
}
// System.UInt64 System.Text.Json.Utf8JsonReader::GetUInt64()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Utf8JsonReader_GetUInt64_mD82438E5E150BE6DCB19E9AA8527032FE1073A7B (Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Utf8JsonWriter::WriteNumberValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utf8JsonWriter_WriteNumberValue_m3075EC515D272E426FE6A49DF02814388AECFBD0 (Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* __this, uint64_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.UInt64>::.ctor()
inline void JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE (JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t90E6A8B266D3FD96A6257E6C3E842E77D4C7D346*, const RuntimeMethod*))JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE_gshared)(__this, method);
}
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_TryCreate_m183077985BD7B1BE8DBDBCC4604F775C44723EC9 (String_t* ___uriString0, int32_t ___uriKind1, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** ___result2, const RuntimeMethod* method) ;
// System.Void System.Text.Json.ThrowHelper::ThrowJsonException()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ThrowHelper_ThrowJsonException_m1F78753DA07B4AB8663930825C58469D5FCA21E7 (const RuntimeMethod* method) ;
// System.String System.Uri::get_OriginalString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, const RuntimeMethod* method) ;
// System.Void System.Text.Json.Serialization.JsonConverter`1<System.Uri>::.ctor()
inline void JsonConverter_1__ctor_m0BFB6833B554014A637CDEF309F1F1D6CD1079A3 (JsonConverter_1_t2F5B0A5E3F604E7D3BA8BED6B173199C031E37EC* __this, const RuntimeMethod* method)
{
	((  void (*) (JsonConverter_1_t2F5B0A5E3F604E7D3BA8BED6B173199C031E37EC*, const RuntimeMethod*))JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.ConverterList::.ctor(System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList__ctor_m4E3C5A32A90624E0ED5A0DF62DDF8BF134F695E0 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m84B064819653A09A54B21056A2B8340E7B105DCC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t348C0367BE83EC0E260451D431D269265C31E47B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = (List_1_t348C0367BE83EC0E260451D431D269265C31E47B*)il2cpp_codegen_object_new(List_1_t348C0367BE83EC0E260451D431D269265C31E47B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m84B064819653A09A54B21056A2B8340E7B105DCC(L_0, List_1__ctor_m84B064819653A09A54B21056A2B8340E7B105DCC_RuntimeMethod_var);
		__this->____list_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____list_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_1 = ___options0;
		__this->____options_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____options_1), (void*)L_1);
		return;
	}
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.ConverterList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ConverterList_get_Item_m79FDDF8D8C41749EC27D74A578AA5D376C99FCB9 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF7A0FB477D4A7861D540E4313A6149AAFF8674E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_2;
		L_2 = List_1_get_Item_mF7A0FB477D4A7861D540E4313A6149AAFF8674E7(L_0, L_1, List_1_get_Item_mF7A0FB477D4A7861D540E4313A6149AAFF8674E7_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::set_Item(System.Int32,System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_set_Item_mB3A908ACE6F9BE728544B4AA53DD70BDA1356A5E (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, int32_t ___index0, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mA4B175E8158E0BB008954E4B6C41985FEFDAF785_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_0 = ___value1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConverterList_set_Item_mB3A908ACE6F9BE728544B4AA53DD70BDA1356A5E_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_2 = __this->____options_1;
		NullCheck(L_2);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_2, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_3 = __this->____list_0;
		int32_t L_4 = ___index0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_5 = ___value1;
		NullCheck(L_3);
		List_1_set_Item_mA4B175E8158E0BB008954E4B6C41985FEFDAF785(L_3, L_4, L_5, List_1_set_Item_mA4B175E8158E0BB008954E4B6C41985FEFDAF785_RuntimeMethod_var);
		return;
	}
}
// System.Int32 System.Text.Json.Serialization.ConverterList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConverterList_get_Count_mD6915CE1800C4C21C5B5ED83934570F3509D5FDE (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF1C60986C1297DA175120C7257BDD0C77C0A797C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mF1C60986C1297DA175120C7257BDD0C77C0A797C_inline(L_0, List_1_get_Count_mF1C60986C1297DA175120C7257BDD0C77C0A797C_RuntimeMethod_var);
		return L_1;
	}
}
// System.Boolean System.Text.Json.Serialization.ConverterList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConverterList_get_IsReadOnly_mDD798CA9C6464F9846CE1FA15FE4B68FF9F37650 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::Add(System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_Add_m980F6953ECE005778CE39AF01E80BA737D24C016 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mACEFA07C833FD4E5C5171A6E0930559E788F1F3E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_0 = ___item0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConverterList_Add_m980F6953ECE005778CE39AF01E80BA737D24C016_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_2 = __this->____options_1;
		NullCheck(L_2);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_2, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_3 = __this->____list_0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_4 = ___item0;
		NullCheck(L_3);
		List_1_Add_mACEFA07C833FD4E5C5171A6E0930559E788F1F3E_inline(L_3, L_4, List_1_Add_mACEFA07C833FD4E5C5171A6E0930559E788F1F3E_RuntimeMethod_var);
		return;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_Clear_m52C2EE6E20254E31312DD99B935290AD641DD0E2 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m8A3DB4EA1C8174359A4E4D26ECB803C3219F80E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_0 = __this->____options_1;
		NullCheck(L_0);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_0, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_1 = __this->____list_0;
		NullCheck(L_1);
		List_1_Clear_m8A3DB4EA1C8174359A4E4D26ECB803C3219F80E0_inline(L_1, List_1_Clear_m8A3DB4EA1C8174359A4E4D26ECB803C3219F80E0_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Text.Json.Serialization.ConverterList::Contains(System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConverterList_Contains_m5BBF3F2DEB647C13064D4958948F4574C1214C70 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m234A5DF098A9DCE3E2636CD86B7D23C709FBC270_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_1 = ___item0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_m234A5DF098A9DCE3E2636CD86B7D23C709FBC270(L_0, L_1, List_1_Contains_m234A5DF098A9DCE3E2636CD86B7D23C709FBC270_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::CopyTo(System.Text.Json.Serialization.JsonConverter[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_CopyTo_mE79D8B1CCA4BAF4CB1BCFEF1EEBD61E7C1F5EBFB (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m03B7830006716BBEDB1428FF5BD80CBCE23E82EF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		JsonConverterU5BU5D_t0049FF78489F6329358F7865EBBA6DF7B6BDA9C3* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		NullCheck(L_0);
		List_1_CopyTo_m03B7830006716BBEDB1428FF5BD80CBCE23E82EF(L_0, L_1, L_2, List_1_CopyTo_m03B7830006716BBEDB1428FF5BD80CBCE23E82EF_RuntimeMethod_var);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<System.Text.Json.Serialization.JsonConverter> System.Text.Json.Serialization.ConverterList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConverterList_GetEnumerator_m363F6BC3F8246EB73EE94B101D403425EE91B2C5 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		NullCheck(L_0);
		Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 L_1;
		L_1 = List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB(L_0, List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB_RuntimeMethod_var);
		Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
// System.Int32 System.Text.Json.Serialization.ConverterList::IndexOf(System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConverterList_IndexOf_m00E33929E63DBF007A48057D66BE5E91C7E2FD7D (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_mBCEA699F3C84FB35B12BE6229FB1136B8B53F026_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_1 = ___item0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = List_1_IndexOf_mBCEA699F3C84FB35B12BE6229FB1136B8B53F026(L_0, L_1, List_1_IndexOf_mBCEA699F3C84FB35B12BE6229FB1136B8B53F026_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::Insert(System.Int32,System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_Insert_mF9607457DB86C593C5D6791318F02B52FE13928F (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, int32_t ___index0, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Insert_m645302915B0D08E5DB919640D2E557F63E0AC474_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_0 = ___item1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1426EAC460EF593AB4BA506E82CCB1FF95390521)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConverterList_Insert_mF9607457DB86C593C5D6791318F02B52FE13928F_RuntimeMethod_var)));
	}

IL_000e:
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_2 = __this->____options_1;
		NullCheck(L_2);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_2, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_3 = __this->____list_0;
		int32_t L_4 = ___index0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_5 = ___item1;
		NullCheck(L_3);
		List_1_Insert_m645302915B0D08E5DB919640D2E557F63E0AC474(L_3, L_4, L_5, List_1_Insert_m645302915B0D08E5DB919640D2E557F63E0AC474_RuntimeMethod_var);
		return;
	}
}
// System.Boolean System.Text.Json.Serialization.ConverterList::Remove(System.Text.Json.Serialization.JsonConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConverterList_Remove_mF1668BE4C4D66A63642E6BCA2F3DD65137BBF014 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* ___item0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mCE2280E34032D54BEE42BC4752A86D8F175A37A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_0 = __this->____options_1;
		NullCheck(L_0);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_0, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_1 = __this->____list_0;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_2 = ___item0;
		NullCheck(L_1);
		bool L_3;
		L_3 = List_1_Remove_mCE2280E34032D54BEE42BC4752A86D8F175A37A3(L_1, L_2, List_1_Remove_mCE2280E34032D54BEE42BC4752A86D8F175A37A3_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void System.Text.Json.Serialization.ConverterList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConverterList_RemoveAt_m5B3158281E9A5D8FC06FB8AE6175585EB25032C7 (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mE32795E00B40A73E981D12FD9749997AA06346EB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_0 = __this->____options_1;
		NullCheck(L_0);
		JsonSerializerOptions_VerifyMutable_m131F3518E80AE52B84A26FB14EA95FB154CCA324(L_0, NULL);
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_1 = __this->____list_0;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		List_1_RemoveAt_mE32795E00B40A73E981D12FD9749997AA06346EB(L_1, L_2, List_1_RemoveAt_mE32795E00B40A73E981D12FD9749997AA06346EB_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator System.Text.Json.Serialization.ConverterList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConverterList_System_Collections_IEnumerable_GetEnumerator_m6E6DD8CC8B66665EBA5560079712AB72F11A9A7F (ConverterList_t96B5B3A715BE6B901F867DEA1AB2CBA7553BDB9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t348C0367BE83EC0E260451D431D269265C31E47B* L_0 = __this->____list_0;
		NullCheck(L_0);
		Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 L_1;
		L_1 = List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB(L_0, List_1_GetEnumerator_m1B5C7BE59ED2CFDE0D739C21315396953E782AEB_RuntimeMethod_var);
		Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879 L_2 = L_1;
		RuntimeObject* L_3 = Box(Enumerator_t99199FDEC761D0E86094C49B50428949F23F1879_il2cpp_TypeInfo_var, &L_2);
		return (RuntimeObject*)L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_m23EFDEA2C29481891A2DA60D4E39F996475129EF (JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Type System.Text.Json.Serialization.JsonConverter::get_TypeToConvert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* JsonConverter_get_TypeToConvert_mE3DCBD125E732B8AB8EA92EAF7595654131721A5 (JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* __this, const RuntimeMethod* method) 
{
	{
		return (Type_t*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type System.Text.Json.Serialization.JsonConverterAttribute::get_ConverterType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* JsonConverterAttribute_get_ConverterType_m4F859C91463CB5C3485CF230A347929B0DFB6923 (JsonConverterAttribute_t468EC35E7E2180AE3E8CDBC3E5335699AF8C4A3E* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CConverterTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.JsonConverterAttribute::CreateConverter(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* JsonConverterAttribute_CreateConverter_mA104EBFE9E69E3EA640082F5D61F12761FDDF1FF (JsonConverterAttribute_t468EC35E7E2180AE3E8CDBC3E5335699AF8C4A3E* __this, Type_t* ___typeToConvert0, const RuntimeMethod* method) 
{
	{
		return (JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*)NULL;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.JsonConverterFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterFactory__ctor_m411B07ED997EEDA8B37628F05D4F8DA392BB1956 (JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853* __this, const RuntimeMethod* method) 
{
	{
		JsonConverter__ctor_m23EFDEA2C29481891A2DA60D4E39F996475129EF(__this, NULL);
		return;
	}
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.JsonConverterFactory::GetConverterInternal(System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* JsonConverterFactory_GetConverterInternal_m56BD0E54C66E7862785D9D2F92615DC179929EAA (JsonConverterFactory_t6B6D8F3ABDEE8F2BA12963179A5777D901ED1853* __this, Type_t* ___typeToConvert0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___typeToConvert0;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_1 = ___options1;
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_2;
		L_2 = VirtualFuncInvoker2< JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*, Type_t*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* >::Invoke(6 /* System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.JsonConverterFactory::CreateConverter(System.Type,System.Text.Json.JsonSerializerOptions) */, __this, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Text.Json.Serialization.JsonPropertyNameAttribute::get_Name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonPropertyNameAttribute_get_Name_mC37BF00D1224BB51B5165DA09B92E48A090FB0E2 (JsonPropertyNameAttribute_t6DA36821E2ECC006A0FA7377496AC3E7CCC6CCBA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CNameU3Ek__BackingField_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter::CreateFromDictionary(System.Text.Json.ReadStack&,System.Collections.IDictionary,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultDerivedDictionaryConverter_CreateFromDictionary_m075017041832575FB3AB49C437DA71B05B9A6553 (DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceDictionary1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_0 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_1 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		V_0 = L_2;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_3 = ___options2;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline(L_4, NULL);
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_6 = ___options2;
		NullCheck(L_3);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_7;
		L_7 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_3, L_5, L_6, NULL);
		V_1 = L_7;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_8 = V_1;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_9 = ___state0;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_10 = V_0;
		RuntimeObject* L_11 = ___sourceDictionary1;
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker3< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA*, RuntimeObject* >::Invoke(8 /* System.Object System.Text.Json.JsonPropertyInfo::CreateDerivedDictionaryInstance(System.Text.Json.ReadStack&,System.Text.Json.JsonPropertyInfo,System.Collections.IDictionary) */, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedDictionaryConverter__ctor_m81B69D48076FD85C56FB87EB5F39A946E41B4B7C (DefaultDerivedDictionaryConverter_t3D3DB07C7DF799A7517B854CEAE5C5286F03ACE6* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerable System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter::CreateFromList(System.Text.Json.ReadStack&,System.Collections.IList,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultDerivedEnumerableConverter_CreateFromList_mC5CC88714B18316C798671B0F11ADDAF2FAC0C59 (DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceList1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_0 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_1 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		V_0 = L_2;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_3 = ___options2;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_4 = V_0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline(L_4, NULL);
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_6 = ___options2;
		NullCheck(L_3);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_7;
		L_7 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_3, L_5, L_6, NULL);
		V_1 = L_7;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_8 = V_1;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_9 = ___state0;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_10 = V_0;
		RuntimeObject* L_11 = ___sourceList1;
		NullCheck(L_8);
		RuntimeObject* L_12;
		L_12 = VirtualFuncInvoker3< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA*, RuntimeObject* >::Invoke(7 /* System.Collections.IEnumerable System.Text.Json.JsonPropertyInfo::CreateDerivedEnumerableInstance(System.Text.Json.ReadStack&,System.Text.Json.JsonPropertyInfo,System.Collections.IList) */, L_8, L_9, L_10, L_11);
		return L_12;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultDerivedEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultDerivedEnumerableConverter__ctor_m52402EB7C14510516EB627CD81ADC2A20DF40AE3 (DefaultDerivedEnumerableConverter_tF696A390FD246808D70F4E5B8C3F121F4EB52F2E* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerable System.Text.Json.Serialization.Converters.DefaultArrayConverter::CreateFromList(System.Text.Json.ReadStack&,System.Collections.IList,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultArrayConverter_CreateFromList_mB10B8FF79194D322CE837FACBB4F991803D1B4E3 (DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceList1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeArray_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeArray* V_1 = NULL;
	RuntimeArray* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeArray* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		Type_t* L_2;
		L_2 = ReadStackFrame_GetElementType_mB5D520FD3D54FFEC6D882A8E587EF646368E95E5(L_1, NULL);
		V_0 = L_2;
		RuntimeObject* L_3 = ___sourceList1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_008b;
		}
	}
	{
		RuntimeObject* L_5 = ___sourceList1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_5, 0);
		V_2 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_6, RuntimeArray_il2cpp_TypeInfo_var));
		RuntimeArray* L_7 = V_2;
		if (!L_7)
		{
			goto IL_008b;
		}
	}
	{
		RuntimeArray* L_8 = V_2;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		RuntimeObject* L_10 = ___sourceList1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_10);
		RuntimeArray* L_12;
		L_12 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_9, L_11, NULL);
		V_1 = L_12;
		V_3 = 0;
		RuntimeObject* L_13 = ___sourceList1;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_13);
		V_4 = L_14;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0076:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_15 = V_4;
					V_7 = ((RuntimeObject*)IsInst((RuntimeObject*)L_15, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_16 = V_7;
					if (!L_16)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_17 = V_7;
					NullCheck(L_17);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_17);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006b_1;
			}

IL_0043_1:
			{
				RuntimeObject* L_18 = V_4;
				NullCheck(L_18);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				V_5 = ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
				RuntimeObject* L_20 = V_5;
				V_6 = ((RuntimeArray*)IsInstClass((RuntimeObject*)L_20, RuntimeArray_il2cpp_TypeInfo_var));
				RuntimeArray* L_21 = V_6;
				if (!L_21)
				{
					goto IL_006b_1;
				}
			}
			{
				RuntimeArray* L_22 = V_1;
				RuntimeArray* L_23 = V_6;
				int32_t L_24 = V_3;
				int32_t L_25 = L_24;
				V_3 = ((int32_t)il2cpp_codegen_add(L_25, 1));
				NullCheck(L_22);
				Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_22, L_23, L_25, NULL);
			}

IL_006b_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0043_1;
				}
			}
			{
				goto IL_00a0;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
		Type_t* L_28 = V_0;
		RuntimeObject* L_29 = ___sourceList1;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_29);
		RuntimeArray* L_31;
		L_31 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_28, L_30, NULL);
		V_1 = L_31;
		RuntimeObject* L_32 = ___sourceList1;
		RuntimeArray* L_33 = V_1;
		NullCheck(L_32);
		InterfaceActionInvoker2< RuntimeArray*, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_32, L_33, 0);
	}

IL_00a0:
	{
		RuntimeArray* L_34 = V_1;
		return L_34;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultArrayConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultArrayConverter__ctor_mBDAB2266C43390FB11C03AF8A30D0DC7DAC3B72E (DefaultArrayConverter_tFD1C4AC3B65779803121944986502F02922D2605* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.IEnumerable System.Text.Json.Serialization.Converters.DefaultICollectionConverter::CreateFromList(System.Text.Json.ReadStack&,System.Collections.IList,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultICollectionConverter_CreateFromList_m4EB66E297ABC2381934EF50E5F90C397933BDC84 (DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceList1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_2 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline(L_2, NULL);
		V_0 = L_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_4 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_5 = (&L_4->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_6 = L_5->___JsonPropertyInfo_4;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline(L_6, NULL);
		V_1 = L_7;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_8 = ___options2;
		Type_t* L_9 = V_1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		NullCheck(L_8);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_11;
		L_11 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_12 = V_2;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_13 = ___state0;
		Type_t* L_14 = V_0;
		RuntimeObject* L_15 = ___sourceList1;
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker3< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, Type_t*, RuntimeObject* >::Invoke(9 /* System.Collections.IEnumerable System.Text.Json.JsonPropertyInfo::CreateIEnumerableInstance(System.Text.Json.ReadStack&,System.Type,System.Collections.IList) */, L_12, L_13, L_14, L_15);
		return L_16;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultICollectionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultICollectionConverter__ctor_m291127CDAD518A4FBE5694D47142281C9D33B9E3 (DefaultICollectionConverter_t40CE112597A878F4E7CB881D484C0FC98F1C797F* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter::CreateFromDictionary(System.Text.Json.ReadStack&,System.Collections.IDictionary,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultIDictionaryConverter_CreateFromDictionary_m4D08F999E93B69C9602560638FA0F5E9412EE8F8 (DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceDictionary1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_2 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline(L_2, NULL);
		V_0 = L_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_4 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_5 = (&L_4->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_6 = L_5->___JsonPropertyInfo_4;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline(L_6, NULL);
		V_1 = L_7;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_8 = ___options2;
		Type_t* L_9 = V_1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		NullCheck(L_8);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_11;
		L_11 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_12 = V_2;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_13 = ___state0;
		Type_t* L_14 = V_0;
		RuntimeObject* L_15 = ___sourceDictionary1;
		NullCheck(L_12);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker3< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, Type_t*, RuntimeObject* >::Invoke(10 /* System.Collections.IDictionary System.Text.Json.JsonPropertyInfo::CreateIDictionaryInstance(System.Text.Json.ReadStack&,System.Type,System.Collections.IDictionary) */, L_12, L_13, L_14, L_15);
		return L_16;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultIDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultIDictionaryConverter__ctor_m8DBC41394C0AD649767274673733C899C6D4B9CF (DefaultIDictionaryConverter_t37744FA7D0A39C15AAC3EB2C87B55BE6CB51FB58* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::GetDelegateKey(System.Type,System.Type,System.Type&,System.String&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519 (Type_t* ___immutableCollectionType0, Type_t* ___elementType1, Type_t** ___underlyingType2, String_t** ___constructingTypeName3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0970355F339FE6FF1C222547CF241398A1C378A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral136926B654432552F29A067979EE9E9D569C7895);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35DE67C929967618347FCE340E2E87102A932FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral49AA63440730594CB862C148C034957D190DBB80);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E5E11BFC1B758617E7403A28E45E8E18562B95);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678C8068977C934D424C4D57A19F629825D2A4BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6933B3473F816EDB2EEF7A7CEF6EFA018D17C6B3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6A0B34AAFB24E098ABCB1BE882BD0878913C3D28);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CC89AE92D5E497F1202B3C349634C66958E8423);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D121639A07E322A737215D5BD5E08E4194BC92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87C02C6ED924DBDF9E706ECBA4CF02938714E608);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B4B3F4658F5299CF25AA8C483513A423A6C1E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F5D597C1F916FE878F01CF7090052DBF4EE07E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA52838C9E06400FD794AE6DF33C5AE83BE60D878);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAAEAF54173166405B926BB5574839DE67CA541AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC89ED2A5E7C138031837DF70004D15D0B608F982);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD26DE29642C27888155DD7EC5F53F6D1A55BA2D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDB0068F06DC4CE0D4EC2AC5016BF557B2BA6EE7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE3B7AB722A7F6C702B293A2D07B91E051ECD568);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF125FE9766275C94D708AE1B19214A966542F343);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF4755C417A8BAD97BCCC04B580B977A4D1964112);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	uint32_t V_1 = 0;
	{
		Type_t** L_0 = ___underlyingType2;
		Type_t* L_1 = ___immutableCollectionType0;
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_1);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		Type_t** L_3 = ___underlyingType2;
		Type_t* L_4 = *((Type_t**)L_3);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_4);
		V_0 = L_5;
		String_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_021a;
		}
	}
	{
		String_t* L_7 = V_0;
		uint32_t L_8;
		L_8 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m49E2E4F63C1CBDA71284D33E4FFA5C738240F7D9(L_7, NULL);
		V_1 = L_8;
		uint32_t L_9 = V_1;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)-2064915329)))))
		{
			goto IL_0079;
		}
	}
	{
		uint32_t L_10 = V_1;
		if ((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)472021912)))))
		{
			goto IL_0053;
		}
	}
	{
		uint32_t L_11 = V_1;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)52959737))))
		{
			goto IL_01a5;
		}
	}
	{
		uint32_t L_12 = V_1;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)149532411))))
		{
			goto IL_00df;
		}
	}
	{
		uint32_t L_13 = V_1;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)472021912))))
		{
			goto IL_01c3;
		}
	}
	{
		goto IL_021a;
	}

IL_0053:
	{
		uint32_t L_14 = V_1;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)682854278))))
		{
			goto IL_0184;
		}
	}
	{
		uint32_t L_15 = V_1;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)746683405))))
		{
			goto IL_0172;
		}
	}
	{
		uint32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2064915329))))
		{
			goto IL_0133;
		}
	}
	{
		goto IL_021a;
	}

IL_0079:
	{
		uint32_t L_17 = V_1;
		if ((!(((uint32_t)L_17) <= ((uint32_t)((int32_t)-1373070593)))))
		{
			goto IL_00a1;
		}
	}
	{
		uint32_t L_18 = V_1;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-1691425894))))
		{
			goto IL_011e;
		}
	}
	{
		uint32_t L_19 = V_1;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1553751872))))
		{
			goto IL_00f4;
		}
	}
	{
		uint32_t L_20 = V_1;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)-1373070593))))
		{
			goto IL_0109;
		}
	}
	{
		goto IL_021a;
	}

IL_00a1:
	{
		uint32_t L_21 = V_1;
		if ((!(((uint32_t)L_21) <= ((uint32_t)((int32_t)-770860336)))))
		{
			goto IL_00c4;
		}
	}
	{
		uint32_t L_22 = V_1;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-829064843))))
		{
			goto IL_0148;
		}
	}
	{
		uint32_t L_23 = V_1;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-770860336))))
		{
			goto IL_015d;
		}
	}
	{
		goto IL_021a;
	}

IL_00c4:
	{
		uint32_t L_24 = V_1;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-768093138))))
		{
			goto IL_01b4;
		}
	}
	{
		uint32_t L_25 = V_1;
		if ((((int32_t)L_25) == ((int32_t)((int32_t)-646128865))))
		{
			goto IL_0196;
		}
	}
	{
		goto IL_021a;
	}

IL_00df:
	{
		String_t* L_26 = V_0;
		bool L_27;
		L_27 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_26, _stringLiteral59E5E11BFC1B758617E7403A28E45E8E18562B95, NULL);
		if (L_27)
		{
			goto IL_01d2;
		}
	}
	{
		goto IL_021a;
	}

IL_00f4:
	{
		String_t* L_28 = V_0;
		bool L_29;
		L_29 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_28, _stringLiteral0970355F339FE6FF1C222547CF241398A1C378A9, NULL);
		if (L_29)
		{
			goto IL_01db;
		}
	}
	{
		goto IL_021a;
	}

IL_0109:
	{
		String_t* L_30 = V_0;
		bool L_31;
		L_31 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, _stringLiteralDDB0068F06DC4CE0D4EC2AC5016BF557B2BA6EE7, NULL);
		if (L_31)
		{
			goto IL_01db;
		}
	}
	{
		goto IL_021a;
	}

IL_011e:
	{
		String_t* L_32 = V_0;
		bool L_33;
		L_33 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_32, _stringLiteralF4755C417A8BAD97BCCC04B580B977A4D1964112, NULL);
		if (L_33)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_021a;
	}

IL_0133:
	{
		String_t* L_34 = V_0;
		bool L_35;
		L_35 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_34, _stringLiteral49AA63440730594CB862C148C034957D190DBB80, NULL);
		if (L_35)
		{
			goto IL_01e4;
		}
	}
	{
		goto IL_021a;
	}

IL_0148:
	{
		String_t* L_36 = V_0;
		bool L_37;
		L_37 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_36, _stringLiteralAAEAF54173166405B926BB5574839DE67CA541AB, NULL);
		if (L_37)
		{
			goto IL_01ed;
		}
	}
	{
		goto IL_021a;
	}

IL_015d:
	{
		String_t* L_38 = V_0;
		bool L_39;
		L_39 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_38, _stringLiteral6933B3473F816EDB2EEF7A7CEF6EFA018D17C6B3, NULL);
		if (L_39)
		{
			goto IL_01ed;
		}
	}
	{
		goto IL_021a;
	}

IL_0172:
	{
		String_t* L_40 = V_0;
		bool L_41;
		L_41 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_40, _stringLiteral8B4B3F4658F5299CF25AA8C483513A423A6C1E5D, NULL);
		if (L_41)
		{
			goto IL_01f6;
		}
	}
	{
		goto IL_021a;
	}

IL_0184:
	{
		String_t* L_42 = V_0;
		bool L_43;
		L_43 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_42, _stringLiteralC89ED2A5E7C138031837DF70004D15D0B608F982, NULL);
		if (L_43)
		{
			goto IL_01ff;
		}
	}
	{
		goto IL_021a;
	}

IL_0196:
	{
		String_t* L_44 = V_0;
		bool L_45;
		L_45 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, _stringLiteralEE3B7AB722A7F6C702B293A2D07B91E051ECD568, NULL);
		if (L_45)
		{
			goto IL_01ff;
		}
	}
	{
		goto IL_021a;
	}

IL_01a5:
	{
		String_t* L_46 = V_0;
		bool L_47;
		L_47 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_46, _stringLiteral678C8068977C934D424C4D57A19F629825D2A4BB, NULL);
		if (L_47)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_021a;
	}

IL_01b4:
	{
		String_t* L_48 = V_0;
		bool L_49;
		L_49 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_48, _stringLiteral72D121639A07E322A737215D5BD5E08E4194BC92, NULL);
		if (L_49)
		{
			goto IL_0208;
		}
	}
	{
		goto IL_021a;
	}

IL_01c3:
	{
		String_t* L_50 = V_0;
		bool L_51;
		L_51 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_50, _stringLiteral35DE67C929967618347FCE340E2E87102A932FEB, NULL);
		if (L_51)
		{
			goto IL_0211;
		}
	}
	{
		goto IL_021a;
	}

IL_01d2:
	{
		String_t** L_52 = ___constructingTypeName3;
		*((RuntimeObject**)L_52) = (RuntimeObject*)_stringLiteral6A0B34AAFB24E098ABCB1BE882BD0878913C3D28;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_52, (void*)(RuntimeObject*)_stringLiteral6A0B34AAFB24E098ABCB1BE882BD0878913C3D28);
		goto IL_0223;
	}

IL_01db:
	{
		String_t** L_53 = ___constructingTypeName3;
		*((RuntimeObject**)L_53) = (RuntimeObject*)_stringLiteralF125FE9766275C94D708AE1B19214A966542F343;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_53, (void*)(RuntimeObject*)_stringLiteralF125FE9766275C94D708AE1B19214A966542F343);
		goto IL_0223;
	}

IL_01e4:
	{
		String_t** L_54 = ___constructingTypeName3;
		*((RuntimeObject**)L_54) = (RuntimeObject*)_stringLiteral136926B654432552F29A067979EE9E9D569C7895;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_54, (void*)(RuntimeObject*)_stringLiteral136926B654432552F29A067979EE9E9D569C7895);
		goto IL_0223;
	}

IL_01ed:
	{
		String_t** L_55 = ___constructingTypeName3;
		*((RuntimeObject**)L_55) = (RuntimeObject*)_stringLiteralCD26DE29642C27888155DD7EC5F53F6D1A55BA2D;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_55, (void*)(RuntimeObject*)_stringLiteralCD26DE29642C27888155DD7EC5F53F6D1A55BA2D);
		goto IL_0223;
	}

IL_01f6:
	{
		String_t** L_56 = ___constructingTypeName3;
		*((RuntimeObject**)L_56) = (RuntimeObject*)_stringLiteral87C02C6ED924DBDF9E706ECBA4CF02938714E608;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_56, (void*)(RuntimeObject*)_stringLiteral87C02C6ED924DBDF9E706ECBA4CF02938714E608);
		goto IL_0223;
	}

IL_01ff:
	{
		String_t** L_57 = ___constructingTypeName3;
		*((RuntimeObject**)L_57) = (RuntimeObject*)_stringLiteral6CC89AE92D5E497F1202B3C349634C66958E8423;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_57, (void*)(RuntimeObject*)_stringLiteral6CC89AE92D5E497F1202B3C349634C66958E8423);
		goto IL_0223;
	}

IL_0208:
	{
		String_t** L_58 = ___constructingTypeName3;
		*((RuntimeObject**)L_58) = (RuntimeObject*)_stringLiteralA52838C9E06400FD794AE6DF33C5AE83BE60D878;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_58, (void*)(RuntimeObject*)_stringLiteralA52838C9E06400FD794AE6DF33C5AE83BE60D878);
		goto IL_0223;
	}

IL_0211:
	{
		String_t** L_59 = ___constructingTypeName3;
		*((RuntimeObject**)L_59) = (RuntimeObject*)_stringLiteral9F5D597C1F916FE878F01CF7090052DBF4EE07E1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_59, (void*)(RuntimeObject*)_stringLiteral9F5D597C1F916FE878F01CF7090052DBF4EE07E1);
		goto IL_0223;
	}

IL_021a:
	{
		Type_t* L_60 = ___immutableCollectionType0;
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_61;
		L_61 = ThrowHelper_GetNotSupportedException_SerializationNotSupportedCollection_mC57C5A8FA96EF3A72378783BCC7A09E38C8A3B61(L_60, (Type_t*)NULL, (MemberInfo_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_61, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519_RuntimeMethod_var)));
	}

IL_0223:
	{
		String_t** L_62 = ___constructingTypeName3;
		String_t* L_63 = *((String_t**)L_62);
		Type_t* L_64 = ___elementType1;
		NullCheck(L_64);
		String_t* L_65;
		L_65 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_64);
		String_t* L_66;
		L_66 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_63, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_65, NULL);
		return L_66;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::RegisterImmutableCollection(System.Type,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableEnumerableConverter_RegisterImmutableCollection_m55F38A7D9BEE09DD58D3DA28984ABC3E2BED6A28 (Type_t* ___immutableCollectionType0, Type_t* ___elementType1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* V_4 = NULL;
	{
		Type_t* L_0 = ___immutableCollectionType0;
		Type_t* L_1 = ___elementType1;
		String_t* L_2;
		L_2 = DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519(L_0, L_1, (&V_1), (&V_2), NULL);
		V_0 = L_2;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_3 = ___options2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = JsonSerializerOptions_CreateRangeDelegatesContainsKey_m2C5F1C9E27A6A33EBBCC9F0675EFD1F5B8B3C3F6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Type_t* L_6 = V_1;
		NullCheck(L_6);
		Assembly_t* L_7;
		L_7 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_6);
		String_t* L_8 = V_2;
		NullCheck(L_7);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(19 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_7, L_8);
		V_3 = L_9;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		NullCheck(L_10);
		MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC* L_11;
		L_11 = JsonSerializerOptions_get_MemberAccessorStrategy_m4A5B819731E3EBA23BDB9DBBD7606148A4620B88(L_10, NULL);
		Type_t* L_12 = V_3;
		Type_t* L_13 = ___immutableCollectionType0;
		Type_t* L_14 = ___elementType1;
		NullCheck(L_11);
		ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* L_15;
		L_15 = VirtualFuncInvoker3< ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF*, Type_t*, Type_t*, Type_t* >::Invoke(5 /* System.Text.Json.ImmutableCollectionCreator System.Text.Json.MemberAccessor::ImmutableCollectionCreateRange(System.Type,System.Type,System.Type) */, L_11, L_12, L_13, L_14);
		V_4 = L_15;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_16 = ___options2;
		String_t* L_17 = V_0;
		ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* L_18 = V_4;
		NullCheck(L_16);
		bool L_19;
		L_19 = JsonSerializerOptions_TryAddCreateRangeDelegate_m40F08A5B9F186174484019B0D99FEB562CC28D85(L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Collections.IEnumerable System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::CreateFromList(System.Text.Json.ReadStack&,System.Collections.IList,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultImmutableEnumerableConverter_CreateFromList_mA60B74F451A5DCEDDDE8DB8DF3284319F889FC9C (DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceList1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_3 = NULL;
	Type_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline(L_2, NULL);
		V_0 = L_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_4 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_5 = (&L_4->___Current_1);
		Type_t* L_6;
		L_6 = ReadStackFrame_GetElementType_mB5D520FD3D54FFEC6D882A8E587EF646368E95E5(L_5, NULL);
		V_1 = L_6;
		Type_t* L_7 = V_0;
		Type_t* L_8 = V_1;
		String_t* L_9;
		L_9 = DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519(L_7, L_8, (&V_4), (&V_5), NULL);
		V_2 = L_9;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		Type_t* L_11 = V_1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_12 = ___options2;
		NullCheck(L_10);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_13;
		L_13 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_10, L_11, L_12, NULL);
		V_3 = L_13;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_14 = V_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_15 = ___state0;
		Type_t* L_16 = V_0;
		String_t* L_17 = V_2;
		RuntimeObject* L_18 = ___sourceList1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_19 = ___options2;
		NullCheck(L_14);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker5< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, Type_t*, String_t*, RuntimeObject*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* >::Invoke(11 /* System.Collections.IEnumerable System.Text.Json.JsonPropertyInfo::CreateImmutableCollectionInstance(System.Text.Json.ReadStack&,System.Type,System.String,System.Collections.IList,System.Text.Json.JsonSerializerOptions) */, L_14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableEnumerableConverter__ctor_m3963869F7FA667504E14220D288893C29FA0268B (DefaultImmutableEnumerableConverter_t286203A9219B2603BE16353AC882EC1532D90D8D* __this, const RuntimeMethod* method) 
{
	{
		JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::RegisterImmutableDictionary(System.Type,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableDictionaryConverter_RegisterImmutableDictionary_m0680773BE719C149317CC8B54B62FB1DF10969CD (Type_t* ___immutableCollectionType0, Type_t* ___elementType1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* V_4 = NULL;
	{
		Type_t* L_0 = ___immutableCollectionType0;
		Type_t* L_1 = ___elementType1;
		String_t* L_2;
		L_2 = DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519(L_0, L_1, (&V_1), (&V_2), NULL);
		V_0 = L_2;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_3 = ___options2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = JsonSerializerOptions_CreateRangeDelegatesContainsKey_m2C5F1C9E27A6A33EBBCC9F0675EFD1F5B8B3C3F6(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_0016;
		}
	}
	{
		return;
	}

IL_0016:
	{
		Type_t* L_6 = V_1;
		NullCheck(L_6);
		Assembly_t* L_7;
		L_7 = VirtualFuncInvoker0< Assembly_t* >::Invoke(27 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_6);
		String_t* L_8 = V_2;
		NullCheck(L_7);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(19 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_7, L_8);
		V_3 = L_9;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		NullCheck(L_10);
		MemberAccessor_t7A9E3E1560E04ADB3368AE7678AC6123301ADCCC* L_11;
		L_11 = JsonSerializerOptions_get_MemberAccessorStrategy_m4A5B819731E3EBA23BDB9DBBD7606148A4620B88(L_10, NULL);
		Type_t* L_12 = V_3;
		Type_t* L_13 = ___immutableCollectionType0;
		Type_t* L_14 = ___elementType1;
		NullCheck(L_11);
		ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* L_15;
		L_15 = VirtualFuncInvoker3< ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF*, Type_t*, Type_t*, Type_t* >::Invoke(6 /* System.Text.Json.ImmutableCollectionCreator System.Text.Json.MemberAccessor::ImmutableDictionaryCreateRange(System.Type,System.Type,System.Type) */, L_11, L_12, L_13, L_14);
		V_4 = L_15;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_16 = ___options2;
		String_t* L_17 = V_0;
		ImmutableCollectionCreator_t620788300804F1EE5CFE6F76D066795B071C25AF* L_18 = V_4;
		NullCheck(L_16);
		bool L_19;
		L_19 = JsonSerializerOptions_TryAddCreateRangeDelegate_m40F08A5B9F186174484019B0D99FEB562CC28D85(L_16, L_17, L_18, NULL);
		return;
	}
}
// System.Boolean System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::IsImmutableDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DefaultImmutableDictionaryConverter_IsImmutableDictionary_m03A30F1B113966A846F90505153023E82805C085 (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35DE67C929967618347FCE340E2E87102A932FEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral678C8068977C934D424C4D57A19F629825D2A4BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72D121639A07E322A737215D5BD5E08E4194BC92);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Type_t* L_2 = ___type0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_3);
		V_0 = L_4;
		String_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_6 = V_0;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_6, _stringLiteral678C8068977C934D424C4D57A19F629825D2A4BB, NULL);
		if (L_7)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_8 = V_0;
		bool L_9;
		L_9 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_8, _stringLiteral72D121639A07E322A737215D5BD5E08E4194BC92, NULL);
		if (L_9)
		{
			goto IL_0040;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteral35DE67C929967618347FCE340E2E87102A932FEB, NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}

IL_0040:
	{
		return (bool)1;
	}

IL_0042:
	{
		return (bool)0;
	}
}
// System.Object System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::CreateFromDictionary(System.Text.Json.ReadStack&,System.Collections.IDictionary,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DefaultImmutableDictionaryConverter_CreateFromDictionary_m85AFA6AD131C057D8E78E675CA74E582AB82461D (DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C* __this, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* ___state0, RuntimeObject* ___sourceDictionary1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	String_t* V_2 = NULL;
	JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* V_3 = NULL;
	Type_t* V_4 = NULL;
	String_t* V_5 = NULL;
	{
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_0 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_1 = (&L_0->___Current_1);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_2 = L_1->___JsonPropertyInfo_4;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline(L_2, NULL);
		V_0 = L_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_4 = ___state0;
		ReadStackFrame_t8DABE60E6F912C1C19F02BE56C9BC7CA062EE20A* L_5 = (&L_4->___Current_1);
		Type_t* L_6;
		L_6 = ReadStackFrame_GetElementType_mB5D520FD3D54FFEC6D882A8E587EF646368E95E5(L_5, NULL);
		V_1 = L_6;
		Type_t* L_7 = V_0;
		Type_t* L_8 = V_1;
		String_t* L_9;
		L_9 = DefaultImmutableEnumerableConverter_GetDelegateKey_m1A9B43F440971CA0C2F4C1A4D8B0351A5EC38519(L_7, L_8, (&V_4), (&V_5), NULL);
		V_2 = L_9;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_10 = ___options2;
		Type_t* L_11 = V_1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_12 = ___options2;
		NullCheck(L_10);
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_13;
		L_13 = JsonSerializerOptions_GetJsonPropertyInfoFromClassInfo_m5BF574D190FFF4AF8E46968CEDD473C98E57E669(L_10, L_11, L_12, NULL);
		V_3 = L_13;
		JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* L_14 = V_3;
		ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9* L_15 = ___state0;
		Type_t* L_16 = V_0;
		String_t* L_17 = V_2;
		RuntimeObject* L_18 = ___sourceDictionary1;
		JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* L_19 = ___options2;
		NullCheck(L_14);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker5< RuntimeObject*, ReadStack_t3F5BA42D8204DB5EC2843D77EC7A94401EAFC7A9*, Type_t*, String_t*, RuntimeObject*, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* >::Invoke(12 /* System.Collections.IDictionary System.Text.Json.JsonPropertyInfo::CreateImmutableDictionaryInstance(System.Text.Json.ReadStack&,System.Type,System.String,System.Collections.IDictionary,System.Text.Json.JsonSerializerOptions) */, L_14, L_15, L_16, L_17, L_18, L_19);
		return L_20;
	}
}
// System.Void System.Text.Json.Serialization.Converters.DefaultImmutableDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefaultImmutableDictionaryConverter__ctor_mB445EF0D61614E838CD3A5F4ACEAC98B32A14272 (DefaultImmutableDictionaryConverter_t8A0A93790F90A6A48E68F6D2B764F0585BA7F17C* __this, const RuntimeMethod* method) 
{
	{
		JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Text.Json.Serialization.Converters.JsonKeyValuePairConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonKeyValuePairConverter_CanConvert_mEB486F108372F3004FD9757B69AB971294B27981 (JsonKeyValuePairConverter_t10E05414FDB76FD28169C5B9499D5CF991C0DDA5* __this, Type_t* ___typeToConvert0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		Type_t* L_0 = ___typeToConvert0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(40 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Type_t* L_2 = ___typeToConvert0;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetGenericTypeDefinition() */, L_2);
		V_0 = L_3;
		Type_t* L_4 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (KeyValuePair_2_t6B67F15F63BF2F3C9BF0458C0AA16F217BE189F0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		return L_7;
	}
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.Converters.JsonKeyValuePairConverter::CreateConverter(System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* JsonKeyValuePairConverter_CreateConverter_m14FA77697DA7F3021C583F76BCE88577D7B280D7 (JsonKeyValuePairConverter_t10E05414FDB76FD28169C5B9499D5CF991C0DDA5* __this, Type_t* ___type0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonKeyValuePairConverter_2_t199CDD58CBE96B8655358CD28275B6F510272F34_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* V_2 = NULL;
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1;
		L_1 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_0);
		NullCheck(L_1);
		int32_t L_2 = 0;
		Type_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		Type_t* L_4 = ___type0;
		NullCheck(L_4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_5;
		L_5 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(50 /* System.Type[] System.Type::GetGenericArguments() */, L_4);
		NullCheck(L_5);
		int32_t L_6 = 1;
		Type_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (JsonKeyValuePairConverter_2_t199CDD58CBE96B8655358CD28275B6F510272F34_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = L_10;
		Type_t* L_12 = V_0;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_11;
		Type_t* L_14 = V_1;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_14);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_14);
		NullCheck(L_9);
		Type_t* L_15;
		L_15 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(122 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_9, L_13);
		RuntimeObject* L_16;
		L_16 = Activator_CreateInstance_m0DFAA1415ABA9B28430FDC70A9915BE437C04B04(L_15, ((int32_t)20), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL, NULL);
		V_2 = ((JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*)CastclassClass((RuntimeObject*)L_16, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8_il2cpp_TypeInfo_var));
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_17 = V_2;
		return L_17;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonKeyValuePairConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonKeyValuePairConverter__ctor_m73AABBF3F71EF4BE2D0E5F85B8A87884A091D648 (JsonKeyValuePairConverter_t10E05414FDB76FD28169C5B9499D5CF991C0DDA5* __this, const RuntimeMethod* method) 
{
	{
		JsonConverterFactory__ctor_m411B07ED997EEDA8B37628F05D4F8DA392BB1956(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.Text.Json.Serialization.Converters.JsonConverterBoolean::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConverterBoolean_Read_m2820266B348C93AC36BAA31F5529B5C9D1F0083E (JsonConverterBoolean_t4ABA9E66F0DC55F4BFDAEF641BDE795A338F46D9* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		bool L_1;
		L_1 = Utf8JsonReader_GetBoolean_m4A0CCA2B3FF77D11CDEF65077936B5CA951962C6(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterBoolean::Write(System.Text.Json.Utf8JsonWriter,System.Boolean,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterBoolean_Write_m9AD9DF494F4E309A77C51177052C377CB2D61007 (JsonConverterBoolean_t4ABA9E66F0DC55F4BFDAEF641BDE795A338F46D9* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, bool ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		bool L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteBooleanValue_mA04EC87538557C4D69DA626CE79295F85A722BFF(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterBoolean::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterBoolean__ctor_m2BBB2C8872E8880E157241BEF24D92E9B93A9123 (JsonConverterBoolean_t4ABA9E66F0DC55F4BFDAEF641BDE795A338F46D9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF(__this, JsonConverter_1__ctor_mC97CD8C4C55A38D47A23158384448921DC9A39BF_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte System.Text.Json.Serialization.Converters.JsonConverterByte::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t JsonConverterByte_Read_m47DEF36E7106ECC9428FCF8833A98CB13F07BE13 (JsonConverterByte_tFCF41149F5F65B2E5864E22D280C700B228D47B6* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		uint8_t L_1;
		L_1 = Utf8JsonReader_GetByte_mEC280899A1AD56A59AABAF6F35E061C5A257A232(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterByte::Write(System.Text.Json.Utf8JsonWriter,System.Byte,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterByte_Write_m8407BB50397432175B09A40994B78ED0C74DF61B (JsonConverterByte_tFCF41149F5F65B2E5864E22D280C700B228D47B6* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, uint8_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		uint8_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterByte__ctor_m0FB436268CA2A13877F4F2A611877B0A46A09EFD (JsonConverterByte_tFCF41149F5F65B2E5864E22D280C700B228D47B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB(__this, JsonConverter_1__ctor_m0820BD3946DCD5BB83EED715E772BAB74676A2CB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Byte[] System.Text.Json.Serialization.Converters.JsonConverterByteArray::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* JsonConverterByteArray_Read_m31756D0D34A1D06504C7904858396C3BE0997DFC (JsonConverterByteArray_t8DD88D87914DE2BCD32996B2E65653D2C78AFC4A* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1;
		L_1 = Utf8JsonReader_GetBytesFromBase64_mBD400780F573FB4057B04E9B6CE298AC931ACD5A(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterByteArray::Write(System.Text.Json.Utf8JsonWriter,System.Byte[],System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterByteArray_Write_m03F3A0A661E05B35DC1D7C75B1C4F3C4ED054D77 (JsonConverterByteArray_t8DD88D87914DE2BCD32996B2E65653D2C78AFC4A* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___value1;
		ReadOnlySpan_1_tA850A6C0E88ABBA37646A078ACBC24D6D5FD9B4D L_2;
		L_2 = ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644(L_1, ReadOnlySpan_1_op_Implicit_mCEA7A54A72D5D6EADEFE280B4927119123C8E644_RuntimeMethod_var);
		NullCheck(L_0);
		Utf8JsonWriter_WriteBase64StringValue_m4CC0DAD92DF2723492C5DF18B8B3028BA6009C00(L_0, L_2, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterByteArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterByteArray__ctor_mEDE5A9E12FAA8A68BC58995FAF0A4C1C67C6E508 (JsonConverterByteArray_t8DD88D87914DE2BCD32996B2E65653D2C78AFC4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4(__this, JsonConverter_1__ctor_mA025D83F77A55978B2D5C037B52F542FA9F38BC4_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Char System.Text.Json.Serialization.Converters.JsonConverterChar::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar JsonConverterChar_Read_m9218A4123CA9C90B83C997D13AD73CA0120F4B5C (JsonConverterChar_t4953CA56C64173331D0755B0AC1BEB0F705D4434* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		String_t* L_1;
		L_1 = Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11(L_0, NULL);
		NullCheck(L_1);
		Il2CppChar L_2;
		L_2 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, 0, NULL);
		return L_2;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterChar::Write(System.Text.Json.Utf8JsonWriter,System.Char,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterChar_Write_m9D66361D3B07BC019BFA5ADD87DF86914D048C2B (JsonConverterChar_t4953CA56C64173331D0755B0AC1BEB0F705D4434* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, Il2CppChar ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		String_t* L_1;
		L_1 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&___value1), NULL);
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_m348BACAA9A8628253717C938871B084D8AB48D80(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterChar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterChar__ctor_mB5EA4E2D2033EE8A6D941C79F42BB92D687A527E (JsonConverterChar_t4953CA56C64173331D0755B0AC1BEB0F705D4434* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8(__this, JsonConverter_1__ctor_m36D7C81CB637BC5200E5E799D73415418A359CE8_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTime System.Text.Json.Serialization.Converters.JsonConverterDateTime::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D JsonConverterDateTime_Read_mF89561C6E9A2575DC8C182779D6847ADBF70479F (JsonConverterDateTime_t66F56F26173DC32E41347853EAC5F6078BFD28DB* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = Utf8JsonReader_GetDateTime_mE98D9A548388D8526C4F0CC35899D2F14D43B22F(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDateTime::Write(System.Text.Json.Utf8JsonWriter,System.DateTime,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDateTime_Write_m45F8F6B87D3CF5E8ED14F9CAA84B481ECB1698F6 (JsonConverterDateTime_t66F56F26173DC32E41347853EAC5F6078BFD28DB* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_mE130AF1B2A2C307C9A4BE3282CDCA46E708BDAC0(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDateTime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDateTime__ctor_mE5E729979B4699308787F6EF7939C2137ED89D03 (JsonConverterDateTime_t66F56F26173DC32E41347853EAC5F6078BFD28DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37(__this, JsonConverter_1__ctor_mB8F8CAF1FDFCEE05A163826465F218DB4208BB37_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.DateTimeOffset System.Text.Json.Serialization.Converters.JsonConverterDateTimeOffset::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 JsonConverterDateTimeOffset_Read_m272B64F74DCCAACBC0801751F9AC4CA61A949CD2 (JsonConverterDateTimeOffset_tF18C52F3B0DC5EACD371429AB46FA88F27B1EA45* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1;
		L_1 = Utf8JsonReader_GetDateTimeOffset_m34029D75821CEB4740BF1D8B359747D6475C88B9(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDateTimeOffset::Write(System.Text.Json.Utf8JsonWriter,System.DateTimeOffset,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDateTimeOffset_Write_m9B6886919B580849BDA283B47E1E19BA54697CA1 (JsonConverterDateTimeOffset_tF18C52F3B0DC5EACD371429AB46FA88F27B1EA45* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_mDB0C7D389DBCAA8408DB0FFD6BE056F4DB179732(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDateTimeOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDateTimeOffset__ctor_mF28BE553A7EDE443AA3CE8B4C5D9A162EDE45C6A (JsonConverterDateTimeOffset_tF18C52F3B0DC5EACD371429AB46FA88F27B1EA45* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9(__this, JsonConverter_1__ctor_mF8EBD1F294CBA0038ECE93399F28012BF0E5ECF9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Decimal System.Text.Json.Serialization.Converters.JsonConverterDecimal::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F JsonConverterDecimal_Read_m08943D009E544882C8DAC19B90E5AF9E923D0F66 (JsonConverterDecimal_t9384E371E1980789B48CF9A6342F89E4F3E09DD1* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1;
		L_1 = Utf8JsonReader_GetDecimal_m0F141F3F50CD249A6EA21E01188DE311EAE86F41(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDecimal::Write(System.Text.Json.Utf8JsonWriter,System.Decimal,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDecimal_Write_mDDCB8B31F3B74E9C330F5C48090158E840D335DE (JsonConverterDecimal_t9384E371E1980789B48CF9A6342F89E4F3E09DD1* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m95366FE40CF93FC6091A43A618B70867460869D6(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDecimal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDecimal__ctor_mE81B26DDDCB83B1457F5D7E05521A2741D85408F (JsonConverterDecimal_t9384E371E1980789B48CF9A6342F89E4F3E09DD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB(__this, JsonConverter_1__ctor_m5B51C4D0536D3E0887B28A053E016CB0F65D5FDB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double System.Text.Json.Serialization.Converters.JsonConverterDouble::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonConverterDouble_Read_m3CFE75B4B3602531088E4A3808C7F9EA55342DCB (JsonConverterDouble_t29103CD0520F75D6BA18D59998B8ED8E9EFE4C16* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		double L_1;
		L_1 = Utf8JsonReader_GetDouble_m8B6B801EAD7C30EFEFCEE8CEF6D1522CA4778EE1(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDouble::Write(System.Text.Json.Utf8JsonWriter,System.Double,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDouble_Write_m0ED1FEE4A4C4A3C9F78E90E7E62C95A460059341 (JsonConverterDouble_t29103CD0520F75D6BA18D59998B8ED8E9EFE4C16* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, double ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		double L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_mF264282A28EF611A3174E363C56C810583DE103E(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterDouble::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterDouble__ctor_m6806C346DC7590B6AF38176E39B2C7038DBCD276 (JsonConverterDouble_t29103CD0520F75D6BA18D59998B8ED8E9EFE4C16* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9(__this, JsonConverter_1__ctor_m5B3DDD598EC98ADC9866BA97CB0444C2E2D9B4D9_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.Converters.JsonConverterEnum::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterEnum__ctor_mBFBEEBF51AA4AD0F796831E0C2EC479054B998AA (JsonConverterEnum_t06AFD43F844954B7867C6E6FF6E5245DB18145B4* __this, const RuntimeMethod* method) 
{
	{
		JsonConverterFactory__ctor_m411B07ED997EEDA8B37628F05D4F8DA392BB1956(__this, NULL);
		return;
	}
}
// System.Boolean System.Text.Json.Serialization.Converters.JsonConverterEnum::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonConverterEnum_CanConvert_m849FD6D664BE0D3C81EFD418A899AF832ABC1E2C (JsonConverterEnum_t06AFD43F844954B7867C6E6FF6E5245DB18145B4* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		bool L_1;
		L_1 = VirtualFuncInvoker0< bool >::Invoke(69 /* System.Boolean System.Type::get_IsEnum() */, L_0);
		return L_1;
	}
}
// System.Text.Json.Serialization.JsonConverter System.Text.Json.Serialization.Converters.JsonConverterEnum::CreateConverter(System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* JsonConverterEnum_CreateConverter_m66474F21D293A7601C89DE13D4C2E41EE0F0AF5A (JsonConverterEnum_t06AFD43F844954B7867C6E6FF6E5245DB18145B4* __this, Type_t* ___type0, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnumConverterOptions_t04BFD73F4179D143CBB0D6D28D643F97A75A3E35_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverterEnum_1_t3229A0D145BACC3153F689F909381794DD2B0196_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (JsonConverterEnum_1_t3229A0D145BACC3153F689F909381794DD2B0196_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_3 = L_2;
		Type_t* L_4 = ___type0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_4);
		NullCheck(L_1);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(122 /* System.Type System.Type::MakeGenericType(System.Type[]) */, L_1, L_3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		int32_t L_8 = 2;
		RuntimeObject* L_9 = Box(EnumConverterOptions_t04BFD73F4179D143CBB0D6D28D643F97A75A3E35_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_9);
		RuntimeObject* L_10;
		L_10 = Activator_CreateInstance_m0DFAA1415ABA9B28430FDC70A9915BE437C04B04(L_5, ((int32_t)20), (Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235*)NULL, L_7, (CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0*)NULL, NULL);
		V_0 = ((JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8*)CastclassClass((RuntimeObject*)L_10, JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8_il2cpp_TypeInfo_var));
		JsonConverter_tF959B6D2A456224E540D105EF06DF3821371E8F8* L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Guid System.Text.Json.Serialization.Converters.JsonConverterGuid::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t JsonConverterGuid_Read_m5C7A2A1B7FBCD794554A39BB80868632D5507E6F (JsonConverterGuid_t388A98D1645FD6921EC98E1FC436C5F08F2A15B1* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		Guid_t L_1;
		L_1 = Utf8JsonReader_GetGuid_mF53227165B93F42BCC17F4212C98AE792D47699A(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterGuid::Write(System.Text.Json.Utf8JsonWriter,System.Guid,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterGuid_Write_mA2450A6672EF5BE65E48060484C15246643EF3FF (JsonConverterGuid_t388A98D1645FD6921EC98E1FC436C5F08F2A15B1* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, Guid_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		Guid_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_m3797F39346137A2D7232677B84B2F690896C4E6A(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterGuid::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterGuid__ctor_mB812F0505C8241086F9F3AAA1FDC350671FDA8BB (JsonConverterGuid_t388A98D1645FD6921EC98E1FC436C5F08F2A15B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115(__this, JsonConverter_1__ctor_mC944724EC7F5CACD73AC9536C0954076CD182115_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int16 System.Text.Json.Serialization.Converters.JsonConverterInt16::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t JsonConverterInt16_Read_mCD132378141DA876B9551BE2788549B13F73F0AF (JsonConverterInt16_tEC09F78322D5C86C53709C4879D1D385A3D38259* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		int16_t L_1;
		L_1 = Utf8JsonReader_GetInt16_m486F6B00F180588F76CF037EA708079C921D5C2B(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt16::Write(System.Text.Json.Utf8JsonWriter,System.Int16,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt16_Write_mD630C4C2269AA8D5E80B6566882706B4B4FCB46A (JsonConverterInt16_tEC09F78322D5C86C53709C4879D1D385A3D38259* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, int16_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		int16_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt16__ctor_mE930F1349A2B4A254160022C23F59F845D12EDA5 (JsonConverterInt16_tEC09F78322D5C86C53709C4879D1D385A3D38259* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7(__this, JsonConverter_1__ctor_m61AC3BFB872CDC39C6A7D1083445DB743F4724E7_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 System.Text.Json.Serialization.Converters.JsonConverterInt32::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonConverterInt32_Read_m0AB503953DE5A4410C16B25A0B8AA0FE679BBD9B (JsonConverterInt32_tA3371AEF4296BB66B901E71C5890A71F0F510F92* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		int32_t L_1;
		L_1 = Utf8JsonReader_GetInt32_m9994A31A6BBC68EC25BFEA942924684639E0A350(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt32::Write(System.Text.Json.Utf8JsonWriter,System.Int32,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt32_Write_m37826FCC5E5D65FF3A9A0B017B6823C7C948F745 (JsonConverterInt32_tA3371AEF4296BB66B901E71C5890A71F0F510F92* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, int32_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		int32_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt32__ctor_mB7D6DC2D0DAC416DCE0E0BA756A2D62E4CEF6AF7 (JsonConverterInt32_tA3371AEF4296BB66B901E71C5890A71F0F510F92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E(__this, JsonConverter_1__ctor_m93771AFEE9B1C695BE0E24E5602FE7FBFB9EFF5E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int64 System.Text.Json.Serialization.Converters.JsonConverterInt64::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonConverterInt64_Read_mC7A4BB2B893383A1B59A416EDE1E4E9C71FD1CF3 (JsonConverterInt64_t44779F6CCBD40E6722DD9303C621FB0D6EA51B53* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		int64_t L_1;
		L_1 = Utf8JsonReader_GetInt64_m8F101B63B25099413DEC5D297BB5FFE578DE165A(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt64::Write(System.Text.Json.Utf8JsonWriter,System.Int64,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt64_Write_mEB0A4E605E457B5EF99ECFFF11EB959DDECBB4BC (JsonConverterInt64_t44779F6CCBD40E6722DD9303C621FB0D6EA51B53* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, int64_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		int64_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m04B3E8A97F3FFECFFCCD5F17B74488E285482FA1(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterInt64__ctor_mCB6B06EEA84089C023AF733B59F31E46FEF51DD4 (JsonConverterInt64_t44779F6CCBD40E6722DD9303C621FB0D6EA51B53* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81(__this, JsonConverter_1__ctor_m30D655504252CDCFAD3B50AF7A1E593234A1BC81_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Text.Json.JsonElement System.Text.Json.Serialization.Converters.JsonConverterJsonElement::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 JsonConverterJsonElement_Read_m8641CF0A0FF2A3A9B0C3C0EEB6344627C1DBE509 (JsonConverterJsonElement_tA1E75CCA91058562E976D43D8B7BCE6B8B2F8D80* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* V_0 = NULL;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_1;
		L_1 = JsonDocument_ParseValue_m088FB4B1ACC350C2FED324556EC221C06C6CB786(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0018:
			{// begin finally (depth: 1)
				{
					JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0021;
					}
				}
				{
					JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0021:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_4 = V_0;
			NullCheck(L_4);
			JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5;
			L_5 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_4, NULL);
			V_1 = L_5;
			JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_6;
			L_6 = JsonElement_Clone_mCD2B3D79FE552E8FA4A29C9244675D1926B7EC50((&V_1), NULL);
			V_1 = L_6;
			goto IL_0022;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0022:
	{
		JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_7 = V_1;
		return L_7;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterJsonElement::Write(System.Text.Json.Utf8JsonWriter,System.Text.Json.JsonElement,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterJsonElement_Write_m00979E9D0193A0F4C0B8A52A27E98E6628D4B01A (JsonConverterJsonElement_tA1E75CCA91058562E976D43D8B7BCE6B8B2F8D80* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		JsonElement_WriteTo_m8802C6ABB5C038C5E111274B0FED5702BFB72B10((&___value1), L_0, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterJsonElement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterJsonElement__ctor_m37B5D02B6E98EB1A84B5D6BDA848E4B8BA7A7D66 (JsonConverterJsonElement_tA1E75CCA91058562E976D43D8B7BCE6B8B2F8D80* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C(__this, JsonConverter_1__ctor_m13A8B0951493BAF4D26F9FBEED9F11456406ED2C_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object System.Text.Json.Serialization.Converters.JsonConverterObject::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonConverterObject_Read_m19A4C6E0385FC812C99294319B81192524D6EBD4 (JsonConverterObject_t907F00E38500F320DD135CD2644784A6ECB6813A* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* V_0 = NULL;
	JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RuntimeObject* V_2 = NULL;
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_1;
		L_1 = JsonDocument_ParseValue_m088FB4B1ACC350C2FED324556EC221C06C6CB786(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{// begin finally (depth: 1)
				{
					JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0026;
					}
				}
				{
					JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0026:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			JsonDocument_tF96A1F7D1D40932B5EA6A97DA06E150B6CBDBE6F* L_4 = V_0;
			NullCheck(L_4);
			JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_5;
			L_5 = JsonDocument_get_RootElement_m40BA0A219E870618E0E6DD88367CFB484F2C5195(L_4, NULL);
			V_1 = L_5;
			JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_6;
			L_6 = JsonElement_Clone_mCD2B3D79FE552E8FA4A29C9244675D1926B7EC50((&V_1), NULL);
			JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1 L_7 = L_6;
			RuntimeObject* L_8 = Box(JsonElement_t22F19A752BE0B1FB551D861A7ADFC7DD754BD4B1_il2cpp_TypeInfo_var, &L_7);
			V_2 = L_8;
			goto IL_0027;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		RuntimeObject* L_9 = V_2;
		return L_9;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterObject::Write(System.Text.Json.Utf8JsonWriter,System.Object,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterObject_Write_mCFE15F2F9ECFD4C067197221AEFD147C43B23BCB (JsonConverterObject_t907F00E38500F320DD135CD2644784A6ECB6813A* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, RuntimeObject* ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_m1BE9BD198B904AA1D94F4B10DA88077DFD44B7A5(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonConverterObject_Write_mCFE15F2F9ECFD4C067197221AEFD147C43B23BCB_RuntimeMethod_var)));
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterObject__ctor_m39DB22F3A6A51137CBE6E54A3F50A1135231A39D (JsonConverterObject_t907F00E38500F320DD135CD2644784A6ECB6813A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42(__this, JsonConverter_1__ctor_m374ADCC3FFBE50639C7AAC3167E01D63464C5F42_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.SByte System.Text.Json.Serialization.Converters.JsonConverterSByte::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t JsonConverterSByte_Read_mF666361164E134A314C154349F5C1A4D7A122FE7 (JsonConverterSByte_tEB847CD062F5E5D2956D6A493804144426998E76* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		int8_t L_1;
		L_1 = Utf8JsonReader_GetSByte_m86C5D95B6393261601AB9C07BEABB0675C00846A(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterSByte::Write(System.Text.Json.Utf8JsonWriter,System.SByte,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterSByte_Write_m7B0651203EE73460C843BC913569BD976D0DAB7B (JsonConverterSByte_tEB847CD062F5E5D2956D6A493804144426998E76* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, int8_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		int8_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterSByte::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterSByte__ctor_mED4EDCEF54174E469A92D525BFCB8A2E6DF7A574 (JsonConverterSByte_tEB847CD062F5E5D2956D6A493804144426998E76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6(__this, JsonConverter_1__ctor_mA784D1A3FF934866799383EAA68F4F8463C10AB6_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single System.Text.Json.Serialization.Converters.JsonConverterSingle::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float JsonConverterSingle_Read_m14F2EB3263E2D3253C14F9E45EAF839B68E8B4B4 (JsonConverterSingle_t422A9F3BDE1A9E4D41CE1B4B27E988EC1C19CB26* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		float L_1;
		L_1 = Utf8JsonReader_GetSingle_mE9EEE464C1E81A3F019BBA55FC21105525AEEE42(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterSingle::Write(System.Text.Json.Utf8JsonWriter,System.Single,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterSingle_Write_m80C67BC76036B791B6912B769AA7C0F730069D2D (JsonConverterSingle_t422A9F3BDE1A9E4D41CE1B4B27E988EC1C19CB26* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, float ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		float L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m94C41B349B7D55EB269FA36E4454661C72DED51D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterSingle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterSingle__ctor_m68DA1CF7767C7722CDECF940E7BAA6606FB967CA (JsonConverterSingle_t422A9F3BDE1A9E4D41CE1B4B27E988EC1C19CB26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3(__this, JsonConverter_1__ctor_m166BE41CD065C7ADA4E150EE0CBAF7C8C8C30AC3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String System.Text.Json.Serialization.Converters.JsonConverterString::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonConverterString_Read_mC1370A3BEE1801FC2EEF6A2F8529D8972156FF52 (JsonConverterString_t47FC313C9A9452C153780F3C415C33F17365C7DC* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		String_t* L_1;
		L_1 = Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterString::Write(System.Text.Json.Utf8JsonWriter,System.String,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterString_Write_m103528403E617204388C7763BFB2E84B35BC8101 (JsonConverterString_t47FC313C9A9452C153780F3C415C33F17365C7DC* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, String_t* ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		String_t* L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_m348BACAA9A8628253717C938871B084D8AB48D80(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterString__ctor_m14A44424CDE4D33B0F962D5AC7796DBD5627B5F9 (JsonConverterString_t47FC313C9A9452C153780F3C415C33F17365C7DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_mC3A5B62CB1D4FE42917C99B62D209E5305B5245E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_mC3A5B62CB1D4FE42917C99B62D209E5305B5245E(__this, JsonConverter_1__ctor_mC3A5B62CB1D4FE42917C99B62D209E5305B5245E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 System.Text.Json.Serialization.Converters.JsonConverterUInt16::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t JsonConverterUInt16_Read_m57A75D89DDC80BFB4BB5D7EAE384CCC3FF872B25 (JsonConverterUInt16_tEBAAFD3605404E473369A95961C0E9272A156B9D* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		uint16_t L_1;
		L_1 = Utf8JsonReader_GetUInt16_mDADEC8D0157630B34BA4BED95BEC8FC0FB103F36(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt16::Write(System.Text.Json.Utf8JsonWriter,System.UInt16,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt16_Write_m8B4B7549FBAD7DC2BE03821526F7BBF975EC60D3 (JsonConverterUInt16_tEBAAFD3605404E473369A95961C0E9272A156B9D* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, uint16_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		uint16_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m8A2EB2DC02416A0F4B0CA97AFA70B873FBCC3B7D(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt16::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt16__ctor_m1C5C3536FA7E3D7C960730564A9A882FC58D8AED (JsonConverterUInt16_tEBAAFD3605404E473369A95961C0E9272A156B9D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48(__this, JsonConverter_1__ctor_m29D08D31086D25C98D9CD115FBCB5BE7CC85FA48_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 System.Text.Json.Serialization.Converters.JsonConverterUInt32::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t JsonConverterUInt32_Read_m9F6BDB12CA57FF5A7F93C1293435587741DD95AC (JsonConverterUInt32_t3151F5762B8C1CD6AF1BE5914F143ADB32E56341* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		uint32_t L_1;
		L_1 = Utf8JsonReader_GetUInt32_m727AE5A5ECBB3D29C4E592193706C81080C3AA75(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt32::Write(System.Text.Json.Utf8JsonWriter,System.UInt32,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt32_Write_m1ED3F647C69A58580AF74D0254AABECD6D3A03D5 (JsonConverterUInt32_t3151F5762B8C1CD6AF1BE5914F143ADB32E56341* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, uint32_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		uint32_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m89BBC1D792A2DD977776AA582F1DB31A7A76E7B0(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt32::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt32__ctor_m12A821680DF85A278F8FF3C3067C798F1FD4652C (JsonConverterUInt32_t3151F5762B8C1CD6AF1BE5914F143ADB32E56341* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34(__this, JsonConverter_1__ctor_m0A8D9A91006B65EE7D8D8FAC2BA0807196279B34_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt64 System.Text.Json.Serialization.Converters.JsonConverterUInt64::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t JsonConverterUInt64_Read_mADECD67A62AB0A688CCCE5941A13BFB74E399AF1 (JsonConverterUInt64_t3175483DDE41B3C27B88BE416D23931A23978429* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		uint64_t L_1;
		L_1 = Utf8JsonReader_GetUInt64_mD82438E5E150BE6DCB19E9AA8527032FE1073A7B(L_0, NULL);
		return L_1;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt64::Write(System.Text.Json.Utf8JsonWriter,System.UInt64,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt64_Write_m849C44A10C9DD45CE54A55EA3C61BF52B0CF360C (JsonConverterUInt64_t3175483DDE41B3C27B88BE416D23931A23978429* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, uint64_t ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		uint64_t L_1 = ___value1;
		NullCheck(L_0);
		Utf8JsonWriter_WriteNumberValue_m3075EC515D272E426FE6A49DF02814388AECFBD0(L_0, L_1, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUInt64::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUInt64__ctor_m26B75D5D47AF65283C69A5AA751BF1E7B5FBB32C (JsonConverterUInt64_t3175483DDE41B3C27B88BE416D23931A23978429* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE(__this, JsonConverter_1__ctor_m6D319CDCFA5E4FFF1C4B3CD2E5478190F0D3A9DE_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Uri System.Text.Json.Serialization.Converters.JsonConverterUri::Read(System.Text.Json.Utf8JsonReader&,System.Type,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* JsonConverterUri_Read_m0874032B5764F5189B9E4E4309D2514807FF1D0C (JsonConverterUri_t7D867CAABA9476D0B41778C3245BF576D9DCD78D* __this, Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* ___reader0, Type_t* ___typeToConvert1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	{
		Utf8JsonReader_t50B1BC01A960970568250B04FB9236B63B0996E8* L_0 = ___reader0;
		String_t* L_1;
		L_1 = Utf8JsonReader_GetString_m3AA74B2BD8AE8211C2F45748764CA0F8D0772F11(L_0, NULL);
		V_0 = L_1;
		String_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Uri_TryCreate_m183077985BD7B1BE8DBDBCC4604F775C44723EC9(L_2, 0, (&V_1), NULL);
		if (!L_3)
		{
			goto IL_0014;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = V_1;
		return L_4;
	}

IL_0014:
	{
		ThrowHelper_ThrowJsonException_m1F78753DA07B4AB8663930825C58469D5FCA21E7(NULL);
		return (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUri::Write(System.Text.Json.Utf8JsonWriter,System.Uri,System.Text.Json.JsonSerializerOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUri_Write_m733E7FB517A4EC6672D2A6BBA43A3C09EDF10A34 (JsonConverterUri_t7D867CAABA9476D0B41778C3245BF576D9DCD78D* __this, Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* ___writer0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___value1, JsonSerializerOptions_t1BC3604A5B3A44F4A929837EF2DD3B9441AC05BD* ___options2, const RuntimeMethod* method) 
{
	{
		Utf8JsonWriter_tA826CDE54648E07350A13B36AFCA74528B41EFA0* L_0 = ___writer0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___value1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Uri_get_OriginalString_m3031F9054CA10F2C55C0E2415CC19810D360A5D6(L_1, NULL);
		NullCheck(L_0);
		Utf8JsonWriter_WriteStringValue_m348BACAA9A8628253717C938871B084D8AB48D80(L_0, L_2, NULL);
		return;
	}
}
// System.Void System.Text.Json.Serialization.Converters.JsonConverterUri::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverterUri__ctor_m823929DE0D549D08742E7FFC21CA3098468018F1 (JsonConverterUri_t7D867CAABA9476D0B41778C3245BF576D9DCD78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConverter_1__ctor_m0BFB6833B554014A637CDEF309F1F1D6CD1079A3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonConverter_1__ctor_m0BFB6833B554014A637CDEF309F1F1D6CD1079A3(__this, JsonConverter_1__ctor_m0BFB6833B554014A637CDEF309F1F1D6CD1079A3_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.Converters.JsonDictionaryConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonDictionaryConverter__ctor_mFC0C8C160FC7920A13475E539BEC55172056333D (JsonDictionaryConverter_tEF355D958FF96F26CE117ADA3B587F484DAF8D0E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Text.Json.Serialization.Converters.JsonEnumerableConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonEnumerableConverter__ctor_m87470630D00C3CC4DB11600EF616FBE7F83DAB1E (JsonEnumerableConverter_tC6D897DA5852C8C22F14BFD78469FBDF8AF35FB3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m49E2E4F63C1CBDA71284D33E4FFA5C738240F7D9 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonPropertyInfo_get_ElementType_m1140B914C7F8166A135ECDB1F04072C8F889EA78_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CElementTypeU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* JsonPropertyInfo_get_RuntimePropertyType_mE9E72D4AB3EE30C9C20D661CE1127645DB143466_inline (JsonPropertyInfo_t0E6375355942521C44D8B4614149908242A113EA* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___U3CRuntimePropertyTypeU3Ek__BackingField_33;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
