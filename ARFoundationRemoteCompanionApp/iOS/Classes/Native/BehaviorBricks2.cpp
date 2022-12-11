#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// Pada1.BBCore.Framework.LeafNodeRegistry`2<Pada1.BBCore.Framework.PrimitiveAction,Pada1.BBCore.ActionAttribute>
struct LeafNodeRegistry_2_t6FE4A203FD28E0EAF77964269F636803F2B86F80;
// Pada1.BBCore.Framework.LeafNodeRegistry`2<Pada1.BBCore.Framework.PrimitiveCondition,Pada1.BBCore.ConditionAttribute>
struct LeafNodeRegistry_2_t73AC9B8332AF16883702A1854E02E13D3AF4F1C6;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOInParam>
struct List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOLocalParam>
struct List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONode>
struct List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeAndGuard>
struct List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeWithWeight>
struct List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A;
// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOOutParam>
struct List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467;
// System.Collections.Generic.List`1<Pada1.BBCore.Nodes.Node>
struct List_1_tCDAB0B3175A9141BC5927346AC2DE687F7FBA70D;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918;
// System.Collections.Generic.List`1<Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode>
struct List_1_t4FF37828344CF0868C6504A1FB09C69E268253CF;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// Pada1.BBCore.DirtySerializer.IOInParam[]
struct IOInParamU5BU5D_tE829C2B5B02575159DFA05C5D6A4F8802629E6D9;
// Pada1.BBCore.DirtySerializer.IOLocalParam[]
struct IOLocalParamU5BU5D_tB0FA960869203F795AF6CF31DE2A1B6A5A63D9FE;
// Pada1.BBCore.DirtySerializer.IONode[]
struct IONodeU5BU5D_t8BD5B7C4AEF7BD8E42AF4ED95C3D1BF6DD08EA5F;
// Pada1.BBCore.DirtySerializer.IONodeAndGuard[]
struct IONodeAndGuardU5BU5D_tB1DD417D12566D327A427D14066A6DBD25E4E746;
// Pada1.BBCore.DirtySerializer.IONodeWithWeight[]
struct IONodeWithWeightU5BU5D_tB2C617396655B366534480C25B05B026F5B8BF70;
// Pada1.BBCore.DirtySerializer.IOOutParam[]
struct IOOutParamU5BU5D_tBC55445AA2EAC8A85F3F1A15DFED2EF05B04C2AF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Pada1.BBCore.Nodes.ActionNode
struct ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1;
// Pada1.BBCore.Conditions.AlwaysTrue
struct AlwaysTrue_t03C5037B5B19BA636248466C5655DA55D6E2C6AD;
// Pada1.BBCore.Framework.BT
struct BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059;
// Pada1.BBCore.Framework.BasePrimitiveAction
struct BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Pada1.BBCore.Framework.Brick
struct Brick_t2275414C400266A23923E7B45F4984C9F09AC9D2;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// Pada1.BBCore.Nodes.CompositeNode
struct CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0;
// Pada1.BBCore.Framework.ConditionBase
struct ConditionBase_tFA80ACDF67E51F07CB83A5382C39868C1A9ACE82;
// Pada1.BBCore.Framework.ConditionEvalNode
struct ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04;
// Pada1.BBCore.Framework.ConditionNode
struct ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// Pada1.BBCore.Nodes.DecoratorGuard
struct DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E;
// Pada1.BBCore.Nodes.DecoratorNode
struct DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598;
// Pada1.BBCore.DirtySerializer.DirtySerializer
struct DirtySerializer_tBB975985E1A2AF52FBEE9ED67646700BAF59E63D;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// Pada1.BBCore.Actions.FailAction
struct FailAction_tD8B1308479B0955D1FF73EF11CBB32A2B975E890;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Pada1.BBCore.DirtySerializer.IOAction
struct IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40;
// Pada1.BBCore.DirtySerializer.IOBT
struct IOBT_t7D4191160D92057A6BEA759D627386360B9149EB;
// Pada1.BBCore.DirtySerializer.IOCompositeNode
struct IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976;
// Pada1.BBCore.DirtySerializer.IOConditionNode
struct IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D;
// Pada1.BBCore.DirtySerializer.IODecorator
struct IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773;
// Pada1.BBCore.DirtySerializer.IOGuardDecorator
struct IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836;
// Pada1.BBCore.DirtySerializer.IOInParam
struct IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8;
// Pada1.BBCore.DirtySerializer.IOLocalParam
struct IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7;
// Pada1.BBCore.DirtySerializer.IONode
struct IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67;
// Pada1.BBCore.DirtySerializer.IONodeAndGuard
struct IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1;
// Pada1.BBCore.DirtySerializer.IONodeWithWeight
struct IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F;
// Pada1.BBCore.DirtySerializer.IONot
struct IONot_t070A51629656596B9A31B43946F20D52F963307E;
// Pada1.BBCore.DirtySerializer.IOOutParam
struct IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0;
// Pada1.BBCore.DirtySerializer.IOParallel
struct IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615;
// Pada1.BBCore.DirtySerializer.IOPrioritySelector
struct IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3;
// Pada1.BBCore.DirtySerializer.IORandomCompositeNode
struct IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5;
// Pada1.BBCore.DirtySerializer.IORandomSelector
struct IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996;
// Pada1.BBCore.DirtySerializer.IORandomSequence
struct IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E;
// Pada1.BBCore.DirtySerializer.IORepeat
struct IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48;
// Pada1.BBCore.DirtySerializer.IOSelector
struct IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433;
// Pada1.BBCore.DirtySerializer.IOSequenceNode
struct IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE;
// Pada1.BBCore.DirtySerializer.IOSubbehavior
struct IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34;
// Pada1.BBCore.DirtySerializer.IOUntilFailed
struct IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538;
// Pada1.BBCore.DirtySerializer.IOUntilSuccess
struct IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65;
// Pada1.BBCore.DirtySerializer.IOWaitUntilCondition
struct IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591;
// Pada1.BBCore.InParamValue
struct InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB;
// Pada1.BBCore.InParamValues
struct InParamValues_tE739F4EC767480732AC11CC6B8567F1CE96D11BC;
// Pada1.BBCore.Framework.LeafNodeBD
struct LeafNodeBD_t855420812CEB062CA89F7EBEDD4DE90C1199C95D;
// Pada1.BBCore.LocalParamValue
struct LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85;
// Pada1.BBCore.LocalParamValues
struct LocalParamValues_t3F663775A23BBFA90E81886945A545EF2424245A;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// Pada1.BBCore.Nodes.Node
struct Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723;
// Pada1.BBCore.NodeInterpreter
struct NodeInterpreter_tD74A3C1B9DB1B11F340821129E8D5C81AB468FF4;
// Pada1.BBCore.Nodes.NotDecorator
struct NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A;
// Pada1.BBCore.OutParamValue
struct OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3;
// Pada1.BBCore.OutParamValues
struct OutParamValues_tC3DCCF95770840A9766103047DD44ECE40D57B5A;
// Pada1.BBCore.Nodes.ParallelNode
struct ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A;
// Pada1.BBCore.Framework.Internal.PrimitiveActionTask
struct PrimitiveActionTask_t9DA7DF84BC2402AAC0CEE7FC38D5AF9782F1129F;
// Pada1.BBCore.Actions.PrintMessageAction
struct PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870;
// Pada1.BBCore.Nodes.PrioritySelectorNode
struct PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// Pada1.BBCore.Nodes.RandomCompositeNode
struct RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644;
// Pada1.BBCore.Conditions.RandomCondition
struct RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E;
// Pada1.BBCore.Nodes.RandomSelectorNode
struct RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF;
// Pada1.BBCore.Nodes.RandomSequenceNode
struct RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280;
// Pada1.BBCore.Nodes.RepeatDecorator
struct RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14;
// Pada1.BBCore.Nodes.RepeatUntilFailed
struct RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C;
// Pada1.BBCore.Nodes.RepeatUntilSuccess
struct RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687;
// Pada1.BBCore.Nodes.SelectorNode
struct SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// Pada1.BBCore.Nodes.SequenceNode
struct SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// Pada1.BBCore.Nodes.SubbehaviorNode
struct SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A;
// Pada1.BBCore.Actions.SuccessAction
struct SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283;
// Pada1.BBCore.Actions.SuccessNode
struct SuccessNode_t315665C4A683C84B6585B5C52FD207514BC97285;
// System.Type
struct Type_t;
// System.Xml.Serialization.UnreferencedObjectEventHandler
struct UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Pada1.BBCore.Actions.WaitNUpdates
struct WaitNUpdates_t65FFF717CD9AD03E9543704BE0D904CBF9DB1AC6;
// Pada1.BBCore.Framework.WaitUntilCondition
struct WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90;
// System.Xml.Serialization.XmlAttributeEventHandler
struct XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65;
// System.Xml.Serialization.XmlElementEventHandler
struct XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3;
// System.Xml.Serialization.XmlMapping
struct XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97;
// System.Xml.Serialization.XmlNodeEventHandler
struct XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670;
// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF;

IL2CPP_EXTERN_C RuntimeClass* ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0ED2DBD6FF80D881C8DE68424DE2328FEED6988C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1A0E597EAB29D455760876E0CE429C68AF14E564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m57F376883DE096FCA00CCE4C0F61CAC310846F22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE17D63F17ACFFE4AA4B6343C6481138C6E7890D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mE866AAD5AE211520B8B5499A3FC16DD16276AA79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mED469B00DBD8B0CADA0EE0C84F033320A95D641B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1CF88B23D761FFFC476B3A8ABC21D61A14C8B97D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m24B0BC3BA3D842B98EAEFDAF4E6FC8D351094CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8750E3DB1D129E9607551F25E28BCC157775B532_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8CFA01B9DEA87BA1ABE8E5FD4F5B9DDF027B95A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCCF3D218DF1FFBEEB1177F540A8B5E2390D403A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDA67D250CC468467A99707FEF3287EE40A277CE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m69BB6AAFEC865EE8D96933FD5C17D95A7798C696_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m8710A8DCBE7B7D14CF01AC3EAB356A8719DA9225_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA3427016756F375FD3050A84C69439F1E637C691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA62A9D0DD75E4EF4C7FEC722859C559739993D84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB2C9E99682774E96C928C93E6A155B5A5664052A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD076FDDB4B01393325010B47506BE44D9C758E95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m254FE1348C7FFB9ECF939217851B1AA078CDADB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m31C95956F2637EDAF7D25255B78A944487492E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m4B288D21908577BAFDD675A8533B695AC8C6AABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m86AE047D7BD533EF269D9246990455B9057BAEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m9485670745A2F0D330A16A41ED12DF3D967A387B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mA48BEF07072BA14F4267F1D58CF62F30BCC1D3D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOBT_t7D4191160D92057A6BEA759D627386360B9149EB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOInParam>
struct List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IOInParamU5BU5D_tE829C2B5B02575159DFA05C5D6A4F8802629E6D9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IOInParamU5BU5D_tE829C2B5B02575159DFA05C5D6A4F8802629E6D9* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOLocalParam>
struct List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IOLocalParamU5BU5D_tB0FA960869203F795AF6CF31DE2A1B6A5A63D9FE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IOLocalParamU5BU5D_tB0FA960869203F795AF6CF31DE2A1B6A5A63D9FE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONode>
struct List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IONodeU5BU5D_t8BD5B7C4AEF7BD8E42AF4ED95C3D1BF6DD08EA5F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IONodeU5BU5D_t8BD5B7C4AEF7BD8E42AF4ED95C3D1BF6DD08EA5F* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeAndGuard>
struct List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IONodeAndGuardU5BU5D_tB1DD417D12566D327A427D14066A6DBD25E4E746* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IONodeAndGuardU5BU5D_tB1DD417D12566D327A427D14066A6DBD25E4E746* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeWithWeight>
struct List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IONodeWithWeightU5BU5D_tB2C617396655B366534480C25B05B026F5B8BF70* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IONodeWithWeightU5BU5D_tB2C617396655B366534480C25B05B026F5B8BF70* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOOutParam>
struct List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IOOutParamU5BU5D_tBC55445AA2EAC8A85F3F1A15DFED2EF05B04C2AF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IOOutParamU5BU5D_tBC55445AA2EAC8A85F3F1A15DFED2EF05B04C2AF* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// Pada1.BBCore.Framework.BasePrimitiveAction
struct BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97  : public RuntimeObject
{
	// Pada1.BBCore.NodeInterpreter Pada1.BBCore.Framework.BasePrimitiveAction::interpreter
	NodeInterpreter_tD74A3C1B9DB1B11F340821129E8D5C81AB468FF4* ___interpreter_0;
	// Pada1.BBCore.Framework.Internal.PrimitiveActionTask Pada1.BBCore.Framework.BasePrimitiveAction::helper
	PrimitiveActionTask_t9DA7DF84BC2402AAC0CEE7FC38D5AF9782F1129F* ___helper_1;
};

