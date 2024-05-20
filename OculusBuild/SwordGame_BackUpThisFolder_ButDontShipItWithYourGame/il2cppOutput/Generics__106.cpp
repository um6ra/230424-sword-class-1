﻿#include "pch-cpp.hpp"





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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2*, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53;
struct Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C;
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
struct IEnumerator_1_t8FA46572A78639B858747F8601A87E15E3AD958F;
struct IEnumerator_1_t488F9FA82247BF8D2DC5E133C1C3F9366CDED9B0;
struct IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t29A8CA7355FCD9DC17EBB7F096703BD8AD63C49F;
struct IEnumerator_1_t30023716BAD8A1096DAEB9214E766D9B4EFEBAC3;
struct IEnumerator_1_tF08BC34B9F6847658C70264BA39BB29268763935;
struct IEnumerator_1_tFCF5861BCE7790E8247892E6658C0C4803690160;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_t2AE506746DD40D1B5F17C877E00D1A2DC8E3EC13;
struct IEnumerator_1_t799F7647CE8230B0558DEEB1D972247C04382C50;
struct IEnumerator_1_t72676C716CC8C5B75D00E9CAF066E46698697A14;
struct IEnumerator_1_t86FDA12A24C3A4FF8AB720E76E016B4B022ADCA5;
struct IEnumerator_1_t1BE0C7F1BA6F3CD2763DD336ADCD6A51ABA93A90;
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77;
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8;
struct Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4;
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9;
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E;
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75;
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43;
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41;
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68;
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1;
struct Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB;
struct Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D;
struct Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F;
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D;
struct RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669;
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56;
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7;
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB;
struct TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;
struct InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
struct EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C;
struct Exception_t;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0;
IL2CPP_EXTERN_C String_t* _stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4;
IL2CPP_EXTERN_C String_t* _stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70;
IL2CPP_EXTERN_C String_t* _stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8;
IL2CPP_EXTERN_C String_t* _stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5;
IL2CPP_EXTERN_C String_t* _stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED;
IL2CPP_EXTERN_C String_t* _stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA;
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A;
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F;
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC;
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E;
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69;
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8;
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9;
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6;
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4;
struct InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99  : public RuntimeObject
{
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16  : public RuntimeObject
{
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9  : public RuntimeObject
{
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F  : public RuntimeObject
{
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA  : public RuntimeObject
{
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24  : public RuntimeObject
{
};
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF  : public RuntimeObject
{
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07  : public RuntimeObject
{
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7  : public RuntimeObject
{
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C  : public RuntimeObject
{
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF  : public RuntimeObject
{
};
struct EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38  : public RuntimeObject
{
};
struct EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E  : public RuntimeObject
{
};
struct EmptyArray_1_tC7D4F0912B526A8EA19DC3E6D82647231A867E45  : public RuntimeObject
{
};
struct Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77  : public RuntimeObject
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8  : public RuntimeObject
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0  : public RuntimeObject
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4  : public RuntimeObject
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9  : public RuntimeObject
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E  : public RuntimeObject
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75  : public RuntimeObject
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43  : public RuntimeObject
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68  : public RuntimeObject
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1  : public RuntimeObject
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB  : public RuntimeObject
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D  : public RuntimeObject
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F  : public RuntimeObject
{
	InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7  : public RuntimeObject
{
	NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* ____slots;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____slotMap;
	int32_t ____inUseCount;
	int32_t ____pageId;
	int32_t ____nextFreeSlotLine;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 
{
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ____q;
	int32_t ____version;
	int32_t ____index;
	bool ____currentElement;
};
struct Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 
{
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ____q;
	int32_t ____version;
	int32_t ____index;
	RuntimeObject* ____currentElement;
};
typedef Il2CppFullySharedGenericStruct Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C;
struct NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 
{
	int32_t ____nodeID;
	int32_t ____mainTreeNodeID;
};
struct RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 
{
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	int32_t ____current;
};
struct RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A 
{
	RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ____tree;
	int32_t ____version;
	int32_t ____index;
	int32_t ____mainTreeNodeId;
	RuntimeObject* ____current;
};
typedef Il2CppFullySharedGenericStruct RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E 
{
	int64_t ___Value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD 
{
	uint32_t ____state;
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
};
struct OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F 
{
	uint64_t ____handle;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
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
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_pinvoke
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_marshaled_com
{
	EventBase_tD7F89B936EB8074AE31E7B15976C072277371F7C* ___m_Event;
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 
{
	MeshGenerationCallback_t9735BAFB971D361BCB27AB541F8205A7C0FFEF50* ___callback;
	RuntimeObject* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_pinvoke
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_marshaled_com
{
	Il2CppMethodPointer ___callback;
	Il2CppIUnknown* ___userData;
};
struct Metrics_t865BF0741490865117A79705F58784742D6F02B8 
{
	int32_t ___TotalRoomCount;
	int32_t ___CandidateRoomCount;
	int32_t ___Loaded;
	int32_t ___Failed;
	int32_t ___SkippedUserNotInRoom;
	int32_t ___SkippedAlreadyInstantiated;
};
struct ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 
{
	uint32_t ____state;
};
struct U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F 
{
	union
	{
		struct
		{
			uint8_t ___FixedElementField;
		};
		uint8_t U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F__padding[40];
	};
};
struct Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 
{
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ____q;
	int32_t ____version;
	int32_t ____index;
	Guid_t ____currentElement;
};
struct Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B 
{
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ____q;
	int32_t ____version;
	int32_t ____index;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ____currentElement;
};
struct Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 
{
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ____currentElement;
};
struct Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 
{
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ____q;
	int32_t ____version;
	int32_t ____index;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ____currentElement;
};
struct Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 
{
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ____q;
	int32_t ____version;
	int32_t ____index;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ____currentElement;
};
struct Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C 
{
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ____q;
	int32_t ____version;
	int32_t ____index;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 ____currentElement;
};
struct NodeColor_t60CC6B48EF16CC76598762EF71BFEABD73151911 
{
	int32_t ___value__;
};
struct EventSource_t395F7AD9932CE73777C8DB122DE6638A61AAA07E 
{
	int32_t ___value__;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 
{
	uint64_t ___U3CHandleU3Ek__BackingField;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
};
struct Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation;
};
struct RBTreeError_t7F1B2496C83326D0832CBD24FB32282F348CD048 
{
	int32_t ___value__;
};
struct TreeAccessMethod_t93F641AE9C014E6ABDD0A2B1EA84068077F46CC5 
{
	int32_t ___value__;
};
struct Command_t8AE6C32AB4C4E5FC4B8C77082D0EE5275B3414B9 
{
	int32_t ___value__;
};
struct Type_t978C0427FF2CB3DE1CC7BB6CC19BAC9005EC519D 
{
	int32_t ___value__;
};
struct Type_tDE4005CDD70E001C9402FEE8D2F2431154FED092 
{
	int32_t ___value__;
};
struct ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 
{
	U3CbuttonsU3Ee__FixedBuffer_t32316838CB3560CC83CB36DE00B3352EF9FF122F ___buttons;
};
struct Type_tBD67F20EC8969784B5377C5DC8F261E207A14792 
{
	int32_t ___value__;
};
struct RotationType_tD58F7B6EB01892B0375178D9775F6185D4E2DC0F 
{
	int32_t ___value__;
};
struct TranslationType_t97D4BABD1EDD1C5D0030103150399BD6255EF5CB 
{
	int32_t ___value__;
};
struct Direction_tCF5F04CE76DF556D8ABCA537FC7C977681A14996 
{
	int32_t ___value__;
};
struct Type_tDA196B70B848DC5CD4982EBF31E0945B199A68C7 
{
	int32_t ___value__;
};
struct UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 
{
	OVRSpace_tDA5A6DB241624CD5712AC4A71E565BA171985B4D ____space;
	Guid_t ___U3CUuidU3Ek__BackingField;
};
struct Button_tA3E7AF5F245F630CB38476BAB013B509F53B35B8 
{
	uint32_t ___value__;
};
struct Type_tAD126B1DC1FD450FB4C782B18131374A55C28858 
{
	int32_t ___value__;
};
struct Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA 
{
	Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* ____q;
	int32_t ____version;
	int32_t ____index;
	int32_t ____currentElement;
};
struct Enumerator_tA37D160544C06A884B929716C584D345827D7F82 
{
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ____q;
	int32_t ____version;
	int32_t ____index;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ____currentElement;
};
struct Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 
{
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ____q;
	int32_t ____version;
	int32_t ____index;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ____currentElement;
};
struct Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 
{
	int32_t ____selfId;
	int32_t ____leftId;
	int32_t ____rightId;
	int32_t ____parentId;
	int32_t ____nextId;
	int32_t ____subTreeSize;
	int32_t ____keyOfNode;
	int32_t ____nodeColor;
};
struct RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D  : public RuntimeObject
{
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669  : public RuntimeObject
{
	TreePageU5BU5D_t83E46A69994CD4F1584A98171754D3F2728C8EDB* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56  : public RuntimeObject
{
	TreePageU5BU5D_t9AC380B77C33ACDAD0841FE923B2F5F66B02FCF9* ____pageTable;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____pageTableMap;
	int32_t ____inUsePageCount;
	int32_t ____nextFreePageLine;
	int32_t ___root;
	int32_t ____version;
	int32_t ____inUseNodeCount;
	int32_t ____inUseSatelliteTreeCount;
	int32_t ____accessMethod;
};
struct CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F 
{
	int32_t ___type;
	int32_t ___command;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 
{
	int32_t ___type;
	int32_t ___keyCode;
	ButtonsState_tDD5A3F9241886C7E1BA2975DF6E7045C321583E3 ___buttonsState;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 
{
	int32_t ___U3CIdentifierU3Ek__BackingField;
	Pose_t06BA69EAA6E9FAF60056D519A87D25F54AFE7971 ___U3CPoseU3Ek__BackingField;
	int32_t ___U3CTranslationU3Ek__BackingField;
	int32_t ___U3CRotationU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD 
{
	int32_t ___type;
	int32_t ___direction;
	bool ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com
{
	int32_t ___type;
	int32_t ___direction;
	int32_t ___shouldBeUsed;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	bool ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com
{
	int32_t ___type;
	int32_t ___pointerIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___position;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___deltaPosition;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scroll;
	int32_t ___displayIndex;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___tilt;
	float ___twist;
	float ___pressure;
	int32_t ___isInverted;
	uint32_t ___button;
	ButtonsState_tC596C9B742AF4FDB4D32B05551EEDB23D243E996 ___buttonsState;
	int32_t ___clickCount;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A 
{
	Il2CppChar ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com
{
	uint8_t ___character;
	DiscreteTime_t0954C3B93A9A500A04D33E309649C1CD2780C41E ___U3CtimestampU3Ek__BackingField;
	int32_t ___U3CeventSourceU3Ek__BackingField;
	uint32_t ___U3CplayerIdU3Ek__BackingField;
	EventModifiers_t4B1B8EBE011383F2D6236E6B9F99AB156BCE35DD ___U3CeventModifiersU3Ek__BackingField;
};
struct InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F 
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___originalPose;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___targetPose;
};
struct InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_marshaled_pinvoke
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___originalPose;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___targetPose;
};
struct InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_marshaled_com
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___root;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___originalPose;
	OVRPose_t8054769FD4517C10D2ECD2C14C823723D675EEFB ___targetPose;
};
struct Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 
{
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ____q;
	int32_t ____version;
	int32_t ____index;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ____currentElement;
};
struct Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 
{
	Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* ____q;
	int32_t ____version;
	int32_t ____index;
	InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F ____currentElement;
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			RuntimeObject* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			RuntimeObject* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05 ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_pinvoke
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_pinvoke ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_pinvoke ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_pinvoke ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_marshaled_com
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ____type;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ____type_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____managedEvent_OffsetPadding[8];
			Il2CppIUnknown* ____managedEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____managedEvent_OffsetPadding_forAlignmentOnly[8];
			Il2CppIUnknown* ____managedEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____keyEvent_OffsetPadding[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____keyEvent_OffsetPadding_forAlignmentOnly[16];
			KeyEvent_tCC737454044642F99DE2CDD2F11E792AE596F931 ____keyEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____pointerEvent_OffsetPadding[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____pointerEvent_OffsetPadding_forAlignmentOnly[16];
			PointerEvent_tC25A522EBDFCAF2CDEEE1D70428C281F78C1FA05_marshaled_com ____pointerEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____textInputEvent_OffsetPadding[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____textInputEvent_OffsetPadding_forAlignmentOnly[16];
			TextInputEvent_t178912D1FB7425ABEAA189639883A2966679C87A_marshaled_com ____textInputEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____commandEvent_OffsetPadding[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____commandEvent_OffsetPadding_forAlignmentOnly[16];
			CommandEvent_tCA81E54195CF66429904DCE8EE4DFD25BEEAC06F ____commandEvent_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____navigationEvent_OffsetPadding[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____navigationEvent_OffsetPadding_forAlignmentOnly[16];
			NavigationEvent_t33FC4003A394B4773A3C23C5B0C134D749E544BD_marshaled_com ____navigationEvent_forAlignmentOnly;
		};
	};
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 
{
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ____q;
	int32_t ____version;
	int32_t ____index;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ____currentElement;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___Value;
};
struct EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___Value;
};
struct EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___Value;
};
struct EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Value;
};
struct EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___Value;
};
struct EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___Value;
};
struct EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ___Value;
};
struct EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ___Value;
};
struct EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ___Value;
};
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value;
};
struct EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___Value;
};
struct EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___Value;
};
struct EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38_StaticFields
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___Value;
};
struct EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E_StaticFields
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___Value;
};
struct EmptyArray_1_tC7D4F0912B526A8EA19DC3E6D82647231A867E45_StaticFields
{
	InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* ___Value;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_StaticFields
{
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___Null;
	Dictionary_2_tBDFE58AA02239A2E8AE42B477C6B65E3C9A05D5C* ____deferredTasks;
	Dictionary_2_t29F21243F1646FCAD86C6C5C2DB161713F7C3E53* ____typeMap;
};
struct Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_StaticFields
{
	TypeU5BU5D_t386A95FC3A42CDDC6693AD26E6C6B717BEFC82B3* ___TypesWithState;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
struct EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A  : public RuntimeArray
{
	ALIGN_FIELD (8) Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 m_Items[1];

	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____managedEvent), (void*)NULL);
	}
};
struct GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42  : public RuntimeArray
{
	ALIGN_FIELD (8) Guid_t m_Items[1];

	inline Guid_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC  : public RuntimeArray
{
	ALIGN_FIELD (8) JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 m_Items[1];

	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 value)
	{
		m_Items[index] = value;
	}
};
struct LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E  : public RuntimeArray
{
	ALIGN_FIELD (8) LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 m_Items[1];

	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 value)
	{
		m_Items[index] = value;
	}
};
struct OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 m_Items[1];

	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 value)
	{
		m_Items[index] = value;
	}
};
struct OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87  : public RuntimeArray
{
	ALIGN_FIELD (8) OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F m_Items[1];

	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F value)
	{
		m_Items[index] = value;
	}
};
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
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8  : public RuntimeArray
{
	ALIGN_FIELD (8) EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 m_Items[1];

	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Event), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Panel), (void*)NULL);
		#endif
	}
};
struct CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9  : public RuntimeArray
{
	ALIGN_FIELD (8) CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 m_Items[1];

	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___callback), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___userData), (void*)NULL);
		#endif
	}
};
struct MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6  : public RuntimeArray
{
	ALIGN_FIELD (8) Metrics_t865BF0741490865117A79705F58784742D6F02B8 m_Items[1];

	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Metrics_t865BF0741490865117A79705F58784742D6F02B8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Metrics_t865BF0741490865117A79705F58784742D6F02B8 value)
	{
		m_Items[index] = value;
	}
};
struct UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4  : public RuntimeArray
{
	ALIGN_FIELD (8) UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 m_Items[1];

	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 value)
	{
		m_Items[index] = value;
	}
};
struct InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88  : public RuntimeArray
{
	ALIGN_FIELD (8) InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F m_Items[1];

