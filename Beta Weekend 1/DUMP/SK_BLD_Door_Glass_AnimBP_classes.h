// AnimBlueprintGeneratedClass SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C
// Size: 0x789 (Inherited: 0x2c0)
struct USK_BLD_Door_Glass_AnimBP_C : UAnimInstance {
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

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_C951B0034F0CD096BD17BF9330BA92A5(); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_C951B0034F0CD096BD17BF9330BA92A5 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_959DC91542A46F2BD7193B9402F1794C(); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_959DC91542A46F2BD7193B9402F1794C // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_75890AC84B59C9EC790A17A3416664AB(); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_75890AC84B59C9EC790A17A3416664AB // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_C1E6DD4D45F2C20B1D44BBADB6B117AD(); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP_AnimGraphNode_TransitionResult_C1E6DD4D45F2C20B1D44BBADB6B117AD // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP(int32_t EntryPoint); // Function SK_BLD_Door_Glass_AnimBP.SK_BLD_Door_Glass_AnimBP_C.ExecuteUbergraph_SK_BLD_Door_Glass_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