// Pada1.BBCore.Framework.ConditionBase
struct ConditionBase_tFA80ACDF67E51F07CB83A5382C39868C1A9ACE82  : public RuntimeObject
{
	// Pada1.BBCore.Framework.ConditionMonitorPolicy Pada1.BBCore.Framework.ConditionBase::policy
	int32_t ___policy_0;
	// Pada1.BBCore.NodeInterpreter Pada1.BBCore.Framework.ConditionBase::interpreter
	NodeInterpreter_tD74A3C1B9DB1B11F340821129E8D5C81AB468FF4* ___interpreter_1;
};

// Pada1.BBCore.DirtySerializer.DirtySerializer
struct DirtySerializer_tBB975985E1A2AF52FBEE9ED67646700BAF59E63D  : public RuntimeObject
{
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// Pada1.BBCore.DirtySerializer.IOInParam
struct IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8  : public RuntimeObject
{
	// System.String Pada1.BBCore.DirtySerializer.IOInParam::name
	String_t* ___name_0;
	// System.String Pada1.BBCore.DirtySerializer.IOInParam::type
	String_t* ___type_1;
	// System.String Pada1.BBCore.DirtySerializer.IOInParam::constValue
	String_t* ___constValue_2;
	// System.String Pada1.BBCore.DirtySerializer.IOInParam::entryName
	String_t* ___entryName_3;
};

// Pada1.BBCore.DirtySerializer.IOLocalParam
struct IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7  : public RuntimeObject
{
	// System.String Pada1.BBCore.DirtySerializer.IOLocalParam::name
	String_t* ___name_0;
	// System.String Pada1.BBCore.DirtySerializer.IOLocalParam::type
	String_t* ___type_1;
	// System.String Pada1.BBCore.DirtySerializer.IOLocalParam::constValue
	String_t* ___constValue_2;
	// System.String Pada1.BBCore.DirtySerializer.IOLocalParam::entryName
	String_t* ___entryName_3;
};

// Pada1.BBCore.DirtySerializer.IONode
struct IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67  : public RuntimeObject
{
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOInParam> Pada1.BBCore.DirtySerializer.IONode::inParam
	List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267* ___inParam_0;
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOOutParam> Pada1.BBCore.DirtySerializer.IONode::outParam
	List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467* ___outParam_1;
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOLocalParam> Pada1.BBCore.DirtySerializer.IONode::localParam
	List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5* ___localParam_2;
};

// Pada1.BBCore.DirtySerializer.IONodeAndGuard
struct IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1  : public RuntimeObject
{
	// Pada1.BBCore.DirtySerializer.IOConditionNode Pada1.BBCore.DirtySerializer.IONodeAndGuard::guard
	IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D* ___guard_0;
	// Pada1.BBCore.DirtySerializer.IONode Pada1.BBCore.DirtySerializer.IONodeAndGuard::node
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___node_1;
};

// Pada1.BBCore.DirtySerializer.IONodeWithWeight
struct IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F  : public RuntimeObject
{
	// System.Single Pada1.BBCore.DirtySerializer.IONodeWithWeight::weight
	float ___weight_0;
	// Pada1.BBCore.DirtySerializer.IONode Pada1.BBCore.DirtySerializer.IONodeWithWeight::child
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___child_1;
};

// Pada1.BBCore.DirtySerializer.IOOutParam
struct IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0  : public RuntimeObject
{
	// System.String Pada1.BBCore.DirtySerializer.IOOutParam::name
	String_t* ___name_0;
	// System.String Pada1.BBCore.DirtySerializer.IOOutParam::type
	String_t* ___type_1;
	// System.String Pada1.BBCore.DirtySerializer.IOOutParam::entryName
	String_t* ___entryName_2;
};

// Pada1.BBCore.Framework.LeafNodeBD
struct LeafNodeBD_t855420812CEB062CA89F7EBEDD4DE90C1199C95D  : public RuntimeObject
{
	// Pada1.BBCore.Framework.LeafNodeRegistry`2<Pada1.BBCore.Framework.PrimitiveAction,Pada1.BBCore.ActionAttribute> Pada1.BBCore.Framework.LeafNodeBD::actions
	LeafNodeRegistry_2_t6FE4A203FD28E0EAF77964269F636803F2B86F80* ___actions_0;
	// Pada1.BBCore.Framework.LeafNodeRegistry`2<Pada1.BBCore.Framework.PrimitiveCondition,Pada1.BBCore.ConditionAttribute> Pada1.BBCore.Framework.LeafNodeBD::conditions
	LeafNodeRegistry_2_t73AC9B8332AF16883702A1854E02E13D3AF4F1C6* ___conditions_1;
	// Pada1.BBCore.Framework.LeafNodeBD Pada1.BBCore.Framework.LeafNodeBD::nextRegistry
	LeafNodeBD_t855420812CEB062CA89F7EBEDD4DE90C1199C95D* ___nextRegistry_2;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Pada1.BBCore.Nodes.Node
struct Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723  : public RuntimeObject
{
	// System.Int32 Pada1.BBCore.Nodes.Node::id
	int32_t ___id_0;
	// Pada1.BBCore.InParamValues Pada1.BBCore.Nodes.Node::inParamValues
	InParamValues_tE739F4EC767480732AC11CC6B8567F1CE96D11BC* ___inParamValues_1;
	// Pada1.BBCore.OutParamValues Pada1.BBCore.Nodes.Node::outParamValues
	OutParamValues_tC3DCCF95770840A9766103047DD44ECE40D57B5A* ___outParamValues_2;
	// Pada1.BBCore.LocalParamValues Pada1.BBCore.Nodes.Node::localParamValues
	LocalParamValues_t3F663775A23BBFA90E81886945A545EF2424245A* ___localParamValues_3;
};

// Pada1.BBCore.ParamValue
struct ParamValue_t9ABBA5266A19B56A8B844CB66CFEE1C69C7CC17F  : public RuntimeObject
{
	// System.Type Pada1.BBCore.ParamValue::type
	Type_t* ___type_0;
	// System.String Pada1.BBCore.ParamValue::entryName
	String_t* ___entryName_1;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_3;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_4;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_5;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_7;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_6;
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

// System.Xml.Serialization.XmlSerializer
struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B  : public RuntimeObject
{
	// System.Boolean System.Xml.Serialization.XmlSerializer::customSerializer
	bool ___customSerializer_4;
	// System.Xml.Serialization.XmlMapping System.Xml.Serialization.XmlSerializer::typeMapping
	XmlMapping_t8D4AC99C7F2D51F3161C7E91E41E51097640CE97* ___typeMapping_5;
	// System.Xml.Serialization.XmlSerializer/SerializerData System.Xml.Serialization.XmlSerializer::serializerData
	SerializerData_t80E5CC9586C1782157CDE6EA3518737643CEDDDF* ___serializerData_6;
	// System.Xml.Serialization.UnreferencedObjectEventHandler System.Xml.Serialization.XmlSerializer::onUnreferencedObject
	UnreferencedObjectEventHandler_t7342B517610EE6E277FB060ED3C983CE68E0463A* ___onUnreferencedObject_8;
	// System.Xml.Serialization.XmlAttributeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownAttribute
	XmlAttributeEventHandler_tA9EE5C77A13FDC19DB5B3340F27245C620480F65* ___onUnknownAttribute_9;
	// System.Xml.Serialization.XmlElementEventHandler System.Xml.Serialization.XmlSerializer::onUnknownElement
	XmlElementEventHandler_tA1451D76D0A21C15B71AC8B380CC097DF71951F3* ___onUnknownElement_10;
	// System.Xml.Serialization.XmlNodeEventHandler System.Xml.Serialization.XmlSerializer::onUnknownNode
	XmlNodeEventHandler_t32503D9F2F1A9E9E183779774CEFC13425BF6670* ___onUnknownNode_11;
};

struct XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_StaticFields
{
	// System.Int32 System.Xml.Serialization.XmlSerializer::generationThreshold
	int32_t ___generationThreshold_0;
	// System.Boolean System.Xml.Serialization.XmlSerializer::backgroundGeneration
	bool ___backgroundGeneration_1;
	// System.Boolean System.Xml.Serialization.XmlSerializer::deleteTempFiles
	bool ___deleteTempFiles_2;
	// System.Boolean System.Xml.Serialization.XmlSerializer::generatorFallback
	bool ___generatorFallback_3;
	// System.Collections.Hashtable System.Xml.Serialization.XmlSerializer::serializerTypes
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___serializerTypes_7;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOInParam>
struct Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOLocalParam>
struct Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONode>
struct Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeAndGuard>
struct Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeWithWeight>
struct Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOOutParam>
struct Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* ____current_3;
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

// Pada1.BBCore.Nodes.ActionNode
struct ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// System.String Pada1.BBCore.Nodes.ActionNode::_actionName
	String_t* ____actionName_4;
};

// Pada1.BBCore.Conditions.AlwaysTrue
struct AlwaysTrue_t03C5037B5B19BA636248466C5655DA55D6E2C6AD  : public ConditionBase_tFA80ACDF67E51F07CB83A5382C39868C1A9ACE82
{
};

// Pada1.BBCore.Framework.Behavior
struct Behavior_tB44C762731A2BF5127E312BA3BD43BC1BF048270  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// System.Int32 Pada1.BBCore.Framework.Behavior::nextId
	int32_t ___nextId_4;
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

// Pada1.BBCore.Nodes.CompositeNode
struct CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// System.Collections.Generic.List`1<Pada1.BBCore.Nodes.Node> Pada1.BBCore.Nodes.CompositeNode::children
	List_1_tCDAB0B3175A9141BC5927346AC2DE687F7FBA70D* ___children_4;
};

// Pada1.BBCore.Framework.ConditionEvalNode
struct ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// Pada1.BBCore.Framework.ConditionMonitorPolicy Pada1.BBCore.Framework.ConditionEvalNode::policy
	int32_t ___policy_4;
	// System.String Pada1.BBCore.Framework.ConditionEvalNode::conditionName
	String_t* ___conditionName_5;
};

// Pada1.BBCore.Framework.ConditionNode
struct ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// Pada1.BBCore.Framework.ConditionEvalNode Pada1.BBCore.Framework.ConditionNode::condition
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___condition_4;
};

// Pada1.BBCore.Nodes.DecoratorNode
struct DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.DecoratorNode::child
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___child_4;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Pada1.BBCore.Actions.FailAction
struct FailAction_tD8B1308479B0955D1FF73EF11CBB32A2B975E890  : public BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97
{
};

// Pada1.BBCore.DirtySerializer.IOAction
struct IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.String Pada1.BBCore.DirtySerializer.IOAction::actionName
	String_t* ___actionName_3;
};

// Pada1.BBCore.DirtySerializer.IOBT
struct IOBT_t7D4191160D92057A6BEA759D627386360B9149EB  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// Pada1.BBCore.DirtySerializer.IONode Pada1.BBCore.DirtySerializer.IOBT::root
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___root_3;
};

// Pada1.BBCore.DirtySerializer.IOCompositeNode
struct IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONode> Pada1.BBCore.DirtySerializer.IOCompositeNode::children
	List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F* ___children_3;
};

// Pada1.BBCore.DirtySerializer.IOConditionNode
struct IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.String Pada1.BBCore.DirtySerializer.IOConditionNode::condition
	String_t* ___condition_3;
};

// Pada1.BBCore.DirtySerializer.IODecorator
struct IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// Pada1.BBCore.DirtySerializer.IONode Pada1.BBCore.DirtySerializer.IODecorator::child
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___child_3;
};

// Pada1.BBCore.DirtySerializer.IOGuardDecorator
struct IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.String Pada1.BBCore.DirtySerializer.IOGuardDecorator::condition
	String_t* ___condition_3;
	// Pada1.BBCore.DirtySerializer.IONode Pada1.BBCore.DirtySerializer.IOGuardDecorator::child
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___child_4;
};

// Pada1.BBCore.DirtySerializer.IOPrioritySelector
struct IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeAndGuard> Pada1.BBCore.DirtySerializer.IOPrioritySelector::children
	List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1* ___children_3;
};

// Pada1.BBCore.DirtySerializer.IORandomCompositeNode
struct IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeWithWeight> Pada1.BBCore.DirtySerializer.IORandomCompositeNode::children
	List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A* ___children_3;
};

// Pada1.BBCore.DirtySerializer.IOSubbehavior
struct IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.String Pada1.BBCore.DirtySerializer.IOSubbehavior::behaviorName
	String_t* ___behaviorName_3;
};

