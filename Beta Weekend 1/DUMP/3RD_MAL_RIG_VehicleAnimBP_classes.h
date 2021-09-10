// AnimBlueprintGeneratedClass 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C
// Size: 0xe60 (Inherited: 0x2c0)
struct U3RD_MAL_RIG_VehicleAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2c8(0x80)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x348(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x378(0x118)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x490(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x530(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x550(0x20)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x570(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x5c0(0xc8)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x688(0xc0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x748(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x8a0(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x8c8(0x28)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x8f0(0x118)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xa08(0x50)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa58(0x80)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0xad8(0xc8)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0xba0(0x30)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xbd0(0x30)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0xc00(0xb0)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0xcb0(0xb0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xd60(0xc0)
	float VehicleSpeed; // 0xe20(0x04)
	float AnimDelta; // 0xe24(0x04)
	struct AVehicleBase* VehicleRef; // 0xe28(0x08)
	bool IsDriver; // 0xe30(0x01)
	char pad_E31[0x3]; // 0xe31(0x03)
	struct FVector LHandSocketLocation; // 0xe34(0x0c)
	struct FVector RHandSocketLocation; // 0xe40(0x0c)
	struct FRotator LookRot; // 0xe4c(0x0c)
	float AimPitch; // 0xe58(0x04)
	float AimYaw; // 0xe5c(0x04)

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink VehicleLowerBody); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.VehicleLowerBody // (HasOutParms|BlueprintCallable) // @ game+0x1a05090
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink VehicleUpperBody); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.VehicleUpperBody // (HasOutParms|BlueprintCallable) // @ game+0x1a05090
	void AnimGraph(struct FPoseLink AnimGraph); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963(); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1BEB1E3046A901C989FDE0A7EE266963 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102(); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP_AnimGraphNode_TwoWayBlend_1789D1784BEF7D2507088CBCDA1D2102 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP(int32_t EntryPoint); // Function 3RD_MAL_RIG_VehicleAnimBP.3RD_MAL_RIG_VehicleAnimBP_C.ExecuteUbergraph_3RD_MAL_RIG_VehicleAnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

