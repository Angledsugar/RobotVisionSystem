#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet>
struct Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14;
// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
// System.Threading.Tasks.Task`1<System.VoidResult>
struct Task_1_t631C55169EBEAF4A72669C7A316026FDFBC830CD;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Reflection.Assembly
struct Assembly_t;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E;
// System.Threading.Channels.ChannelOptions
struct ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Resources.IResourceGroveler
struct IResourceGroveler_tDEE701BD41E9E5D260606F79F75427B42C4CC0C0;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB;
// System.Reflection.RuntimeAssembly
struct RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_tDB97E6C74DEDA2C3DD3C475A8C4FF63C2C0EF4C8;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Resources.ResourceManager/CultureNameResourceSetPair
struct CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97;
IL2CPP_EXTERN_C String_t* _stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604;
IL2CPP_EXTERN_C String_t* _stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B;
IL2CPP_EXTERN_C String_t* _stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466;
IL2CPP_EXTERN_C String_t* _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_AvailableSentinel_mE2E0A7BC6D5108938095C32AEBDAAFF7865A19B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_CompletedSentinel_mE3C02694925C7F5EB0E6B99358536BE79D8C9194_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncompleteOperationException_m337A793CC1D884F7B6C053E33A676178AD3B6628_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowIncorrectCurrentIdException_m1C46C2CCD024BFB916E83B0A3397CED24198C3CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperation_ThrowMultipleContinuations_m0491E59B8287C85D6E2B3348AB0092274677B817_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* SR_t7759756A52E7FCCF941C29E322008B5EA6FA78FA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCFCA0C838B754BBFCF8E41C9B594C58B17D37ABE 
{
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>
struct TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>
struct TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t631C55169EBEAF4A72669C7A316026FDFBC830CD* ____task_0;
};
struct Il2CppArrayBounds;

// System.Threading.Channels.AsyncOperation
struct AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8  : public RuntimeObject
{
};

struct AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_StaticFields
{
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_availableSentinel
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_availableSentinel_0;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation::s_completedSentinel
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_completedSentinel_1;
};

// System.Threading.Channels.Channel
struct Channel_t1044FBBDDA7AC45FB78CBFD8745E4CE89AA07A76  : public RuntimeObject
{
};

// System.Threading.Channels.ChannelOptions
struct ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207  : public RuntimeObject
{
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleWriter>k__BackingField
	bool ___U3CSingleWriterU3Ek__BackingField_0;
	// System.Boolean System.Threading.Channels.ChannelOptions::<SingleReader>k__BackingField
	bool ___U3CSingleReaderU3Ek__BackingField_1;
	// System.Boolean System.Threading.Channels.ChannelOptions::<AllowSynchronousContinuations>k__BackingField
	bool ___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;
};

// System.Threading.Channels.ChannelUtilities
struct ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA  : public RuntimeObject
{
};

