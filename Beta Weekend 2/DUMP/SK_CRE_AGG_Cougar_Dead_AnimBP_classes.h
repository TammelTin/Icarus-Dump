// AnimBlueprintGeneratedClass SK_CRE_AGG_Cougar_Dead_AnimBP.SK_CRE_AGG_Cougar_Dead_AnimBP_C
// Size: 0x92c (Inherited: 0x320)
struct USK_CRE_AGG_Cougar_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x328(0x80)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3a8(0x20)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3c8(0xa0)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x468(0x90)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x4f8(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x520(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x678(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6a0(0xa0)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x740(0x30)
	struct FAnimNode_Fabrik AnimGraphNode_Fabrik; // 0x770(0x190)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x900(0x20)
	struct FVector FakeVelocity; // 0x920(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_AGG_Cougar_Dead_AnimBP.SK_CRE_AGG_Cougar_Dead_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_CRE_AGG_Cougar_Dead_AnimBP(int32_t EntryPoint); // Function SK_CRE_AGG_Cougar_Dead_AnimBP.SK_CRE_AGG_Cougar_Dead_AnimBP_C.ExecuteUbergraph_SK_CRE_AGG_Cougar_Dead_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

