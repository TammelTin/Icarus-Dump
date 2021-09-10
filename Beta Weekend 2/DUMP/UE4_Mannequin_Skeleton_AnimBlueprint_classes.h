// AnimBlueprintGeneratedClass UE4_Mannequin_Skeleton_AnimBlueprint.UE4_Mannequin_Skeleton_AnimBlueprint_C
// Size: 0x780 (Inherited: 0x2c0)
struct UUE4_Mannequin_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8(0x20)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x308(0x80)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x388(0x30)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3b8(0x108)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x4c0(0x80)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x540(0x80)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x5c0(0xc0)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x680(0xc8)
	struct FVector LHandTarget; // 0x748(0x0c)
	struct FVector RHandTarget; // 0x754(0x0c)
	struct ASpaceStation_PlayerCharacter_C* Player; // 0x760(0x08)
	float CrouchAlpha; // 0x768(0x04)
	struct FRotator Rotation; // 0x76c(0x0c)
	float Forward; // 0x778(0x04)
	float Right; // 0x77c(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function UE4_Mannequin_Skeleton_AnimBlueprint.UE4_Mannequin_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function UE4_Mannequin_Skeleton_AnimBlueprint.UE4_Mannequin_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UE4_Mannequin_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function UE4_Mannequin_Skeleton_AnimBlueprint.UE4_Mannequin_Skeleton_AnimBlueprint_C.ExecuteUbergraph_UE4_Mannequin_Skeleton_AnimBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