	inline InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___root), (void*)NULL);
	}
	inline InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___root), (void*)NULL);
	}
};
struct TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3  : public RuntimeArray
{
	ALIGN_FIELD (8) TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* m_Items[1];

	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA  : public RuntimeArray
{
	ALIGN_FIELD (8) Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 m_Items[1];

	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258 value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49_gshared (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8* __this, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D_gshared (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C_gshared (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73_gshared (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A_gshared (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149* __this, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A_gshared (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, Guid_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m781626D382CB4E5A341843EE9A9144968F1D962D_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3_gshared (Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA* __this, Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE_gshared (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF_gshared (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ___0_array, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107_gshared (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ___0_array, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92_gshared (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ___0_array, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294_gshared (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F_gshared (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D_gshared (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C* __this, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5_gshared (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48_gshared (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72* __this, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575_gshared (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mA3ED0CEB6934E8D4C0C53DE5C744EE43BFD43C09_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t* ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE_gshared (Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28* __this, Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* ___0_q, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73_gshared (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* ___0_array, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_gshared_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE_gshared (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83_gshared (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329_gshared (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3_gshared (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline (const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (const RuntimeMethod*))Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC (RuntimeArray* __this, int32_t ___0_dimension, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57 (RuntimeArray* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49 (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8* __this, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8*, Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823 (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___0_array, bool ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*, bool, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline (const RuntimeMethod* method)
{
	return ((  EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* (*) (const RuntimeMethod*))Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
inline void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18* __this, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18*, Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, const RuntimeMethod*))Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58 (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73 (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* ___0_array, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline (const RuntimeMethod* method)
{
	return ((  GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* (*) (const RuntimeMethod*))Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64 (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149* __this, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149*, Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, const RuntimeMethod*))Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8 (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* ___0_array, Guid_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*, Guid_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline (const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (const RuntimeMethod*))Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0* __this, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0*, Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3 (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline (const RuntimeMethod* method)
{
	return ((  Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* (*) (const RuntimeMethod*))Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m781626D382CB4E5A341843EE9A9144968F1D962D (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m781626D382CB4E5A341843EE9A9144968F1D962D_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92 (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3 (Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA* __this, Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA*, Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4*, const RuntimeMethod*))Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* ___0_array, int32_t ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*, int32_t, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline (const RuntimeMethod* method)
{
	return ((  JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* (*) (const RuntimeMethod*))Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390 (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886 (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B* __this, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B*, Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* ___0_array, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline (const RuntimeMethod* method)
{
	return ((  LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* (*) (const RuntimeMethod*))Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832 (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06* __this, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06*, Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8 (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* ___0_array, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline (const RuntimeMethod* method)
{
	return ((  OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* (*) (const RuntimeMethod*))Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C (Enumerator_tA37D160544C06A884B929716C584D345827D7F82* __this, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA37D160544C06A884B929716C584D345827D7F82*, Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9 (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107 (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* ___0_array, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline (const RuntimeMethod* method)
{
	return ((  OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* (*) (const RuntimeMethod*))Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9 (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560* __this, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560*, Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896 (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92 (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* ___0_array, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline (const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A* __this, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A*, Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, RuntimeObject* ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* __this, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*, Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB_gshared)(__this, ___0_q, method);
}
inline EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline (const RuntimeMethod* method)
{
	return ((  EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* (*) (const RuntimeMethod*))Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602* __this, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602*, Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0 (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294 (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* ___0_array, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline (const RuntimeMethod* method)
{
	return ((  CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* (*) (const RuntimeMethod*))Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710* __this, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710*, Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82 (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* ___0_array, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline (const RuntimeMethod* method)
{
	return ((  MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* (*) (const RuntimeMethod*))Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5 (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C* __this, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C*, Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, const RuntimeMethod*))Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11 (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5 (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* ___0_array, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*, Metrics_t865BF0741490865117A79705F58784742D6F02B8, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline (const RuntimeMethod* method)
{
	return ((  UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* (*) (const RuntimeMethod*))Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2 (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48 (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72* __this, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72*, Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, const RuntimeMethod*))Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575 (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* ___0_array, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_inline (const RuntimeMethod* method)
{
	return ((  InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* (*) (const RuntimeMethod*))Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_gshared_inline)(method);
}
inline void Queue_1_SetCapacity_mA3ED0CEB6934E8D4C0C53DE5C744EE43BFD43C09 (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F*, int32_t, const RuntimeMethod*))Queue_1_SetCapacity_mA3ED0CEB6934E8D4C0C53DE5C744EE43BFD43C09_gshared)(__this, ___0_capacity, method);
}
inline void Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8 (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t* ___0_index, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F*, int32_t*, const RuntimeMethod*))Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8_gshared)(__this, ___0_index, method);
}
inline void Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE (Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28* __this, Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* ___0_q, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28*, Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F*, const RuntimeMethod*))Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE_gshared)(__this, ___0_q, method);
}
inline void Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43 (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F*, const RuntimeMethod*))Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43_gshared)(__this, method);
}
inline int32_t Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73 (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* ___0_array, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F ___1_value, int32_t ___2_startIndex, int32_t ___3_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73_gshared)(___0_array, ___1_value, ___2_startIndex, ___3_count, method);
}
inline void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t*, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared)(__this, ___0_index, ___1_satelliteRootId, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462 (int32_t ___0_internalError, const RuntimeMethod* method) ;
inline void RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA_gshared)(__this, ___0_tree, ___1_position, method);
}
inline void RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1 (const RuntimeMethod* method) ;
inline bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t*, int32_t*, const RuntimeMethod*))RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE_gshared)(__this, ___0_nodeId, ___1_mainTreeNodeId, method);
}
inline int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared)(__this, ___0_nodeId, method);
}
inline bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173_gshared)(__this, method);
}
inline int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, const RuntimeMethod*))RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_gshared_inline)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4 (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4_gshared)(__this, method);
}
inline void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, const RuntimeMethod*))RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007 (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, int32_t*, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007_gshared)(__this, ___0_index, ___1_satelliteRootId, method);
}
inline void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared)(__this, ___0_tree, ___1_position, method);
}
inline void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared)(__this, method);
}
inline bool RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t*, int32_t*, const RuntimeMethod*))RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A_gshared)(__this, ___0_nodeId, ___1_mainTreeNodeId, method);
}
inline RuntimeObject* RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669*, int32_t, const RuntimeMethod*))RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE_gshared)(__this, ___0_nodeId, method);
}
inline bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline)(__this, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50 (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared)(__this, method);
}
inline void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, const RuntimeMethod*))RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared)(__this, ___0_tree, method);
}
inline void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, const RuntimeMethod*))RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared)(__this, ___0_tree, ___1_position, method);
}
inline void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared)(__this, method);
}
inline bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared)(__this, method);
}
inline void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline)((RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*)__this, il2cppRetVal, method);
}
inline RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared)(__this, method);
}
inline void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470 (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*, const RuntimeMethod*))RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared)(__this, method);
}
inline void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared)(__this, method);
}
inline TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	return ((  TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline)(__this, ___0_value, method);
}
inline void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared)(__this, ___0_page, method);
}
inline int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline)(__this, method);
}
inline int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, bool, const RuntimeMethod*))RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared)(__this, ___0_allocatedPage, method);
}
inline void TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83_gshared)(__this, ___0_size, method);
}
inline void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	((  void (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, int32_t, const RuntimeMethod*))TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline)(__this, ___0_value, method);
}
inline int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline)(__this, method);
}
inline void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, const RuntimeMethod*))RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared)(__this, ___0_page, method);
}
inline int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56 (uint32_t ___0_bitMap, const RuntimeMethod* method)
{
	return ((  int32_t (*) (uint32_t, const RuntimeMethod*))RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared)(___0_bitMap, method);
}
inline int32_t TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329 (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329_gshared)(__this, ___0_tree, method);
}
inline int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared)(__this, ___0_x_id, method);
}
inline int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared)(__this, ___0_nodeId, ___1_rightNodeId, method);
}
inline void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared)(__this, ___0_nodeId, ___1_parentNodeId, method);
}
inline void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared)(__this, ___0_nodeId, ___1_nextNodeId, method);
}
inline void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared)(__this, ___0_nodeId, ___1_key, method);
}
inline void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared)(__this, ___0_nodeId, ___1_leftNodeId, method);
}
inline int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared)(__this, ___0_nodeId, ___1_size, method);
}
inline void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNodeID, ___3_position, ___4_append, method);
}
inline int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared)(__this, ___0_key, method);
}
inline int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared)(__this, ___0_nodeId, ___1_color, method);
}
inline int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared)(__this, ___0_root_id, ___1_x_id, ___2_mainTreeNode, method);
}
inline NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared)(__this, ___0_key, method);
}
inline NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method)
{
	return ((  NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared)(__this, ___0_userIndex, method);
}
inline int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared)(__this, ___0_root_id, ___1_z_id, ___2_mainTreeNodeID, method);
}
inline void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared)(__this, ___0_nodeId, method);
}
inline void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, int32_t, int32_t, const RuntimeMethod*))RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared)(__this, ___0_root_id, ___1_x_id, ___2_px_id, ___3_mainTreeNodeID, method);
}
inline void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	((  void (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared)(__this, ___0_root_id, ___1_key, method);
}
inline void NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3 (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50* __this, int32_t ___0_nodeID, int32_t ___1_mainTreeNodeID, const RuntimeMethod* method)
{
	((  void (*) (NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50*, int32_t, int32_t, const RuntimeMethod*))NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3_gshared)(__this, ___0_nodeID, ___1_mainTreeNodeID, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B (int32_t* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50, const RuntimeMethod*))RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared)(__this, ___0_path, method);
}
inline int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared)(__this, ___0_nodeId, method);
}
inline int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared)(__this, ___0_x_id, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054 (int32_t ___0_index, const RuntimeMethod* method) ;
inline int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared)(__this, ___0_node, method);
}
inline int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, const RuntimeMethod*))RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared)(__this, ___0_nodeId, ___1_item, method);
}
inline int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, int32_t, bool, const RuntimeMethod*))RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared)(__this, ___0_position, ___1_item, ___2_append, method);
}
inline int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, int32_t, const RuntimeMethod*))RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared)(__this, ___0_i, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8 (String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E (String_t* ___0_paramName, const RuntimeMethod* method) ;
inline int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615 (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D*, const RuntimeMethod*))RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8 (RuntimeArray* __this, RuntimeObject* ___0_value, int32_t ___1_index, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCB419750DB58D5651C2BA3E86EA990CE20C9914B_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0;
		L_0 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF5C2BF5A3985407B01FE4BF2710F746C987206F5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mEDF164EF5C1FF4F383AB7651CDBA76FE79B466FC_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mB12CE14EB61C66D2D293AB230C704E0E98EAFA92_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m04D29851319CD6D4DAB5237DF8EC3230AED1F4CB_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m8E837CE2FDA767EF5EBAEC77647D2A031B581723_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m18C68C247A23383ACD5C5C1CC5019B2A91DA9F0B_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4B4394C2109BA71882C8F4244F57F8CF2E6D3F16_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, bool ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		bool L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (bool)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 Queue_1_GetEnumerator_m2A0D11E6CE6745C8DC9CFC25896DD2DEA153E3E2_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mEB5F33C0F22D52CD6FE392F1C1BBF390E03A3C46_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m152BA96A6D5C204280A7CE6A320A8B0601436D10_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mD12F79F2E338D7034E5EF44A4CB07FAA12316E49((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t9E3516E552025C60C03DD6A783DEB331A09818E8 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Dequeue_mDA6F2BDCB2102C1FB753BDC3D3305E5882318E13_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_1 = NULL;
	bool V_2 = false;
	bool G_B4_0 = false;
	bool G_B3_0 = false;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		bool L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Peek_mE5657C08B172C19E88354345689C5A00952EA440_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		bool L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m00E30CA1E5B4FC8965827C567E4F191DC1EA99C2_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, bool ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____array;
		bool L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = __this->____array;
		bool L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____array;
		bool L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48C663051095D0B18F3E04B9352AACE522354A3D(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Queue_1_ToArray_mA6A6459F9CD38BEADC8EA8A32CA9BC0281EBDAD6_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1;
		L_1 = Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = __this->____array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m50627BDB7FAB139A5D4049D133134EA4427690A5_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_0 = NULL;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B6_0 = NULL;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_1 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_11 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_14 = __this->____array;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_15 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE08DBAF68435786AA97435EE62CA439641637001_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mAEFF45DE24113B3B3B74E02C5A8200F53CA9A823_gshared (Queue_1_t803CA034D040E531D06237F0C5EB6DFE225B3B77* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mC2547198A54AB222EA96E649C3A653C21785EE72_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0;
		L_0 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mE3D16BAC10E3E8310BFD91E86E73A47FC415AF97_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m3A61FABB0AD9451F71F926B823F2F44E309C6372_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m08055A31C713D7C4F069943FBC34FF6497D980FF_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m824E4DEDBA00C644E4BD2DB895B6E905D15704C8_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m74A7CE2E9F16893B7218F9F108F0C4F1328058A4_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mECF47CAE501BB0443EBE564E6C9EEC9AE8C41969_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEA83B1259F57F18E4BF86A4CC43BAEC33D2FCA41_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 Queue_1_GetEnumerator_m4464DDCF024AA5806E45E241C0BC8BF2F71D574F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m278165306205AA6C5E604C7DEECAEF450220A964_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mA381A953C70DED15A56D8D12CB61B2DCC32EB94C_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m96AAB9F5DC5F6BBCB377A9459038CB7F0CF0875C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t329C281175018D15B72F177193D05EC5E98EBF18 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Dequeue_m841B28D2AD7F6CEFF71B159D6B4B9526C4858780_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_1 = NULL;
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215));
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 Queue_1_Peek_mAA48A0CAF08E80D6DA532EECF0EB0DF69E895DA7_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mAB1CDDA12BB6C3AC86CF1086B6A1AE04FA0A533B_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_14 = __this->____array;
		Event_tDC1CE7179A25C1AC33BD07C5B4F161045A672215 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m783DEB1BEA7DFED9BEAA2878AE0FFC9E1A083B73(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Queue_1_ToArray_m41B953E9C03B9D934ED24354C0DD5F1AC440466D_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1;
		L_1 = Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9C99B93C7AB97E316D1E8591BCF01B03FD5B9F1A_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* V_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B6_0 = NULL;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_1 = (EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)(EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_11 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_14 = __this->____array;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_15 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m86C24E3D8D2B55FCD5FE49614EEC466771A8471F_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4E22F11E12D35FD450ED05E4C4A7D959DDCC8E58_gshared (Queue_1_t511BA32B92964BEC1458E4CF6F295292576243B8* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m1C6D335888FBF2EC65421D47EEE67CAC8D498913_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0;
		L_0 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6F75B38CDAF3DAFE933386F32A9A226939C9D65B_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE442C16C0D93D0DA9E9E22D06D274787BB19364C_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mC1A1218D170C71732335132BF285B7E4850D4BDE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mEC9C5E172A02C4AEB80962618B96C11D71E8DDF1_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1369C5316A92A273CF455A93B2C4B6C5519430BA_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7894AFF06FB237832EE4CD409D9A3FC01FAEE303_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4E3484A11DA06BE790F19AC5BAA741488CF3DFBF_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		Guid_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Guid_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 Queue_1_GetEnumerator_m58240FDDC3E87C9D63437F60DF4AE5B4EC4CCEC6_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m8B29039B08FAEC3E376823665779F6A9B952847A_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mEEA83855C4A0EACEE09899C81C962EAB9FC36B4E_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m38758308E0103BD5342A02DED198743334603B9A((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6CDF4C083D83843430ACEA71EDA25A6CE3C63149 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Queue_1_Dequeue_m800C401EB7D30246FBEC930B640A78DBFB3290FB_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_1 = NULL;
	Guid_t V_2;
	memset((&V_2), 0, sizeof(V_2));
	Guid_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Guid_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Guid_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Queue_1_Peek_m090986F33DA324227CED6DB6C23476031BEEB119_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Guid_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD501B15509E754A2C74FF4EACBC55CA6640A2869_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, Guid_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = __this->____array;
		Guid_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_8 = __this->____array;
		Guid_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_14 = __this->____array;
		Guid_t L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisGuid_t_mE7DCAC0CC6C4B60A4FE37542A473D0F46B55B74A(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Queue_1_ToArray_mA2599DF9D45500EB1AEFF3A873277BEE36620159_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1;
		L_1 = Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_12 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_15 = __this->____array;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_16 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mB48DDD9DCA1EB0F52BF88FD13CFD5487B69C5B64_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* V_0 = NULL;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B6_0 = NULL;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_1 = (GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)(GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_11 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_14 = __this->____array;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_15 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m4DBCFC08CFC64432537E4134D36D8ECBD7E6FAEE_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34C4E62AF8D432EA66B916CCCA42BAE1CE73C7B8_gshared (Queue_1_t2D8AA86DE3946755295B50DF1080F04217A5EAD0* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0;
		L_0 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFBB78D8B30A0F7F62B7B13B48794314CF472D4D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m64927F70EEDD608787495C8CD045AB0538528178_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB126A5C4AEA0618F16C39571027DA9CD47379039_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF9C62216146F40E17E678C66BDFD0672A6A2BFA1_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m951B065722F6BAD8756DF930F0E77EFC01865B73_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 Queue_1_GetEnumerator_mC56A5519A861A13B2DFF0857D4908B7A495970D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m00D02E02E64C0C3A402468A862ED63F52FC4360D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB64344DD889D2DA18EA20A979560574BBB7CCE0B_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m5D19A6A35D333E4EF604BB42D7F8839CDF43B3AE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tC5D53D94AA54C1739681E6FC364E9CD8AE31ECE0 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m670D85E9DC1BD3A794F6006EE07A20E4AC33C08C_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m3ABAE00CC43C9B6561CE5F94724ED2FCD962BD64_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		int32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____array;
		int32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____array;
		int32_t L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CB8CB6C30E1C3E70C8662D7A290B88EF5007F3(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Queue_1_ToArray_mCB86607434F2C40D8E444E595A9748C0E72255BA_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1;
		L_1 = Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC239D559AF84CEE25E8EEADB05B96025C66ED6D5_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B6_0 = NULL;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____array;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m30C57750EB5C9A1840E1F823928030E66FF1F961_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m5D8FD90EDA9D9EB662F56AAE70DCE0AEDC773CFF_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m992D354E286193E64A172A753C68DE833C46CF1C_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0;
		L_0 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5E341E6694EFB256F122C6D619B7EA0BB4DF83E0_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mCF30175C671A843A65797512FEB2FDE55DF34951_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF6EE819BB702AF103F32FADA9C46CF54B2668D0E_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mD913A8B7AA52D9973C95168477C17B83F3678A2F_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m37DAA93282E0A62C152FDE028A4F119F275A05F8_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m85DA74ACBA8322AEE84898B9D18BE3839C9BC44C_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mEF5F26AF547C41BEC36EFF00081850A6F7A7C0B1_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m781626D382CB4E5A341843EE9A9144968F1D962D(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		int32_t L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA Queue_1_GetEnumerator_mF4436D3C696165263A30F6F62E779B8AEBE579A4_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m606810BFB6628F196D4E4BC29B582565DB788313_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m72D23150F5C643A857397477FB994414DE897C78_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m25A8587B8E48B04F486607C0512EB206D5C2E1B3((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tD9AB9878A104BD7DAF2BDA22F10DDDC295E5A6BA L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mEC106FE8A94CC61A7B5148FABEC01F6DB6AA991F_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Peek_m7BB8C50EECC0EB63B1F26F85A904C248A6B14414_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mFB40409B75836D519A139B5DC936E394DA299F2B_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____array;
		int32_t L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = __this->____array;
		int32_t L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____array;
		int32_t L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mA27917199B3C9E1A60C5791FB1B2AC5EB4C2103A(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Queue_1_ToArray_mDDD97A5DBC6DA336D0EA0F15FCE3E7276FC41A8C_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1;
		L_1 = Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_15 = __this->____array;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_16 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m781626D382CB4E5A341843EE9A9144968F1D962D_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* V_0 = NULL;
	Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* G_B6_0 = NULL;
	Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_1 = (Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)(Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_11 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_14 = __this->____array;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_15 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m888A96FB233F33345FB4F30E0EDA631480E73B92_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mB64D722513F6C31955C9159BB77E675C5BCA7A0F_gshared (Queue_1_tF0C1082EEAC339436B7A1FB0F995C8958434F8D4* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3A126C80D91B2EB3C8E8BE072438D3C3640A5A75_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0;
		L_0 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA6D219FBF1F11E55D74C0545DBF6AA18C5AF85B3_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m82A01ECF2E58E85CB036CC8A5003977C294922A9_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m651CD21940DE48A08FC17F6D6A54A001C9EC499F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8D1E973396C1AF008B7003FF251DF68BA9EBC6E2_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m9B8DBB3F3DCFAE1306C2A604E8C4FCB5E80E4E59_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mEEF9060CB1702EEB6695F115562EFB3DAA29992D_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7ACC3D9CAAB2E747FE32FCB2928ED5886A5B33B1_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B Queue_1_GetEnumerator_m092DE77C76645AFDD839F99DB6DB0C8A9FFD0B05_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m3BAEC4F450BC7747422D37AA9ADE3D522E3B6AA4_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mB5643D90AE44533169A70ECBF4FB8D9BABC22A78_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mCAEAD58A7CCD7D52CA917A793703DEC5C62FD886((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t010464636F36FAEAEA939F0C460D9B4D3742028B L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Dequeue_mAB6FF2BF6F12E3AD12C7524DB9EB640CB5C3750E_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_1 = NULL;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 Queue_1_Peek_m639CC79FAC9BD961981FAD7C71CBC8FD7F122EDC_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mF17839D3523CFFAF643E06BD857B5FCB26EB9312_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_14 = __this->____array;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_mCD89004E22CB4FEB73672DD2830E315DDA4DA3BE(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Queue_1_ToArray_m37BDB9698F8E57DC78F53E21C3E964A6A0CDA62A_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1;
		L_1 = Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9A483395EF3F401BC08314BDE9392BD26EBE444F_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* V_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B6_0 = NULL;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_1 = (JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)(JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_11 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_14 = __this->____array;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_15 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m3D336700DC21E884D1630A558443DAF213BF7390_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mD2319068D20E3C518DE4D8B243133A83BE83B8FA_gshared (Queue_1_t9F41BF6CFC5D32AA799C92FDAE83FEBE7D98DAC9* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m65412F74A4DE5C6DA1535E080CB9CAD2748DC04B_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0;
		L_0 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98722C43B633C81AA2CD0A702C5701AF1B8AAD46_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mA169C0D025767536F39AA8566078224AFC27B0D6_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m76FDCF58D46DC1A6EF39452983B841CE5B6522E0_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m67ED59890D29357814FEF2202508A508F6F565DF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mB299B67924A84D46D4F9C75933B51F8C66D8ED25_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5F8E104F63F733938DE6E2EF6264392C1F8AD7FF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m231519D2D72DE9DE09CFA2C647A8202B6C822C9D_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 Queue_1_GetEnumerator_m2F5A9416761312E275123FA5ED5E5DC8B74764BD_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m5C5C34E168F1114E4D68D9A79BE6F8388519154C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m89458DE8DBF69059F2FD6098F5D04358316B65E3_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m2B0D23AC382BBB3E011BF1921CAA59FD3BDE7832((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tFB4F881AF1180BFDAAAB610170F9B86F86264A06 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Dequeue_m86FF00059068ADD8879AFAD576D8A676DA0C3DDC_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_1 = NULL;
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 V_2;
	memset((&V_2), 0, sizeof(V_2));
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 Queue_1_Peek_m378FF8A44A937ADF61A0EF090C8CCBB7EBC483E1_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m9536486A48B2688D9CD90C7AC71125BACB0890BF_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_8 = __this->____array;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_14 = __this->____array;
		LocomotionEvent_tECDD51A234545203F40F068C91D2745873285642 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_m81D04E8785620C70201A474F5463FDF937BA21CF(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Queue_1_ToArray_m20AF66CD55943562DE1A3DCFB00860F56D19496C_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1;
		L_1 = Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mC6C458C8ED5BB20D0566801DB2F6EA8E2E9E6B33_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* V_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B6_0 = NULL;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_1 = (LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)(LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_11 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_14 = __this->____array;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_15 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mCE56293A1A39B3230F6023ED7EBE1CCFC3B2BD13_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m042E2800DCBDFAAC8915235D5D2E059FAD0A25F8_gshared (Queue_1_t73AA8690FCCDD7064CFD6EFF7E07AAE8A9E3282E* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2F2F10F939D04078D011752BA3FEFB86D658D793_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0;
		L_0 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mF3CF3FAEB079855302E475A49CEEE333E21C3DAD_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m30D59F53639B7FF3678657C63D0B12F7148C673B_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mAD7C2360CEC0AE6A3186B368D29BAC2A20229925_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m443A495069FE49E8AA3800BD47DEF5F2663EB2B0_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m0597182AB0372D1CF6D2AFB93605048F60355D0E_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m46ED975B5C3765B87B0CEB2C891E462FDBFA91C5_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mA53241B877A400D032C4488776CF7C264FA2C458_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA37D160544C06A884B929716C584D345827D7F82 Queue_1_GetEnumerator_m3EED06CB1D51AF328036F21B798A4EEFFF6D4D70_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m0FB520F274B17CF126395A59B4D778E350351AE2_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m301DB6D58060A3ECE16C07F5F914780A0D275060_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mA75ADD1AABBAFC7DA37E3CB9E112240B4D5C3B3C((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA37D160544C06A884B929716C584D345827D7F82 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Dequeue_m0B6C3646FE49D7A6FA9CAE5EC1E0659D2142965D_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_1 = NULL;
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 Queue_1_Peek_mFE28DF19F37FC57A1506768905A255556BD5D05F_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mD4024254980C31EC4AFD7EE4CB24786730DDF922_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_8 = __this->____array;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_14 = __this->____array;
		OVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m60B7DCFE575676906DB9DDFE65044389A3140107(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Queue_1_ToArray_m3192A80A808ED4CB42DFA1EE350571632F8C6C17_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1;
		L_1 = Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5ED88CD40DFE7C555698637DF8EE0373666F7FBE_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* V_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B6_0 = NULL;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_1 = (OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)(OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_11 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_14 = __this->____array;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_15 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m532FB7269508F2253CA2BE442320D77B8BDE2354_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mE880A9E084E67FA63C8A803328EA675ADF9609D9_gshared (Queue_1_t1D6F352931A377975F02A32E777EA09883B33C75* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m3B1A01E37AF78AC402E6D909C972C725310C37B1_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0;
		L_0 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m604B474F22E225066E4B20D4978D379073B31832_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m93EFA300D31BDFE65CA5692E859D9918F45CE51D_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mD96A41ADE9C53A163A66E01A74B17B0867CF285C_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mE9E3E861EB9A7CB5198D2207752A588E4B0E929C_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m1262DAC5C511E921516C7944D4ACE10A1CABD3E3_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m41933D3BB808C26663FD89F827B9169DE26CBD1F_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m7E14B3B59FE321E1E42FE89D0BC66635A948F123_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 Queue_1_GetEnumerator_m609EBA9693AAB1495DC3C2FB14089D93EC15474B_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m2EAD05BF1EB86B70F4F35A5C8D34E176F2E5AE64_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mFA64E96618CD1B89900CDBB1FB3A1AB8EF8738A0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m554A60C58B8FA3C07AC9ED65259F2540A22512C9((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_tA3F7A11D4916F63885D11B4302363F15E7C97560 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Dequeue_m3A29168D768746E5F6477A30C49A9100AC12EC75_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_1 = NULL;
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F V_2;
	memset((&V_2), 0, sizeof(V_2));
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F Queue_1_Peek_m98DEC1D002C6536D1251F4090205A68BF5DD6A19_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m28255656165FA297D56373EB6E29643402708E44_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_8 = __this->____array;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_14 = __this->____array;
		OVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_m87013AC3E162506E43D8B5D7A233BEEE846FAF92(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Queue_1_ToArray_mAC64FD3C52A9EBF8E392EB8AE9D57AF0B03B47FD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1;
		L_1 = Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m1954B6757DC74ADED133CEDCD27051BA8C64C8BD_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* V_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B6_0 = NULL;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_1 = (OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)(OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_11 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_14 = __this->____array;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_15 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m21BE0E1F56306C29473727D3FE261E61904510D0_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_mF88B2DB51CD55D2C025C86961FA95D67541AC896_gshared (Queue_1_t013F2123BF26BC39731D677AAD204DAC9FFDBC43* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0;
		L_0 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m487BCAF8F7A2FB003B54B1E744B80FB6651B4963_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m053714A9E6478AFE7CD493D962FCBB5E58A24A86_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m10E1293E4A4BE4403DA68CFCAB5494FED197110C_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m7EC23B77294ABA74E78B728FBA0C420C959CE4A0_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		RuntimeObject* L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A Queue_1_GetEnumerator_mBF0033C4BCEA408644D24F0B28A81F9145FB97C9_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4DF91611354D7FE1796A09DCB101AF5E70805793_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m36EBE55DAAC29B841CC02D968AC0E41A5D64DADB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m07A08E9A1E2AB072CB1654A5009DA79A460E081B((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t30E3290EE12437374037B3CF0EE4D614F96D030A L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		RuntimeObject* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject*));
		RuntimeObject* L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (RuntimeObject*)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2005E02D4DC2C3186E5BA0722C8435C966AB7B0E_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		RuntimeObject* L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = __this->____array;
		RuntimeObject* L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		RuntimeObject* L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisRuntimeObject_m4C0C698B1D627E6B3C3BE6DDA512E8E276DC6F73(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Queue_1_ToArray_m4EE007D1D45FDFE14373A58B80B6D9EB2A03A9D8_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1;
		L_1 = Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mD8086A1BE69A9D667942BEE1B7C493ED46D076B2_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B6_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = __this->____array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBE64AC05D205514CF53E249788563FB5000FDB82_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m79CDC02B168158EA24B805B9CB987F18C37638EA_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m657BFA58DFD6AB5B1B4B69AA6E963CD569637EAD_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0;
		L_0 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2A01859D57AB64CDCAECDF68089FD2236759976C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE6103188ACDEC07F90F2D2986554730D18029750_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m1E7DDED94ADEB25172891CED1F68DFC880B66415_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m8E5ACA13B4BA41CC3230927ACEB3CF68820A8A05_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mF3F6BB3C909C58BB9407AA3FFA131CC73E1287AA_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		bool L_1;
		L_1 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_1)
		{
			goto IL_0068;
		}
	}
	{
		int32_t L_2 = __this->____head;
		int32_t L_3 = __this->____tail;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0036;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_4, L_5, L_6, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		NullCheck(L_9);
		int32_t L_10 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_7, L_8, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), L_10)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		int32_t L_12 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_11, 0, L_12, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m8ACB04592D3C4936139A90C1CE9B708BA3F7D47F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m9159DC6A9BC5528A3444329C408F4101004CF652_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_7);
		il2cpp_codegen_memcpy((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), L_9, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), (void*)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_GetEnumerator_m6C532F76552CCD7154B74816F66DA3CE367BD90D_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m926D620709AEF33612E061F359920FA5A7F33D2F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mD615C747AA1C683E461CA820560E002427466EB8_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C L_0 = alloca(SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
	{
		memset(L_0, 0, SizeOf_Enumerator_t6909F21E05B290BE40805B8A5845E4FD888195A1);
		Enumerator__ctor_m8DA499B2030A9C843BE8FCAEFDFD4CD4EB5BA0BB((Enumerator_tFA6E7D5BA5EFB0C82F2AA1342FFD5C2B753D673C*)L_0, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_0);
		return (RuntimeObject*)L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Dequeue_m80C152387A53656EC4AEF450BCBA9087DC51EEE3_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_10 = L_6;
	int32_t V_0 = 0;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_1 = NULL;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(V_2, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B4_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B4_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	Il2CppFullySharedGenericAny G_B3_0 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	memset(G_B3_0, 0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		il2cpp_codegen_memcpy(L_6, (L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		bool L_7;
		L_7 = il2cpp_codegen_is_reference_or_contains_references(il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_7)
		{
			il2cpp_codegen_memcpy(G_B4_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
			goto IL_003a;
		}
		il2cpp_codegen_memcpy(G_B3_0, L_6, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_1;
		int32_t L_9 = V_0;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(L_10, V_2, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		NullCheck(L_8);
		il2cpp_codegen_memcpy((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), L_10, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 6), (void**)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9)), (void*)L_10);
		il2cpp_codegen_memcpy(G_B4_0, G_B3_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	}

IL_003a:
	{
		int32_t* L_11 = (int32_t*)(&__this->____head);
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_12 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
		int32_t L_13 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_13, 1));
		il2cpp_codegen_memcpy(il2cppRetVal, G_B4_0, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Peek_mC16DCF76985FF167BAB542F92D9AA03C1E210D8C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		((  void (*) (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		il2cpp_codegen_memcpy(L_4, (L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m18A922A2A41A33641FC69FAB29C41657375E682F_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
	const Il2CppFullySharedGenericAny L_9 = L_4;
	const Il2CppFullySharedGenericAny L_15 = L_4;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		il2cpp_codegen_memcpy(L_4, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_4: *(void**)L_4), L_5, L_6);
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = __this->____array;
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_9: *(void**)L_9), L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____array;
		il2cpp_codegen_memcpy(L_15, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? ___0_item : &___0_item), SizeOf_T_tD6AE21C41260DF14F855F85E236422077D7456A1);
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = InvokerFuncInvoker4< int32_t, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, Il2CppFullySharedGenericAny, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12), NULL, L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 6)) ? L_15: *(void**)L_15), 0, L_16);
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Queue_1_ToArray_m6E3371A83B60239A394CB7E49FFB3380C75C5E52_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1;
		L_1 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5368BB1720798CB76A62CDC47D91036C4B07BBEB_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B6_0 = NULL;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)(__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_11 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_14 = __this->____array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_15 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m556B77D096A97022BDACBFD4C2C78ABD6309A48C_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A409F6A724BB2356563FCEA1FD83322718EE8C9_gshared (Queue_1_t00794C5F46E3254E713B03F949E6AB3A1AB1FD41* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5793B48CD425E5D7A93313DF986956BBAA8B65C7_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0;
		L_0 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m98E586DB678570DC3A40CF92702290F1519727DC_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m08F50B5D83CD07085F9B86C829170F37FE7EF037_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mBA41708EE6C38EC390C71F2AC83CC2FFC3D5D1E2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mC4119DAB01098BD9FAC558B758E91E4FD2283F21_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mA1E2EE278988F339DC3EC2FA17F909904DE3C974_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD31AA840A14A0863D14662B3432C6F244F3ED007_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBF44A4060F486104A2FC16D28D0BDBD08BC83491_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 Queue_1_GetEnumerator_m6811DC2FBA9AB8EEA103F351BF62C1CC4510F9C2_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m72D68C500677FCC7AD2E98F73EE2F4C101BFFBB3_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_mF93C321C59477A3AD51B3070041130177696ED5F_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mEDD7119A358C62419FF8F06020B05C38E755671E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t3B7550C1130BBD2F1A4BAE88FB62305FC7A95602 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Dequeue_m90F123DA1976DFBC4D8B331B07B1EB833A2E4509_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_1 = NULL;
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2));
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 Queue_1_Peek_m1C5E26653158385CA6B819CCC6C0B2E54FE805F5_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mC42C579A978F3B1371A7380402643611828E9E4B_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_14 = __this->____array;
		EventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mDA8ABF0C8CBC330E0DBA64B13F204111EAFA1294(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Queue_1_ToArray_m09076A35A3E2BDFFFB21BCF0AA9E6AAE78901DE9_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1;
		L_1 = Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m5115601B916B93D40CF5F1D0E701A44CE4AC00BD_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* V_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B6_0 = NULL;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_1 = (EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)(EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_11 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_14 = __this->____array;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_15 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF35B8278118E61AA6201303604959C981D6274D8_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m10EBE3090FFF2A9725A7DB3135D2C29BEE30F2C0_gshared (Queue_1_t488F4FFC87B785BACAAF18A6B2E9307E5451DF68* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m305184BC0CC0E383E8001B97DA4AEEA7D0CE1B2C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0;
		L_0 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mBB24ED246DAAA77C2092ED6A2D2C77DC7BE23B5B_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0C22CA69FAA76A44B8107DCD23A3DD3327E63C3C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mF204923CFC94A94A4C87A697FC845BA17D25A7B2_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mB520097DA7393AA0006340BA528707A82362AC87_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m6DB16A4E0D88DC23DD547CFFA96F8E3C5CEBADD4_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mF3012F58E434209795ED06755BE79FAB1E66A38C_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m4415CE3E59110C01F3959FF645AEB9D0A12D5A82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 Queue_1_GetEnumerator_m38AA4049D7E2398FD0D7490310D72C80155D9C88_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m81EB5E36D293C068CC238E2CAB700B4E8810DA26_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m0A5DEDAEF2B64E21F4E9E0B8EBE60C7889972167_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m076E60AA8F25CE906A72B6409796A0A68BEB99CB((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t388482DB0A98B84F0E9A2C3F7C6F6DD949077710 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Dequeue_m464B10B3191E4D7B20542EB8FA1A47DEF1027D84_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_1 = NULL;
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 V_2;
	memset((&V_2), 0, sizeof(V_2));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08));
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 Queue_1_Peek_m2DE035C032FAA2FA38A1716B4BFA0D3D362ABA4A_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m2E18774C6607F2A29D55C05D9BC6A1A04390B96B_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_14 = __this->____array;
		CallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mF7378E0A466D44125A606D050C5AD75FCE4C819F(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Queue_1_ToArray_mB908DFB1E373CF2C238A1C581E6E614B483E862F_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1;
		L_1 = Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m225DAA2133CC2108D2F16C7EF47CA7368AE5E4E7_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* V_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B6_0 = NULL;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_1 = (CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)(CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_11 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_14 = __this->____array;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_15 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mF12756790A3C38E07F95BA2B920AE67A930962A8_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m4A8990345304F038BC2D5F79896D4BED8CC2CD82_gshared (Queue_1_t75840AD230E9D2498F813412770B56A17D0281F1* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mA4CD013A3824D1C3DAEE128A225677702940DE4A_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0;
		L_0 = Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mFA27C9E8167D623B97FDAE1315336CB3CF90681D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_6 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m06EFBE93C3626E3C47EDCECD2BB2E30FC7BDBF32_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m18897BE00DD3AEC67FB57FB606003800C56BE916_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m82A225EF5020B299562B30AA1F63F1C39F35480C_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m66EC02E7DA88098B0048DC127F6524B23FC706A1_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mD7DB1516BBF5561EE1FA0CF2E2BFA76439A565A6_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m78917B1C4599482982DBF04FFB7D27B267CA20B9_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (Metrics_t865BF0741490865117A79705F58784742D6F02B8)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C Queue_1_GetEnumerator_mADE313876F8DFB2CD8A5AF874F331A68EA29EBA2_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m23B2FBCE7EA30FF3122BB3F281D4A444AFBBC4FC_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m57BA4DDE8DADEFF4B9209584F931FB0658414590_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_mBEA90511FBBA5D59BA40DB6A2CB8E8E750E2CE6D((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t1693CCB05921830A8C445721C4EF5E22CD16361C L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Queue_1_Dequeue_m7B87F8885BF1C80BE135901415778DC39D9DDD2D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_1 = NULL;
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Metrics_t865BF0741490865117A79705F58784742D6F02B8 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Metrics_t865BF0741490865117A79705F58784742D6F02B8 Queue_1_Peek_m5F27A5FFB5DE652228CCAF183C2CDAFA28F2BAF5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m1576ADAB9E6EFD1869F7C3F7CCAFB0A984AB9A69_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, Metrics_t865BF0741490865117A79705F58784742D6F02B8 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = __this->____array;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_8 = __this->____array;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_14 = __this->____array;
		Metrics_t865BF0741490865117A79705F58784742D6F02B8 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_mD8784F03536AEA9AA8CF1915A9AD9EDBACC3E3A5(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Queue_1_ToArray_m23E66F0D55919A7431DAB6CD2A734CF6A15DFAC4_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1;
		L_1 = Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_12 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_15 = __this->____array;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m9D06B9463E38BC052080BA46E1A018AA97C51FB5_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* V_0 = NULL;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B6_0 = NULL;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_1 = (MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)(MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_11 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_14 = __this->____array;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_15 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mBD112EEDCF9D50EE813327B1A682137EBDB1441D_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m1F757A43C24F636EDDEAAE6990F47066A0641E11_gshared (Queue_1_tA36ED6E147E1AD356B833C618F8097204DD882AB* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m2D4256A7BC32DBC6728EA2B14CFFBFD2C53A5B81_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0;
		L_0 = Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m33116247A314D0442F50B766CF50C6A5FDEEA0BB_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_6 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m608B99E53CF724EF9E92EE03079A6F11894C3CCD_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_m0135073AA90D82FB8E2ED61FDAEC6D041BAFA8C5_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_m57ADB13AB6E4E1C80E2CCC5ED2E3A5273F44EFB4_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m78877C3E0216C4018FD5F22A0E07E94B8306C870_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0068;
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_1 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_1, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_mFE76E1D4916DECEAEF6DC86D61A6EC635F60C399_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m542BF8C3EB868D61C73A96DA240A9B5A335A8CAC_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 Queue_1_GetEnumerator_m9C26DE1A1FA80199AC52AE6179C3FE00AC17657F_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_mA68CF47A74F907D206AFE2F9145B670F46EF1EEA_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m69202A584D317CB2FF1CD6C4121D0C0BE5D91B6C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m4585014F21FD533727C1ED76BB3D9A005DD4EB48((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t48FFA0B7AB0F72C79D913567E39C4E34EF6D5F72 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Queue_1_Dequeue_m20754BCCEC4154CF598981A7C875E3287A06390A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_1 = NULL;
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 V_2;
	memset((&V_2), 0, sizeof(V_2));
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B4_0 = L_6;
		goto IL_003a;
	}

IL_003a:
	{
		int32_t* L_7 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_8 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
		int32_t L_9 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_9, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 Queue_1_Peek_m5E7A380F3AFDB97C88FB7FBE2F9CF5BADDB303BE_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_mBEB3A323139324AE4F8FEE6F61519DC06EBCB193_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = __this->____array;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_8 = __this->____array;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_14 = __this->____array;
		UnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71 L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_mB49E8439E672760C4D21B508C40A969C08897575(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Queue_1_ToArray_m4747446C14C756BF60364F6EF3B0048F48282ACE_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1;
		L_1 = Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_12 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_15 = __this->____array;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_m294E03E4DA2287FB6157DA9B798E70C5B23F97C2_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* V_0 = NULL;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B6_0 = NULL;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_1 = (UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)(UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_11 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_14 = __this->____array;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_15 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_m0937989004EB8AB26BE756B015A9316BF932D87A_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m8A42A30BC718D934ED90CCF2CC47DBFF4675D44C_gshared (Queue_1_t503EBD077F0ECDC1B51491FE90E42D4B14D32E0D* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m4F7A853BFB70329454773C129306E228525924E5_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_0;
		L_0 = Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		__this->____array = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mAD685F2A7A5619719EA2D1B1E1D4470C74909B9F_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_capacity;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_1 = ___0_capacity;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_4 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral38E3DBC7FC353425EF3A98DC8DAC6689AF5FD1BE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0020:
	{
		int32_t L_5 = ___0_capacity;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_6 = (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)(InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_5);
		__this->____array = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_6);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mAA6408F06A3C8FFE41968CA5C0DD7307A0382DA9_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_System_Collections_ICollection_get_IsSynchronized_mE2B9B10D13AD80110D0C8B2B286A6C817E3FBD23_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_ICollection_get_SyncRoot_mEFD78FFB0D47C5E6A4D23D36682B82536714DA41_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____syncRoot;
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject** L_1 = (RuntimeObject**)(&__this->____syncRoot);
		RuntimeObject* L_2 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_2, NULL);
		RuntimeObject* L_3;
		L_3 = InterlockedCompareExchangeImpl<RuntimeObject*>(L_1, L_2, NULL);
	}

IL_001a:
	{
		RuntimeObject* L_4 = __this->____syncRoot;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_mEF0A03F9D05630F1B7D2FB1C9A58CB858F51B611_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (!L_0)
		{
			goto IL_006f;
		}
	}
	{
	}
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0036;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_3 = __this->____array;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____size;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, L_4, L_5, NULL);
		goto IL_0068;
	}

IL_0036:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_8 = __this->____array;
		NullCheck(L_8);
		int32_t L_9 = __this->____head;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_6, L_7, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), L_9)), NULL);
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_10 = __this->____array;
		int32_t L_11 = __this->____tail;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0068:
	{
		__this->____size = 0;
	}

IL_006f:
	{
		__this->____head = 0;
		__this->____tail = 0;
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_System_Collections_ICollection_CopyTo_m5281940914DAF3E9A4FBF96627250635D3D41A69_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B17_0 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeArray* L_2 = ___0_array;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Array_get_Rank_m9383A200A2ECC89ECA44FE5F812ECFB874449C5F(L_2, NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_4 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral967D403A541A1026A83D548E5AD5CA800AD4EFB5)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, method);
	}

IL_0027:
	{
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_GetLowerBound_m4FB0601E2E8A6304A42E3FC400576DF7B0F084BC(L_5, 0, NULL);
		if (!L_6)
		{
			goto IL_0040;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_7 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6195D7DA68D16D4985AD1A1B4FD2841A43CDDE70)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0040:
	{
		RuntimeArray* L_8 = ___0_array;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_8, NULL);
		V_0 = L_9;
		int32_t L_10 = ___1_index;
		if ((((int32_t)L_10) < ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0065;
		}
	}

IL_004f:
	{
		int32_t L_13 = ___1_index;
		int32_t L_14 = L_13;
		RuntimeObject* L_15 = Box(il2cpp_defaults.int32_class, &L_14);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_16 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral569FEAE6AEE421BCD8D24F22865E84F808C2A1E4)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_0065:
	{
		int32_t L_17 = V_0;
		int32_t L_18 = ___1_index;
		int32_t L_19 = __this->____size;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) >= ((int32_t)L_19)))
		{
			goto IL_007b;
		}
	}
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_20 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7F4C724BD10943E8B0B17A6E069F992E219EF5E8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_007b:
	{
		int32_t L_21 = __this->____size;
		V_1 = L_21;
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		return;
	}

IL_0086:
	{
	}
	try
	{
		{
			InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_23 = __this->____array;
			NullCheck(L_23);
			int32_t L_24 = __this->____head;
			int32_t L_25 = V_1;
			if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), L_24))) < ((int32_t)L_25)))
			{
				goto IL_009c_1;
			}
		}
		{
			int32_t L_26 = V_1;
			G_B17_0 = L_26;
			goto IL_00ab_1;
		}

IL_009c_1:
		{
			InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_27 = __this->____array;
			NullCheck(L_27);
			int32_t L_28 = __this->____head;
			G_B17_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), L_28));
		}

IL_00ab_1:
		{
			V_2 = G_B17_0;
			InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_29 = __this->____array;
			int32_t L_30 = __this->____head;
			RuntimeArray* L_31 = ___0_array;
			int32_t L_32 = ___1_index;
			int32_t L_33 = V_2;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_29, L_30, L_31, L_32, L_33, NULL);
			int32_t L_34 = V_1;
			int32_t L_35 = V_2;
			V_1 = ((int32_t)il2cpp_codegen_subtract(L_34, L_35));
			int32_t L_36 = V_1;
			if ((((int32_t)L_36) <= ((int32_t)0)))
			{
				goto IL_00e7_1;
			}
		}
		{
			InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_37 = __this->____array;
			RuntimeArray* L_38 = ___0_array;
			int32_t L_39 = ___1_index;
			InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_40 = __this->____array;
			NullCheck(L_40);
			int32_t L_41 = __this->____head;
			int32_t L_42 = V_1;
			Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, L_38, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_39, ((int32_t)(((RuntimeArray*)L_40)->max_length)))), L_41)), L_42, NULL);
		}

IL_00e7_1:
		{
			goto IL_00fa;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e9;
		}
		throw e;
	}

CATCH_00e9:
	{
		ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1* L_43 = ((ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*)IL2CPP_GET_ACTIVE_EXCEPTION(ArrayTypeMismatchException_t95F1723A5A166E62D3FBEF9734DEFBF61594F8F1*));;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_44 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_44, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD0381A992FDF4F7DA60E5D83689FE7FF6309CB8)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_44, method);
	}

IL_00fa:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mBBBBF3106AB40DC7BF1D6B86C09C21C200725EEE_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____size;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_1 = __this->____array;
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))
		{
			goto IL_0045;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_2 = __this->____array;
		NullCheck(L_2);
		V_0 = ((int32_t)((int64_t)(((int64_t)il2cpp_codegen_multiply(((int64_t)((int32_t)(((RuntimeArray*)L_2)->max_length))), ((int64_t)((int32_t)200))))/((int64_t)((int32_t)100)))));
		int32_t L_3 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_4 = __this->____array;
		NullCheck(L_4);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 4)))))
		{
			goto IL_003e;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_5 = __this->____array;
		NullCheck(L_5);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_5)->max_length)), 4));
	}

IL_003e:
	{
		int32_t L_6 = V_0;
		Queue_1_SetCapacity_mA3ED0CEB6934E8D4C0C53DE5C744EE43BFD43C09(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
	}

IL_0045:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_7 = __this->____array;
		int32_t L_8 = __this->____tail;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_9 = ___0_item;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F)L_9);
		int32_t* L_10 = (int32_t*)(&__this->____tail);
		Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_add(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 Queue_1_GetEnumerator_m62A77F6BEE963E09A8F8BE4362E1A6269405A4F4_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m28CD1315E463A7FCDAA881A7CB04D2D7736CA4CB_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_System_Collections_IEnumerable_GetEnumerator_m4819A7B07234A738B7D48D1179FD4A58A33503B8_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Enumerator__ctor_m20B581F7750432B58D8AD1821692FDAB042049BE((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		Enumerator_t6BC5C043EF96909D25359391BB995C059080BC28 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F Queue_1_Dequeue_m552110274A89DBA744FB4799E57520216F1DC532_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* V_1 = NULL;
	InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		int32_t L_0 = __this->____head;
		V_0 = L_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_1 = __this->____array;
		V_1 = L_1;
		int32_t L_2 = __this->____size;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_001c:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		G_B3_0 = L_6;
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_7 = V_1;
		int32_t L_8 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F));
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_9 = V_2;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F)L_9);
		G_B4_0 = G_B3_0;
	}

IL_003a:
	{
		int32_t* L_10 = (int32_t*)(&__this->____head);
		Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		int32_t L_11 = __this->____size;
		__this->____size = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
		int32_t L_12 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_12, 1));
		return G_B4_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F Queue_1_Peek_m69EFCB72DE1B29231694C7CED67FAAF6CECC69B9_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
	}

IL_000e:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_1 = __this->____array;
		int32_t L_2 = __this->____head;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Queue_1_Contains_m7457B42187C4AB37BE36BEDFD5150FAEA3A388E7_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F ___0_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		int32_t L_1 = __this->____head;
		int32_t L_2 = __this->____tail;
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0037;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_3 = __this->____array;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_4 = ___0_item;
		int32_t L_5 = __this->____head;
		int32_t L_6 = __this->____size;
		int32_t L_7;
		L_7 = Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73(L_3, L_4, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0037:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_8 = __this->____array;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_9 = ___0_item;
		int32_t L_10 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_11 = __this->____array;
		NullCheck(L_11);
		int32_t L_12 = __this->____head;
		int32_t L_13;
		L_13 = Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73(L_8, L_9, L_10, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), L_12)), il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0075;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_14 = __this->____array;
		InteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F L_15 = ___0_item;
		int32_t L_16 = __this->____tail;
		int32_t L_17;
		L_17 = Array_IndexOf_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m35334ACC29B996EE0361BA5BC5738DC35CE9DA73(L_14, L_15, 0, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return (bool)((((int32_t)((((int32_t)L_17) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0075:
	{
		return (bool)1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* Queue_1_ToArray_mECDA395EE837DB974EFEF53E4A0ED49E8249D72E_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* V_0 = NULL;
	{
		int32_t L_0 = __this->____size;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_1;
		L_1 = Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_inline(il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		return L_1;
	}

IL_000e:
	{
		int32_t L_2 = __this->____size;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_3 = (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)(InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_2);
		V_0 = L_3;
		int32_t L_4 = __this->____head;
		int32_t L_5 = __this->____tail;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0043;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_6 = __this->____array;
		int32_t L_7 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_8 = V_0;
		int32_t L_9 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, L_9, NULL);
		goto IL_0087;
	}

IL_0043:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_10 = __this->____array;
		int32_t L_11 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_12 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_13 = __this->____array;
		NullCheck(L_13);
		int32_t L_14 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_10, L_11, (RuntimeArray*)L_12, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), L_14)), NULL);
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_15 = __this->____array;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_16 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_17 = __this->____array;
		NullCheck(L_17);
		int32_t L_18 = __this->____head;
		int32_t L_19 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_15, 0, (RuntimeArray*)L_16, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), L_18)), L_19, NULL);
	}

IL_0087:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_20 = V_0;
		return L_20;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_SetCapacity_mA3ED0CEB6934E8D4C0C53DE5C744EE43BFD43C09_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* V_0 = NULL;
	Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* G_B6_0 = NULL;
	Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* G_B7_1 = NULL;
	{
		int32_t L_0 = ___0_capacity;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_1 = (InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)(InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 3), (uint32_t)L_0);
		V_0 = L_1;
		int32_t L_2 = __this->____size;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_3 = __this->____head;
		int32_t L_4 = __this->____tail;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0039;
		}
	}
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_5 = __this->____array;
		int32_t L_6 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_7 = V_0;
		int32_t L_8 = __this->____size;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_5, L_6, (RuntimeArray*)L_7, 0, L_8, NULL);
		goto IL_007d;
	}

IL_0039:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_9 = __this->____array;
		int32_t L_10 = __this->____head;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_11 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_12 = __this->____array;
		NullCheck(L_12);
		int32_t L_13 = __this->____head;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, L_10, (RuntimeArray*)L_11, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_12)->max_length)), L_13)), NULL);
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_14 = __this->____array;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_15 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_16 = __this->____array;
		NullCheck(L_16);
		int32_t L_17 = __this->____head;
		int32_t L_18 = __this->____tail;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), L_17)), L_18, NULL);
	}

