// AnimBlueprintGeneratedClass SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C
// Size: 0x799 (Inherited: 0x2c0)
struct USK_CRE_PAS_Fish01_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x2f8(0x368)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x660(0xa0)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x700(0x90)
	struct AFishActor* FishOwner; // 0x790(0x08)
	bool IsDead; // 0x798(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP(int32_t EntryPoint); // Function SK_CRE_PAS_Fish01_AnimBP.SK_CRE_PAS_Fish01_AnimBP_C.ExecuteUbergraph_SK_CRE_PAS_Fish01_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