// Pada1.BBCore.DirtySerializer.IOWaitUntilCondition
struct IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591  : public IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67
{
	// System.String Pada1.BBCore.DirtySerializer.IOWaitUntilCondition::condition
	String_t* ___condition_3;
	// System.Boolean Pada1.BBCore.DirtySerializer.IOWaitUntilCondition::condValue
	bool ___condValue_4;
};

// Pada1.BBCore.InParamValue
struct InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB  : public ParamValue_t9ABBA5266A19B56A8B844CB66CFEE1C69C7CC17F
{
	// System.Boolean Pada1.BBCore.InParamValue::_isBlackboard
	bool ____isBlackboard_2;
	// System.Object Pada1.BBCore.InParamValue::constValue
	RuntimeObject* ___constValue_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// Pada1.BBCore.LocalParamValue
struct LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85  : public ParamValue_t9ABBA5266A19B56A8B844CB66CFEE1C69C7CC17F
{
	// System.Boolean Pada1.BBCore.LocalParamValue::_isBlackboard
	bool ____isBlackboard_2;
	// System.Object Pada1.BBCore.LocalParamValue::constValue
	RuntimeObject* ___constValue_3;
};

// Pada1.BBCore.OutParamValue
struct OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3  : public ParamValue_t9ABBA5266A19B56A8B844CB66CFEE1C69C7CC17F
{
};

// Pada1.BBCore.Actions.PrintMessageAction
struct PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870  : public BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97
{
	// System.String Pada1.BBCore.Actions.PrintMessageAction::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_2;
};

// Pada1.BBCore.Nodes.PrioritySelectorNode
struct PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// System.Collections.Generic.List`1<Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode> Pada1.BBCore.Nodes.PrioritySelectorNode::children
	List_1_t4FF37828344CF0868C6504A1FB09C69E268253CF* ___children_4;
};

// Pada1.BBCore.Conditions.RandomCondition
struct RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E  : public ConditionBase_tFA80ACDF67E51F07CB83A5382C39868C1A9ACE82
{
	// System.Single Pada1.BBCore.Conditions.RandomCondition::trueProb
	float ___trueProb_2;
};

struct RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_StaticFields
{
	// System.Random Pada1.BBCore.Conditions.RandomCondition::r
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___r_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_3;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_4;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// Pada1.BBCore.Nodes.SubbehaviorNode
struct SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// System.String Pada1.BBCore.Nodes.SubbehaviorNode::_guid
	String_t* ____guid_4;
};

// Pada1.BBCore.Actions.SuccessAction
struct SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283  : public BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97
{
};

// Pada1.BBCore.Actions.SuccessNode
struct SuccessNode_t315665C4A683C84B6585B5C52FD207514BC97285  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
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

// Pada1.BBCore.Actions.WaitNUpdates
struct WaitNUpdates_t65FFF717CD9AD03E9543704BE0D904CBF9DB1AC6  : public BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97
{
	// System.Int32 Pada1.BBCore.Actions.WaitNUpdates::remainder
	int32_t ___remainder_2;
};

// Pada1.BBCore.Framework.WaitUntilCondition
struct WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90  : public Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723
{
	// Pada1.BBCore.Framework.ConditionEvalNode Pada1.BBCore.Framework.WaitUntilCondition::condition
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___condition_4;
	// Pada1.BBCore.Nodes.Node Pada1.BBCore.Framework.WaitUntilCondition::workerNode
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___workerNode_5;
	// System.Boolean Pada1.BBCore.Framework.WaitUntilCondition::waitValue
	bool ___waitValue_6;
};

// Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode
struct GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5 
{
	// Pada1.BBCore.Framework.ConditionEvalNode Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode::guard
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___guard_0;
	// Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode::node
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___node_1;
};
// Native definition for P/Invoke marshalling of Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode
struct GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5_marshaled_pinvoke
{
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___guard_0;
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___node_1;
};
// Native definition for COM marshalling of Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode
struct GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5_marshaled_com
{
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___guard_0;
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___node_1;
};

// Pada1.BBCore.Framework.BT
struct BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059  : public Behavior_tB44C762731A2BF5127E312BA3BD43BC1BF048270
{
	// System.String Pada1.BBCore.Framework.BT::_guid
	String_t* ____guid_5;
	// Pada1.BBCore.Nodes.Node Pada1.BBCore.Framework.BT::_root
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ____root_6;
};

// Pada1.BBCore.Nodes.DecoratorGuard
struct DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E  : public DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598
{
	// Pada1.BBCore.Framework.ConditionEvalNode Pada1.BBCore.Nodes.DecoratorGuard::guard
	ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___guard_5;
};

// Pada1.BBCore.DirtySerializer.IONot
struct IONot_t070A51629656596B9A31B43946F20D52F963307E  : public IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773
{
};

// Pada1.BBCore.DirtySerializer.IOParallel
struct IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615  : public IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976
{
};

// Pada1.BBCore.DirtySerializer.IORandomSelector
struct IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996  : public IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5
{
};

// Pada1.BBCore.DirtySerializer.IORandomSequence
struct IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E  : public IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5
{
};

// Pada1.BBCore.DirtySerializer.IORepeat
struct IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48  : public IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773
{
};

// Pada1.BBCore.DirtySerializer.IOSelector
struct IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433  : public IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976
{
};

// Pada1.BBCore.DirtySerializer.IOSequenceNode
struct IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE  : public IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976
{
};

// Pada1.BBCore.DirtySerializer.IOUntilFailed
struct IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538  : public IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773
{
};

// Pada1.BBCore.DirtySerializer.IOUntilSuccess
struct IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65  : public IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773
{
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_5;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_6;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_7;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_8;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_9;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_10;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_11;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_12;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_13;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_14;
};

// Pada1.BBCore.Nodes.NotDecorator
struct NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A  : public DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598
{
};

// Pada1.BBCore.Nodes.ParallelNode
struct ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A  : public CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0
{
	// Pada1.BBCore.Nodes.ParallelNode/Policy Pada1.BBCore.Nodes.ParallelNode::_policy
	int32_t ____policy_6;
};

// Pada1.BBCore.Nodes.RandomCompositeNode
struct RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644  : public CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0
{
	// System.Collections.Generic.List`1<System.Single> Pada1.BBCore.Nodes.RandomCompositeNode::probs
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* ___probs_5;
};

// Pada1.BBCore.Nodes.RepeatDecorator
struct RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14  : public DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598
{
	// System.Int32 Pada1.BBCore.Nodes.RepeatDecorator::nLoops
	int32_t ___nLoops_7;
	// Pada1.BBCore.Nodes.RepeatDecorator/Policy Pada1.BBCore.Nodes.RepeatDecorator::policy
	int32_t ___policy_8;
};

// Pada1.BBCore.Nodes.RepeatUntilFailed
struct RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C  : public DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598
{
};