IL_007d:
	{
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_19 = V_0;
		__this->____array = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array), (void*)L_19);
		__this->____head = 0;
		int32_t L_20 = __this->____size;
		int32_t L_21 = ___0_capacity;
		if ((((int32_t)L_20) == ((int32_t)L_21)))
		{
			G_B6_0 = __this;
			goto IL_009d;
		}
		G_B5_0 = __this;
	}
	{
		int32_t L_22 = __this->____size;
		G_B7_0 = L_22;
		G_B7_1 = G_B5_0;
		goto IL_009e;
	}

IL_009d:
	{
		G_B7_0 = 0;
		G_B7_1 = G_B6_0;
	}

IL_009e:
	{
		NullCheck(G_B7_1);
		G_B7_1->____tail = G_B7_0;
		int32_t L_23 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_23, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_MoveNext_mE0EDF922C9A0017F191884C4AE539338934717C8_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, int32_t* ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t* L_0 = ___0_index;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		int32_t L_2 = V_0;
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_3 = __this->____array;
		NullCheck(L_3);
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		V_0 = 0;
	}

IL_0012:
	{
		int32_t* L_4 = ___0_index;
		int32_t L_5 = V_0;
		*((int32_t*)L_4) = (int32_t)L_5;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_ThrowForEmptyQueue_m34A7D9E8C1431A3A9269E1E4F8FEFAF72E543E43_gshared (Queue_1_t0F0BEF6F9203C2C3AF1DA45B19333E8D5551C67F* __this, const RuntimeMethod* method) 
{
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1102619AA6FB2A4AADBDAA47DDC096AE04C772C0)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, method);
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
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method) 
{
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		__this->____mainTreeNodeId = L_4;
		int32_t* L_5 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_5, sizeof(int32_t));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E_AdjustorThunk (RuntimeObject* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E(_thisAdjusted, ___0_tree, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		int32_t* L_8 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		__this->____index = L_9;
		int32_t L_10 = __this->____index;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_11;
		L_11 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0050:
	{
		int32_t* L_12 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_12, sizeof(int32_t));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA_AdjustorThunk (RuntimeObject* __this, RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	RBTreeEnumerator__ctor_m464484068CE1D76DCBFD781DDD4C8D310620B4DA(_thisAdjusted, ___0_tree, ___1_position, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	RBTreeEnumerator_Dispose_m50245E360872FE628842184531D36E037399CE20(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = __this->____tree;
		int32_t* L_5 = (int32_t*)(&__this->____index);
		int32_t* L_6 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_4);
		bool L_7;
		L_7 = RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE(L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_8 = __this->____tree;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		__this->____current = L_10;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_mB00AE8BACE08D31B8BBB6420BC48380D35B58173(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), &L_1);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_m51A6150BF88CB14DDE97B1EF33342869AEA55F6C(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4_gshared (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		__this->____index = 0;
		RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* L_4 = __this->____tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		int32_t* L_6 = (int32_t*)(&__this->____current);
		il2cpp_codegen_initobj(L_6, sizeof(int32_t));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115*>(__this + _offset);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m6EE5A4DE7A3C8DE01E59B4FACEE2DFD7F3FC45F4(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method) 
{
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		__this->____mainTreeNodeId = L_4;
		RuntimeObject** L_5 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_5, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700_AdjustorThunk (RuntimeObject* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator__ctor_m328625AEF6FC9DE908D967C4537628D1B2B61700(_thisAdjusted, ___0_tree, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_0 = ___0_tree;
		__this->____tree = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tree), (void*)L_0);
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		__this->____version = L_2;
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		int32_t* L_8 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = RBTree_1_ComputeNodeByIndex_m6A133AF17BE38F8B527CD83716760BF90D624007(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), L_8, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		__this->____index = L_9;
		int32_t L_10 = __this->____index;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_11;
		L_11 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, method);
	}

IL_0050:
	{
		RuntimeObject** L_12 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_12, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D_AdjustorThunk (RuntimeObject* __this, RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator__ctor_m6E21AC6C4E86A24D602CD91F46425928C4ADF82D(_thisAdjusted, ___0_tree, ___1_position, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator_Dispose_m1E08AEE7388530D346B9193B730D8B03273BF2A6(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = __this->____tree;
		int32_t* L_5 = (int32_t*)(&__this->____index);
		int32_t* L_6 = (int32_t*)(&__this->____mainTreeNodeId);
		NullCheck(L_4);
		bool L_7;
		L_7 = RBTree_1_Successor_m89C5DC61DF69FB7B614F570A01A91F8D4555D74A(L_4, L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_8 = __this->____tree;
		int32_t L_9 = __this->____index;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = RBTree_1_Key_m44FD36D6E9B9BBF993102D058D5FA268861802CE(L_8, L_9, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		__this->____current = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____current), (void*)L_10);
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_m76DBA6D87BDD9AE92D0E1B8AA83CBCA809AF2C5E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_inline(__this, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mE3D8BAC55EE728E4B5EC5C2CA70730160709EB5A(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_gshared (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____version;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_1 = __this->____tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		__this->____index = 0;
		RBTree_1_tAC9E374B8EB24E3B4F23E6597A887D825D581669* L_4 = __this->____tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		__this->____mainTreeNodeId = L_5;
		RuntimeObject** L_6 = (RuntimeObject**)(&__this->____current);
		il2cpp_codegen_initobj(L_6, sizeof(RuntimeObject*));
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A*>(__this + _offset);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m9B4501D17EEC9E2B952126A9678DEEB960C8CA50(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_instance_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_2);
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_3 = ___0_tree;
		NullCheck(L_3);
		int32_t L_4 = L_3->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_4);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB_AdjustorThunk (RuntimeObject* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator__ctor_m4F958B5E04B28EDEA0C7B8FB8E7CF4ED0739BBEB(_thisAdjusted, ___0_tree, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_0 = ___0_tree;
		il2cpp_codegen_write_instance_field_data<RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0), L_0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = ___0_tree;
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1), L_2);
		int32_t L_3 = ___1_position;
		if (L_3)
		{
			goto IL_002b;
		}
	}
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = ___0_tree;
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_5);
		goto IL_0050;
	}

IL_002b:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = ___0_tree;
		int32_t L_7 = ___1_position;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ((  int32_t (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, ((int32_t)il2cpp_codegen_subtract(L_7, 1)), (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), L_8);
		int32_t L_9 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		if (L_9)
		{
			goto IL_0050;
		}
	}
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0050:
	{
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C_AdjustorThunk (RuntimeObject* __this, RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* ___0_tree, int32_t ___1_position, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator__ctor_mC7027B6747A32BD6A978E0DA6DE74FA6DB6AEA5C(_thisAdjusted, ___0_tree, ___1_position, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_Dispose_m44368C76E9C0F3A17DB3342C808CA8F9582C5955(_thisAdjusted, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_4);
		bool L_5;
		L_5 = ((  bool (*) (RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_4, (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2)))), (((int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)))), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_6 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		int32_t L_7 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2));
		NullCheck(L_6);
		InvokerActionInvoker2< int32_t, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_6, L_7, (Il2CppFullySharedGenericAny*)L_8);
		il2cpp_codegen_write_instance_field_data(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4), L_8, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	bool _returnValue;
	_returnValue = RBTreeEnumerator_MoveNext_mB5562C7DBD432B39AC6CDE17139006D3141A2E7E(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_inline(_thisAdjusted, il2cppRetVal, method);
	return;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6), __this, (Il2CppFullySharedGenericAny*)L_0);
		RuntimeObject* L_1 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2), L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = RBTreeEnumerator_System_Collections_IEnumerator_get_Current_mD023E34D3906399CCC1A8E8AB645C5C9810898FB(_thisAdjusted, method);
	return _returnValue;
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_gshared (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	{
		int32_t L_0 = *(int32_t*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),1));
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_1 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_1);
		int32_t L_2 = L_1->____version;
		if ((((int32_t)L_0) == ((int32_t)L_2)))
		{
			goto IL_0019;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_EnumeratorModified_m8343A0E4D50C5143F6A15F0D562AB7838A3A96D1(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_0019:
	{
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),2), 0);
		RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56* L_4 = *(RBTree_1_t09C68EFC34FF48F9CAFF6208FB96D1C35CFCDA56**)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		NullCheck(L_4);
		int32_t L_5 = L_4->___root;
		il2cpp_codegen_write_instance_field_data<int32_t>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),3), L_5);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)))), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_EXTERN_C  void RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4*>(__this + _offset);
	RBTreeEnumerator_System_Collections_IEnumerator_Reset_m30C1ACC2356659BDDEC767619AA0D8B5EA06E470(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1__ctor_m94D0C9F06C7211AEA1E7596028FE173C1C787497_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_accessMethod, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___0_accessMethod;
		__this->____accessMethod = L_0;
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___root = 0;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)32));
		__this->____pageTable = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_0);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		NullCheck(L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_1)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		__this->____pageTableMap = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_2);
		__this->____inUsePageCount = 0;
		__this->____nextFreePageLine = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3;
		L_3 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_4 = __this->____pageTable;
		NullCheck(L_4);
		int32_t L_5 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_7 = L_6->____slots;
		NullCheck(L_7);
		((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->____nodeColor = (int32_t)1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_8 = __this->____pageTable;
		NullCheck(L_8);
		int32_t L_9 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = L_10->____slotMap;
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_12 = __this->____pageTable;
		NullCheck(L_12);
		int32_t L_13 = 0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_14, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		__this->____inUseNodeCount = 1;
		__this->____inUseSatelliteTreeCount = 0;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_0 = ___0_page;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_1 = __this->____pageTable;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_2 = ___0_page;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, NULL);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL);
		int32_t L_4 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_subtract(L_4, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_0;
		int32_t L_4 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_5, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_5);
		int32_t L_6 = V_0;
		__this->____nextFreePageLine = ((int32_t)(L_6/((int32_t)32)));
		goto IL_00a9;
	}