struct ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields
{
	// System.Exception System.Threading.Channels.ChannelUtilities::s_doneWritingSentinel
	Exception_t* ___s_doneWritingSentinel_0;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_trueTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_trueTask_1;
	// System.Threading.Tasks.Task`1<System.Boolean> System.Threading.Channels.ChannelUtilities::s_falseTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_falseTask_2;
	// System.Threading.Tasks.Task System.Threading.Channels.ChannelUtilities::s_neverCompletingTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___s_neverCompletingTask_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Resources.ResourceManager
struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB  : public RuntimeObject
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___ResourceSets_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Resources.ResourceSet> System.Resources.ResourceManager::_resourceSets
	Dictionary_2_tAC32B254416DD510DC3E7E36B0706A6B031D7A53* ____resourceSets_2;
	// System.String System.Resources.ResourceManager::moduleDir
	String_t* ___moduleDir_3;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t* ___MainAssembly_4;
	// System.Type System.Resources.ResourceManager::_locationInfo
	Type_t* ____locationInfo_5;
	// System.Type System.Resources.ResourceManager::_userResourceSet
	Type_t* ____userResourceSet_6;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::_neutralResourcesCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____neutralResourcesCulture_7;
	// System.Resources.ResourceManager/CultureNameResourceSetPair System.Resources.ResourceManager::_lastUsedResourceCache
	CultureNameResourceSetPair_t06C5772C09CA853E70E42C0E8BC57FE0AA2CB674* ____lastUsedResourceCache_8;
	// System.Boolean System.Resources.ResourceManager::_ignoreCase
	bool ____ignoreCase_9;
	// System.Boolean System.Resources.ResourceManager::UseManifest
	bool ___UseManifest_10;
	// System.Boolean System.Resources.ResourceManager::UseSatelliteAssem
	bool ___UseSatelliteAssem_11;
	// System.Resources.UltimateResourceFallbackLocation System.Resources.ResourceManager::_fallbackLoc
	int32_t ____fallbackLoc_12;
	// System.Version System.Resources.ResourceManager::_satelliteContractVersion
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ____satelliteContractVersion_13;
	// System.Boolean System.Resources.ResourceManager::_lookedForSatelliteContractVersion
	bool ____lookedForSatelliteContractVersion_14;
	// System.Reflection.Assembly System.Resources.ResourceManager::_callingAssembly
	Assembly_t* ____callingAssembly_15;
	// System.Reflection.RuntimeAssembly System.Resources.ResourceManager::m_callingAssembly
	RuntimeAssembly_tA26A4DE82E77826DFC3D58AD976BCFC6BCA918AF* ___m_callingAssembly_16;
	// System.Resources.IResourceGroveler System.Resources.ResourceManager::resourceGroveler
	RuntimeObject* ___resourceGroveler_17;
};

struct ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_StaticFields
{
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_18;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_19;
	// System.Type System.Resources.ResourceManager::_minResourceSet
	Type_t* ____minResourceSet_20;
	// System.String System.Resources.ResourceManager::ResReaderTypeName
	String_t* ___ResReaderTypeName_21;
	// System.String System.Resources.ResourceManager::ResSetTypeName
	String_t* ___ResSetTypeName_22;
	// System.String System.Resources.ResourceManager::MscorlibName
	String_t* ___MscorlibName_23;
	// System.Int32 System.Resources.ResourceManager::DEBUG
	int32_t ___DEBUG_24;
};

// FxResources.System.Threading.Channels.SR
struct SR_t7759756A52E7FCCF941C29E322008B5EA6FA78FA  : public RuntimeObject
{
};

// System.SR
struct SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188  : public RuntimeObject
{
};

struct SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_StaticFields
{
	// System.Resources.ResourceManager System.SR::s_resourceManager
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* ___s_resourceManager_0;
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

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
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

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;
};

struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory_23;
};

// System.Threading.Tasks.ValueTask`1<System.Boolean>
struct ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D 
{
	// System.Object System.Threading.Tasks.ValueTask`1::_obj
	RuntimeObject* ____obj_1;
	// TResult System.Threading.Tasks.ValueTask`1::_result
	bool ____result_2;
	// System.Int16 System.Threading.Tasks.ValueTask`1::_token
	int16_t ____token_3;
	// System.Boolean System.Threading.Tasks.ValueTask`1::_continueOnCapturedContext
	bool ____continueOnCapturedContext_4;
};

