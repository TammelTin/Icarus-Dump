// AnimBlueprintGeneratedClass SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C
// Size: 0x789 (Inherited: 0x2c0)
struct USK_BLD_Door_Wood_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x320(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x348(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x370(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x398(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x3c0(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x3e8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x468(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x498(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x518(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x548(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x5c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x678(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6a8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6d8(0xb0)
	enum class DoorState DoorState; // 0x788(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_B74031CD4ADDB9A8B8EA9DAE29DC8A65(); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_B74031CD4ADDB9A8B8EA9DAE29DC8A65 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_EB4B26AE41EE4C62CCFB9CB7FA339542(); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_EB4B26AE41EE4C62CCFB9CB7FA339542 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_DE7D718A41B8B2D0C73A6294A1F0851E(); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_DE7D718A41B8B2D0C73A6294A1F0851E // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_AEAAA19C41C6488D1776E69A53255FB1(); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP_AnimGraphNode_TransitionResult_AEAAA19C41C6488D1776E69A53255FB1 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP(int32_t EntryPoint); // Function SK_BLD_Door_Wood_AnimBP.SK_BLD_Door_Wood_AnimBP_C.ExecuteUbergraph_SK_BLD_Door_Wood_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