IL_0029:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_7 = __this->____pageTable;
		NullCheck(L_7);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_8 = (TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)(TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (uint32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_7)->max_length)), 2)));
		V_1 = L_8;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_9 = __this->____pageTable;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_10 = V_1;
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = __this->____pageTable;
		NullCheck(L_11);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_9, 0, (RuntimeArray*)L_10, 0, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_12 = V_1;
		NullCheck(L_12);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_12)->max_length)), ((int32_t)32))), 1))/((int32_t)32))));
		V_2 = L_13;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____pageTableMap;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_15 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_16 = __this->____pageTableMap;
		NullCheck(L_16);
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_14, 0, (RuntimeArray*)L_15, 0, ((int32_t)(((RuntimeArray*)L_16)->max_length)), NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_17 = __this->____pageTableMap;
		NullCheck(L_17);
		__this->____nextFreePageLine = ((int32_t)(((RuntimeArray*)L_17)->max_length));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_18 = __this->____pageTable;
		NullCheck(L_18);
		V_0 = ((int32_t)(((RuntimeArray*)L_18)->max_length));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_19 = V_1;
		__this->____pageTable = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTable), (void*)L_19);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = V_2;
		__this->____pageTableMap = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageTableMap), (void*)L_20);
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_21 = __this->____pageTable;
		int32_t L_22 = V_0;
		int32_t L_23 = ___0_size;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 5));
		TreePage__ctor_m44F8EC22FAAB8146AC4E2D6E299F6A122DE40C83(L_24, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)L_24);
	}

IL_00a9:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_25 = __this->____pageTable;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_0;
		NullCheck(L_28);
		TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_inline(L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 14));
		int32_t L_30 = __this->____inUsePageCount;
		__this->____inUsePageCount = ((int32_t)il2cpp_codegen_add(L_30, 1));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_31 = __this->____pageTable;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		return L_34;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFull_mC50FFD42DDEC1D8C70AB4B76EA8E765F43D1A138_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4|((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* ___0_page, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->____pageTableMap;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_1 = ___0_page;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		NullCheck(L_0);
		int32_t* L_3 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_2/((int32_t)32))))));
		int32_t L_4 = *((int32_t*)L_3);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = ___0_page;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		*((int32_t*)L_3) = (int32_t)((int32_t)(L_4&((~((int32_t)(1<<((int32_t)(((int32_t)(L_6%((int32_t)32)))&((int32_t)31)))))))));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56_gshared (uint32_t ___0_bitMap, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		uint32_t L_0 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_0&((int32_t)-65536))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)16)));
		uint32_t L_2 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_2>>((int32_t)16)));
	}

IL_0016:
	{
		uint32_t L_3 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_3&((int32_t)65280))))
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 8));
		uint32_t L_5 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_5>>8));
	}

IL_0028:
	{
		uint32_t L_6 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_6&((int32_t)240))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_7, 4));
		uint32_t L_8 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_8>>4));
	}

IL_003a:
	{
		uint32_t L_9 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_9&((int32_t)12))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 2));
		uint32_t L_11 = ___0_bitMap;
		___0_bitMap = (uint32_t)((int32_t)((uint32_t)L_11>>2));
	}

IL_0049:
	{
		uint32_t L_12 = ___0_bitMap;
		if (!((int32_t)((int32_t)L_12&2)))
		{
			goto IL_0052;
		}
	}
	{
		int32_t L_13 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0052:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		int32_t L_4 = ___0_nodeId;
		V_1 = ((int32_t)(L_4&((int32_t)65535)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = V_0;
		NullCheck(L_5);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_6 = L_5->____slots;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_initobj(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), sizeof(Node_tA8F7ED85FD786FE388B1ED3CF8DDFEDC56587258));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_8 = V_0;
		NullCheck(L_8);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = L_8->____slotMap;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t* L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/((int32_t)32))))));
		int32_t L_12 = *((int32_t*)L_11);
		int32_t L_13 = V_1;
		*((int32_t*)L_11) = (int32_t)((int32_t)(L_12&((~((int32_t)(1<<((int32_t)(((int32_t)(L_13%((int32_t)32)))&((int32_t)31)))))))));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = V_0;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		V_2 = L_16;
		int32_t L_17 = V_2;
		NullCheck(L_15);
		TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_inline(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 9));
		int32_t L_18 = __this->____inUseNodeCount;
		__this->____inUseNodeCount = ((int32_t)il2cpp_codegen_subtract(L_18, 1));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		if (L_20)
		{
			goto IL_0071;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		RBTree_1_FreePage_m428135A97F5257D955C88324EEC40540887A061C(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 16));
		return;
	}

IL_0071:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_22 = V_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_inline(L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 15));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_25 = L_24->____slots;
		NullCheck(L_25);
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 1))))))
		{
			goto IL_008a;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_26 = V_0;
		RBTree_1_MarkPageFree_mDFB2F31CD9B41FEAC6E15E8798687212440448EB(__this, L_26, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
	}

IL_008a:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, bool ___0_allocatedPage, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	uint32_t V_2 = 0;
	uint32_t V_3 = 0;
	{
		int32_t L_0 = __this->____nextFreePageLine;
		V_0 = L_0;
		V_1 = (-1);
		goto IL_0073;
	}

IL_000b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____pageTableMap;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int32_t L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint32_t)L_4) < ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____pageTableMap;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		int32_t L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = (uint32_t)L_8;
		goto IL_006a;
	}

