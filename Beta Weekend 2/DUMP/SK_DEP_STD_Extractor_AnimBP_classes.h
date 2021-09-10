// AnimBlueprintGeneratedClass SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C
// Size: 0x732 (Inherited: 0x2c0)
struct USK_DEP_STD_Extractor_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2c8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2f0(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x318(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x340(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x368(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x390(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x410(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x440(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x4c0(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4f0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x570(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a0(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x620(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x650(0xb0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x700(0x30)
	bool IsExtracting; // 0x730(0x01)
	bool IsStruggling; // 0x731(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP(int32_t EntryPoint); // Function SK_DEP_STD_Extractor_AnimBP.SK_DEP_STD_Extractor_AnimBP_C.ExecuteUbergraph_SK_DEP_STD_Extractor_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