struct ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.ValueTask`1::s_canceledTask
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* ___s_canceledTask_0;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
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

// Internal.PaddingFor32
#pragma pack(push, tp, 1)
struct PaddingFor32_t13C237D4EA32AB9F731B280026B35DDFBCF17F35 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t PaddingFor32_t13C237D4EA32AB9F731B280026B35DDFBCF17F35__padding[124];
	};
};
#pragma pack(pop, tp)

// System.Threading.Channels.UnboundedChannelOptions
struct UnboundedChannelOptions_tDB97E6C74DEDA2C3DD3C475A8C4FF63C2C0EF4C8  : public ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207
{
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

// System.VoidResult
struct VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 
{
	union
	{
		struct
		{
		};
		uint8_t VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8__padding[1];
	};
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.Threading.Channels.AsyncOperation`1<System.Boolean>
struct AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007  : public AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8
{
	// System.Threading.CancellationTokenRegistration System.Threading.Channels.AsyncOperation`1::_registration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ____registration_2;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_pooled
	bool ____pooled_3;
	// System.Boolean System.Threading.Channels.AsyncOperation`1::_runContinuationsAsynchronously
	bool ____runContinuationsAsynchronously_4;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Channels.AsyncOperation`1::_completionReserved
	int32_t ____completionReserved_5;
	// TResult System.Threading.Channels.AsyncOperation`1::_result
	bool ____result_6;
	// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Threading.Channels.AsyncOperation`1::_error
	ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ____error_7;
	// System.Action`1<System.Object> System.Threading.Channels.AsyncOperation`1::_continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____continuation_8;
	// System.Object System.Threading.Channels.AsyncOperation`1::_continuationState
	RuntimeObject* ____continuationState_9;
	// System.Object System.Threading.Channels.AsyncOperation`1::_schedulingContext
	RuntimeObject* ____schedulingContext_10;
	// System.Threading.ExecutionContext System.Threading.Channels.AsyncOperation`1::_executionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ____executionContext_11;
	// System.Int16 System.Threading.Channels.AsyncOperation`1::_currentId
	int16_t ____currentId_12;
	// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1::<Next>k__BackingField
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* ___U3CNextU3Ek__BackingField_13;
	// System.Threading.CancellationToken System.Threading.Channels.AsyncOperation`1::<CancellationToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCancellationTokenU3Ek__BackingField_14;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
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

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Resources.MissingManifestResourceException
struct MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// System.Threading.Channels.ChannelClosedException
struct ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E  : public InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A_gshared (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC_gshared (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C_gshared (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_gshared_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* ___value0, const RuntimeMethod* method) ;
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_gshared_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.ValueTask`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_ValueTaskOfT()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16_gshared (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9_gshared (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, bool ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E_gshared (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared (bool ___result0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) ;

// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m97AC4FD31D770A83700BCDC5A20EF31942176752 (const RuntimeMethod* method) ;
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mBE7AC51259CE85BA33D221475BF3637F3FDB755C (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void System.Resources.ResourceManager::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784 (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* __this, Type_t* ___resourceSource0, const RuntimeMethod* method) ;
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m2651ACB38B1BB59D2CCDF96750828168EA0E08CF (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m6D7BDC73C5D81A435A8ACA23A2A80AC60B989154 (const RuntimeMethod* method) ;
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m3C2DE493F7D90DA0C6759726252DEEC0BD26B482 (const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m73ECBAC375017875E80F4315B29D3098F2F05FBE (const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_mA51973B07811E83D3D87A47F60428369FCDA0C18 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetCanceled(System.Threading.CancellationToken)
inline bool TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A_gshared)(__this, ___cancellationToken0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC_gshared)(__this, ___exception0, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* __this, VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 ___result0, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2*, VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C_gshared)(__this, ___result0, method);
}
// System.Void System.Threading.Channels.AsyncOperation`1<System.Boolean>::set_Next(System.Threading.Channels.AsyncOperation`1<TResult>)
inline void AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* ___value0, const RuntimeMethod* method)
{
	((  void (*) (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, const RuntimeMethod*))AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_gshared_inline)(__this, ___value0, method);
}
// System.Threading.Channels.AsyncOperation`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_Next()
inline AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, const RuntimeMethod* method)
{
	return ((  AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* (*) (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, const RuntimeMethod*))AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_gshared_inline)(__this, method);
}
// System.Threading.Tasks.ValueTask`1<TResult> System.Threading.Channels.AsyncOperation`1<System.Boolean>::get_ValueTaskOfT()
inline ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16 (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, const RuntimeMethod* method)
{
	return ((  ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D (*) (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, const RuntimeMethod*))AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16_gshared)(__this, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetResult(TResult)
inline bool AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9 (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, bool ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, bool, const RuntimeMethod*))AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9_gshared)(__this, ___item0, method);
}
// System.Boolean System.Threading.Channels.AsyncOperation`1<System.Boolean>::TrySetException(System.Exception)
inline bool AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, Exception_t* ___exception0, const RuntimeMethod* method)
{
	return ((  bool (*) (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*, Exception_t*, const RuntimeMethod*))AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E_gshared)(__this, ___exception0, method);
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m3AE685387181221554A8CC76620EECAFD7CF1E6E (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m2A67F7153E0ACF6709066EEFBA73CEB993E46B5B (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* __this, Exception_t* ___innerException0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Boolean>(TResult)
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B (bool ___result0, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (bool, const RuntimeMethod*))Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_gshared)(___result0, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::.ctor()
inline void TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646 (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Boolean>::get_Task()
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline)(__this, method);
}
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
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean System.SR::UsingResourceKeys()
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR bool SR_UsingResourceKeys_m97AC4FD31D770A83700BCDC5A20EF31942176752 (const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.String System.SR::GetResourceString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C (String_t* ___resourceKey0, String_t* ___defaultString1, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B3_0 = NULL;
	String_t* G_B2_0 = NULL;
	{
		bool L_0;
		L_0 = SR_UsingResourceKeys_m97AC4FD31D770A83700BCDC5A20EF31942176752(NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ___defaultString1;
		String_t* L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_000d;
		}
	}
	{
		String_t* L_3 = ___resourceKey0;
		G_B3_0 = L_3;
	}

IL_000d:
	{
		return G_B3_0;
	}

IL_000e:
	{
		V_0 = (String_t*)NULL;
	}
	try
	{// begin try (depth: 1)
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4;
		L_4 = SR_get_ResourceManager_mBE7AC51259CE85BA33D221475BF3637F3FDB755C(NULL);
		String_t* L_5 = ___resourceKey0;
		NullCheck(L_4);
		String_t* L_6;
		L_6 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(7 /* System.String System.Resources.ResourceManager::GetString(System.String) */, L_4, L_5);
		V_0 = L_6;
		goto IL_0021;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MissingManifestResourceException_t136A089345909ADB6333D6F4E2AA84C7A00CB3FD_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001e;
		}
		throw e;
	}

CATCH_001e:
	{// begin catch(System.Resources.MissingManifestResourceException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0021;
	}// end catch (depth: 1)

IL_0021:
	{
		String_t* L_7 = ___defaultString1;
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_8 = ___resourceKey0;
		String_t* L_9 = V_0;
		NullCheck(L_8);
		bool L_10;
		L_10 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_11 = ___defaultString1;
		return L_11;
	}

IL_002f:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Resources.ResourceManager System.SR::get_ResourceManager()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* SR_get_ResourceManager_mBE7AC51259CE85BA33D221475BF3637F3FDB755C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_t7759756A52E7FCCF941C29E322008B5EA6FA78FA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B2_0 = NULL;
	ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* G_B1_0 = NULL;
	{
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_0 = ((SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_il2cpp_TypeInfo_var))->___s_resourceManager_0;
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001e;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (SR_t7759756A52E7FCCF941C29E322008B5EA6FA78FA_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_4 = (ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB*)il2cpp_codegen_object_new(ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ResourceManager__ctor_mC93D478F43E5089ACC407FDECF067A0F208A3784(L_4, L_3, NULL);
		ResourceManager_t311D6D32A753224008949B32CC6A5468C47498EB* L_5 = L_4;
		((SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_il2cpp_TypeInfo_var))->___s_resourceManager_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_StaticFields*)il2cpp_codegen_static_fields_for(SR_tFDA4069E628C973A8B9A78F5CBB8F5DD655AF188_il2cpp_TypeInfo_var))->___s_resourceManager_0), (void*)L_5);
		G_B2_0 = L_5;
	}

IL_001e:
	{
		return G_B2_0;
	}
}
// System.String System.SR::get_ChannelClosedException_DefaultMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_ChannelClosedException_DefaultMessage_m73ECBAC375017875E80F4315B29D3098F2F05FBE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C(_stringLiteral811236D662946FF821D609D9CF1DA6224C9EA88B, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncompleteAsyncOperation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncompleteAsyncOperation_m2651ACB38B1BB59D2CCDF96750828168EA0E08CF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C(_stringLiteral6EDEF73EC6D81532DEF15142E4DAC84E34BD5B97, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_MultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_MultipleContinuations_m6D7BDC73C5D81A435A8ACA23A2A80AC60B989154 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C(_stringLiteral86514F0AEEC5D2FF36516A683B5598E362F51466, (String_t*)NULL, NULL);
		return L_0;
	}
}
// System.String System.SR::get_InvalidOperation_IncorrectToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_get_InvalidOperation_IncorrectToken_m3C2DE493F7D90DA0C6759726252DEEC0BD26B482 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = SR_GetResourceString_m6C6EAD5AD9688099F00C4D95BDE7B9418D0D1B4C(_stringLiteral781E7C18C002A07F55D58B4D0D410C4C5C545604, (String_t*)NULL, NULL);
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
// System.Void System.Threading.Channels.AsyncOperation::AvailableSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_AvailableSentinel_mE2E0A7BC6D5108938095C32AEBDAAFF7865A19B7 (RuntimeObject* ___s0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::CompletedSentinel(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_CompletedSentinel_mE3C02694925C7F5EB0E6B99358536BE79D8C9194 (RuntimeObject* ___s0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncompleteOperationException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncompleteOperationException_m337A793CC1D884F7B6C053E33A676178AD3B6628 (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncompleteAsyncOperation_m2651ACB38B1BB59D2CCDF96750828168EA0E08CF(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncompleteOperationException_m337A793CC1D884F7B6C053E33A676178AD3B6628_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowMultipleContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowMultipleContinuations_m0491E59B8287C85D6E2B3348AB0092274677B817 (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_MultipleContinuations_m6D7BDC73C5D81A435A8ACA23A2A80AC60B989154(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowMultipleContinuations_m0491E59B8287C85D6E2B3348AB0092274677B817_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::ThrowIncorrectCurrentIdException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_ThrowIncorrectCurrentIdException_m1C46C2CCD024BFB916E83B0A3397CED24198C3CD (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_get_InvalidOperation_IncorrectToken_m3C2DE493F7D90DA0C6759726252DEEC0BD26B482(NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperation_ThrowIncorrectCurrentIdException_m1C46C2CCD024BFB916E83B0A3397CED24198C3CD_RuntimeMethod_var)));
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_mFD773821C3F2EDE023C07BEF1F55821E6782101D (AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.AsyncOperation::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__cctor_mF208538B5BF3113B46BCD3A31AB78B853BCB05EF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_AvailableSentinel_mE2E0A7BC6D5108938095C32AEBDAAFF7865A19B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_CompletedSentinel_mE3C02694925C7F5EB0E6B99358536BE79D8C9194_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)AsyncOperation_AvailableSentinel_mE2E0A7BC6D5108938095C32AEBDAAFF7865A19B7_RuntimeMethod_var), NULL);
		((AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var))->___s_availableSentinel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var))->___s_availableSentinel_0), (void*)L_0);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)AsyncOperation_CompletedSentinel_mE3C02694925C7F5EB0E6B99358536BE79D8C9194_RuntimeMethod_var), NULL);
		((AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var))->___s_completedSentinel_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_StaticFields*)il2cpp_codegen_static_fields_for(AsyncOperation_tDFEF0213D75C2599ACB172DFE82CA9646F3679F8_il2cpp_TypeInfo_var))->___s_completedSentinel_1), (void*)L_1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Threading.Channels.ChannelClosedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m3AE685387181221554A8CC76620EECAFD7CF1E6E (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m73ECBAC375017875E80F4315B29D3098F2F05FBE(NULL);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(__this, L_0, NULL);
		return;
	}
}
// System.Void System.Threading.Channels.ChannelClosedException::.ctor(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelClosedException__ctor_m2A67F7153E0ACF6709066EEFBA73CEB993E46B5B (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* __this, Exception_t* ___innerException0, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = SR_get_ChannelClosedException_DefaultMessage_m73ECBAC375017875E80F4315B29D3098F2F05FBE(NULL);
		Exception_t* L_1 = ___innerException0;
		InvalidOperationException__ctor_m63F5561BE647F655D22C8289E53A5D3A2196B668(__this, L_0, L_1, NULL);
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
// System.Void System.Threading.Channels.ChannelOptions::set_SingleWriter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleWriter_m899C8D86AC2B1D0570192F358E7F6CEE49545EE1 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSingleWriterU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_SingleReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_SingleReader_m347DB84631B4A8339C664F0B580E84EC601B493A (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CSingleReaderU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_SingleReader(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_SingleReader_m40819650FCA90A88BD435772B0A892F402A9F660 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CSingleReaderU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Boolean System.Threading.Channels.ChannelOptions::get_AllowSynchronousContinuations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChannelOptions_get_AllowSynchronousContinuations_mB0F4312A346A586FF7E86739614B85FBA4390410 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CAllowSynchronousContinuationsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::set_AllowSynchronousContinuations(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions_set_AllowSynchronousContinuations_mDE7948AC41BEDF68D35A4D20460850F325819790 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CAllowSynchronousContinuationsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Void System.Threading.Channels.ChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelOptions__ctor_mA51973B07811E83D3D87A47F60428369FCDA0C18 (ChannelOptions_tC6526CD7D68368BF41E8B5961B63191E63EEA207* __this, const RuntimeMethod* method) 
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
// System.Void System.Threading.Channels.UnboundedChannelOptions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnboundedChannelOptions__ctor_mF9C417630449DB30316129FAEC6B993AE861818B (UnboundedChannelOptions_tDB97E6C74DEDA2C3DD3C475A8C4FF63C2C0EF4C8* __this, const RuntimeMethod* method) 
{
	{
		ChannelOptions__ctor_mA51973B07811E83D3D87A47F60428369FCDA0C18(__this, NULL);
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
// System.Void System.Threading.Channels.ChannelUtilities::Complete(System.Threading.Tasks.TaskCompletionSource`1<System.VoidResult>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_Complete_mE3A9DD031A3D61780BBB61C119F52AAFA9C534BB (TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* ___tcs0, Exception_t* ___error1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* V_0 = NULL;
	VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		Exception_t* L_0 = ___error1;
		V_0 = ((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var));
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* L_2 = ___tcs0;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4;
		L_4 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_3, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A(L_2, L_4, TaskCompletionSource_1_TrySetCanceled_m02B020BBE62B8E6B17F2430A8EA746B7BBD2769A_RuntimeMethod_var);
		return;
	}

IL_0018:
	{
		Exception_t* L_6 = ___error1;
		if (!L_6)
		{
			goto IL_002c;
		}
	}
	{
		Exception_t* L_7 = ___error1;
		il2cpp_codegen_runtime_class_init_inline(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var);
		Exception_t* L_8 = ((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0;
		if ((((RuntimeObject*)(Exception_t*)L_7) == ((RuntimeObject*)(Exception_t*)L_8)))
		{
			goto IL_002c;
		}
	}
	{
		TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* L_9 = ___tcs0;
		Exception_t* L_10 = ___error1;
		NullCheck(L_9);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC(L_9, L_10, TaskCompletionSource_1_TrySetException_m4AE1766CDDAF2665B38619FFF7D954FC4B396CFC_RuntimeMethod_var);
		return;
	}

IL_002c:
	{
		TaskCompletionSource_1_t43D9C8580269D86555B38023F523DCD6C7965FA2* L_12 = ___tcs0;
		il2cpp_codegen_initobj((&V_1), sizeof(VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8));
		VoidResult_tA6FAD2CEA11C3FEB2DF56F78E20B00479F225DA8 L_13 = V_1;
		NullCheck(L_12);
		bool L_14;
		L_14 = TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C(L_12, L_13, TaskCompletionSource_1_TrySetResult_mC3C7D6AFA8B11ECC8D0D4FFF215B9BF8CB73589C_RuntimeMethod_var);
		return;
	}
}
// System.Threading.Tasks.ValueTask`1<System.Boolean> System.Threading.Channels.ChannelUtilities::QueueWaiter(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Threading.Channels.AsyncOperation`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D ChannelUtilities_QueueWaiter_m5A17FF05E03B6D73B6DE79DBC65EE38AC8CCF08C (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** ___tail0, AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* ___waiter1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* V_0 = NULL;
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** L_0 = ___tail0;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_1 = *((AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007**)L_0);
		V_0 = L_1;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_2 = V_0;
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_3 = ___waiter1;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_4 = ___waiter1;
		NullCheck(L_3);
		AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_inline(L_3, L_4, AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
		goto IL_0022;
	}

IL_000f:
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_5 = ___waiter1;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_6 = V_0;
		NullCheck(L_6);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_7;
		L_7 = AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_inline(L_6, AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var);
		NullCheck(L_5);
		AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_inline(L_5, L_7, AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_8 = V_0;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_9 = ___waiter1;
		NullCheck(L_8);
		AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_inline(L_8, L_9, AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
	}

IL_0022:
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** L_10 = ___tail0;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_11 = ___waiter1;
		*((RuntimeObject**)L_10) = (RuntimeObject*)L_11;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)L_11);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_12 = ___waiter1;
		NullCheck(L_12);
		ValueTask_1_t6C11772369DAED1304F29D047B2ED0A540F4650D L_13;
		L_13 = AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16(L_12, AsyncOperation_1_get_ValueTaskOfT_m0CA3013E5CD9A14E8082E5B4E2B1D698D43F1F16_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::WakeUpWaiters(System.Threading.Channels.AsyncOperation`1<System.Boolean>&,System.Boolean,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities_WakeUpWaiters_m33DD469D8F230707166DB698DC143DF95FA61939 (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** ___listTail0, bool ___result1, Exception_t* ___error2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* V_0 = NULL;
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* V_1 = NULL;
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* V_2 = NULL;
	AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* V_3 = NULL;
	bool V_4 = false;
	bool G_B5_0 = false;
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** L_0 = ___listTail0;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_1 = *((AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007**)L_0);
		V_0 = L_1;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_2 = V_0;
		if (!L_2)
		{
			goto IL_003b;
		}
	}
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007** L_3 = ___listTail0;
		*((RuntimeObject**)L_3) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_3, (void*)(RuntimeObject*)NULL);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_4 = V_0;
		NullCheck(L_4);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_5;
		L_5 = AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_inline(L_4, AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var);
		V_1 = L_5;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_6 = V_1;
		V_2 = L_6;
	}

IL_0012:
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_7 = V_2;
		NullCheck(L_7);
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_8;
		L_8 = AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_inline(L_7, AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_RuntimeMethod_var);
		V_3 = L_8;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_9 = V_2;
		NullCheck(L_9);
		AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_inline(L_9, (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*)NULL, AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_RuntimeMethod_var);
		Exception_t* L_10 = ___error2;
		if (L_10)
		{
			goto IL_002c;
		}
	}
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_11 = V_2;
		bool L_12 = ___result1;
		NullCheck(L_11);
		bool L_13;
		L_13 = AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9(L_11, L_12, AsyncOperation_1_TrySetResult_mE5F2B257F159547AF566D7445370204A326431D9_RuntimeMethod_var);
		G_B5_0 = L_13;
		goto IL_0033;
	}

IL_002c:
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_14 = V_2;
		Exception_t* L_15 = ___error2;
		NullCheck(L_14);
		bool L_16;
		L_16 = AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E(L_14, L_15, AsyncOperation_1_TrySetException_m5904947D33C4082A4EC19F174093A2D93C3DDB3E_RuntimeMethod_var);
		G_B5_0 = L_16;
	}

IL_0033:
	{
		V_4 = G_B5_0;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_17 = V_3;
		V_2 = L_17;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_18 = V_2;
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_19 = V_1;
		if ((!(((RuntimeObject*)(AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*)L_18) == ((RuntimeObject*)(AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*)L_19))))
		{
			goto IL_0012;
		}
	}

IL_003b:
	{
		return;
	}
}
// System.Exception System.Threading.Channels.ChannelUtilities::CreateInvalidCompletionException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ChannelUtilities_CreateInvalidCompletionException_mE3F1B5E57E0638EA397905B3E816070B410F6EB5 (Exception_t* ___inner0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = ___inner0;
		if (((OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)IsInstClass((RuntimeObject*)L_0, OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var)))
		{
			goto IL_0020;
		}
	}
	{
		Exception_t* L_1 = ___inner0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		Exception_t* L_2 = ___inner0;
		il2cpp_codegen_runtime_class_init_inline(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var);
		Exception_t* L_3 = ((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0;
		if ((!(((RuntimeObject*)(Exception_t*)L_2) == ((RuntimeObject*)(Exception_t*)L_3))))
		{
			goto IL_0019;
		}
	}

IL_0013:
	{
		ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* L_4 = (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E*)il2cpp_codegen_object_new(ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		ChannelClosedException__ctor_m3AE685387181221554A8CC76620EECAFD7CF1E6E(L_4, NULL);
		return L_4;
	}

IL_0019:
	{
		Exception_t* L_5 = ___inner0;
		ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E* L_6 = (ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E*)il2cpp_codegen_object_new(ChannelClosedException_tC269817D80D5B4FB540478A81C317EBDF805A89E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		ChannelClosedException__ctor_m2A67F7153E0ACF6709066EEFBA73CEB993E46B5B(L_6, L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		Exception_t* L_7 = ___inner0;
		return L_7;
	}
}
// System.Void System.Threading.Channels.ChannelUtilities::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChannelUtilities__cctor_m47B4C1C14AEC34EE96FB006C09780178ABF9572B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904);
		s_Il2CppMethodInitialized = true;
	}
	{
		Exception_t* L_0 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_0, _stringLiteral9144EDAB6BB6DB5C0B53154036CBBB22077B4904, NULL);
		((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_doneWritingSentinel_0), (void*)L_0);
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_1;
		L_1 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B((bool)1, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_trueTask_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_trueTask_1), (void*)L_1);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_2;
		L_2 = Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B((bool)0, Task_FromResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m390F8F1169B06A0B55B488C1C66A1539F6DD5D9B_RuntimeMethod_var);
		((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_falseTask_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_falseTask_2), (void*)L_2);
		TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* L_3 = (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14*)il2cpp_codegen_object_new(TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646(L_3, TaskCompletionSource_1__ctor_mBAB8D6EFEAD1AA6482D19D7CE639528BE66AF646_RuntimeMethod_var);
		NullCheck(L_3);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4;
		L_4 = TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_inline(L_3, TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_RuntimeMethod_var);
		((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_neverCompletingTask_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_StaticFields*)il2cpp_codegen_static_fields_for(ChannelUtilities_t1B6926583C5EC7BFE8A7F3BC6C0DFBE2F1E4B1EA_il2cpp_TypeInfo_var))->___s_neverCompletingTask_3), (void*)L_4);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_1_set_Next_mC0EBE517E079827BE837F7B4EAA4E24266F7B230_gshared_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* ___value0, const RuntimeMethod* method) 
{
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_0 = ___value0;
		__this->___U3CNextU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNextU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* AsyncOperation_1_get_Next_m4BAA857CB510B3E1872803E6528F846815E3A03D_gshared_inline (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* __this, const RuntimeMethod* method) 
{
	{
		AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007* L_0 = (AsyncOperation_1_tF304DAA4B5B758896A2BC7BAE481081C0FBC5007*)__this->___U3CNextU3Ek__BackingField_13;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskCompletionSource_1_get_Task_m068E06095F165AE266E15C328CBDA1543429EC66_gshared_inline (TaskCompletionSource_1_t486CD8AD64929E5C47B9FE9AD7AE2CB00B5BAB14* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_0 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)__this->____task_0;
		return L_0;
	}
}
