// AnimBlueprintGeneratedClass SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C
// Size: 0x789 (Inherited: 0x2c0)
struct USK_BLD_Door_Wood_INT_AnimBP_C : UAnimInstance {
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

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_68F9512E48F52DF450EBD0ADC855067B(); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_68F9512E48F52DF450EBD0ADC855067B // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_BE0C84144BFA56E05D070B8F6394C557(); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_BE0C84144BFA56E05D070B8F6394C557 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_0ED2F42E4705EA200CD833894FC114A3(); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_0ED2F42E4705EA200CD833894FC114A3 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_45BBFC3A4D4CEB7988BF43909FEE55AD(); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP_AnimGraphNode_TransitionResult_45BBFC3A4D4CEB7988BF43909FEE55AD // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP(int32_t EntryPoint); // Function SK_BLD_Door_Wood_INT_AnimBP.SK_BLD_Door_Wood_INT_AnimBP_C.ExecuteUbergraph_SK_BLD_Door_Wood_INT_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