IL_0021:
	{
		uint32_t L_9 = V_2;
		uint32_t L_10 = V_2;
		V_3 = (uint32_t)((int32_t)(((~((int32_t)L_9)))&((int32_t)il2cpp_codegen_add((int32_t)L_10, 1))));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = __this->____pageTableMap;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		int32_t L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		uint32_t L_15 = V_3;
		if (!((int64_t)(((int64_t)L_14)&((int64_t)(uint64_t)L_15))))
		{
			goto IL_003d;
		}
	}
	{
		Exception_t* L_16;
		L_16 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)3, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, method);
	}

IL_003d:
	{
		int32_t L_17 = V_0;
		uint32_t L_18 = V_3;
		int32_t L_19;
		L_19 = RBTree_1_GetIntValueFromBitMap_m48B51C8E9FEE3BC3018EEABB1B7171C27550AF56(L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		V_1 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_17, ((int32_t)32))), L_19));
		bool L_20 = ___0_allocatedPage;
		if (!L_20)
		{
			goto IL_0058;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_21 = __this->____pageTable;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		if (!L_24)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_25 = V_1;
		return L_25;
	}

IL_0058:
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_26 = __this->____pageTable;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (L_29)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_30 = V_1;
		return L_30;
	}

IL_0064:
	{
		V_1 = (-1);
		uint32_t L_31 = V_2;
		uint32_t L_32 = V_3;
		V_2 = (uint32_t)((int32_t)((int32_t)L_31|(int32_t)L_32));
	}

IL_006a:
	{
		uint32_t L_33 = V_2;
		if (((int32_t)((int32_t)L_33^(-1))))
		{
			goto IL_0021;
		}
	}

IL_006f:
	{
		int32_t L_34 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_0073:
	{
		int32_t L_35 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____pageTableMap;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_000b;
		}
	}
	{
		int32_t L_37 = __this->____nextFreePageLine;
		if (!L_37)
		{
			goto IL_0095;
		}
	}
	{
		__this->____nextFreePageLine = 0;
		bool L_38 = ___0_allocatedPage;
		int32_t L_39;
		L_39 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_39;
	}

IL_0095:
	{
		int32_t L_40 = V_1;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseNodeCount;
		return ((int32_t)il2cpp_codegen_subtract(L_0, 1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_get_HasDuplicates_m4F156E4EE63FDA1D6F9A8FC9E85FDCEA272E3F72_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7*)NULL;
		int32_t L_0;
		L_0 = RBTree_1_GetIndexOfPageWithFreeSlot_m44B83E5017AC18424A1CABBB5B69F4334BCACABA(__this, (bool)1, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		V_1 = L_0;
		int32_t L_1 = V_1;
		if ((((int32_t)L_1) == ((int32_t)(-1))))
		{
			goto IL_001c;
		}
	}
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_2 = __this->____pageTable;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_0 = L_5;
		goto IL_00a5;
	}

IL_001c:
	{
		int32_t L_6 = __this->____inUsePageCount;
		if ((((int32_t)L_6) >= ((int32_t)4)))
		{
			goto IL_0030;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_7;
		L_7 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)32), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_7;
		goto IL_00a5;
	}

IL_0030:
	{
		int32_t L_8 = __this->____inUsePageCount;
		if ((((int32_t)L_8) >= ((int32_t)((int32_t)32))))
		{
			goto IL_0048;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_9;
		L_9 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)256), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_9;
		goto IL_00a5;
	}

IL_0048:
	{
		int32_t L_10 = __this->____inUsePageCount;
		if ((((int32_t)L_10) >= ((int32_t)((int32_t)128))))
		{
			goto IL_0063;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_11;
		L_11 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)1024), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_11;
		goto IL_00a5;
	}

IL_0063:
	{
		int32_t L_12 = __this->____inUsePageCount;
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)4096))))
		{
			goto IL_007e;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_13;
		L_13 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)4096), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_13;
		goto IL_00a5;
	}

IL_007e:
	{
		int32_t L_14 = __this->____inUsePageCount;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)32768))))
		{
			goto IL_0099;
		}
	}
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_15;
		L_15 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)8192), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_15;
		goto IL_00a5;
	}

IL_0099:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_16;
		L_16 = RBTree_1_AllocPage_mB813A6A6F957374D0852A5861110677BBCA3A7BA(__this, ((int32_t)65536), il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_0 = L_16;
	}

IL_00a5:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = TreePage_AllocSlot_m98CE7C69F3225831EDC1F758AC133AFDBD631329(L_17, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		V_2 = L_18;
		int32_t L_19 = V_2;
		if ((!(((uint32_t)L_19) == ((uint32_t)(-1)))))
		{
			goto IL_00b8;
		}
	}
	{
		Exception_t* L_20;
		L_20 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, method);
	}

IL_00b8:
	{
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_21 = V_0;
		NullCheck(L_21);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_22 = L_21->____slots;
		int32_t L_23 = V_2;
		NullCheck(L_22);
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_24 = V_0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_inline(L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		int32_t L_26 = V_2;
		((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->____selfId = ((int32_t)(((int32_t)(L_25<<((int32_t)16)))|L_26));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_27 = V_0;
		NullCheck(L_27);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_28 = L_27->____slots;
		int32_t L_29 = V_2;
		NullCheck(L_28);
		((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->____subTreeSize = 1;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_30 = V_0;
		NullCheck(L_30);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_31 = L_30->____slots;
		int32_t L_32 = V_2;
		NullCheck(L_31);
		int32_t L_33 = ___0_key;
		((L_31)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->____keyOfNode = L_33;
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_34 = V_0;
		NullCheck(L_34);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_35 = L_34->____slots;
		int32_t L_36 = V_2;
		NullCheck(L_35);
		int32_t L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->____selfId;
		return L_37;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_4;
		L_4 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		return L_4;
	}

IL_0017:
	{
		int32_t L_5 = ___0_x_id;
		int32_t L_6;
		L_6 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_6;
		goto IL_002c;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		___0_x_id = L_7;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_0 = L_9;
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		if (!L_10)
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_11 = ___0_x_id;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((((int32_t)L_11) == ((int32_t)L_13)))
		{
			goto IL_0021;
		}
	}

IL_0039:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RBTree_1_Successor_mBE6CC011CC22FE54A564CB8AE8247BC43146D3EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t* ___0_nodeId, int32_t* ___1_mainTreeNodeId, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_nodeId;
		int32_t L_1 = *((int32_t*)L_0);
		if (L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t* L_2 = ___0_nodeId;
		int32_t* L_3 = ___1_mainTreeNodeId;
		int32_t L_4 = *((int32_t*)L_3);
		int32_t L_5;
		L_5 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_2) = (int32_t)L_5;
		int32_t* L_6 = ___1_mainTreeNodeId;
		*((int32_t*)L_6) = (int32_t)0;
		goto IL_0032;
	}

IL_0013:
	{
		int32_t* L_7 = ___0_nodeId;
		int32_t* L_8 = ___0_nodeId;
		int32_t L_9 = *((int32_t*)L_8);
		int32_t L_10;
		L_10 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_7) = (int32_t)L_10;
		int32_t* L_11 = ___0_nodeId;
		int32_t L_12 = *((int32_t*)L_11);
		if (L_12)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_13 = ___1_mainTreeNodeId;
		int32_t L_14 = *((int32_t*)L_13);
		if (!L_14)
		{
			goto IL_0032;
		}
	}
	{
		int32_t* L_15 = ___0_nodeId;
		int32_t* L_16 = ___1_mainTreeNodeId;
		int32_t L_17 = *((int32_t*)L_16);
		int32_t L_18;
		L_18 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		*((int32_t*)L_15) = (int32_t)L_18;
		int32_t* L_19 = ___1_mainTreeNodeId;
		*((int32_t*)L_19) = (int32_t)0;
	}

IL_0032:
	{
		int32_t* L_20 = ___0_nodeId;
		int32_t L_21 = *((int32_t*)L_20);
		if (!L_21)
		{
			goto IL_0062;
		}
	}
	{
		int32_t* L_22 = ___0_nodeId;
		int32_t L_23 = *((int32_t*)L_22);
		int32_t L_24;
		L_24 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_24)
		{
			goto IL_0060;
		}
	}
	{
		int32_t* L_25 = ___1_mainTreeNodeId;
		int32_t L_26 = *((int32_t*)L_25);
		if (!L_26)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t* L_27;
		L_27 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)21), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_27, method);
	}

IL_004c:
	{
		int32_t* L_28 = ___1_mainTreeNodeId;
		int32_t* L_29 = ___0_nodeId;
		int32_t L_30 = *((int32_t*)L_29);
		*((int32_t*)L_28) = (int32_t)L_30;
		int32_t* L_31 = ___0_nodeId;
		int32_t* L_32 = ___0_nodeId;
		int32_t L_33 = *((int32_t*)L_32);
		int32_t L_34;
		L_34 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_35;
		L_35 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		*((int32_t*)L_31) = (int32_t)L_35;
	}

IL_0060:
	{
		return (bool)1;
	}

IL_0062:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, const RuntimeMethod* method) 
{
	{
		goto IL_000b;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		___0_x_id = L_1;
	}

IL_000b:
	{
		int32_t L_2 = ___0_x_id;
		int32_t L_3;
		L_3 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_3)
		{
			goto IL_0002;
		}
	}
	{
		int32_t L_4 = ___0_x_id;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNode, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B12_0 = 0;
	int32_t G_B12_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B12_2 = NULL;
	int32_t G_B11_0 = 0;
	int32_t G_B11_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B11_2 = NULL;
	int32_t G_B13_0 = 0;
	int32_t G_B13_1 = 0;
	int32_t G_B13_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B13_3 = NULL;
	int32_t G_B17_0 = 0;
	int32_t G_B17_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B17_2 = NULL;
	int32_t G_B16_0 = 0;
	int32_t G_B16_1 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B16_2 = NULL;
	int32_t G_B18_0 = 0;
	int32_t G_B18_1 = 0;
	int32_t G_B18_2 = 0;
	RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* G_B18_3 = NULL;
	{
		int32_t L_0 = ___1_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = ___1_x_id;
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_2, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_9 = ___1_x_id;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_002d:
	{
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_10, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_13 = ___1_x_id;
		int32_t L_14;
		L_14 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_14)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_15 = ___0_root_id;
		if (L_15)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_16 = V_0;
		__this->___root = L_16;
		goto IL_0099;
	}

IL_0050:
	{
		int32_t L_17 = ___2_mainTreeNode;
		int32_t L_18 = V_0;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_19 = ___2_mainTreeNode;
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_19, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_22 = V_0;
		___0_root_id = L_22;
		goto IL_0099;
	}

IL_006b:
	{
		int32_t L_23 = ___1_x_id;
		int32_t L_24 = ___1_x_id;
		int32_t L_25;
		L_25 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_26;
		L_26 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_25, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_23) == ((uint32_t)L_26))))
		{
			goto IL_008b;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_28, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0099;
	}

IL_008b:
	{
		int32_t L_30 = ___1_x_id;
		int32_t L_31;
		L_31 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_32 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_31, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0099:
	{
		int32_t L_33 = V_0;
		int32_t L_34 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_33, L_34, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_35 = ___1_x_id;
		int32_t L_36 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_35, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_37 = ___1_x_id;
		if (!L_37)
		{
			goto IL_00e8;
		}
	}
	{
		int32_t L_38 = ___1_x_id;
		int32_t L_39 = ___1_x_id;
		int32_t L_40;
		L_40 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_41;
		L_41 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_42 = ___1_x_id;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_45 = ___1_x_id;
		int32_t L_46;
		L_46 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_46)
		{
			G_B12_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
			G_B12_1 = L_38;
			G_B12_2 = __this;
			goto IL_00e1;
		}
		G_B11_0 = ((int32_t)il2cpp_codegen_add(L_41, L_44));
		G_B11_1 = L_38;
		G_B11_2 = __this;
	}
	{
		int32_t L_47 = ___1_x_id;
		int32_t L_48;
		L_48 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_47, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_49;
		L_49 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B13_0 = L_49;
		G_B13_1 = G_B11_0;
		G_B13_2 = G_B11_1;
		G_B13_3 = G_B11_2;
		goto IL_00e2;
	}

IL_00e1:
	{
		G_B13_0 = 1;
		G_B13_1 = G_B12_0;
		G_B13_2 = G_B12_1;
		G_B13_3 = G_B12_2;
	}

IL_00e2:
	{
		NullCheck(G_B13_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B13_3, G_B13_2, ((int32_t)il2cpp_codegen_add(G_B13_1, G_B13_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_00e8:
	{
		int32_t L_50 = V_0;
		if (!L_50)
		{
			goto IL_0127;
		}
	}
	{
		int32_t L_51 = V_0;
		int32_t L_52 = V_0;
		int32_t L_53;
		L_53 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_54;
		L_54 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_55 = V_0;
		int32_t L_56;
		L_56 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_57;
		L_57 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_58 = V_0;
		int32_t L_59;
		L_59 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_59)
		{
			G_B17_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
			G_B17_1 = L_51;
			G_B17_2 = __this;
			goto IL_0120;
		}
		G_B16_0 = ((int32_t)il2cpp_codegen_add(L_54, L_57));
		G_B16_1 = L_51;
		G_B16_2 = __this;
	}
	{
		int32_t L_60 = V_0;
		int32_t L_61;
		L_61 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_62;
		L_62 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_61, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B18_0 = L_62;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_0121;
	}

IL_0120:
	{
		G_B18_0 = 1;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_0121:
	{
		NullCheck(G_B18_3);
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(G_B18_3, G_B18_2, ((int32_t)il2cpp_codegen_add(G_B18_1, G_B18_0)), il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_0127:
	{
		int32_t L_63 = ___0_root_id;
		return L_63;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_mainTreeNodeID, int32_t ___3_position, bool ___4_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B49_0 = 0;
	int32_t G_B54_0 = 0;
	{
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		V_0 = 0;
		int32_t L_1 = ___0_root_id;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___0_root_id;
		G_B3_0 = L_2;
		goto IL_001c;
	}

IL_0016:
	{
		int32_t L_3 = __this->___root;
		G_B3_0 = L_3;
	}

IL_001c:
	{
		V_1 = G_B3_0;
		int32_t L_4 = __this->____accessMethod;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_01f8;
		}
	}
	{
		bool L_5 = ___4_append;
		if (L_5)
		{
			goto IL_01f8;
		}
	}
	{
		goto IL_01f0;
	}

IL_0035:
	{
		int32_t L_6 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = ___0_root_id;
		if (!L_8)
		{
			goto IL_0057;
		}
	}
	{
		int32_t L_9 = ___1_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_11 = V_1;
		int32_t L_12;
		L_12 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_13;
		L_13 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_10, L_12);
		G_B9_0 = L_13;
		goto IL_006b;
	}

IL_0057:
	{
		int32_t L_14 = ___1_x_id;
		int32_t L_15;
		L_15 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_18;
		L_18 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_15, L_17);
		G_B9_0 = L_18;
	}

IL_006b:
	{
		V_2 = G_B9_0;
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)0)))
		{
			goto IL_007d;
		}
	}
	{
		int32_t L_20 = V_1;
		int32_t L_21;
		L_21 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_21;
		goto IL_01f0;
	}

IL_007d:
	{
		int32_t L_22 = V_2;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_008e;
		}
	}
	{
		int32_t L_23 = V_1;
		int32_t L_24;
		L_24 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_23, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_24;
		goto IL_01f0;
	}

IL_008e:
	{
		int32_t L_25 = ___0_root_id;
		if (!L_25)
		{
			goto IL_0098;
		}
	}
	{
		Exception_t* L_26;
		L_26 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, method);
	}

IL_0098:
	{
		int32_t L_27 = V_1;
		int32_t L_28;
		L_28 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_28)
		{
			goto IL_00cd;
		}
	}
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_31 = ___1_x_id;
		int32_t L_32 = V_1;
		int32_t L_33;
		L_33 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_30, L_31, L_32, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_33;
		int32_t L_34 = V_1;
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_37;
		L_37 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_34, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		goto IL_01ee;
	}

IL_00cd:
	{
		V_3 = 0;
		int32_t L_38 = V_1;
		int32_t L_39;
		L_39 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_38, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_40;
		L_40 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_3 = L_40;
		int32_t L_41 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_add(L_41, 1));
		int32_t L_42 = V_3;
		int32_t L_43 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_42, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_44 = V_3;
		int32_t L_45 = V_1;
		int32_t L_46;
		L_46 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_44, L_46, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_3;
		int32_t L_48 = V_1;
		int32_t L_49;
		L_49 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_47, L_49, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_50 = V_3;
		int32_t L_51 = V_1;
		int32_t L_52;
		L_52 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_51, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_50, L_52, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_53 = V_3;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_56 = V_1;
		int32_t L_57;
		L_57 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_58;
		L_58 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_59 = V_1;
		if ((!(((uint32_t)L_58) == ((uint32_t)L_59))))
		{
			goto IL_014b;
		}
	}
	{
		int32_t L_60 = V_1;
		int32_t L_61;
		L_61 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_62 = V_3;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_61, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0169;
	}

IL_014b:
	{
		int32_t L_63 = V_1;
		int32_t L_64;
		L_64 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_63, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_65;
		L_65 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_64, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_66 = V_1;
		if ((!(((uint32_t)L_65) == ((uint32_t)L_66))))
		{
			goto IL_0169;
		}
	}
	{
		int32_t L_67 = V_1;
		int32_t L_68;
		L_68 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_69 = V_3;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_68, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_0169:
	{
		int32_t L_70 = V_1;
		int32_t L_71;
		L_71 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_71)
		{
			goto IL_0180;
		}
	}
	{
		int32_t L_72 = V_1;
		int32_t L_73;
		L_73 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_74 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_73, L_74, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0180:
	{
		int32_t L_75 = V_1;
		int32_t L_76;
		L_76 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_76)
		{
			goto IL_0197;
		}
	}
	{
		int32_t L_77 = V_1;
		int32_t L_78;
		L_78 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_77, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_79 = V_3;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_78, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0197:
	{
		int32_t L_80 = __this->___root;
		int32_t L_81 = V_1;
		if ((!(((uint32_t)L_80) == ((uint32_t)L_81))))
		{
			goto IL_01a7;
		}
	}
	{
		int32_t L_82 = V_3;
		__this->___root = L_82;
	}

IL_01a7:
	{
		int32_t L_83 = V_1;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_83, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_84 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_84, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_85 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_85, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_86 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_86, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_87 = V_1;
		int32_t L_88;
		L_88 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_4 = L_88;
		int32_t L_89 = V_1;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_89, 1, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_90 = V_1;
		int32_t L_91 = ___1_x_id;
		int32_t L_92 = V_3;
		int32_t L_93;
		L_93 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, L_90, L_91, L_92, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		___0_root_id = L_93;
		int32_t L_94 = V_3;
		int32_t L_95 = V_4;
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_94, L_95, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
	}

IL_01ee:
	{
		int32_t L_96 = ___0_root_id;
		return L_96;
	}

IL_01f0:
	{
		int32_t L_97 = V_1;
		if (L_97)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_0263;
	}

IL_01f8:
	{
		int32_t L_98 = __this->____accessMethod;
		bool L_99 = ___4_append;
		if (!((int32_t)(((((int32_t)L_98) == ((int32_t)2))? 1 : 0)|(int32_t)L_99)))
		{
			goto IL_025b;
		}
	}
	{
		int32_t L_100 = ___3_position;
		if ((!(((uint32_t)L_100) == ((uint32_t)(-1)))))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_101 = __this->___root;
		int32_t L_102;
		L_102 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_101, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___3_position = L_102;
		goto IL_0256;
	}

IL_021b:
	{
		int32_t L_103 = V_1;
		RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 35));
		int32_t L_104 = V_1;
		V_0 = L_104;
		int32_t L_105 = ___3_position;
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_105, L_108));
		int32_t L_109 = V_5;
		if ((((int32_t)L_109) > ((int32_t)0)))
		{
			goto IL_0245;
		}
	}
	{
		int32_t L_110 = V_1;
		int32_t L_111;
		L_111 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_1 = L_111;
		goto IL_0256;
	}

IL_0245:
	{
		int32_t L_112 = V_1;
		int32_t L_113;
		L_113 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_112, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_1 = L_113;
		int32_t L_114 = V_1;
		if (!L_114)
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_115 = V_5;
		___3_position = ((int32_t)il2cpp_codegen_subtract(L_115, 1));
	}

IL_0256:
	{
		int32_t L_116 = V_1;
		if (L_116)
		{
			goto IL_021b;
		}
	}
	{
		goto IL_0263;
	}

IL_025b:
	{
		Exception_t* L_117;
		L_117 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)15), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_117, method);
	}

IL_0263:
	{
		int32_t L_118 = ___1_x_id;
		int32_t L_119 = V_0;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_118, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_120 = V_0;
		if (L_120)
		{
			goto IL_0298;
		}
	}
	{
		int32_t L_121 = ___0_root_id;
		if (L_121)
		{
			goto IL_027d;
		}
	}
	{
		int32_t L_122 = ___1_x_id;
		__this->___root = L_122;
		goto IL_030a;
	}

IL_027d:
	{
		int32_t L_123 = ___2_mainTreeNodeID;
		int32_t L_124 = ___1_x_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_125 = ___2_mainTreeNodeID;
		int32_t L_126 = ___1_x_id;
		int32_t L_127;
		L_127 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_126, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_125, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_128 = ___1_x_id;
		___0_root_id = L_128;
		goto IL_030a;
	}

