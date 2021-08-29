// AnimBlueprintGeneratedClass SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C
// Size: 0xc54 (Inherited: 0x320)
struct USK-Deer_Dead_AnimBP_C : UIcarusCorpseAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x320(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x328(0x30)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x358(0x90)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x3e8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x488(0x80)
	char pad_508[0x8]; // 0x508(0x08)
	struct FAnimNode_Trail AnimGraphNode_Trail; // 0x510(0x260)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x770(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x790(0x20)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone_2; // 0x7b0(0x128)
	struct FAnimNode_SpringBone AnimGraphNode_SpringBone; // 0x8d8(0x128)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa00(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb58(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb80(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xc20(0x28)
	struct FVector FakeVelocity; // 0xc48(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK-Deer_Dead_AnimBP(int32_t EntryPoint); // Function SK-Deer_Dead_AnimBP.SK-Deer_Dead_AnimBP_C.ExecuteUbergraph_SK-Deer_Dead_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

