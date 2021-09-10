// AnimBlueprintGeneratedClass SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C
// Size: 0x559 (Inherited: 0x2c0)
struct USK_BLD_Window_Wood_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x348(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x478(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x4a8(0xb0)
	bool Open; // 0x558(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP(int32_t EntryPoint); // Function SK_BLD_Window_Wood_AnimBP.SK_BLD_Window_Wood_AnimBP_C.ExecuteUbergraph_SK_BLD_Window_Wood_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