IL_0298:
	{
		V_6 = 0;
		int32_t L_129 = __this->____accessMethod;
		if ((!(((uint32_t)L_129) == ((uint32_t)1))))
		{
			goto IL_02d5;
		}
	}
	{
		int32_t L_130 = ___0_root_id;
		if (!L_130)
		{
			goto IL_02bd;
		}
	}
	{
		int32_t L_131 = ___1_x_id;
		int32_t L_132;
		L_132 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_133 = V_0;
		int32_t L_134;
		L_134 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_133, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_135;
		L_135 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_132, L_134);
		G_B49_0 = L_135;
		goto IL_02d1;
	}

IL_02bd:
	{
		int32_t L_136 = ___1_x_id;
		int32_t L_137;
		L_137 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_136, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_138 = V_0;
		int32_t L_139;
		L_139 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_140;
		L_140 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_137, L_139);
		G_B49_0 = L_140;
	}

IL_02d1:
	{
		V_6 = G_B49_0;
		goto IL_02f3;
	}

IL_02d5:
	{
		int32_t L_141 = __this->____accessMethod;
		if ((!(((uint32_t)L_141) == ((uint32_t)2))))
		{
			goto IL_02eb;
		}
	}
	{
		int32_t L_142 = ___3_position;
		if ((((int32_t)L_142) <= ((int32_t)0)))
		{
			goto IL_02e6;
		}
	}
	{
		G_B54_0 = 1;
		goto IL_02e7;
	}

IL_02e6:
	{
		G_B54_0 = (-1);
	}

IL_02e7:
	{
		V_6 = G_B54_0;
		goto IL_02f3;
	}

IL_02eb:
	{
		Exception_t* L_143;
		L_143 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)16), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_143, method);
	}

IL_02f3:
	{
		int32_t L_144 = V_6;
		if ((((int32_t)L_144) >= ((int32_t)0)))
		{
			goto IL_0302;
		}
	}
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_145, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_030a;
	}

IL_0302:
	{
		int32_t L_147 = V_0;
		int32_t L_148 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_147, L_148, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_030a:
	{
		int32_t L_149 = ___1_x_id;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_149, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_150 = ___1_x_id;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_150, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_151 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_151, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_152 = ___1_x_id;
		V_1 = L_152;
		goto IL_04ba;
	}

IL_0329:
	{
		int32_t L_153 = ___1_x_id;
		int32_t L_154;
		L_154 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_155 = ___1_x_id;
		int32_t L_156;
		L_156 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_157;
		L_157 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_156, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_158;
		L_158 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_154) == ((uint32_t)L_158))))
		{
			goto IL_0405;
		}
	}
	{
		int32_t L_159 = ___1_x_id;
		int32_t L_160;
		L_160 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_159, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_161;
		L_161 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_162;
		L_162 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_162;
		int32_t L_163 = V_0;
		int32_t L_164;
		L_164 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_164)
		{
			goto IL_03a3;
		}
	}
	{
		int32_t L_165 = ___1_x_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_167, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_168 = ___1_x_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_170;
		L_170 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_170, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_171 = ___1_x_id;
		int32_t L_172;
		L_172 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_173;
		L_173 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_172, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_173;
		goto IL_04ba;
	}

IL_03a3:
	{
		int32_t L_174 = ___1_x_id;
		int32_t L_175 = ___1_x_id;
		int32_t L_176;
		L_176 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_175, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_177;
		L_177 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_174) == ((uint32_t)L_177))))
		{
			goto IL_03c7;
		}
	}
	{
		int32_t L_178 = ___1_x_id;
		int32_t L_179;
		L_179 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_178, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_179;
		int32_t L_180 = ___0_root_id;
		int32_t L_181 = ___1_x_id;
		int32_t L_182 = ___2_mainTreeNodeID;
		int32_t L_183;
		L_183 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_180, L_181, L_182, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_183;
	}

IL_03c7:
	{
		int32_t L_184 = ___1_x_id;
		int32_t L_185;
		L_185 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_184, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_185, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_186 = ___1_x_id;
		int32_t L_187;
		L_187 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_188;
		L_188 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_187, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_188, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_189 = ___0_root_id;
		int32_t L_190 = ___1_x_id;
		int32_t L_191;
		L_191 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_192;
		L_192 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_191, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_193 = ___2_mainTreeNodeID;
		int32_t L_194;
		L_194 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_189, L_192, L_193, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_194;
		goto IL_04ba;
	}

IL_0405:
	{
		int32_t L_195 = ___1_x_id;
		int32_t L_196;
		L_196 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_195, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_197;
		L_197 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_196, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_198;
		L_198 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_197, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_198;
		int32_t L_199 = V_0;
		int32_t L_200;
		L_200 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_199, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_200)
		{
			goto IL_045d;
		}
	}
	{
		int32_t L_201 = ___1_x_id;
		int32_t L_202;
		L_202 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_201, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_202, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_203 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_203, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_204 = ___1_x_id;
		int32_t L_205;
		L_205 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_204, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_206;
		L_206 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_205, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_206, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_207 = ___1_x_id;
		int32_t L_208;
		L_208 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_207, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_209;
		L_209 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_208, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_209;
		goto IL_04ba;
	}

IL_045d:
	{
		int32_t L_210 = ___1_x_id;
		int32_t L_211 = ___1_x_id;
		int32_t L_212;
		L_212 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_211, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_213;
		L_213 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_212, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_210) == ((uint32_t)L_213))))
		{
			goto IL_0481;
		}
	}
	{
		int32_t L_214 = ___1_x_id;
		int32_t L_215;
		L_215 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_214, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___1_x_id = L_215;
		int32_t L_216 = ___0_root_id;
		int32_t L_217 = ___1_x_id;
		int32_t L_218 = ___2_mainTreeNodeID;
		int32_t L_219;
		L_219 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_216, L_217, L_218, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_219;
	}

IL_0481:
	{
		int32_t L_220 = ___1_x_id;
		int32_t L_221;
		L_221 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_220, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_221, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_222 = ___1_x_id;
		int32_t L_223;
		L_223 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_222, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_224;
		L_224 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_223, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_224, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_225 = ___0_root_id;
		int32_t L_226 = ___1_x_id;
		int32_t L_227;
		L_227 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_226, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_228;
		L_228 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_227, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_229 = ___2_mainTreeNodeID;
		int32_t L_230;
		L_230 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_225, L_228, L_229, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_230;
	}

IL_04ba:
	{
		int32_t L_231 = ___1_x_id;
		int32_t L_232;
		L_232 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_231, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_233;
		L_233 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_232, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (!L_233)
		{
			goto IL_0329;
		}
	}
	{
		int32_t L_234 = ___0_root_id;
		if (L_234)
		{
			goto IL_04de;
		}
	}
	{
		int32_t L_235 = __this->___root;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_235, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		goto IL_04e6;
	}

IL_04de:
	{
		int32_t L_236 = ___0_root_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_236, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
	}

IL_04e6:
	{
		int32_t L_237 = ___0_root_id;
		return L_237;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_UpdateNodeKey_m90FF8C96E5A0A272D878A6CB88DEE893A34E6830_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_currentKey, int32_t ___1_newKey, const RuntimeMethod* method) 
{
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_currentKey;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (L_4)
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		int32_t L_7 = __this->___root;
		if ((((int32_t)L_6) == ((int32_t)L_7)))
		{
			goto IL_0031;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_8 = V_0;
		int32_t L_9 = L_8.____mainTreeNodeID;
		int32_t L_10 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_9, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0031:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_11 = V_0;
		int32_t L_12 = L_11.____nodeID;
		int32_t L_13 = ___1_newKey;
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_12, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_i;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		V_0 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_0;
		int32_t L_3 = L_2.____nodeID;
		int32_t L_4;
		L_4 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_5 = V_0;
		int32_t L_6 = L_5.____nodeID;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_7 = V_0;
		int32_t L_8 = L_7.____mainTreeNodeID;
		int32_t L_9;
		L_9 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_6, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDelete_mD650E7F92013005A24CE586C4FC1B71EE3D279C7_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_z_id, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_z_id;
		int32_t L_1;
		L_1 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, 0, L_0, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_z_id, int32_t ___2_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t G_B5_0 = 0;
	{
		V_0 = 0;
		int32_t L_0 = ___1_z_id;
		int32_t L_1;
		L_1 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_2 = ___1_z_id;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_4 = ___1_z_id;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___1_z_id;
		int32_t L_7;
		L_7 = RBTree_1_RBDeleteX_m6AEBE3413E7ECF37B61015F652AA07DF5C9A13AC(__this, L_3, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 47));
		return L_7;
	}

IL_0021:
	{
		V_3 = (bool)0;
		int32_t L_8 = __this->____accessMethod;
		if ((((int32_t)L_8) == ((int32_t)1)))
		{
			goto IL_002f;
		}
	}
	{
		int32_t L_9 = ___1_z_id;
		G_B5_0 = L_9;
		goto IL_0030;
	}

IL_002f:
	{
		int32_t L_10 = ___2_mainTreeNodeID;
		G_B5_0 = L_10;
	}

IL_0030:
	{
		V_4 = G_B5_0;
		int32_t L_11 = V_4;
		int32_t L_12;
		L_12 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_12)
		{
			goto IL_0046;
		}
	}
	{
		int32_t L_13 = V_4;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		___0_root_id = L_14;
	}

IL_0046:
	{
		int32_t L_15 = V_4;
		int32_t L_16;
		L_16 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_17;
		L_17 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_005b;
		}
	}
	{
		V_3 = (bool)1;
		goto IL_0073;
	}

IL_005b:
	{
		int32_t L_18 = V_4;
		int32_t L_19;
		L_19 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_20;
		L_20 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((!(((uint32_t)L_20) == ((uint32_t)1))))
		{
			goto IL_0073;
		}
	}
	{
		Exception_t* L_21;
		L_21 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, method);
	}

IL_0073:
	{
		int32_t L_22 = ___1_z_id;
		int32_t L_23;
		L_23 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_23)
		{
			goto IL_0085;
		}
	}
	{
		int32_t L_24 = ___1_z_id;
		int32_t L_25;
		L_25 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (L_25)
		{
			goto IL_0089;
		}
	}

IL_0085:
	{
		int32_t L_26 = ___1_z_id;
		V_1 = L_26;
		goto IL_0091;
	}

IL_0089:
	{
		int32_t L_27 = ___1_z_id;
		int32_t L_28;
		L_28 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_28;
	}

IL_0091:
	{
		int32_t L_29 = V_1;
		int32_t L_30;
		L_30 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_29, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_30)
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32;
		L_32 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_32;
		goto IL_00ac;
	}

IL_00a4:
	{
		int32_t L_33 = V_1;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_00ac:
	{
		int32_t L_35 = V_1;
		int32_t L_36;
		L_36 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_2 = L_36;
		int32_t L_37 = V_0;
		if (!L_37)
		{
			goto IL_00bf;
		}
	}
	{
		int32_t L_38 = V_0;
		int32_t L_39 = V_2;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_38, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_00bf:
	{
		int32_t L_40 = V_2;
		if (L_40)
		{
			goto IL_00d3;
		}
	}
	{
		int32_t L_41 = ___0_root_id;
		if (L_41)
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_42 = V_0;
		__this->___root = L_42;
		goto IL_00ef;
	}

IL_00ce:
	{
		int32_t L_43 = V_0;
		___0_root_id = L_43;
		goto IL_00ef;
	}

IL_00d3:
	{
		int32_t L_44 = V_1;
		int32_t L_45 = V_2;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((!(((uint32_t)L_44) == ((uint32_t)L_46))))
		{
			goto IL_00e7;
		}
	}
	{
		int32_t L_47 = V_2;
		int32_t L_48 = V_0;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_47, L_48, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_00ef;
	}

IL_00e7:
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_00ef:
	{
		int32_t L_51 = V_1;
		int32_t L_52 = ___1_z_id;
		if ((((int32_t)L_51) == ((int32_t)L_52)))
		{
			goto IL_010f;
		}
	}
	{
		int32_t L_53 = ___1_z_id;
		int32_t L_54 = V_1;
		int32_t L_55;
		L_55 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_53, L_55, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
		int32_t L_56 = ___1_z_id;
		int32_t L_57 = V_1;
		int32_t L_58;
		L_58 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_57, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_56, L_58, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_010f:
	{
		int32_t L_59 = V_4;
		int32_t L_60;
		L_60 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_60)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_61 = ___0_root_id;
		if (L_61)
		{
			goto IL_0128;
		}
	}
	{
		int32_t L_62 = ___1_z_id;
		int32_t L_63 = V_4;
		if ((((int32_t)L_62) == ((int32_t)L_63)))
		{
			goto IL_0128;
		}
	}
	{
		Exception_t* L_64;
		L_64 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, method);
	}

IL_0128:
	{
		int32_t L_65 = ___0_root_id;
		if (!L_65)
		{
			goto IL_0143;
		}
	}
	{
		int32_t L_66 = V_4;
		int32_t L_67 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_66, L_67, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_68 = V_4;
		int32_t L_69 = ___0_root_id;
		int32_t L_70;
		L_70 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_69, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_68, L_70, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_0143:
	{
		int32_t L_71 = V_2;
		V_5 = L_71;
		goto IL_015a;
	}

IL_0148:
	{
		int32_t L_72 = V_5;
		RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A(__this, L_72, il2cpp_rgctx_method(method->klass->rgctx_data, 48));
		int32_t L_73 = V_5;
		int32_t L_74;
		L_74 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_5 = L_74;
	}

IL_015a:
	{
		int32_t L_75 = V_5;
		if (L_75)
		{
			goto IL_0148;
		}
	}
	{
		int32_t L_76 = ___0_root_id;
		if (!L_76)
		{
			goto IL_017d;
		}
	}
	{
		int32_t L_77 = V_4;
		V_6 = L_77;
		goto IL_0179;
	}

IL_0167:
	{
		int32_t L_78 = V_6;
		RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F(__this, L_78, il2cpp_rgctx_method(method->klass->rgctx_data, 49));
		int32_t L_79 = V_6;
		int32_t L_80;
		L_80 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_79, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_6 = L_80;
	}

IL_0179:
	{
		int32_t L_81 = V_6;
		if (L_81)
		{
			goto IL_0167;
		}
	}

IL_017d:
	{
		int32_t L_82 = V_1;
		int32_t L_83;
		L_83 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_83) == ((uint32_t)1))))
		{
			goto IL_0193;
		}
	}
	{
		int32_t L_84 = ___0_root_id;
		int32_t L_85 = V_0;
		int32_t L_86 = V_2;
		int32_t L_87 = ___2_mainTreeNodeID;
		int32_t L_88;
		L_88 = RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89(__this, L_84, L_85, L_86, L_87, il2cpp_rgctx_method(method->klass->rgctx_data, 50));
		___0_root_id = L_88;
	}

IL_0193:
	{
		bool L_89 = V_3;
		if (!L_89)
		{
			goto IL_02af;
		}
	}
	{
		int32_t L_90 = V_4;
		if (!L_90)
		{
			goto IL_01ae;
		}
	}
	{
		int32_t L_91 = V_4;
		int32_t L_92;
		L_92 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_91, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_93;
		L_93 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_92, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_93) == ((int32_t)1)))
		{
			goto IL_01b6;
		}
	}

IL_01ae:
	{
		Exception_t* L_94;
		L_94 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)9), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_94, method);
	}

IL_01b6:
	{
		int32_t L_95 = __this->____inUseSatelliteTreeCount;
		__this->____inUseSatelliteTreeCount = ((int32_t)il2cpp_codegen_subtract(L_95, 1));
		int32_t L_96 = V_4;
		int32_t L_97;
		L_97 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		V_7 = L_97;
		int32_t L_98 = V_7;
		int32_t L_99 = V_4;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_98, L_100, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_101 = V_7;
		int32_t L_102 = V_4;
		int32_t L_103;
		L_103 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_102, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_101, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_104 = V_7;
		int32_t L_105 = V_4;
		int32_t L_106;
		L_106 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_105, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_104, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_107 = V_7;
		int32_t L_108 = V_4;
		int32_t L_109;
		L_109 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_108, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_107, L_109, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = V_4;
		int32_t L_111;
		L_111 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_110, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_111)
		{
			goto IL_025c;
		}
	}
	{
		int32_t L_112 = V_7;
		int32_t L_113 = V_4;
		int32_t L_114;
		L_114 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_112, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_115 = V_4;
		int32_t L_116;
		L_116 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_115, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_117;
		L_117 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_118 = V_4;
		if ((!(((uint32_t)L_117) == ((uint32_t)L_118))))
		{
			goto IL_024c;
		}
	}
	{
		int32_t L_119 = V_4;
		int32_t L_120;
		L_120 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_119, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_121 = V_7;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_025c;
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		int32_t L_123;
		L_123 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_122, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_124 = V_7;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_123, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
	}

IL_025c:
	{
		int32_t L_125 = V_4;
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_126)
		{
			goto IL_0276;
		}
	}
	{
		int32_t L_127 = V_4;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_129 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_128, L_129, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0276:
	{
		int32_t L_130 = V_4;
		int32_t L_131;
		L_131 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_130, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_131)
		{
			goto IL_0290;
		}
	}
	{
		int32_t L_132 = V_4;
		int32_t L_133;
		L_133 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_134 = V_7;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_133, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0290:
	{
		int32_t L_135 = __this->___root;
		int32_t L_136 = V_4;
		if ((!(((uint32_t)L_135) == ((uint32_t)L_136))))
		{
			goto IL_02a2;
		}
	}
	{
		int32_t L_137 = V_7;
		__this->___root = L_137;
	}

IL_02a2:
	{
		int32_t L_138 = V_4;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		V_4 = 0;
		goto IL_02e4;
	}

IL_02af:
	{
		int32_t L_139 = V_4;
		int32_t L_140;
		L_140 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_139, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_140)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		if (L_141)
		{
			goto IL_02c9;
		}
	}
	{
		int32_t L_142 = ___1_z_id;
		int32_t L_143 = V_4;
		if ((((int32_t)L_142) == ((int32_t)L_143)))
		{
			goto IL_02c9;
		}
	}
	{
		Exception_t* L_144;
		L_144 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)10), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_144, method);
	}

IL_02c9:
	{
		int32_t L_145 = ___0_root_id;
		if (!L_145)
		{
			goto IL_02e4;
		}
	}
	{
		int32_t L_146 = V_4;
		int32_t L_147 = ___0_root_id;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_146, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
		int32_t L_148 = V_4;
		int32_t L_149 = ___0_root_id;
		int32_t L_150;
		L_150 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9(__this, L_148, L_150, il2cpp_rgctx_method(method->klass->rgctx_data, 31));
	}

IL_02e4:
	{
		int32_t L_151 = V_1;
		int32_t L_152 = ___1_z_id;
		if ((((int32_t)L_151) == ((int32_t)L_152)))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_153 = V_1;
		int32_t L_154 = ___1_z_id;
		int32_t L_155;
		L_155 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_154, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_153, L_155, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		int32_t L_156 = V_1;
		int32_t L_157 = ___1_z_id;
		int32_t L_158;
		L_158 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_157, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_156, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		int32_t L_159 = V_1;
		int32_t L_160 = ___1_z_id;
		int32_t L_161;
		L_161 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_160, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_159, L_161, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_162 = V_1;
		int32_t L_163 = ___1_z_id;
		int32_t L_164;
		L_164 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_163, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55(__this, L_162, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 34));
		int32_t L_165 = ___1_z_id;
		int32_t L_166;
		L_166 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_165, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		if (!L_166)
		{
			goto IL_036a;
		}
	}
	{
		int32_t L_167 = V_1;
		int32_t L_168 = ___1_z_id;
		int32_t L_169;
		L_169 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_168, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_167, L_169, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
		int32_t L_170 = ___1_z_id;
		int32_t L_171;
		L_171 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_170, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_172;
		L_172 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_171, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_173 = ___1_z_id;
		if ((!(((uint32_t)L_172) == ((uint32_t)L_173))))
		{
			goto IL_035a;
		}
	}
	{
		int32_t L_174 = ___1_z_id;
		int32_t L_175;
		L_175 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_174, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_176 = V_1;
		RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063(__this, L_175, L_176, il2cpp_rgctx_method(method->klass->rgctx_data, 32));
		goto IL_0372;
	}

IL_035a:
	{
		int32_t L_177 = ___1_z_id;
		int32_t L_178;
		L_178 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_177, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_179 = V_1;
		RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45(__this, L_178, L_179, il2cpp_rgctx_method(method->klass->rgctx_data, 27));
		goto IL_0372;
	}

