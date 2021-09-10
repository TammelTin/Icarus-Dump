// AnimBlueprintGeneratedClass SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C
// Size: 0x925 (Inherited: 0x2c0)
struct USK_BOW_Crossbow_02_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x310(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x338(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3d8(0x80)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x458(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x5b0(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5d8(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x5f8(0x158)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x750(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x7f0(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x810(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x838(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x8b8(0x30)
	struct UBP_ActionableBehaviour_Firearm_C* GunBehaviour; // 0x8e8(0x08)
	struct FTransform PlayerTransform; // 0x8f0(0x30)
	bool Crouching; // 0x920(0x01)
	bool IsFirstPerson; // 0x921(0x01)
	bool IsADS; // 0x922(0x01)
	bool Reloading; // 0x923(0x01)
	bool Loaded; // 0x924(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP(int32_t EntryPoint); // Function SK_BOW_Crossbow_02_AnimBP.SK_BOW_Crossbow_02_AnimBP_C.ExecuteUbergraph_SK_BOW_Crossbow_02_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

