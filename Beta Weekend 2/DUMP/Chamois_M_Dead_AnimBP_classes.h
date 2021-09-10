// AnimBlueprintGeneratedClass Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C
// Size: 0xc4c (Inherited: 0x320)
struct UChamois_M_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x328(0x30)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x358(0x90)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3e8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x488(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x508(0x158)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x660(0x260)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x8c0(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x8e0(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x900(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0xa28(0x128)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb50(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb78(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xc18(0x28)
	struct FVector FakeVelocity; // 0xc40(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_Chamois_M_Dead_AnimBP(int32_t EntryPoint); // Function Chamois_M_Dead_AnimBP.Chamois_M_Dead_AnimBP_C.ExecuteUbergraph_Chamois_M_Dead_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