IL_036a:
	{
		int32_t L_180 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_180, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0372:
	{
		int32_t L_181 = ___1_z_id;
		int32_t L_182;
		L_182 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_181, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (!L_182)
		{
			goto IL_0389;
		}
	}
	{
		int32_t L_183 = ___1_z_id;
		int32_t L_184;
		L_184 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_183, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_185 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_184, L_185, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_0389:
	{
		int32_t L_186 = ___1_z_id;
		int32_t L_187;
		L_187 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_186, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if (!L_187)
		{
			goto IL_03a0;
		}
	}
	{
		int32_t L_188 = ___1_z_id;
		int32_t L_189;
		L_189 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_188, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_190 = V_1;
		RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9(__this, L_189, L_190, il2cpp_rgctx_method(method->klass->rgctx_data, 28));
	}

IL_03a0:
	{
		int32_t L_191 = __this->___root;
		int32_t L_192 = ___1_z_id;
		if ((!(((uint32_t)L_191) == ((uint32_t)L_192))))
		{
			goto IL_03b2;
		}
	}
	{
		int32_t L_193 = V_1;
		__this->___root = L_193;
		goto IL_03b9;
	}

IL_03b2:
	{
		int32_t L_194 = ___0_root_id;
		int32_t L_195 = ___1_z_id;
		if ((!(((uint32_t)L_194) == ((uint32_t)L_195))))
		{
			goto IL_03b9;
		}
	}
	{
		int32_t L_196 = V_1;
		___0_root_id = L_196;
	}

IL_03b9:
	{
		int32_t L_197 = V_4;
		if (!L_197)
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_198 = V_4;
		int32_t L_199;
		L_199 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_198, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_200 = ___1_z_id;
		if ((!(((uint32_t)L_199) == ((uint32_t)L_200))))
		{
			goto IL_03d1;
		}
	}
	{
		int32_t L_201 = V_4;
		int32_t L_202 = V_1;
		RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8(__this, L_201, L_202, il2cpp_rgctx_method(method->klass->rgctx_data, 29));
	}

IL_03d1:
	{
		int32_t L_203 = ___1_z_id;
		RBTree_1_FreeNode_m142FC91FA594DC91799F5231F7AE945DCC6922FD(__this, L_203, il2cpp_rgctx_method(method->klass->rgctx_data, 51));
		int32_t L_204 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_204, 1));
		int32_t L_205 = ___1_z_id;
		return L_205;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_RBDeleteFixup_m25667C31EC6662F3899EA7CDFF622F9DB394AF89_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_x_id, int32_t ___2_px_id, int32_t ___3_mainTreeNodeID, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B16_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B38_0 = 0;
	int32_t G_B47_0 = 0;
	int32_t G_B52_0 = 0;
	int32_t G_B56_0 = 0;
	int32_t G_B60_0 = 0;
	{
		int32_t L_0 = ___1_x_id;
		if (L_0)
		{
			goto IL_0305;
		}
	}
	{
		int32_t L_1 = ___2_px_id;
		if (L_1)
		{
			goto IL_0305;
		}
	}
	{
		return 0;
	}

IL_000e:
	{
		int32_t L_2 = ___1_x_id;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_3 = ___1_x_id;
		int32_t L_4 = ___1_x_id;
		int32_t L_5;
		L_5 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if ((((int32_t)L_3) == ((int32_t)L_6)))
		{
			goto IL_0033;
		}
	}

IL_0021:
	{
		int32_t L_7 = ___1_x_id;
		if (L_7)
		{
			goto IL_0168;
		}
	}
	{
		int32_t L_8 = ___2_px_id;
		int32_t L_9;
		L_9 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		if (L_9)
		{
			goto IL_0168;
		}
	}

IL_0033:
	{
		int32_t L_10 = ___1_x_id;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_11 = ___1_x_id;
		int32_t L_12;
		L_12 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_13;
		L_13 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_13;
		goto IL_004c;
	}

IL_0045:
	{
		int32_t L_14 = ___2_px_id;
		int32_t L_15;
		L_15 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B10_0 = L_15;
	}

IL_004c:
	{
		V_0 = G_B10_0;
		int32_t L_16 = V_0;
		if (L_16)
		{
			goto IL_0058;
		}
	}
	{
		Exception_t* L_17;
		L_17 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)14), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, method);
	}

IL_0058:
	{
		int32_t L_18 = V_0;
		int32_t L_19;
		L_19 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		int32_t L_20 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_20, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_21 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_21, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_22 = ___0_root_id;
		int32_t L_23 = ___2_px_id;
		int32_t L_24 = ___3_mainTreeNodeID;
		int32_t L_25;
		L_25 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_22, L_23, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_25;
		int32_t L_26 = ___1_x_id;
		if (!L_26)
		{
			goto IL_008f;
		}
	}
	{
		int32_t L_27 = ___1_x_id;
		int32_t L_28;
		L_28 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_27, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_29;
		L_29 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_28, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_29;
		goto IL_0096;
	}

IL_008f:
	{
		int32_t L_30 = ___2_px_id;
		int32_t L_31;
		L_31 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B16_0 = L_31;
	}

IL_0096:
	{
		V_0 = G_B16_0;
	}

IL_0097:
	{
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_32, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_34;
		L_34 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_35 = V_0;
		int32_t L_36;
		L_36 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_35, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_37;
		L_37 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_37) == ((uint32_t)1))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_38 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_38, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_39 = ___2_px_id;
		___1_x_id = L_39;
		int32_t L_40 = ___2_px_id;
		int32_t L_41;
		L_41 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_40, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_41;
		goto IL_0305;
	}

IL_00d0:
	{
		int32_t L_42 = V_0;
		int32_t L_43;
		L_43 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_42, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_44;
		L_44 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_43, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_45 = V_0;
		int32_t L_46;
		L_46 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_45, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_46, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_47 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_47, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_48 = ___0_root_id;
		int32_t L_49 = V_0;
		int32_t L_50 = ___3_mainTreeNodeID;
		int32_t L_51;
		L_51 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_48, L_49, L_50, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_51;
		int32_t L_52 = ___1_x_id;
		if (!L_52)
		{
			goto IL_0114;
		}
	}
	{
		int32_t L_53 = ___1_x_id;
		int32_t L_54;
		L_54 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_53, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_55;
		L_55 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_54, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_55;
		goto IL_011b;
	}

IL_0114:
	{
		int32_t L_56 = ___2_px_id;
		int32_t L_57;
		L_57 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_56, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		G_B24_0 = L_57;
	}

IL_011b:
	{
		V_0 = G_B24_0;
	}

IL_011c:
	{
		int32_t L_58 = V_0;
		int32_t L_59 = ___2_px_id;
		int32_t L_60;
		L_60 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_59, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_58, L_60, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_61 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_61, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_62 = V_0;
		int32_t L_63;
		L_63 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_62, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_63, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_64 = ___0_root_id;
		int32_t L_65 = ___2_px_id;
		int32_t L_66 = ___3_mainTreeNodeID;
		int32_t L_67;
		L_67 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_64, L_65, L_66, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_67;
		int32_t L_68 = ___0_root_id;
		if (!L_68)
		{
			goto IL_0152;
		}
	}
	{
		int32_t L_69 = ___0_root_id;
		G_B28_0 = L_69;
		goto IL_0158;
	}

IL_0152:
	{
		int32_t L_70 = __this->___root;
		G_B28_0 = L_70;
	}

IL_0158:
	{
		___1_x_id = G_B28_0;
		int32_t L_71 = ___1_x_id;
		int32_t L_72;
		L_72 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_71, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_72;
		goto IL_0305;
	}

IL_0168:
	{
		int32_t L_73 = ___2_px_id;
		int32_t L_74;
		L_74 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_73, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_74;
		int32_t L_75 = V_0;
		int32_t L_76;
		L_76 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_75, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if (L_76)
		{
			goto IL_01ed;
		}
	}
	{
		int32_t L_77 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_77, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_78 = ___1_x_id;
		if (!L_78)
		{
			goto IL_01b4;
		}
	}
	{
		int32_t L_79 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_79, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_80 = ___0_root_id;
		int32_t L_81 = ___2_px_id;
		int32_t L_82 = ___3_mainTreeNodeID;
		int32_t L_83;
		L_83 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_80, L_81, L_82, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_83;
		int32_t L_84 = ___1_x_id;
		if (!L_84)
		{
			goto IL_01aa;
		}
	}
	{
		int32_t L_85 = ___1_x_id;
		int32_t L_86;
		L_86 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_85, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_87;
		L_87 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_86, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_87;
		goto IL_01b1;
	}

IL_01aa:
	{
		int32_t L_88 = ___2_px_id;
		int32_t L_89;
		L_89 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_88, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B34_0 = L_89;
	}

IL_01b1:
	{
		V_0 = G_B34_0;
		goto IL_01ed;
	}

IL_01b4:
	{
		int32_t L_90 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_90, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_91 = ___0_root_id;
		int32_t L_92 = ___2_px_id;
		int32_t L_93 = ___3_mainTreeNodeID;
		int32_t L_94;
		L_94 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_91, L_92, L_93, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_94;
		int32_t L_95 = ___1_x_id;
		if (!L_95)
		{
			goto IL_01da;
		}
	}
	{
		int32_t L_96 = ___1_x_id;
		int32_t L_97;
		L_97 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_96, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_98;
		L_98 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_97, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_98;
		goto IL_01e1;
	}

IL_01da:
	{
		int32_t L_99 = ___2_px_id;
		int32_t L_100;
		L_100 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_99, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B38_0 = L_100;
	}

IL_01e1:
	{
		V_0 = G_B38_0;
		int32_t L_101 = V_0;
		if (L_101)
		{
			goto IL_01ed;
		}
	}
	{
		Exception_t* L_102;
		L_102 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)11), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_102, method);
	}

IL_01ed:
	{
		int32_t L_103 = V_0;
		int32_t L_104;
		L_104 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_103, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_105;
		L_105 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_104, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_105) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_106 = V_0;
		int32_t L_107;
		L_107 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_106, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_108;
		L_108 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_107, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_108) == ((uint32_t)1))))
		{
			goto IL_0226;
		}
	}
	{
		int32_t L_109 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_109, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_110 = ___2_px_id;
		___1_x_id = L_110;
		int32_t L_111 = ___2_px_id;
		int32_t L_112;
		L_112 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_111, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_112;
		goto IL_0305;
	}

IL_0226:
	{
		int32_t L_113 = V_0;
		int32_t L_114;
		L_114 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_113, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_115;
		L_115 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_114, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((!(((uint32_t)L_115) == ((uint32_t)1))))
		{
			goto IL_0272;
		}
	}
	{
		int32_t L_116 = V_0;
		int32_t L_117;
		L_117 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_116, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_117, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_118 = V_0;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_118, (int32_t)0, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_119 = ___0_root_id;
		int32_t L_120 = V_0;
		int32_t L_121 = ___3_mainTreeNodeID;
		int32_t L_122;
		L_122 = RBTree_1_LeftRotate_mD49CD676DF4B79C1B56C4158BF78B239F3EBF7EE(__this, L_119, L_120, L_121, il2cpp_rgctx_method(method->klass->rgctx_data, 42));
		___0_root_id = L_122;
		int32_t L_123 = ___1_x_id;
		if (!L_123)
		{
			goto IL_026a;
		}
	}
	{
		int32_t L_124 = ___1_x_id;
		int32_t L_125;
		L_125 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_124, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		int32_t L_126;
		L_126 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_125, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_126;
		goto IL_0271;
	}

IL_026a:
	{
		int32_t L_127 = ___2_px_id;
		int32_t L_128;
		L_128 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_127, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		G_B47_0 = L_128;
	}

IL_0271:
	{
		V_0 = G_B47_0;
	}

IL_0272:
	{
		int32_t L_129 = ___1_x_id;
		if (!L_129)
		{
			goto IL_02be;
		}
	}
	{
		int32_t L_130 = V_0;
		int32_t L_131 = ___2_px_id;
		int32_t L_132;
		L_132 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_131, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_130, L_132, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_133 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_133, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_134 = V_0;
		int32_t L_135;
		L_135 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_134, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_135, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_136 = ___0_root_id;
		int32_t L_137 = ___2_px_id;
		int32_t L_138 = ___3_mainTreeNodeID;
		int32_t L_139;
		L_139 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_136, L_137, L_138, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_139;
		int32_t L_140 = ___0_root_id;
		if (!L_140)
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_141 = ___0_root_id;
		G_B52_0 = L_141;
		goto IL_02b1;
	}

IL_02ab:
	{
		int32_t L_142 = __this->___root;
		G_B52_0 = L_142;
	}

IL_02b1:
	{
		___1_x_id = G_B52_0;
		int32_t L_143 = ___1_x_id;
		int32_t L_144;
		L_144 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_143, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_144;
		goto IL_0305;
	}

IL_02be:
	{
		int32_t L_145 = V_0;
		int32_t L_146 = ___2_px_id;
		int32_t L_147;
		L_147 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_146, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_145, L_147, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_148 = ___2_px_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_148, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_149 = V_0;
		int32_t L_150;
		L_150 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_149, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_150, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_151 = ___0_root_id;
		int32_t L_152 = ___2_px_id;
		int32_t L_153 = ___3_mainTreeNodeID;
		int32_t L_154;
		L_154 = RBTree_1_RightRotate_m1A016E445613E4751340CAC167426D95944FCAB2(__this, L_151, L_152, L_153, il2cpp_rgctx_method(method->klass->rgctx_data, 43));
		___0_root_id = L_154;
		int32_t L_155 = ___0_root_id;
		if (!L_155)
		{
			goto IL_02f4;
		}
	}
	{
		int32_t L_156 = ___0_root_id;
		G_B56_0 = L_156;
		goto IL_02fa;
	}

IL_02f4:
	{
		int32_t L_157 = __this->___root;
		G_B56_0 = L_157;
	}

IL_02fa:
	{
		___1_x_id = G_B56_0;
		int32_t L_158 = ___1_x_id;
		int32_t L_159;
		L_159 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_158, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		___2_px_id = L_159;
	}

IL_0305:
	{
		int32_t L_160 = ___0_root_id;
		if (!L_160)
		{
			goto IL_030b;
		}
	}
	{
		int32_t L_161 = ___0_root_id;
		G_B60_0 = L_161;
		goto IL_0311;
	}

IL_030b:
	{
		int32_t L_162 = __this->___root;
		G_B60_0 = L_162;
	}

IL_0311:
	{
		int32_t L_163 = ___1_x_id;
		if ((((int32_t)G_B60_0) == ((int32_t)L_163)))
		{
			goto IL_0321;
		}
	}
	{
		int32_t L_164 = ___1_x_id;
		int32_t L_165;
		L_165 = RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684(__this, L_164, il2cpp_rgctx_method(method->klass->rgctx_data, 40));
		if ((((int32_t)L_165) == ((int32_t)1)))
		{
			goto IL_000e;
		}
	}

IL_0321:
	{
		int32_t L_166 = ___1_x_id;
		RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371(__this, L_166, (int32_t)1, il2cpp_rgctx_method(method->klass->rgctx_data, 41));
		int32_t L_167 = ___0_root_id;
		return L_167;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_root_id, int32_t ___1_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B10_0 = 0;
	{
		int32_t L_0 = ___0_root_id;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1 = __this->____accessMethod;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		Exception_t* L_2;
		L_2 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)17), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, method);
	}

IL_0014:
	{
		int32_t L_3 = ___0_root_id;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = ___0_root_id;
		G_B6_0 = L_4;
		goto IL_0020;
	}

IL_001a:
	{
		int32_t L_5 = __this->___root;
		G_B6_0 = L_5;
	}

IL_0020:
	{
		V_0 = G_B6_0;
		goto IL_005e;
	}

IL_0023:
	{
		int32_t L_6 = ___0_root_id;
		if (!L_6)
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_7 = ___1_key;
		int32_t L_8 = V_0;
		int32_t L_9;
		L_9 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_10;
		L_10 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(6, __this, L_7, L_9);
		G_B10_0 = L_10;
		goto IL_0044;
	}

IL_0036:
	{
		int32_t L_11 = ___1_key;
		int32_t L_12 = V_0;
		int32_t L_13;
		L_13 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_14;
		L_14 = VirtualFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5, __this, L_11, L_13);
		G_B10_0 = L_14;
	}

IL_0044:
	{
		V_1 = G_B10_0;
		int32_t L_15 = V_1;
		if (!L_15)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) >= ((int32_t)0)))
		{
			goto IL_0056;
		}
	}
	{
		int32_t L_17 = V_0;
		int32_t L_18;
		L_18 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_18;
		goto IL_005e;
	}

IL_0056:
	{
		int32_t L_19 = V_0;
		int32_t L_20;
		L_20 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_20;
	}

IL_005e:
	{
		int32_t L_21 = V_0;
		if (L_21)
		{
			goto IL_0023;
		}
	}

IL_0061:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_get_Item_m6CB743851EBBBD1D9007D28700324EA0002F3107_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_index;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 46));
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_key;
		int32_t L_1;
		L_1 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5;
		L_5 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_6 = ___0_key;
		int32_t L_7;
		L_7 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, L_5, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		int32_t L_8 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_9), L_7, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_9;
	}

IL_0027:
	{
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		V_1 = L_11;
		int32_t L_12 = ___0_key;
		int32_t L_13 = L_12;
		RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_13);
		bool L_15;
		L_15 = Int32_Equals_m089564150E8AF7C63B419427E2E57E3420659B1B((&V_1), L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 54));
		if (L_15)
		{
			goto IL_0046;
		}
	}
	{
		V_0 = 0;
	}

IL_0046:
	{
		int32_t L_16 = V_0;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_17;
		memset((&L_17), 0, sizeof(L_17));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_17), L_16, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByKey_mB3893DE20533883A9097426F8B65C6548CE78176_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_key, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (-1);
		int32_t L_0 = ___0_key;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1;
		L_1 = RBTree_1_GetNodeByKey_mF4FE4024CADC8B1F8FABFA13EACA57E2B6F775F2(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 44));
		V_1 = L_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_2 = V_1;
		int32_t L_3 = L_2.____nodeID;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = V_1;
		int32_t L_5;
		L_5 = RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 55));
		V_0 = L_5;
	}

IL_001a:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_node, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___0_node;
		int32_t L_2;
		L_2 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_2;
	}

IL_0010:
	{
		int32_t L_3 = ___0_node;
		int32_t L_4;
		L_4 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = ___0_node;
		int32_t L_6;
		L_6 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_6;
	}

IL_0021:
	{
		int32_t L_7 = ___0_node;
		int32_t L_8;
		L_8 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_9;
		L_9 = RBTree_1_SearchSubTree_m57C42F24D37D298A0566D530361F03F6F0EB76B2(__this, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 52));
		V_0 = L_9;
		int32_t L_10 = V_0;
		int32_t L_11 = ___0_node;
		if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_12 = ___0_node;
		int32_t L_13;
		L_13 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_13;
	}

IL_003c:
	{
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		int32_t L_16 = ___0_node;
		int32_t L_17;
		L_17 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_15, L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_GetIndexByNodePath_mF59D980A8D9F3D12CFE602F95AFDB04F6F6804C5_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 ___0_path, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_1 = ___0_path;
		int32_t L_2 = L_1.____nodeID;
		int32_t L_3;
		L_3 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return L_3;
	}

IL_0015:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_4 = ___0_path;
		int32_t L_5 = L_4.____mainTreeNodeID;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_6 = ___0_path;
		int32_t L_7 = L_6.____nodeID;
		int32_t L_8;
		L_8 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		return L_8;
	}

IL_002a:
	{
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_9 = ___0_path;
		int32_t L_10 = L_9.____mainTreeNodeID;
		int32_t L_11;
		L_11 = RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 57));
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_12 = ___0_path;
		int32_t L_13 = L_12.____nodeID;
		int32_t L_14;
		L_14 = RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 56));
		return ((int32_t)il2cpp_codegen_add(L_11, L_14));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexByNode_mF54D314A27930CDEE19BE0B8DE58C63A7A6DABCD_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_0037;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)il2cpp_codegen_add(L_11, 1))));
	}

IL_0034:
	{
		int32_t L_12 = V_1;
		___0_nodeId = L_12;
	}

IL_0037:
	{
		int32_t L_13 = ___0_nodeId;
		if (L_13)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeIndexWithSatelliteByNode_m2A8640152375F25E6DFCB524E3C5E3762A819087_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B4_1 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B5_1 = 0;
	int32_t G_B5_2 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_0 = L_2;
		goto IL_004f;
	}

IL_0010:
	{
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
		V_1 = L_4;
		int32_t L_5 = ___0_nodeId;
		int32_t L_6 = V_1;
		int32_t L_7;
		L_7 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		if ((!(((uint32_t)L_5) == ((uint32_t)L_7))))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_8 = V_0;
		int32_t L_9 = V_1;
		int32_t L_10;
		L_10 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_11;
		L_11 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_12 = V_1;
		int32_t L_13;
		L_13 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_13)
		{
			G_B4_0 = L_11;
			G_B4_1 = L_8;
			goto IL_0048;
		}
		G_B3_0 = L_11;
		G_B3_1 = L_8;
	}
	{
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_16;
		L_16 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B5_0 = L_16;
		G_B5_1 = G_B3_0;
		G_B5_2 = G_B3_1;
		goto IL_0049;
	}

IL_0048:
	{
		G_B5_0 = 1;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
	}

IL_0049:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B5_2, ((int32_t)il2cpp_codegen_add(G_B5_1, G_B5_0))));
	}

IL_004c:
	{
		int32_t L_17 = V_1;
		___0_nodeId = L_17;
	}

