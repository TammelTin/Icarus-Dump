// AnimBlueprintGeneratedClass SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C
// Size: 0x789 (Inherited: 0x2c0)
struct USK_BLD_Door_Thatch_AnimBP_C : UAnimInstance {
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

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_6485B04B4B596747616CAF8544E2E406(); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_6485B04B4B596747616CAF8544E2E406 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_0FA510EF4A4BA6BCC6A1698EB14B1B77(); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_0FA510EF4A4BA6BCC6A1698EB14B1B77 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_5CD59F474518F44E8E55AC9C7CB1855D(); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_5CD59F474518F44E8E55AC9C7CB1855D // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_EE26991843F7EC0EA646C5A92B6AC7BF(); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP_AnimGraphNode_TransitionResult_EE26991843F7EC0EA646C5A92B6AC7BF // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP(int32_t EntryPoint); // Function SK_BLD_Door_Thatch_AnimBP.SK_BLD_Door_Thatch_AnimBP_C.ExecuteUbergraph_SK_BLD_Door_Thatch_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

