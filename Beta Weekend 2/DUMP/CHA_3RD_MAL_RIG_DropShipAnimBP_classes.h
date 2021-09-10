// AnimBlueprintGeneratedClass CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C
// Size: 0xe9d (Inherited: 0x2c0)
struct UCHA_3RD_MAL_RIG_DropShipAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x2c8(0x50)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x318(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x398(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x438(0x158)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x590(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x6a8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6d8(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x778(0x50)
	struct FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x7c8(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x890(0x80)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x910(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x960(0xa0)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0xa00(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0xb18(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xb48(0x80)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xbc8(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xbe8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xc08(0x30)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0xc38(0xb0)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0xce8(0xb0)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xd98(0xc0)
	bool IsDriver; // 0xe58(0x01)
	char pad_E59[0x7]; // 0xe59(0x07)
	struct AVehicleBase* VehicleRef; // 0xe60(0x08)
	float AimPitch; // 0xe68(0x04)
	float AimYaw; // 0xe6c(0x04)
	struct FRotator LookRot; // 0xe70(0x0c)
	float AnimDelta; // 0xe7c(0x04)
	float VehicleSpeed; // 0xe80(0x04)
	struct FVector LHandSocketLocation; // 0xe84(0x0c)
	struct FVector RHandSocketLocation; // 0xe90(0x0c)
	bool Shake; // 0xe9c(0x01)

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink VehicleLowerBody); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleLowerBody // (HasOutParms|BlueprintCallable) // @ game+0x1a38c80
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink VehicleUpperBody); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.VehicleUpperBody // (HasOutParms|BlueprintCallable) // @ game+0x1a38c80
	void AnimGraph(struct FPoseLink AnimGraph); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38(); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38 // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP(int32_t EntryPoint); // Function CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C.ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