IL_004f:
	{
		int32_t L_18 = ___0_nodeId;
		if (L_18)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_19 = V_0;
		return L_19;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 RBTree_1_GetNodeByIndex_m1925A1C6C371B002EE706C8EDEF3785E4AD148A8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_userIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____inUseSatelliteTreeCount;
		if (L_0)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_1 = __this->___root;
		int32_t L_2 = ___0_userIndex;
		int32_t L_3;
		L_3 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_1, ((int32_t)il2cpp_codegen_add(L_2, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		V_0 = L_3;
		V_1 = 0;
		goto IL_0026;
	}

IL_001c:
	{
		int32_t L_4 = ___0_userIndex;
		int32_t L_5;
		L_5 = RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751(__this, L_4, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 59));
		V_0 = L_5;
	}

IL_0026:
	{
		int32_t L_6 = V_0;
		if (L_6)
		{
			goto IL_0041;
		}
	}
	{
		int32_t L_7 = __this->____accessMethod;
		if ((!(((uint32_t)2) == ((uint32_t)L_7))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_8 = ___0_userIndex;
		Exception_t* L_9;
		L_9 = ExceptionBuilder_RowOutOfRange_m2F6883E5D2F9AF63A3F9DC5521799A7E270F1054(L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_0039:
	{
		Exception_t* L_10;
		L_10 = ExceptionBuilder_InternalRBTreeError_mC54DE62BCDD6D7AE0FA4F9B4CC9598ED1E239462((int32_t)((int32_t)13), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, method);
	}

IL_0041:
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		NodePath_tB9AD0BDC7882A6AFDAB81BD2039E0C5F7BEEEF50 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NodePath__ctor_m0FCF723AFBBA0142B8DC33B243EC222D8B3840F3((&L_13), L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 53));
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m6AC21A1EB09BF6660EF47F4D771F47534F2F9751_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_index, int32_t* ___1_satelliteRootId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_index;
		___0_index = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t* L_1 = ___1_satelliteRootId;
		*((int32_t*)L_1) = (int32_t)0;
		int32_t L_2 = __this->___root;
		V_0 = L_2;
		V_1 = (-1);
		goto IL_0088;
	}

IL_0013:
	{
		int32_t L_3 = ___0_index;
		int32_t L_4 = V_1;
		if ((((int32_t)L_3) >= ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_6;
		goto IL_0088;
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		int32_t L_8;
		L_8 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_8)
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_9 = ___0_index;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_11 = ___0_index;
		int32_t L_12 = V_1;
		int32_t L_13 = V_0;
		int32_t L_14;
		L_14 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_15;
		L_15 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		if ((((int32_t)L_11) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_12, L_15)), 1)))))
		{
			goto IL_005b;
		}
	}
	{
		int32_t* L_16 = ___1_satelliteRootId;
		int32_t L_17 = V_0;
		*((int32_t*)L_16) = (int32_t)L_17;
		int32_t L_18 = ___0_index;
		int32_t L_19 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_18, L_19)), 1));
		int32_t L_20 = V_0;
		int32_t L_21;
		L_21 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_22 = ___0_index;
		int32_t L_23;
		L_23 = RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064(__this, L_21, L_22, il2cpp_rgctx_method(method->klass->rgctx_data, 58));
		return L_23;
	}

IL_005b:
	{
		int32_t L_24 = V_0;
		int32_t L_25;
		L_25 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_25)
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_26 = ___0_index;
		int32_t L_27 = V_1;
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_26, L_27));
		goto IL_0080;
	}

IL_006b:
	{
		int32_t L_28 = ___0_index;
		int32_t L_29 = V_1;
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_32;
		L_32 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_31, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		___0_index = ((int32_t)il2cpp_codegen_subtract(L_28, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_29, L_32)), 1))));
	}

IL_0080:
	{
		int32_t L_33 = V_0;
		int32_t L_34;
		L_34 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_33, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		V_0 = L_34;
	}

IL_0088:
	{
		int32_t L_35 = V_0;
		if (!L_35)
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_36 = V_0;
		int32_t L_37;
		L_37 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_36, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_38;
		L_38 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_39 = ((int32_t)il2cpp_codegen_add(L_38, 1));
		V_1 = L_39;
		int32_t L_40 = ___0_index;
		if ((!(((uint32_t)L_39) == ((uint32_t)L_40))))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_41 = V_0;
		int32_t L_42;
		L_42 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_41, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (L_42)
		{
			goto IL_0013;
		}
	}

IL_00ae:
	{
		int32_t L_43 = V_0;
		return L_43;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_ComputeNodeByIndex_m1A87F9210DD3BF7304196AFC2FF45D6E3A507064_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_x_id, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		goto IL_002f;
	}

IL_0002:
	{
		int32_t L_0 = ___0_x_id;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		V_1 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = ___1_index;
		int32_t L_5 = V_1;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_001d;
		}
	}
	{
		int32_t L_6 = V_0;
		___0_x_id = L_6;
		goto IL_002f;
	}

IL_001d:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___1_index;
		if ((((int32_t)L_7) >= ((int32_t)L_8)))
		{
			goto IL_0032;
		}
	}
	{
		int32_t L_9 = ___0_x_id;
		int32_t L_10;
		L_10 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		___0_x_id = L_10;
		int32_t L_11 = ___1_index;
		int32_t L_12 = V_1;
		___1_index = ((int32_t)il2cpp_codegen_subtract(L_11, L_12));
	}

IL_002f:
	{
		int32_t L_13 = ___0_x_id;
		if (L_13)
		{
			goto IL_0002;
		}
	}

IL_0032:
	{
		int32_t L_14 = ___0_x_id;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m42434109EC7D9962C6C5C151208BB39B7F503419_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Add_m89D1F5C6465A94C01A47855B3966C06B69E55969_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3;
		L_3 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, (-1), (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RBTree_1_GetEnumerator_m69FD7C9F88127D1B135BFEA11640F79995101010_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_0;
		memset((&L_0), 0, sizeof(L_0));
		RBTreeEnumerator__ctor_m2733AFDE89B7B2489A1BDA8AED77CB198FB6AE6E((&L_0), __this, il2cpp_rgctx_method(method->klass->rgctx_data, 61));
		RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115 L_1 = L_0;
		RuntimeObject* L_2 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 60), &L_1);
		return (RuntimeObject*)L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_item, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = (-1);
		int32_t L_0 = ___0_nodeId;
		if (!L_0)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_1 = ___0_nodeId;
		int32_t L_2;
		L_2 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_3);
		int32_t L_5 = ___1_item;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_6);
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_7))))
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_GetIndexByNode_m88D61B019FE6CFCFF5BA5E43320983A7019BC297(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 62));
		return L_9;
	}

IL_0021:
	{
		int32_t L_10 = ___0_nodeId;
		int32_t L_11;
		L_11 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_12 = ___1_item;
		int32_t L_13;
		L_13 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_11, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_14 = L_13;
		V_0 = L_14;
		if ((((int32_t)L_14) == ((int32_t)(-1))))
		{
			goto IL_0036;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}

IL_0036:
	{
		int32_t L_16 = ___0_nodeId;
		int32_t L_17;
		L_17 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_18 = ___1_item;
		int32_t L_19;
		L_19 = RBTree_1_IndexOf_m1A15AAD706F9931B99D4225D76D45140B09D6F74(__this, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 63));
		int32_t L_20 = L_19;
		V_0 = L_20;
		int32_t L_21 = V_0;
		return L_21;
	}

IL_004b:
	{
		int32_t L_22 = V_0;
		return L_22;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Insert_m0A0F524F3BD046708BD7A5DB13A4AA939D96D31C_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		int32_t L_1 = ___1_item;
		int32_t L_2;
		L_2 = RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F(__this, L_0, L_1, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 64));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_InsertAt_mC52B6134B733A4D25B2F3621177144038C005B4F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, int32_t ___1_item, bool ___2_append, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___1_item;
		int32_t L_1;
		L_1 = RBTree_1_GetNewNode_mF0CCB84B822853BFDC6AFE48116DDA1F77F10568(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 39));
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = ___0_position;
		bool L_4 = ___2_append;
		int32_t L_5;
		L_5 = RBTree_1_RBInsert_m0B2330653BCF5430989431DAC32328E6EBBAED4E(__this, 0, L_2, 0, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 38));
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RemoveAt_m08FF17CF03AA93867AE42791691F967386AFB716_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_position, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_position;
		int32_t L_1;
		L_1 = RBTree_1_DeleteByIndex_m46F2E47E9EE4CDEB58E225ED10A54A4C31F485B6(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 65));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_Clear_m2FC29230F5DF876A67B0ABDCA2D2DE205166C385_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, const RuntimeMethod* method) 
{
	{
		RBTree_1_InitTree_mCF091A660A304A14A09AB4C817AF26E1585EA323(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		int32_t L_0 = __this->____version;
		__this->____version = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_m8A396AD86818911F4C70E42BB8969FC6584093A3_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		RuntimeArray* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		RuntimeArray* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m361285FB7CF44045DC369834D1CD01F72F94EF57(L_5, NULL);
		int32_t L_7 = ___1_index;
		int32_t L_8;
		L_8 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) >= ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		Exception_t* L_9;
		L_9 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, method);
	}

IL_003a:
	{
		int32_t L_10 = __this->___root;
		int32_t L_11;
		L_11 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_11;
		V_2 = 0;
		goto IL_006c;
	}

IL_004b:
	{
		RuntimeArray* L_12 = ___0_array;
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 20), &L_15);
		int32_t L_17 = ___1_index;
		int32_t L_18 = V_2;
		NullCheck(L_12);
		Array_SetValue_mE9507B366ED84E91E92BF32649D36916F96C67B8(L_12, L_16, ((int32_t)il2cpp_codegen_add(L_17, L_18)), NULL);
		int32_t L_19 = V_1;
		int32_t L_20;
		L_20 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_19, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_20;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_006c:
	{
		int32_t L_22 = V_2;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_CopyTo_mF41FDE1C3EB16CBA24B3F43FB7590B27E8612500_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_array;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		Exception_t* L_1;
		L_1 = ExceptionBuilder_ArgumentNull_m2F21453F5BE7814A0D05A058EAC09F2391F99DA8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB829404B947F7E1629A30B5E953A49EB21CCD2ED)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___1_index;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001d;
		}
	}
	{
		Exception_t* L_3;
		L_3 = ExceptionBuilder_ArgumentOutOfRange_mEF2909680ADBD4B5228E611EDEBBA048D7DF219E(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2B6D6F48C27C60C3B55391AB377D9DC8F5639AA1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001d:
	{
		int32_t L_4;
		L_4 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		V_0 = L_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = ___0_array;
		NullCheck(L_5);
		int32_t L_6 = ___1_index;
		int32_t L_7;
		L_7 = RBTree_1_get_Count_mD78C552E837675F90BD804EFADB6BC40A38C0615(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 66));
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), L_6))) >= ((int32_t)L_7)))
		{
			goto IL_0037;
		}
	}
	{
		Exception_t* L_8;
		L_8 = ExceptionBuilder_InvalidOffsetLength_m25F593A3DD72EEDCF3B7F8616D41CD7677BD6073(NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, method);
	}

IL_0037:
	{
		int32_t L_9 = __this->___root;
		int32_t L_10;
		L_10 = RBTree_1_Minimum_m504331C88F6C6D70AA7930B661AC172AC26E1844(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		V_1 = L_10;
		V_2 = 0;
		goto IL_0064;
	}

IL_0048:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = ___0_array;
		int32_t L_12 = ___1_index;
		int32_t L_13 = V_2;
		int32_t L_14 = V_1;
		int32_t L_15;
		L_15 = RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 30));
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_12, L_13))), (int32_t)L_15);
		int32_t L_16 = V_1;
		int32_t L_17;
		L_17 = RBTree_1_Successor_mD725A36AE3B97C64315EA2030135F2ED92601A7B(__this, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 24));
		V_1 = L_17;
		int32_t L_18 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0064:
	{
		int32_t L_19 = V_2;
		int32_t L_20 = V_0;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_0048;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetRight_mBC9FDABD04C4A2B8FA6E287A81438D7F24F7FA45_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_rightNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_rightNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetLeft_mDCACA1C77E796D3D23C3A427748B9DA4AEE9B063_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_leftNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_leftNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetParent_m955260FD345744AA0C78140873543D61C26739A9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_parentNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_parentNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetColor_m3427CDE0656DB57DB7017969F2EE84ADC7321371_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_color, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_color;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetKey_m7EE967D4DCC21DDB6089A25C8995DAA2F4E192F9_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_key, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_key;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetNext_mAB9FEB9D8ACFE1EDE55AEE4F0C1BCDE38A6411F8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_nextNodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_nextNodeId;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_SetSubTreeSize_mE0A9485E7AEEE896700585182F68187A4EF18D55_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, int32_t ___1_size, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ___1_size;
		((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize = L_6;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_IncreaseSize_m613975F4AD06761B3DD9F26BC8162B71413A26C8_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_add(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_RecomputeSize_mE849917C6B9CE571D95FFA5AE30E1E7CDB24310A_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	{
		int32_t L_0 = ___0_nodeId;
		int32_t L_1;
		L_1 = RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D(__this, L_0, il2cpp_rgctx_method(method->klass->rgctx_data, 26));
		int32_t L_2;
		L_2 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_3 = ___0_nodeId;
		int32_t L_4;
		L_4 = RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB(__this, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 21));
		int32_t L_5;
		L_5 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		int32_t L_6 = ___0_nodeId;
		int32_t L_7;
		L_7 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		if (!L_7)
		{
			G_B2_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
			goto IL_0033;
		}
		G_B1_0 = ((int32_t)il2cpp_codegen_add(L_2, L_5));
	}
	{
		int32_t L_8 = ___0_nodeId;
		int32_t L_9;
		L_9 = RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6(__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		int32_t L_10;
		L_10 = RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 33));
		G_B3_0 = L_10;
		G_B3_1 = G_B1_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
	}

IL_0034:
	{
		V_0 = ((int32_t)il2cpp_codegen_add(G_B3_1, G_B3_0));
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_11 = __this->____pageTable;
		int32_t L_12 = ___0_nodeId;
		NullCheck(L_11);
		int32_t L_13 = ((int32_t)(L_12>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_15 = L_14->____slots;
		int32_t L_16 = ___0_nodeId;
		NullCheck(L_15);
		int32_t L_17 = V_0;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_16&((int32_t)65535))))))->____subTreeSize = L_17;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RBTree_1_DecreaseSize_m2CC82F8846D718DBC61F565C78775A068556E52F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t* L_6 = (int32_t*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize);
		int32_t* L_7 = L_6;
		int32_t L_8 = *((int32_t*)L_7);
		*((int32_t*)L_7) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Right_m109C825BA5A4ED378099E461DD8F3088625644BB_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____rightId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Left_m9828F525CE984D062ABC3DF1093D4DBD2364EC8D_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____leftId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Parent_mC5ACB29D707525AE6F38468A55AFCDAF295C7F05_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____parentId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_color_m730B55D54D0250705A277D3760EE34E096F01684_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nodeColor;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Next_m333CBBD7AEE95D283F7AB44D46162030DDA68CA6_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____nextId;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_SubTreeSize_m70BBB82CBEC3F4EE83B7EAA032C884CE60A09320_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____subTreeSize;
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RBTree_1_Key_m46412EE917172B8E3BDF590F1D916A4D6083E22F_gshared (RBTree_1_t8713B62AA89A0F1666C324D828FF52CBB922114D* __this, int32_t ___0_nodeId, const RuntimeMethod* method) 
{
	{
		TreePageU5BU5D_tB25FFE4FB4871036F7C74BBC7587290FAE80CDC3* L_0 = __this->____pageTable;
		int32_t L_1 = ___0_nodeId;
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)(L_1>>((int32_t)16)));
		TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		NodeU5BU5D_t9A048A3F7EEEBFF785C128A6FBAA7559BA9060BA* L_4 = L_3->____slots;
		int32_t L_5 = ___0_nodeId;
		NullCheck(L_4);
		int32_t L_6 = ((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_5&((int32_t)65535))))))->____keyOfNode;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* Array_Empty_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAB215C445888719BD89809D99C3DBD3135C2B1E7_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_0 = ((EmptyArray_1_t7902087DD0C0221C9C7362ABAB7CB57D6D519A99_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* Array_Empty_TisEvent_tDC1CE7179A25C1AC33BD07C5B4F161045A672215_m1AD513F77218E59FBB83B12CD05888A1BF6D54B0_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EventU5BU5D_t56972D401186884272B2997A6FABBD1703B1350A* L_0 = ((EmptyArray_1_t6CAC2B30CBBB3DF2C0516D226F177A7023251E16_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* Array_Empty_TisGuid_t_mFA2A359D5536F94291D4D05761D78C5A8B7654C9_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		GuidU5BU5D_t0B65C049D6CE72B5A2BF6E42AE9C98CEC1BE6B42* L_0 = ((EmptyArray_1_t5D0A9C197A8EFDD2727555843D65C34835C884A9_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* Array_Empty_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m4D53E0E0F90F37AD5DBFD2DC75E52406F90C7ABC_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ((EmptyArray_1_tE700FA647008891EF64C31436B092B253493667F_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* Array_Empty_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m94E12BB613D748D2EEB9E1ABD961630D2F970385_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Int32EnumU5BU5D_t87B7DB802810C38016332669039EF42C487A081F* L_0 = ((EmptyArray_1_t0A27D963887A48FA040C718B868C2455F9AD84FA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* Array_Empty_TisJobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08_m65AF0C73C7E00505BCE35B9CC15EE8C8F6F0A01E_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		JobHandleU5BU5D_tE3F0B60D91B15CD5B332314268E9315F48F79CEC* L_0 = ((EmptyArray_1_t0D07744D06CBE1D5EFB0F376FCD9DE664680DB24_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* Array_Empty_TisLocomotionEvent_tECDD51A234545203F40F068C91D2745873285642_mCA9B51A380F3ABF25CCC44152FD54B8494578B2B_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		LocomotionEventU5BU5D_t98AA2D89B41A658F04BBD69E6064C4F426AC6B3E* L_0 = ((EmptyArray_1_tBACC9B9E153A00D66D4E01F6D63254779A5E10BF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* Array_Empty_TisOVRAnchor_tC6603E0C1628ACAA50D8CCDCC267BFD246F5A061_m14408DB7AEF24B0C78B223278BC1337C81CC853D_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRAnchorU5BU5D_t3AEB640DBF5B863EBE2EB3C026A488D607270D69* L_0 = ((EmptyArray_1_t03904AAE4322A830A46A5C2B7C43D6A40CFE2B07_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* Array_Empty_TisOVRSpaceUser_tF145982B655F69985F22D9AB527F17FC76CDC90F_mBB6D93B6177B77D5D0DB6C917C5E06FDB4F5F200_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		OVRSpaceUserU5BU5D_tE0E28DB7E120C6CDADC0B4CAEBBC52E250292C87* L_0 = ((EmptyArray_1_tBD6329B52138BD56AB7289C5630507A8936151B7_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_mFB8A63D602BB6974D31E20300D9EB89C6FE7C278_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* Array_Empty_TisEventRecord_tEC2901C48A23F5AFE20A9E8D4F05F3799EA62BF2_mAEF379183FDCBD07C651D56777D4AA5A5C969A47_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		EventRecordU5BU5D_tB7CC04280192D9B2B4980F107F93ABBBE4E4DCA8* L_0 = ((EmptyArray_1_t77401F488985814E4B89684C1CCE07D59127CD6C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* Array_Empty_TisCallbackInfo_tAAF5B235D20558849D45390E3FFA7A0FF2183A08_mE74D581FD3F8DF5CFA50A5133DB5A6F7D16B99CD_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		CallbackInfoU5BU5D_tACA211A7E82CC25DD66260299AAA6FE5595E10E9* L_0 = ((EmptyArray_1_t7C7E840E7790E897ABDA15ED3B9C6BB1AD74E6AF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* Array_Empty_TisMetrics_t865BF0741490865117A79705F58784742D6F02B8_m396274F1DFAC369F038810A8DF3B16AF20CF1870_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		MetricsU5BU5D_t9F995E6CFAC030BF7842EF23702C7864487756F6* L_0 = ((EmptyArray_1_t025B7DCB8E2EBFB42E79BFFFACAAB7AC43B10C38_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* Array_Empty_TisUnboundAnchor_tB94D982DC1C3B6FF028AD53B3D1CEFF5EFBAAF71_m68042300D637F8905FBC692EB76AD9D6AA328FC1_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		UnboundAnchorU5BU5D_tD26280F385AC33CD05C79726E8B358B442EFB3C4* L_0 = ((EmptyArray_1_t4F92E580A823F3B65AED0BDEDBD334D85364071E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* Array_Empty_TisInteractorRootOverrideData_t704E41F84CC2D6340372471F7135DBDF86A4CD1F_m3932D60940E0444269ECCA8F71AAE83C700C1268_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		InteractorRootOverrideDataU5BU5D_tB11A48606410FD33E34FB1FA957A725947590C88* L_0 = ((EmptyArray_1_tC7D4F0912B526A8EA19DC3E6D82647231A867E45_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RBTreeEnumerator_get_Current_mCB9EE3BDCE8D688E0B6EA03B14E5D55ABF7E1325_gshared_inline (RBTreeEnumerator_tF257C6FDF2C10A1562F799244369D9CD12476115* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RBTreeEnumerator_get_Current_m948775C3F9A3EB7A07354D1870165849B3CBD1CD_gshared_inline (RBTreeEnumerator_t3C01D9560885FADFFCE590C8A9CE34A3BEA77A9A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RBTreeEnumerator_get_Current_m55E7496F0199640CB43772D3C21F0A10462AE734_gshared_inline (RBTreeEnumerator_tE61475E1E3545F58E0C1C1D72563D15F8461DEE4* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 1),4)), SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_K_t7B4CA93C15E2757B99FA8D99488CED98D2FAAC71);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_InUseCount_m8FA6467AC39561006A23E87B162BA73D585BADDA_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____inUseCount = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_PageId_m67122D79A6E353A965823DA629B96D3A79552519_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pageId;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreePage_set_PageId_m60FCE18172BAC6C1B1479026018D6422F2B30A70_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->____pageId = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t TreePage_get_InUseCount_mEA19EFEDD63621D601EFFFE57C3D3297FC357EA4_gshared_inline (TreePage_t3C1F7E0D55CA26D09BE28D15CDB2D9D6D0D180D7* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____inUseCount;
		return L_0;
	}
}
