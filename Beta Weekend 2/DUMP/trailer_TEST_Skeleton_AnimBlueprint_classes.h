// AnimBlueprintGeneratedClass trailer_TEST_Skeleton_AnimBlueprint.trailer_TEST_Skeleton_AnimBlueprint_C
// Size: 0xb98 (Inherited: 0xa50)
struct Utrailer_TEST_Skeleton_AnimBlueprint_C : UVehicleAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa50(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xa58(0x30)
	struct FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0xa88(0x10)
	struct FAnimNode_WheelHandler AnimGraphNode_WheelHandler; // 0xa98(0xe0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb78(0x20)

	void AnimGraph(struct FPoseLink AnimGraph); // Function trailer_TEST_Skeleton_AnimBlueprint.trailer_TEST_Skeleton_AnimBlueprint_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_trailer_TEST_Skeleton_AnimBlueprint(int32_t EntryPoint); // Function trailer_TEST_Skeleton_AnimBlueprint.trailer_TEST_Skeleton_AnimBlueprint_C.ExecuteUbergraph_trailer_TEST_Skeleton_AnimBlueprint // (Final|UbergraphFunction) // @ game+0x1a38c80
};