// Pada1.BBCore.Nodes.RepeatUntilSuccess
struct RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687  : public DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598
{
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Pada1.BBCore.Nodes.SelectorNode
struct SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3  : public CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0
{
};

// Pada1.BBCore.Nodes.SequenceNode
struct SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8  : public CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0
{
};

// Pada1.BBCore.Nodes.RandomSelectorNode
struct RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF  : public RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644
{
};

// Pada1.BBCore.Nodes.RandomSequenceNode
struct RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280  : public RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;

// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.DirtySerializer::LoadNode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* DirtySerializer_LoadNode_m1F54926F0C404CF9477A0C90DEE6566B413F651B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Type[] Pada1.BBCore.DirtySerializer.DirtySerializer::tipos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* DirtySerializer_tipos_mB81E784857CBE1178D38BCE781290F809101D9FF (const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::.ctor(System.Type,System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer__ctor_m9DAD0B7909BC89F033282B698AFC1A5298F0A369 (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, Type_t* ___type0, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___extraTypes1, const RuntimeMethod* method) ;
// System.Object System.Xml.Serialization.XmlSerializer::Deserialize(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlSerializer_Deserialize_m1050D3D61F5293AB7F13561762FC511CCD3BCFDD (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Void System.Xml.Serialization.XmlSerializer::Serialize(System.IO.Stream,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlSerializer_Serialize_m667B88B55AC152B4790F1A3C11F62F5F262624DA (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, RuntimeObject* ___o1, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.DirtySerializer.IONode::fill(Pada1.BBCore.Nodes.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___n0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.Node::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Node__ctor_m1AA2F9FDC29A81B5943EB80672B99D14711373F2 (Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOInParam>::GetEnumerator()
inline Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC List_1_GetEnumerator_m254FE1348C7FFB9ECF939217851B1AA078CDADB1 (List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC (*) (List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOInParam>::Dispose()
inline void Enumerator_Dispose_m0ED2DBD6FF80D881C8DE68424DE2328FEED6988C (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOInParam>::get_Current()
inline IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* Enumerator_get_Current_m69BB6AAFEC865EE8D96933FD5C17D95A7798C696_inline (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC* __this, const RuntimeMethod* method)
{
	return ((  IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* (*) (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Pada1.BBCore.InParamValue::.ctor(System.String,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InParamValue__ctor_m287959BEB2BC5F9E88CC519B6F8C8CEEC2DF333F (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* __this, String_t* ___blackboardEntryName0, Type_t* ___expectedType1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Boolean::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.InParamValue::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InParamValue__ctor_m5F5FF2F3E29CE6CD0056AD1E1E2C7110AB179E5B (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* __this, Type_t* ___type0, RuntimeObject* ___constValue1, const RuntimeMethod* method) ;
// System.Single System.Single::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOInParam>::MoveNext()
inline bool Enumerator_MoveNext_mDA67D250CC468467A99707FEF3287EE40A277CE6 (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOOutParam>::GetEnumerator()
inline Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771 List_1_GetEnumerator_m31C95956F2637EDAF7D25255B78A944487492E0D (List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771 (*) (List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOOutParam>::Dispose()
inline void Enumerator_Dispose_m1A0E597EAB29D455760876E0CE429C68AF14E564 (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOOutParam>::get_Current()
inline IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* Enumerator_get_Current_m8710A8DCBE7B7D14CF01AC3EAB356A8719DA9225_inline (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771* __this, const RuntimeMethod* method)
{
	return ((  IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* (*) (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Pada1.BBCore.OutParamValue::.ctor(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutParamValue__ctor_m36C86CEAE0BEA753E492B8588F5243F8D244C8E2 (OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3* __this, String_t* ___blackboardEntryName0, Type_t* ___expectedType1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOOutParam>::MoveNext()
inline bool Enumerator_MoveNext_m1CF88B23D761FFFC476B3A8ABC21D61A14C8B97D (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IOLocalParam>::GetEnumerator()
inline Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0 List_1_GetEnumerator_m9485670745A2F0D330A16A41ED12DF3D967A387B (List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0 (*) (List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOLocalParam>::Dispose()
inline void Enumerator_Dispose_mE17D63F17ACFFE4AA4B6343C6481138C6E7890D7 (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOLocalParam>::get_Current()
inline IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* Enumerator_get_Current_mA62A9D0DD75E4EF4C7FEC722859C559739993D84_inline (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0* __this, const RuntimeMethod* method)
{
	return ((  IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* (*) (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Pada1.BBCore.LocalParamValue::.ctor(System.String,System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalParamValue__ctor_m61EF5582520297D885B5B8959C422ED8AF762932 (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* __this, String_t* ___blackboardEntryName0, Type_t* ___expectedType1, RuntimeObject* ___defaultValue2, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.LocalParamValue::.ctor(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocalParamValue__ctor_m3F6746BFC435996FB05C3CD2341B6D2B9DC78F5E (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* __this, Type_t* ___type0, RuntimeObject* ___constValue1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IOLocalParam>::MoveNext()
inline bool Enumerator_MoveNext_m24B0BC3BA3D842B98EAEFDAF4E6FC8D351094CA7 (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Pada1.BBCore.Framework.BT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BT__ctor_mBB2066F39F793CA96DEC6BA6D2E6DDE8AF592DA1 (BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.DirtySerializer.IONode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.SubbehaviorNode::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubbehaviorNode__ctor_mDE288A06950716FFB78B358F796504C7B476B6A0 (SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A* __this, String_t* ___subbehaviorId0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONode>::GetEnumerator()
inline Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59 List_1_GetEnumerator_m86AE047D7BD533EF269D9246990455B9057BAEC2 (List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59 (*) (List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONode>::Dispose()
inline void Enumerator_Dispose_mED469B00DBD8B0CADA0EE0C84F033320A95D641B (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONode>::get_Current()
inline IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* Enumerator_get_Current_mB2C9E99682774E96C928C93E6A155B5A5664052A_inline (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59* __this, const RuntimeMethod* method)
{
	return ((  IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* (*) (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONode>::MoveNext()
inline bool Enumerator_MoveNext_mCCF3D218DF1FFBEEB1177F540A8B5E2390D403A9 (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeWithWeight>::GetEnumerator()
inline Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE List_1_GetEnumerator_mA48BEF07072BA14F4267F1D58CF62F30BCC1D3D1 (List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE (*) (List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeWithWeight>::Dispose()
inline void Enumerator_Dispose_m57F376883DE096FCA00CCE4C0F61CAC310846F22 (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeWithWeight>::get_Current()
inline IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* Enumerator_get_Current_mD076FDDB4B01393325010B47506BE44D9C758E95_inline (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE* __this, const RuntimeMethod* method)
{
	return ((  IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* (*) (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void Pada1.BBCore.Nodes.RandomCompositeNode::addChild(Pada1.BBCore.Nodes.Node,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomCompositeNode_addChild_m9968D03FDA75EC847B1A94DD981F6C30F19356B0 (RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* __this, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___c0, float ___p1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeWithWeight>::MoveNext()
inline bool Enumerator_MoveNext_m8CFA01B9DEA87BA1ABE8E5FD4F5B9DDF027B95A6 (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Pada1.BBCore.Nodes.SequenceNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SequenceNode__ctor_mCA7B4978B20F6C0DAA0855442908D75C0EE9C838 (SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.DirtySerializer.IOCompositeNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOCompositeNode__ctor_m72BDB836681D468F4CD2BE13382F9AEC09AD1639 (IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.ParallelNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelNode__ctor_m8220FFB910FBBFB72532FDE2242FEFD53FB47A3F (ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.SelectorNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectorNode__ctor_mC472BDC055C412C0F909A2F2F5F84E20B8D669E7 (SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.RandomSequenceNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSequenceNode__ctor_m70BB4C6852C34CD9A487B7F7630050420D87D169 (RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.DirtySerializer.IORandomCompositeNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IORandomCompositeNode__ctor_mAA484B86E53295FB749CCCC13263D79B08E64736 (IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.RandomSelectorNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomSelectorNode__ctor_m6D41EBE699905344DE525DA4D6BCDC9A13A693EB (RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.DecoratorNode::setChild(Pada1.BBCore.Nodes.Node)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DecoratorNode_setChild_mDEE9C3FEF70C61D22EA686C706C2BA5AE147875D_inline (DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* __this, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___n0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.NotDecorator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotDecorator__ctor_m7B960E8D6C067DC26E0A72F8381C3C18AAF9EB4F (NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.DirtySerializer.IODecorator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6 (IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.RepeatDecorator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatDecorator__ctor_m4D02BF89F4555AFE2235F0212FAC96CF4340FD45 (RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.RepeatUntilFailed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatUntilFailed__ctor_m848582224F773A2EE8A12823DC6AF3E8500F7BB1 (RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.RepeatUntilSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RepeatUntilSuccess__ctor_mC4758358D2AC16DD179970CA1399CB4292A5D630 (RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.ActionNode::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionNode__ctor_m506600E52642360FFD7B25CA6573819E2EDD00F7 (ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1* __this, String_t* ___actionName0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Framework.ConditionEvalNode::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionEvalNode__ctor_m2174B6A164749315F80793024DBA8AF46E2E216F (ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* __this, String_t* ___conditionName0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Framework.ConditionNode::.ctor(Pada1.BBCore.Framework.ConditionEvalNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionNode__ctor_m6FE897E62830F85F40E9F902E1492AB054F3ED99 (ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C* __this, ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___condition0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Framework.WaitUntilCondition::.ctor(Pada1.BBCore.Framework.ConditionEvalNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitUntilCondition__ctor_m6BCF1BEB14365B864722AABD73B55F6E4361A4C1 (WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90* __this, ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___condition0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.DecoratorGuard::.ctor(Pada1.BBCore.Framework.ConditionEvalNode,Pada1.BBCore.Nodes.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecoratorGuard__ctor_m85EA25A5C1BFEB2807DBDA8957054C1F1366AE0C (DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E* __this, ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* ___guard0, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___child1, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Nodes.PrioritySelectorNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrioritySelectorNode__ctor_m0C948ADD54299B60CEF45D9C7FF02F6EE5C09529 (PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Pada1.BBCore.DirtySerializer.IONodeAndGuard>::GetEnumerator()
inline Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578 List_1_GetEnumerator_m4B288D21908577BAFDD675A8533B695AC8C6AABC (List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578 (*) (List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeAndGuard>::Dispose()
inline void Enumerator_Dispose_mE866AAD5AE211520B8B5499A3FC16DD16276AA79 (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeAndGuard>::get_Current()
inline IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* Enumerator_get_Current_mA3427016756F375FD3050A84C69439F1E637C691_inline (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578* __this, const RuntimeMethod* method)
{
	return ((  IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* (*) (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pada1.BBCore.DirtySerializer.IONodeAndGuard>::MoveNext()
inline bool Enumerator_MoveNext_m8750E3DB1D129E9607551F25E28BCC157775B532 (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void Pada1.BBCore.Framework.ConditionBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionBase__ctor_mC22033356AFAE34A9767BBD92E5947320870CC65 (ConditionBase_tFA80ACDF67E51F07CB83A5382C39868C1A9ACE82* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Framework.BasePrimitiveAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74 (BasePrimitiveAction_t02E5DBE6E20CBFCF83D3B91E91089DE9A3274F97* __this, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Actions.PrintMessageAction::set_Message(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PrintMessageAction_set_Message_mC782FDED5BCB348FDBC904209F88D3333C3A7FB0_inline (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Pada1.BBCore.Actions.PrintMessageAction::get_Message()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PrintMessageAction_get_Message_mA751528F20D028D7E7DFA078E1CD2D600F0BFE42_inline (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, const RuntimeMethod* method) ;
// System.Void System.Console::WriteLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Pada1.BBCore.Actions.SuccessAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuccessAction__ctor_mA4F297514C708104206E60ED1A9C25BBBB900C32 (SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.DirtySerializer::LoadNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* DirtySerializer_LoadNode_m0A50675FAB28B5495BE615BD7D46A9FD95768154 (String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_0 = NULL;
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* V_1 = NULL;
	String_t* G_B2_0 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* G_B1_1 = NULL;
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___text0;
		String_t* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_000f;
		}
	}
	{
		G_B2_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B2_1 = G_B1_1;
	}

IL_000f:
	{
		NullCheck(G_B2_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(17 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, G_B2_1, G_B2_0);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_4 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_4, L_3, NULL);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0023:
			{// begin finally (depth: 1)
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_5 = V_0;
					if (!L_5)
					{
						goto IL_002c;
					}
				}
				{
					Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_002c:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_7 = V_0;
			Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_8;
			L_8 = DirtySerializer_LoadNode_m1F54926F0C404CF9477A0C90DEE6566B413F651B(L_7, NULL);
			V_1 = L_8;
			goto IL_002d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002d:
	{
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_9 = V_1;
		return L_9;
	}
}
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.DirtySerializer::LoadNode(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* DirtySerializer_LoadNode_m1F54926F0C404CF9477A0C90DEE6566B413F651B (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___inputStream0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = DirtySerializer_tipos_mB81E784857CBE1178D38BCE781290F809101D9FF(NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_3 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlSerializer__ctor_m9DAD0B7909BC89F033282B698AFC1A5298F0A369(L_3, L_1, L_2, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___inputStream0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = XmlSerializer_Deserialize_m1050D3D61F5293AB7F13561762FC511CCD3BCFDD(L_3, L_4, NULL);
		NullCheck(((IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67*)CastclassClass((RuntimeObject*)L_5, IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_il2cpp_TypeInfo_var)));
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_6;
		L_6 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, ((IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67*)CastclassClass((RuntimeObject*)L_5, IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_il2cpp_TypeInfo_var)));
		return L_6;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.DirtySerializer::SaveNode(System.IO.Stream,Pada1.BBCore.DirtySerializer.IONode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirtySerializer_SaveNode_m1C5EF54237A88C1EB085DAB3F7C7D346E1DB353D (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___outputStream0, IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* ___nodo1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_2;
		L_2 = DirtySerializer_tipos_mB81E784857CBE1178D38BCE781290F809101D9FF(NULL);
		XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B* L_3 = (XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B*)il2cpp_codegen_object_new(XmlSerializer_t08AD90724C0D9D82D4CC23611E5FBDEE50B2867B_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlSerializer__ctor_m9DAD0B7909BC89F033282B698AFC1A5298F0A369(L_3, L_1, L_2, NULL);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_4 = ___outputStream0;
		IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_5 = ___nodo1;
		NullCheck(L_3);
		XmlSerializer_Serialize_m667B88B55AC152B4790F1A3C11F62F5F262624DA(L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Type[] Pada1.BBCore.DirtySerializer.DirtySerializer::tipos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* DirtySerializer_tipos_mB81E784857CBE1178D38BCE781290F809101D9FF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOBT_t7D4191160D92057A6BEA759D627386360B9149EB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_0 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_1 = L_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_4 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_6);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_6);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_4;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615_0_0_0_var) };
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t*)L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(4), (Type_t*)L_15);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_16 = L_13;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_18);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (Type_t*)L_18);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = L_16;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(6), (Type_t*)L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(7), (Type_t*)L_24);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_25 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(8), (Type_t*)L_27);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28 = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (Type_t*)L_30);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_31 = L_28;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433_0_0_0_var) };
		Type_t* L_33;
		L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (Type_t*)L_33);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_31;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (Type_t*)L_36);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = L_34;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (Type_t*)L_39);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_37;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (Type_t*)L_42);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_43 = L_40;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (IOBT_t7D4191160D92057A6BEA759D627386360B9149EB_0_0_0_var) };
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (Type_t*)L_45);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_46 = L_43;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34_0_0_0_var) };
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (Type_t*)L_48);
		return L_46;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.DirtySerializer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirtySerializer__ctor_mBA8A72817270C07ECA6A34335C39AA275D7CA492 (DirtySerializer_tBB975985E1A2AF52FBEE9ED67646700BAF59E63D* __this, const RuntimeMethod* method) 
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
// System.Void Pada1.BBCore.DirtySerializer.IOInParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOInParam__ctor_m7829EC66A76112F8C3EE5C4ECEE358B4EB79EBB4 (IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* __this, const RuntimeMethod* method) 
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
// System.Void Pada1.BBCore.DirtySerializer.IOOutParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOOutParam__ctor_m31C34DA9EDD652604296B94B0DEC83E93C5D6ACA (IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* __this, const RuntimeMethod* method) 
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
// System.Void Pada1.BBCore.DirtySerializer.IOLocalParam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOLocalParam__ctor_m87B41524185D6F45B1B9A260745B161B0D06C145 (IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* __this, const RuntimeMethod* method) 
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IONode_build_mF84DB016BDF9C78CC72C67CE79A59E09D02CEBF5 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, const RuntimeMethod* method) 
{
	Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* V_0 = NULL;
	{
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_0;
		L_0 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(5 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::createNode() */, __this);
		V_0 = L_0;
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_1 = V_0;
		IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7(__this, L_1, NULL);
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_2 = V_0;
		return L_2;
	}
}
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IONode_createNode_m317D2FF75CA8F902D93F120093A56871D31E7730 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_0 = (Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*)il2cpp_codegen_object_new(Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Node__ctor_m1AA2F9FDC29A81B5943EB80672B99D14711373F2(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IONode::fill(Pada1.BBCore.Nodes.Node)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m0ED2DBD6FF80D881C8DE68424DE2328FEED6988C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1A0E597EAB29D455760876E0CE429C68AF14E564_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE17D63F17ACFFE4AA4B6343C6481138C6E7890D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1CF88B23D761FFFC476B3A8ABC21D61A14C8B97D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m24B0BC3BA3D842B98EAEFDAF4E6FC8D351094CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDA67D250CC468467A99707FEF3287EE40A277CE6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m69BB6AAFEC865EE8D96933FD5C17D95A7798C696_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m8710A8DCBE7B7D14CF01AC3EAB356A8719DA9225_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA62A9D0DD75E4EF4C7FEC722859C559739993D84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m254FE1348C7FFB9ECF939217851B1AA078CDADB1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m31C95956F2637EDAF7D25255B78A944487492E0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m9485670745A2F0D330A16A41ED12DF3D967A387B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* V_1 = NULL;
	InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* V_2 = NULL;
	Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771 V_3;
	memset((&V_3), 0, sizeof(V_3));
	IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* V_4 = NULL;
	Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0 V_5;
	memset((&V_5), 0, sizeof(V_5));
	IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* V_6 = NULL;
	LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* V_7 = NULL;
	{
		List_1_t51EEE6A4A94F63976334D26C20B83F55E11AC267* L_0 = __this->___inParam_0;
		NullCheck(L_0);
		Enumerator_t5B9F5492ED360AD5B69BCA68D802179199BE42BC L_1;
		L_1 = List_1_GetEnumerator_m254FE1348C7FFB9ECF939217851B1AA078CDADB1(L_0, List_1_GetEnumerator_m254FE1348C7FFB9ECF939217851B1AA078CDADB1_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_015a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m0ED2DBD6FF80D881C8DE68424DE2328FEED6988C((&V_0), Enumerator_Dispose_m0ED2DBD6FF80D881C8DE68424DE2328FEED6988C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_014c_1;
			}

IL_0011_1:
			{
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_2;
				L_2 = Enumerator_get_Current_m69BB6AAFEC865EE8D96933FD5C17D95A7798C696_inline((&V_0), Enumerator_get_Current_m69BB6AAFEC865EE8D96933FD5C17D95A7798C696_RuntimeMethod_var);
				V_1 = L_2;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_3 = V_1;
				NullCheck(L_3);
				String_t* L_4 = L_3->___entryName_3;
				if (!L_4)
				{
					goto IL_004a_1;
				}
			}
			{
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_5 = ___n0;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_6 = V_1;
				NullCheck(L_6);
				String_t* L_7 = L_6->___name_0;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_8 = V_1;
				NullCheck(L_8);
				String_t* L_9 = L_8->___entryName_3;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_10 = V_1;
				NullCheck(L_10);
				String_t* L_11 = L_10->___type_1;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_12;
				L_12 = il2cpp_codegen_get_type(L_11, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7_RuntimeMethod_var);
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_13 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)il2cpp_codegen_object_new(InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
				NullCheck(L_13);
				InParamValue__ctor_m287959BEB2BC5F9E88CC519B6F8C8CEEC2DF333F(L_13, L_9, L_12, NULL, NULL);
				NullCheck(L_5);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_14;
				L_14 = VirtualFuncInvoker2< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*, String_t*, InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.Node::addInParamValue(System.String,Pada1.BBCore.InParamValue) */, L_5, L_7, L_13);
				goto IL_014c_1;
			}

IL_004a_1:
			{
				V_2 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)NULL;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_15 = V_1;
				NullCheck(L_15);
				String_t* L_16 = L_15->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_18;
				L_18 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_17, NULL);
				NullCheck(L_18);
				String_t* L_19;
				L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_16, L_19, NULL);
				if (!L_20)
				{
					goto IL_008d_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_21 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_22;
				L_22 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_21, NULL);
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_23 = V_1;
				NullCheck(L_23);
				String_t* L_24 = L_23->___constValue_2;
				il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
				bool L_25;
				L_25 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_24, NULL);
				bool L_26 = L_25;
				RuntimeObject* L_27 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_26);
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_28 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)il2cpp_codegen_object_new(InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
				NullCheck(L_28);
				InParamValue__ctor_m5F5FF2F3E29CE6CD0056AD1E1E2C7110AB179E5B(L_28, L_22, L_27, NULL);
				V_2 = L_28;
				goto IL_013b_1;
			}

IL_008d_1:
			{
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_29 = V_1;
				NullCheck(L_29);
				String_t* L_30 = L_29->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_31, NULL);
				NullCheck(L_32);
				String_t* L_33;
				L_33 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_32);
				bool L_34;
				L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_30, L_33, NULL);
				if (!L_34)
				{
					goto IL_00cb_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_36;
				L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_37 = V_1;
				NullCheck(L_37);
				String_t* L_38 = L_37->___constValue_2;
				float L_39;
				L_39 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_38, NULL);
				float L_40 = L_39;
				RuntimeObject* L_41 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_40);
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_42 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)il2cpp_codegen_object_new(InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
				NullCheck(L_42);
				InParamValue__ctor_m5F5FF2F3E29CE6CD0056AD1E1E2C7110AB179E5B(L_42, L_36, L_41, NULL);
				V_2 = L_42;
				goto IL_013b_1;
			}

IL_00cb_1:
			{
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_43 = V_1;
				NullCheck(L_43);
				String_t* L_44 = L_43->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_46;
				L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
				NullCheck(L_46);
				String_t* L_47;
				L_47 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_46);
				bool L_48;
				L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, L_47, NULL);
				if (!L_48)
				{
					goto IL_0109_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_50;
				L_50 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_49, NULL);
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_51 = V_1;
				NullCheck(L_51);
				String_t* L_52 = L_51->___constValue_2;
				int32_t L_53;
				L_53 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_52, NULL);
				int32_t L_54 = L_53;
				RuntimeObject* L_55 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_54);
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_56 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)il2cpp_codegen_object_new(InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
				NullCheck(L_56);
				InParamValue__ctor_m5F5FF2F3E29CE6CD0056AD1E1E2C7110AB179E5B(L_56, L_50, L_55, NULL);
				V_2 = L_56;
				goto IL_013b_1;
			}

IL_0109_1:
			{
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_57 = V_1;
				NullCheck(L_57);
				String_t* L_58 = L_57->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_59 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_60;
				L_60 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_59, NULL);
				NullCheck(L_60);
				String_t* L_61;
				L_61 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_60);
				bool L_62;
				L_62 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_58, L_61, NULL);
				if (!L_62)
				{
					goto IL_013b_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_63 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_64;
				L_64 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_63, NULL);
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_65 = V_1;
				NullCheck(L_65);
				String_t* L_66 = L_65->___constValue_2;
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_67 = (InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB*)il2cpp_codegen_object_new(InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB_il2cpp_TypeInfo_var);
				NullCheck(L_67);
				InParamValue__ctor_m5F5FF2F3E29CE6CD0056AD1E1E2C7110AB179E5B(L_67, L_64, L_66, NULL);
				V_2 = L_67;
			}

IL_013b_1:
			{
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_68 = V_2;
				if (!L_68)
				{
					goto IL_014c_1;
				}
			}
			{
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_69 = ___n0;
				IOInParam_t1CE9D876934CC358F74F2311BC448D9255F53CC8* L_70 = V_1;
				NullCheck(L_70);
				String_t* L_71 = L_70->___name_0;
				InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* L_72 = V_2;
				NullCheck(L_69);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_73;
				L_73 = VirtualFuncInvoker2< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*, String_t*, InParamValue_tDBD5A073E35F2CF0E65E9898D9B1FA3E6C58F5DB* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.Node::addInParamValue(System.String,Pada1.BBCore.InParamValue) */, L_69, L_71, L_72);
			}

IL_014c_1:
			{
				bool L_74;
				L_74 = Enumerator_MoveNext_mDA67D250CC468467A99707FEF3287EE40A277CE6((&V_0), Enumerator_MoveNext_mDA67D250CC468467A99707FEF3287EE40A277CE6_RuntimeMethod_var);
				if (L_74)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_0168;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0168:
	{
		List_1_tFBC326B620BC20F32E4A2EF517DF3D039E43B467* L_75 = __this->___outParam_1;
		NullCheck(L_75);
		Enumerator_tD00B00C91F6210A0B71C29BAC2C5B41EF342F771 L_76;
		L_76 = List_1_GetEnumerator_m31C95956F2637EDAF7D25255B78A944487492E0D(L_75, List_1_GetEnumerator_m31C95956F2637EDAF7D25255B78A944487492E0D_RuntimeMethod_var);
		V_3 = L_76;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_01b0:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1A0E597EAB29D455760876E0CE429C68AF14E564((&V_3), Enumerator_Dispose_m1A0E597EAB29D455760876E0CE429C68AF14E564_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01a5_1;
			}

IL_0176_1:
			{
				IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* L_77;
				L_77 = Enumerator_get_Current_m8710A8DCBE7B7D14CF01AC3EAB356A8719DA9225_inline((&V_3), Enumerator_get_Current_m8710A8DCBE7B7D14CF01AC3EAB356A8719DA9225_RuntimeMethod_var);
				V_4 = L_77;
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_78 = ___n0;
				IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* L_79 = V_4;
				NullCheck(L_79);
				String_t* L_80 = L_79->___name_0;
				IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* L_81 = V_4;
				NullCheck(L_81);
				String_t* L_82 = L_81->___entryName_2;
				IOOutParam_tB30F13C30A31E8DFC21AEF3F56EE18DB3AA9EAC0* L_83 = V_4;
				NullCheck(L_83);
				String_t* L_84 = L_83->___type_1;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_85;
				L_85 = il2cpp_codegen_get_type(L_84, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7_RuntimeMethod_var);
				OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3* L_86 = (OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3*)il2cpp_codegen_object_new(OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3_il2cpp_TypeInfo_var);
				NullCheck(L_86);
				OutParamValue__ctor_m36C86CEAE0BEA753E492B8588F5243F8D244C8E2(L_86, L_82, L_85, NULL);
				NullCheck(L_78);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_87;
				L_87 = VirtualFuncInvoker2< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*, String_t*, OutParamValue_t38670F62987B9DBB33BB3E46F898830397A427C3* >::Invoke(5 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.Node::addOutParamValue(System.String,Pada1.BBCore.OutParamValue) */, L_78, L_80, L_86);
			}

IL_01a5_1:
			{
				bool L_88;
				L_88 = Enumerator_MoveNext_m1CF88B23D761FFFC476B3A8ABC21D61A14C8B97D((&V_3), Enumerator_MoveNext_m1CF88B23D761FFFC476B3A8ABC21D61A14C8B97D_RuntimeMethod_var);
				if (L_88)
				{
					goto IL_0176_1;
				}
			}
			{
				goto IL_01be;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01be:
	{
		List_1_tFD98E22FAE43C0DB8AC4837231B557E9F04ABCD5* L_89 = __this->___localParam_2;
		NullCheck(L_89);
		Enumerator_t700F9395464B511B231DD683B556BCEB3D4489B0 L_90;
		L_90 = List_1_GetEnumerator_m9485670745A2F0D330A16A41ED12DF3D967A387B(L_89, List_1_GetEnumerator_m9485670745A2F0D330A16A41ED12DF3D967A387B_RuntimeMethod_var);
		V_5 = L_90;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_032e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE17D63F17ACFFE4AA4B6343C6481138C6E7890D7((&V_5), Enumerator_Dispose_mE17D63F17ACFFE4AA4B6343C6481138C6E7890D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0320_1;
			}

IL_01d0_1:
			{
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_91;
				L_91 = Enumerator_get_Current_mA62A9D0DD75E4EF4C7FEC722859C559739993D84_inline((&V_5), Enumerator_get_Current_mA62A9D0DD75E4EF4C7FEC722859C559739993D84_RuntimeMethod_var);
				V_6 = L_91;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_92 = V_6;
				NullCheck(L_92);
				String_t* L_93 = L_92->___entryName_3;
				if (!L_93)
				{
					goto IL_020e_1;
				}
			}
			{
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_94 = ___n0;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_95 = V_6;
				NullCheck(L_95);
				String_t* L_96 = L_95->___name_0;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_97 = V_6;
				NullCheck(L_97);
				String_t* L_98 = L_97->___entryName_3;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_99 = V_6;
				NullCheck(L_99);
				String_t* L_100 = L_99->___type_1;
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_101;
				L_101 = il2cpp_codegen_get_type(L_100, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, IONode_fill_mF1EDE31E11C4CE5F18C10FE50651F0D7F9DF9DB7_RuntimeMethod_var);
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_102 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)il2cpp_codegen_object_new(LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
				NullCheck(L_102);
				LocalParamValue__ctor_m61EF5582520297D885B5B8959C422ED8AF762932(L_102, L_98, L_101, NULL, NULL);
				NullCheck(L_94);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_103;
				L_103 = VirtualFuncInvoker2< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*, String_t*, LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* >::Invoke(6 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.Node::addLocalParamValue(System.String,Pada1.BBCore.LocalParamValue) */, L_94, L_96, L_102);
				goto IL_0320_1;
			}

IL_020e_1:
			{
				V_7 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)NULL;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_104 = V_6;
				NullCheck(L_104);
				String_t* L_105 = L_104->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_107;
				L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
				NullCheck(L_107);
				String_t* L_108;
				L_108 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_107);
				bool L_109;
				L_109 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_105, L_108, NULL);
				if (!L_109)
				{
					goto IL_0255_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_110 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_111;
				L_111 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_110, NULL);
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_112 = V_6;
				NullCheck(L_112);
				String_t* L_113 = L_112->___constValue_2;
				il2cpp_codegen_runtime_class_init_inline(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
				bool L_114;
				L_114 = Boolean_Parse_mC9B4406FE9DA904E2B7D75267CAD38E837D39A6D(L_113, NULL);
				bool L_115 = L_114;
				RuntimeObject* L_116 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_115);
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_117 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)il2cpp_codegen_object_new(LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
				NullCheck(L_117);
				LocalParamValue__ctor_m3F6746BFC435996FB05C3CD2341B6D2B9DC78F5E(L_117, L_111, L_116, NULL);
				V_7 = L_117;
				goto IL_030c_1;
			}

IL_0255_1:
			{
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_118 = V_6;
				NullCheck(L_118);
				String_t* L_119 = L_118->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_120 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_121;
				L_121 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_120, NULL);
				NullCheck(L_121);
				String_t* L_122;
				L_122 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_121);
				bool L_123;
				L_123 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_119, L_122, NULL);
				if (!L_123)
				{
					goto IL_0296_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_124 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_125;
				L_125 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_124, NULL);
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_126 = V_6;
				NullCheck(L_126);
				String_t* L_127 = L_126->___constValue_2;
				float L_128;
				L_128 = Single_Parse_m621F610BB84997A2E3C4686913F482316CD3E6B8(L_127, NULL);
				float L_129 = L_128;
				RuntimeObject* L_130 = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &L_129);
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_131 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)il2cpp_codegen_object_new(LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
				NullCheck(L_131);
				LocalParamValue__ctor_m3F6746BFC435996FB05C3CD2341B6D2B9DC78F5E(L_131, L_125, L_130, NULL);
				V_7 = L_131;
				goto IL_030c_1;
			}

IL_0296_1:
			{
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_132 = V_6;
				NullCheck(L_132);
				String_t* L_133 = L_132->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_134 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_135;
				L_135 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_134, NULL);
				NullCheck(L_135);
				String_t* L_136;
				L_136 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_135);
				bool L_137;
				L_137 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_133, L_136, NULL);
				if (!L_137)
				{
					goto IL_02d7_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_138 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_139;
				L_139 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_138, NULL);
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_140 = V_6;
				NullCheck(L_140);
				String_t* L_141 = L_140->___constValue_2;
				int32_t L_142;
				L_142 = Int32_Parse_m273CA1A9C7717C99641291A95C543711C0202AF0(L_141, NULL);
				int32_t L_143 = L_142;
				RuntimeObject* L_144 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_143);
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_145 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)il2cpp_codegen_object_new(LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
				NullCheck(L_145);
				LocalParamValue__ctor_m3F6746BFC435996FB05C3CD2341B6D2B9DC78F5E(L_145, L_139, L_144, NULL);
				V_7 = L_145;
				goto IL_030c_1;
			}

IL_02d7_1:
			{
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_146 = V_6;
				NullCheck(L_146);
				String_t* L_147 = L_146->___type_1;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_149;
				L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
				NullCheck(L_149);
				String_t* L_150;
				L_150 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_149);
				bool L_151;
				L_151 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_147, L_150, NULL);
				if (!L_151)
				{
					goto IL_030c_1;
				}
			}
			{
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_152 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_153;
				L_153 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_152, NULL);
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_154 = V_6;
				NullCheck(L_154);
				String_t* L_155 = L_154->___constValue_2;
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_156 = (LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85*)il2cpp_codegen_object_new(LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85_il2cpp_TypeInfo_var);
				NullCheck(L_156);
				LocalParamValue__ctor_m3F6746BFC435996FB05C3CD2341B6D2B9DC78F5E(L_156, L_153, L_155, NULL);
				V_7 = L_156;
			}

IL_030c_1:
			{
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_157 = V_7;
				if (!L_157)
				{
					goto IL_0320_1;
				}
			}
			{
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_158 = ___n0;
				IOLocalParam_tE6B6FCBC27013353043045B97B6594CCC8EEE4F7* L_159 = V_6;
				NullCheck(L_159);
				String_t* L_160 = L_159->___name_0;
				LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* L_161 = V_7;
				NullCheck(L_158);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_162;
				L_162 = VirtualFuncInvoker2< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723*, String_t*, LocalParamValue_t9CF0AE1E4C7D3865312CD9C79FC437454891CD85* >::Invoke(6 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.Nodes.Node::addLocalParamValue(System.String,Pada1.BBCore.LocalParamValue) */, L_158, L_160, L_161);
			}

IL_0320_1:
			{
				bool L_163;
				L_163 = Enumerator_MoveNext_m24B0BC3BA3D842B98EAEFDAF4E6FC8D351094CA7((&V_5), Enumerator_MoveNext_m24B0BC3BA3D842B98EAEFDAF4E6FC8D351094CA7_RuntimeMethod_var);
				if (L_163)
				{
					goto IL_01d0_1;
				}
			}
			{
				goto IL_033c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_033c:
	{
		return;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IONode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440 (IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* __this, const RuntimeMethod* method) 
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
// System.Void Pada1.BBCore.DirtySerializer.IONodeWithWeight::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONodeWithWeight__ctor_m45E542192444C4A6FA1277E3F0E15A4D686EEC86 (IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* __this, const RuntimeMethod* method) 
{
	{
		__this->___weight_0 = (1.0f);
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
// System.Void Pada1.BBCore.DirtySerializer.IONodeAndGuard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONodeAndGuard__ctor_mB9B07A6321AF2D907475B75318EF867CD7429B0D (IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* __this, const RuntimeMethod* method) 
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOBT::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOBT_createNode_m0C1883051097687CFA5AD32EA3347B160A25780D (IOBT_t7D4191160D92057A6BEA759D627386360B9149EB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059* L_0 = (BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059*)il2cpp_codegen_object_new(BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BT__ctor_mBB2066F39F793CA96DEC6BA6D2E6DDE8AF592DA1(L_0, NULL);
		BT_t84D17F4E0CB1E2606E44976FD41E019357CB8059* L_1 = L_0;
		IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_2 = __this->___root_3;
		NullCheck(L_2);
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_3;
		L_3 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_2);
		NullCheck(L_1);
		VirtualActionInvoker1< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(11 /* System.Void Pada1.BBCore.Framework.BT::set_root(Pada1.BBCore.Nodes.Node) */, L_1, L_3);
		return L_1;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOBT::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOBT__ctor_m1313C45E872AC5C11BCAFC9DB7B757BB4C657EF0 (IOBT_t7D4191160D92057A6BEA759D627386360B9149EB* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOSubbehavior::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOSubbehavior_createNode_m65C0ECB8395BB714C28C2A460014D49E07F4A7A7 (IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___behaviorName_3;
		SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A* L_1 = (SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A*)il2cpp_codegen_object_new(SubbehaviorNode_t2CE75073610A1D769CEC1756A8186971BE065B1A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		SubbehaviorNode__ctor_mDE288A06950716FFB78B358F796504C7B476B6A0(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOSubbehavior::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSubbehavior__ctor_m242E57A1A41A3DB18884F08214B04BB1AFBDED6E (IOSubbehavior_tEC84EEAA23964A178CBBBE95C993985A80D2EC34* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOCompositeNode::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOCompositeNode_createNode_m58E5C47405B041685B47F3DD9E908B209235BE7F (IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mED469B00DBD8B0CADA0EE0C84F033320A95D641B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mCCF3D218DF1FFBEEB1177F540A8B5E2390D403A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB2C9E99682774E96C928C93E6A155B5A5664052A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m86AE047D7BD533EF269D9246990455B9057BAEC2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* V_0 = NULL;
	Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* V_2 = NULL;
	{
		CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* L_0;
		L_0 = VirtualFuncInvoker0< CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* >::Invoke(6 /* Pada1.BBCore.Nodes.CompositeNode Pada1.BBCore.DirtySerializer.IOCompositeNode::createCompositeNode() */, __this);
		V_0 = L_0;
		List_1_t8568ABA11A3DADF3D48CCB791443FEFC3FB6944F* L_1 = __this->___children_3;
		NullCheck(L_1);
		Enumerator_t28E1FC4DD5C59CF45CBDB5CADC9A2900C219DF59 L_2;
		L_2 = List_1_GetEnumerator_m86AE047D7BD533EF269D9246990455B9057BAEC2(L_1, List_1_GetEnumerator_m86AE047D7BD533EF269D9246990455B9057BAEC2_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0034:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mED469B00DBD8B0CADA0EE0C84F033320A95D641B((&V_1), Enumerator_Dispose_mED469B00DBD8B0CADA0EE0C84F033320A95D641B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0029_1;
			}

IL_0015_1:
			{
				IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_3;
				L_3 = Enumerator_get_Current_mB2C9E99682774E96C928C93E6A155B5A5664052A_inline((&V_1), Enumerator_get_Current_mB2C9E99682774E96C928C93E6A155B5A5664052A_RuntimeMethod_var);
				V_2 = L_3;
				CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* L_4 = V_0;
				IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_5 = V_2;
				NullCheck(L_5);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_6;
				L_6 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_5);
				NullCheck(L_4);
				VirtualActionInvoker1< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(9 /* System.Void Pada1.BBCore.Nodes.CompositeNode::addChild(Pada1.BBCore.Nodes.Node) */, L_4, L_6);
			}

IL_0029_1:
			{
				bool L_7;
				L_7 = Enumerator_MoveNext_mCCF3D218DF1FFBEEB1177F540A8B5E2390D403A9((&V_1), Enumerator_MoveNext_mCCF3D218DF1FFBEEB1177F540A8B5E2390D403A9_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_0042;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* L_8 = V_0;
		return L_8;
	}
}
// Pada1.BBCore.Nodes.CompositeNode Pada1.BBCore.DirtySerializer.IOCompositeNode::createCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* IOCompositeNode_createCompositeNode_mC35EE01DCABE4F37D9B77759183E2C6CEA8B04AB (IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976* __this, const RuntimeMethod* method) 
{
	{
		return (CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0*)NULL;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOCompositeNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOCompositeNode__ctor_m72BDB836681D468F4CD2BE13382F9AEC09AD1639 (IOCompositeNode_t2B3D7E6F7BA040E6D10DA1A0699754EE30C5A976* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IORandomCompositeNode::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IORandomCompositeNode_createNode_mCEBCF46EFE826A22513EB0A1C43785DA7E0E05E1 (IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m57F376883DE096FCA00CCE4C0F61CAC310846F22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8CFA01B9DEA87BA1ABE8E5FD4F5B9DDF027B95A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD076FDDB4B01393325010B47506BE44D9C758E95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mA48BEF07072BA14F4267F1D58CF62F30BCC1D3D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* V_0 = NULL;
	Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* V_2 = NULL;
	{
		RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* L_0;
		L_0 = VirtualFuncInvoker0< RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* >::Invoke(6 /* Pada1.BBCore.Nodes.RandomCompositeNode Pada1.BBCore.DirtySerializer.IORandomCompositeNode::createRandomCompositeNode() */, __this);
		V_0 = L_0;
		List_1_t1C2E754B33005F37E0AF3AEBFA9192DED6C4A23A* L_1 = __this->___children_3;
		NullCheck(L_1);
		Enumerator_t47402502194BD1788C9D80668E93C5F44506E4FE L_2;
		L_2 = List_1_GetEnumerator_mA48BEF07072BA14F4267F1D58CF62F30BCC1D3D1(L_1, List_1_GetEnumerator_mA48BEF07072BA14F4267F1D58CF62F30BCC1D3D1_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m57F376883DE096FCA00CCE4C0F61CAC310846F22((&V_1), Enumerator_Dispose_m57F376883DE096FCA00CCE4C0F61CAC310846F22_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0034_1;
			}

IL_0015_1:
			{
				IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* L_3;
				L_3 = Enumerator_get_Current_mD076FDDB4B01393325010B47506BE44D9C758E95_inline((&V_1), Enumerator_get_Current_mD076FDDB4B01393325010B47506BE44D9C758E95_RuntimeMethod_var);
				V_2 = L_3;
				RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* L_4 = V_0;
				IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* L_5 = V_2;
				NullCheck(L_5);
				IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_6 = L_5->___child_1;
				NullCheck(L_6);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_7;
				L_7 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_6);
				IONodeWithWeight_tCAEC49A7145883CBA1FDC9EF9409CF535548A74F* L_8 = V_2;
				NullCheck(L_8);
				float L_9 = L_8->___weight_0;
				NullCheck(L_4);
				RandomCompositeNode_addChild_m9968D03FDA75EC847B1A94DD981F6C30F19356B0(L_4, L_7, L_9, NULL);
			}

IL_0034_1:
			{
				bool L_10;
				L_10 = Enumerator_MoveNext_m8CFA01B9DEA87BA1ABE8E5FD4F5B9DDF027B95A6((&V_1), Enumerator_MoveNext_m8CFA01B9DEA87BA1ABE8E5FD4F5B9DDF027B95A6_RuntimeMethod_var);
				if (L_10)
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_004d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004d:
	{
		RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* L_11 = V_0;
		return L_11;
	}
}
// Pada1.BBCore.Nodes.RandomCompositeNode Pada1.BBCore.DirtySerializer.IORandomCompositeNode::createRandomCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* IORandomCompositeNode_createRandomCompositeNode_m6C25B1CF0E80A0A7BFDDDCC8F6CB9D42DD823048 (IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5* __this, const RuntimeMethod* method) 
{
	{
		return (RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644*)NULL;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IORandomCompositeNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IORandomCompositeNode__ctor_mAA484B86E53295FB749CCCC13263D79B08E64736 (IORandomCompositeNode_t7CEBDC5CB5ED1BB15EA786F52A7FC9D16BE30EC5* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.CompositeNode Pada1.BBCore.DirtySerializer.IOSequenceNode::createCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* IOSequenceNode_createCompositeNode_m354213637F1C7FC79EDB9F635B8D2D9BBD1C9C3E (IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8* L_0 = (SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8*)il2cpp_codegen_object_new(SequenceNode_t76A0FFBB3A81688B3E29F066AF2924C10333D2E8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SequenceNode__ctor_mCA7B4978B20F6C0DAA0855442908D75C0EE9C838(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOSequenceNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSequenceNode__ctor_mC3BCEF74E93662A496C95F7D2CD8A033F74B4D12 (IOSequenceNode_tCE623097B4346F532CD63F3338F07E740C5002FE* __this, const RuntimeMethod* method) 
{
	{
		IOCompositeNode__ctor_m72BDB836681D468F4CD2BE13382F9AEC09AD1639(__this, NULL);
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
// Pada1.BBCore.Nodes.CompositeNode Pada1.BBCore.DirtySerializer.IOParallel::createCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* IOParallel_createCompositeNode_m37B8FAE871B9A63F9D35B5DDAB7CDE555033C946 (IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A* L_0 = (ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A*)il2cpp_codegen_object_new(ParallelNode_t871B4D354A22229436A8CAADD9504577951C0D7A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ParallelNode__ctor_m8220FFB910FBBFB72532FDE2242FEFD53FB47A3F(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOParallel::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOParallel__ctor_m297E61D8BBFDEB87D78D9538F72FE0CCA64ADDFE (IOParallel_tA4955AD62D8E113C2581F827A44ADE58F58A7615* __this, const RuntimeMethod* method) 
{
	{
		IOCompositeNode__ctor_m72BDB836681D468F4CD2BE13382F9AEC09AD1639(__this, NULL);
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
// Pada1.BBCore.Nodes.CompositeNode Pada1.BBCore.DirtySerializer.IOSelector::createCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CompositeNode_tD9FF6499EBB4B2405F99102578D89BB68B53B0D0* IOSelector_createCompositeNode_mD652EA49962B8F16981DBFFD30B964EFBCF181A4 (IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3* L_0 = (SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3*)il2cpp_codegen_object_new(SelectorNode_t2F76D29C35AB65872B9340481A0C1CBABC3780E3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SelectorNode__ctor_mC472BDC055C412C0F909A2F2F5F84E20B8D669E7(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOSelector__ctor_m68CBC150EF9B4495853F93C9F79E1318EB498ADD (IOSelector_t7982EA1BBE05EB1F90E36E227A46D4DFB651B433* __this, const RuntimeMethod* method) 
{
	{
		IOCompositeNode__ctor_m72BDB836681D468F4CD2BE13382F9AEC09AD1639(__this, NULL);
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
// Pada1.BBCore.Nodes.RandomCompositeNode Pada1.BBCore.DirtySerializer.IORandomSequence::createRandomCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* IORandomSequence_createRandomCompositeNode_m0271E170546823E08B9B692063FF83EECA464518 (IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280* L_0 = (RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280*)il2cpp_codegen_object_new(RandomSequenceNode_tC70E8E13B2AA44BA9696B36937903ED17B1D5280_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RandomSequenceNode__ctor_m70BB4C6852C34CD9A487B7F7630050420D87D169(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IORandomSequence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IORandomSequence__ctor_m2330C127E4D5CD86F10FC379429C783ABC29C803 (IORandomSequence_t3A5E9A84441A49867D63A38DA2DC2AB74FFE3B0E* __this, const RuntimeMethod* method) 
{
	{
		IORandomCompositeNode__ctor_mAA484B86E53295FB749CCCC13263D79B08E64736(__this, NULL);
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
// Pada1.BBCore.Nodes.RandomCompositeNode Pada1.BBCore.DirtySerializer.IORandomSelector::createRandomCompositeNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RandomCompositeNode_tB46B6F1A71AF3A820AC14C40DE8A00F6FD7D2644* IORandomSelector_createRandomCompositeNode_m19E05239F642F30A5448514EE51CAC4DA4C21F20 (IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF* L_0 = (RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF*)il2cpp_codegen_object_new(RandomSelectorNode_t6CF6CC3DE04D49E3021EAAF1E789FEA6F7C1EFCF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RandomSelectorNode__ctor_m6D41EBE699905344DE525DA4D6BCDC9A13A693EB(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IORandomSelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IORandomSelector__ctor_m16B0B1B703BC10D6BAB2BDEEA02021E22F325DF3 (IORandomSelector_t72DE628C10D3E369669C16AE4B99D3F78AE5E996* __this, const RuntimeMethod* method) 
{
	{
		IORandomCompositeNode__ctor_mAA484B86E53295FB749CCCC13263D79B08E64736(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IODecorator::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IODecorator_createNode_mE29C4D900EA041D8E14EEBC35589710E94DB23EB (IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773* __this, const RuntimeMethod* method) 
{
	{
		DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* L_0;
		L_0 = VirtualFuncInvoker0< DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* >::Invoke(6 /* Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IODecorator::createDecoratorNode() */, __this);
		DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* L_1 = L_0;
		IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_2 = __this->___child_3;
		NullCheck(L_2);
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_3;
		L_3 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_2);
		NullCheck(L_1);
		DecoratorNode_setChild_mDEE9C3FEF70C61D22EA686C706C2BA5AE147875D_inline(L_1, L_3, NULL);
		return L_1;
	}
}
// Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IODecorator::createDecoratorNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* IODecorator_createDecoratorNode_mA3F348F38E7178993A98645A0B2879771FE9FF1B (IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773* __this, const RuntimeMethod* method) 
{
	{
		return (DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598*)NULL;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IODecorator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6 (IODecorator_t98DBBC7987F72AADF41CEBF2625329BB6C6D9773* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IONot::createDecoratorNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* IONot_createDecoratorNode_m47DB5ECC5DF488AE8AA6BD2DC108585AD62498D0 (IONot_t070A51629656596B9A31B43946F20D52F963307E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A* L_0 = (NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A*)il2cpp_codegen_object_new(NotDecorator_t1E3F3CAFAF6E597375E91B1C00D725723333683A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NotDecorator__ctor_m7B960E8D6C067DC26E0A72F8381C3C18AAF9EB4F(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IONot::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IONot__ctor_mFA932AA4A954696EC03D4C61B237CB22544FAB49 (IONot_t070A51629656596B9A31B43946F20D52F963307E* __this, const RuntimeMethod* method) 
{
	{
		IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6(__this, NULL);
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
// Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IORepeat::createDecoratorNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* IORepeat_createDecoratorNode_m11944D8D2A4133F81506859A6993D3F1A23B1EC2 (IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14* L_0 = (RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14*)il2cpp_codegen_object_new(RepeatDecorator_tB8A407361D42C5DAF949548685EE24A739135B14_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RepeatDecorator__ctor_m4D02BF89F4555AFE2235F0212FAC96CF4340FD45(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IORepeat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IORepeat__ctor_m3E2F2964B1C60015E1E2A5C276EBABE0FCE6A6D5 (IORepeat_tAF759C8921909062CDE091161A1EAF422940DB48* __this, const RuntimeMethod* method) 
{
	{
		IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6(__this, NULL);
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
// Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IOUntilFailed::createDecoratorNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* IOUntilFailed_createDecoratorNode_mB4CE16FC54F26111A798086FB2FFCD9154A8AEEB (IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C* L_0 = (RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C*)il2cpp_codegen_object_new(RepeatUntilFailed_t48BB8634EDA09C1B935DB0C119BAFD5523EC2B9C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RepeatUntilFailed__ctor_m848582224F773A2EE8A12823DC6AF3E8500F7BB1(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOUntilFailed::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOUntilFailed__ctor_m24F6FB742CE07ADFA88A2B1D5D7C7CD3755AF839 (IOUntilFailed_t6B9D44B4FA61E4AE7527500D7B0561E044B19538* __this, const RuntimeMethod* method) 
{
	{
		IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6(__this, NULL);
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
// Pada1.BBCore.Nodes.DecoratorNode Pada1.BBCore.DirtySerializer.IOUntilSuccess::createDecoratorNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* IOUntilSuccess_createDecoratorNode_m2B628C15654705701CA2CA5B63579C892EC9E297 (IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687* L_0 = (RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687*)il2cpp_codegen_object_new(RepeatUntilSuccess_t4D1BD632FF864F4F0A28A71976204B9D64FCB687_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		RepeatUntilSuccess__ctor_mC4758358D2AC16DD179970CA1399CB4292A5D630(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOUntilSuccess::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOUntilSuccess__ctor_mDB887245E49CCCE7C34877ECEE6D0FBD29A1B645 (IOUntilSuccess_t9973EEF649B7B6FC6CC26A8C84539B6DC7BA4F65* __this, const RuntimeMethod* method) 
{
	{
		IODecorator__ctor_mFD8858C0EF0B4B3E015A64E01FFCCFC2E3BE5CF6(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOAction::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOAction_createNode_m1B3431F77D70E41F374FFE5A09A66D4F9D79DD65 (IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___actionName_3;
		ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1* L_1 = (ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1*)il2cpp_codegen_object_new(ActionNode_tA7AC061EE3D39D4C115AAA96D94783CA3368A6A1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ActionNode__ctor_m506600E52642360FFD7B25CA6573819E2EDD00F7(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOAction__ctor_m316F80EC192EF763BFBF041F2A52FB8BC0A272FA (IOAction_t1EDCE799BDD3405E55B49A75C8560AC2D8AB1F40* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOConditionNode::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOConditionNode_createNode_m49FE4C69B3DF0D7A592652C450ACF4AD608759FE (IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___condition_3;
		ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* L_1 = (ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04*)il2cpp_codegen_object_new(ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionEvalNode__ctor_m2174B6A164749315F80793024DBA8AF46E2E216F(L_1, L_0, NULL);
		ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C* L_2 = (ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C*)il2cpp_codegen_object_new(ConditionNode_tC9FC5AD93601DF0A43669AE559220FE1336B496C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConditionNode__ctor_m6FE897E62830F85F40E9F902E1492AB054F3ED99(L_2, L_1, NULL);
		return L_2;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOConditionNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOConditionNode__ctor_mE405B2D679E124DA10B440AAF7DD4AD104371570 (IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOWaitUntilCondition::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOWaitUntilCondition_createNode_mB78F7BA545FE5F5581EE31353A8ED21132B58468 (IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___condition_3;
		ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* L_1 = (ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04*)il2cpp_codegen_object_new(ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionEvalNode__ctor_m2174B6A164749315F80793024DBA8AF46E2E216F(L_1, L_0, NULL);
		WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90* L_2 = (WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90*)il2cpp_codegen_object_new(WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WaitUntilCondition__ctor_m6BCF1BEB14365B864722AABD73B55F6E4361A4C1(L_2, L_1, NULL);
		WaitUntilCondition_t5771101AA7AFFBE5C626C440097FD2937958BE90* L_3 = L_2;
		bool L_4 = __this->___condValue_4;
		NullCheck(L_3);
		L_3->___waitValue_6 = L_4;
		return L_3;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOWaitUntilCondition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOWaitUntilCondition__ctor_m1872D48799FC6723EE618406A3A5C28C20A989C6 (IOWaitUntilCondition_tE3DC257CE9C9799FEC41346DC976DEBFC1696591* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOGuardDecorator::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOGuardDecorator_createNode_m46762B9F7F843E02188561CA9FDD4C0D65CC542A (IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___condition_3;
		ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* L_1 = (ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04*)il2cpp_codegen_object_new(ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		ConditionEvalNode__ctor_m2174B6A164749315F80793024DBA8AF46E2E216F(L_1, L_0, NULL);
		IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_2 = __this->___child_4;
		NullCheck(L_2);
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_3;
		L_3 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_2);
		DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E* L_4 = (DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E*)il2cpp_codegen_object_new(DecoratorGuard_tBCFBB91B5B9C71D79C4AF73DA13FA8C98099EB5E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DecoratorGuard__ctor_m85EA25A5C1BFEB2807DBDA8957054C1F1366AE0C(L_4, L_1, L_3, NULL);
		return L_4;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOGuardDecorator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOGuardDecorator__ctor_m96D454A4DAB8298A785A277FE63965985947B11E (IOGuardDecorator_t53D1CAB4E3AC3FC7320C6B4F8992AF250DC14836* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IOPrioritySelector::createNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* IOPrioritySelector_createNode_m9A61FC250A2AA508E3961D02823A98937263386E (IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mE866AAD5AE211520B8B5499A3FC16DD16276AA79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8750E3DB1D129E9607551F25E28BCC157775B532_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA3427016756F375FD3050A84C69439F1E637C691_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m4B288D21908577BAFDD675A8533B695AC8C6AABC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5* V_0 = NULL;
	Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578 V_1;
	memset((&V_1), 0, sizeof(V_1));
	IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* V_2 = NULL;
	GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5* L_0 = (PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5*)il2cpp_codegen_object_new(PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		PrioritySelectorNode__ctor_m0C948ADD54299B60CEF45D9C7FF02F6EE5C09529(L_0, NULL);
		V_0 = L_0;
		List_1_t026C5406A8982DADAA9A47234E0F3123A1117CD1* L_1 = __this->___children_3;
		NullCheck(L_1);
		Enumerator_t24B72C225D198D04FBC8F98E2185640D23EBC578 L_2;
		L_2 = List_1_GetEnumerator_m4B288D21908577BAFDD675A8533B695AC8C6AABC(L_1, List_1_GetEnumerator_m4B288D21908577BAFDD675A8533B695AC8C6AABC_RuntimeMethod_var);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mE866AAD5AE211520B8B5499A3FC16DD16276AA79((&V_1), Enumerator_Dispose_mE866AAD5AE211520B8B5499A3FC16DD16276AA79_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0054_1;
			}

IL_0014_1:
			{
				IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* L_3;
				L_3 = Enumerator_get_Current_mA3427016756F375FD3050A84C69439F1E637C691_inline((&V_1), Enumerator_get_Current_mA3427016756F375FD3050A84C69439F1E637C691_RuntimeMethod_var);
				V_2 = L_3;
				il2cpp_codegen_initobj((&V_3), sizeof(GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5));
				IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* L_4 = V_2;
				NullCheck(L_4);
				IOConditionNode_t29952A07343CED031F946F69AED02CD4C9D7A78D* L_5 = L_4->___guard_0;
				NullCheck(L_5);
				String_t* L_6 = L_5->___condition_3;
				ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04* L_7 = (ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04*)il2cpp_codegen_object_new(ConditionEvalNode_t8F158CB62F6B6911C55059E6DCCB8E2250992A04_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				ConditionEvalNode__ctor_m2174B6A164749315F80793024DBA8AF46E2E216F(L_7, L_6, NULL);
				(&V_3)->___guard_0 = L_7;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___guard_0), (void*)L_7);
				IONodeAndGuard_t8CCC0277C449B2CF902CC2D342DA7019475435D1* L_8 = V_2;
				NullCheck(L_8);
				IONode_t7C33DFF99C92FFB7580E4860F0CEDE0E15433D67* L_9 = L_8->___node_1;
				NullCheck(L_9);
				Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_10;
				L_10 = VirtualFuncInvoker0< Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* >::Invoke(4 /* Pada1.BBCore.Nodes.Node Pada1.BBCore.DirtySerializer.IONode::build() */, L_9);
				(&V_3)->___node_1 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&(&V_3)->___node_1), (void*)L_10);
				PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5* L_11 = V_0;
				GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5 L_12 = V_3;
				NullCheck(L_11);
				VirtualActionInvoker1< GuardAndNode_t55D840BE74650BBFFF662C0E555F4D10DEAEF4D5 >::Invoke(9 /* System.Void Pada1.BBCore.Nodes.PrioritySelectorNode::addChild(Pada1.BBCore.Nodes.PrioritySelectorNode/GuardAndNode) */, L_11, L_12);
			}

IL_0054_1:
			{
				bool L_13;
				L_13 = Enumerator_MoveNext_m8750E3DB1D129E9607551F25E28BCC157775B532((&V_1), Enumerator_MoveNext_m8750E3DB1D129E9607551F25E28BCC157775B532_RuntimeMethod_var);
				if (L_13)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_006d;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006d:
	{
		PrioritySelectorNode_t9C7FEF080430C95184F172E744273F8701E466B5* L_14 = V_0;
		return L_14;
	}
}
// System.Void Pada1.BBCore.DirtySerializer.IOPrioritySelector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOPrioritySelector__ctor_m381E895053C6337DB60BFBCA25FF7AADE0E81645 (IOPrioritySelector_tDE21966D50E5CECCC64EC8C8E8417EF15870ABE3* __this, const RuntimeMethod* method) 
{
	{
		IONode__ctor_mA50A59ED207D74A4FE4F87DDEEC6CBF67AFC5440(__this, NULL);
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
// System.Boolean Pada1.BBCore.Conditions.AlwaysTrue::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AlwaysTrue_Check_m9188AE99D17EB7114267BC2530FB09038805E1A2 (AlwaysTrue_t03C5037B5B19BA636248466C5655DA55D6E2C6AD* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// Pada1.BBCore.Tasks.TaskStatus Pada1.BBCore.Conditions.AlwaysTrue::MonitorFailWhenFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AlwaysTrue_MonitorFailWhenFalse_m01271ED9E81B746AFB1C4E44F591099DBB9EDB6A (AlwaysTrue_t03C5037B5B19BA636248466C5655DA55D6E2C6AD* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(2);
	}
}
// System.Void Pada1.BBCore.Conditions.AlwaysTrue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AlwaysTrue__ctor_m21B3E6BDF15FF66278962BAE24F49BD6A7277A3B (AlwaysTrue_t03C5037B5B19BA636248466C5655DA55D6E2C6AD* __this, const RuntimeMethod* method) 
{
	{
		ConditionBase__ctor_mC22033356AFAE34A9767BBD92E5947320870CC65(__this, NULL);
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
// System.Boolean Pada1.BBCore.Conditions.RandomCondition::Check()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RandomCondition_Check_mDB0F39FAAE0798DF2344126E16ACF9126B90A552 (RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var);
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = ((RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_StaticFields*)il2cpp_codegen_static_fields_for(RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var))->___r_3;
		NullCheck(L_0);
		double L_1;
		L_1 = VirtualFuncInvoker0< double >::Invoke(8 /* System.Double System.Random::NextDouble() */, L_0);
		float L_2 = __this->___trueProb_2;
		return (bool)((((int32_t)((!(((double)L_1) <= ((double)((double)L_2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Pada1.BBCore.Conditions.RandomCondition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomCondition__ctor_m6ACD022D3826D31B730E5BE749DDF41ACDFABBAE (RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E* __this, const RuntimeMethod* method) 
{
	{
		__this->___trueProb_2 = (1.0f);
		ConditionBase__ctor_mC22033356AFAE34A9767BBD92E5947320870CC65(__this, NULL);
		return;
	}
}
// System.Void Pada1.BBCore.Conditions.RandomCondition::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomCondition__cctor_m1393D1CC15DA699E6D887AE7D3C595B1B36184D5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		((RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_StaticFields*)il2cpp_codegen_static_fields_for(RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var))->___r_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_StaticFields*)il2cpp_codegen_static_fields_for(RandomCondition_t9445F4BBE2FFA21AA91746ED1D59343DB256CF1E_il2cpp_TypeInfo_var))->___r_3), (void*)L_0);
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
// Pada1.BBCore.Tasks.TaskStatus Pada1.BBCore.Actions.FailAction::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FailAction_OnUpdate_mF59C6B7F597DE681F8F80E344F83729630BE42A9 (FailAction_tD8B1308479B0955D1FF73EF11CBB32A2B975E890* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(4);
	}
}
// System.Void Pada1.BBCore.Actions.FailAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FailAction__ctor_m6BE3856E176CD3762BEB32AEFDF1781806FE7EEE (FailAction_tD8B1308479B0955D1FF73EF11CBB32A2B975E890* __this, const RuntimeMethod* method) 
{
	{
		BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74(__this, NULL);
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
// System.Void Pada1.BBCore.Actions.PrintMessageAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintMessageAction__ctor_m441D8640A8F9D9B4785791288C87D8F14E91AFEE (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, const RuntimeMethod* method) 
{
	{
		BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74(__this, NULL);
		return;
	}
}
// System.Void Pada1.BBCore.Actions.PrintMessageAction::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintMessageAction__ctor_m81372080E8609F08241ED0D13E2DE6A767DF2F2B (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, String_t* ___msg0, const RuntimeMethod* method) 
{
	{
		BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74(__this, NULL);
		String_t* L_0 = ___msg0;
		PrintMessageAction_set_Message_mC782FDED5BCB348FDBC904209F88D3333C3A7FB0_inline(__this, L_0, NULL);
		return;
	}
}
// System.String Pada1.BBCore.Actions.PrintMessageAction::get_Message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PrintMessageAction_get_Message_mA751528F20D028D7E7DFA078E1CD2D600F0BFE42 (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Pada1.BBCore.Actions.PrintMessageAction::set_Message(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PrintMessageAction_set_Message_mC782FDED5BCB348FDBC904209F88D3333C3A7FB0 (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Pada1.BBCore.Tasks.TaskStatus Pada1.BBCore.Actions.PrintMessageAction::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PrintMessageAction_OnUpdate_m1DCCFA187C0986C166BD320C05549C5B40E2BE5F (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0;
		L_0 = PrintMessageAction_get_Message_mA751528F20D028D7E7DFA078E1CD2D600F0BFE42_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Console_t5EDF9498D011BD48287171978EDBBA6964829C3E_il2cpp_TypeInfo_var);
		Console_WriteLine_m77CEDA0C084428F0D6220988DA66992EC1925AEA(L_0, NULL);
		return (int32_t)(3);
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
// Pada1.BBCore.Tasks.TaskStatus Pada1.BBCore.Actions.SuccessAction::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SuccessAction_OnUpdate_mA11C4082057F2AFDCCD098FA3EBB31308E7D8C5A (SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(3);
	}
}
// System.Void Pada1.BBCore.Actions.SuccessAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuccessAction__ctor_mA4F297514C708104206E60ED1A9C25BBBB900C32 (SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283* __this, const RuntimeMethod* method) 
{
	{
		BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74(__this, NULL);
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
// Pada1.BBCore.Framework.Brick Pada1.BBCore.Actions.SuccessNode::getBrick(Pada1.BBCore.Framework.LeafNodeBD)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SuccessNode_getBrick_m216FCCF999E79F6DF19A144521CCC07B7101055B (SuccessNode_t315665C4A683C84B6585B5C52FD207514BC97285* __this, LeafNodeBD_t855420812CEB062CA89F7EBEDD4DE90C1199C95D* ___leafBD0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283* L_0 = (SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283*)il2cpp_codegen_object_new(SuccessAction_tD2E66F2929F3D137FB1B4DBB567DADD3BE092283_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SuccessAction__ctor_mA4F297514C708104206E60ED1A9C25BBBB900C32(L_0, NULL);
		return L_0;
	}
}
// System.Void Pada1.BBCore.Actions.SuccessNode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuccessNode__ctor_mAECB96EEDFB01BDB9C1D8C0888D6CFB6FF6B2BAF (SuccessNode_t315665C4A683C84B6585B5C52FD207514BC97285* __this, const RuntimeMethod* method) 
{
	{
		Node__ctor_m1AA2F9FDC29A81B5943EB80672B99D14711373F2(__this, NULL);
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
// Pada1.BBCore.Tasks.TaskStatus Pada1.BBCore.Actions.WaitNUpdates::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaitNUpdates_OnUpdate_m6BD94B3ED87873A7696CBD0752913AE919096FDB (WaitNUpdates_t65FFF717CD9AD03E9543704BE0D904CBF9DB1AC6* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___remainder_2;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000b;
		}
	}
	{
		return (int32_t)(3);
	}

IL_000b:
	{
		int32_t L_1 = __this->___remainder_2;
		__this->___remainder_2 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		return (int32_t)(1);
	}
}
// System.Void Pada1.BBCore.Actions.WaitNUpdates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitNUpdates__ctor_mEF9DDAB857719899996D57AB0ABA1B842332117C (WaitNUpdates_t65FFF717CD9AD03E9543704BE0D904CBF9DB1AC6* __this, const RuntimeMethod* method) 
{
	{
		BasePrimitiveAction__ctor_m643C181911B2C8D35644CE1A3C72B1A661B83D74(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DecoratorNode_setChild_mDEE9C3FEF70C61D22EA686C706C2BA5AE147875D_inline (DecoratorNode_t6B59D0266BA03E571ECF2A3C50CA3033FB073598* __this, Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* ___n0, const RuntimeMethod* method) 
{
	{
		Node_tF200E0B024ED45E8522EFC3ED8C0DC4BC90B1723* L_0 = ___n0;
		__this->___child_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___child_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PrintMessageAction_set_Message_mC782FDED5BCB348FDBC904209F88D3333C3A7FB0_inline (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CMessageU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMessageU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* PrintMessageAction_get_Message_mA751528F20D028D7E7DFA078E1CD2D600F0BFE42_inline (PrintMessageAction_t9DD7AEB951C3AEECEBA05CE866639A125F326870* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CMessageU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
