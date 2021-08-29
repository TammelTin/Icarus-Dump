// AnimBlueprintGeneratedClass SK_CHA_head_CopyPose_AnimBP.SK_CHA_head_CopyPose_AnimBP_C
// Size: 0x610 (Inherited: 0x2c0)
struct USK_CHA_head_CopyPose_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_CopyPoseFromMesh AnimGraphNode_CopyPoseFromMesh; // 0x378(0x1d8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x550(0xc0)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CHA_head_CopyPose_AnimBP.SK_CHA_head_CopyPose_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CHA_head_CopyPose_AnimBP(int32_t EntryPoint); // Function SK_CHA_head_CopyPose_AnimBP.SK_CHA_head_CopyPose_AnimBP_C.ExecuteUbergraph_SK_CHA_head_CopyPose_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

