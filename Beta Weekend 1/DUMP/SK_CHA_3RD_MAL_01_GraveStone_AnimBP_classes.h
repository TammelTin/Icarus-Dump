// AnimBlueprintGeneratedClass SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C
// Size: 0x4d0 (Inherited: 0x320)
struct USK_CHA_3RD_MAL_01_GraveStone_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x328(0x30)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x358(0x90)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3e8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x418(0xb0)
	struct ABP_Gravestone_C* As BP Gravestone; // 0x4c8(0x08)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CHA_3RD_MAL_01_GraveStone_AnimBP(int32_t EntryPoint); // Function SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C.ExecuteUbergraph_SK_CHA_3RD_MAL_01_GraveStone_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

