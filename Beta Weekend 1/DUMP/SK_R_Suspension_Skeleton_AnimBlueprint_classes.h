// AnimBlueprintGeneratedClass SK_R_Suspension_Skeleton_AnimBlueprint.SK_R_Suspension_Skeleton_AnimBlueprint_C
// Size: 0x43c (Inherited: 0x2c0)
struct USK_R_Suspension_Skeleton_AnimBlueprint_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x2f8(0x10)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x308(0x108)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x410(0x20)
	struct FVector SuspensionEnd; // 0x430(0x0c)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_R_Suspension_Skeleton_AnimBlueprint.SK_R_Suspension_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_R_Suspension_Skeleton_AnimBlueprint.SK_R_Suspension_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_R_Suspension_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function SK_R_Suspension_Skeleton_AnimBlueprint.SK_R_Suspension_Skeleton_AnimBlueprint_C.ExecuteUbergraph_SK_R_Suspension_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1a05090
};

