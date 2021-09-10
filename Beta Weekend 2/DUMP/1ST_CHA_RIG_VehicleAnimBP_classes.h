// AnimBlueprintGeneratedClass 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C
// Size: 0xf92 (Inherited: 0x2c0)
struct U1ST_CHA_RIG_VehicleAnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root_3; // 0x2c8(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x2f8(0x118)
	struct FAnimNode_Root AnimGraphNode_Root_2; // 0x410(0x30)
	struct FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x440(0x118)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x558(0xa0)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x5f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x620(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x648(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x670(0x28)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x698(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x718(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x748(0x80)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x7c8(0x30)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x7f8(0x50)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x848(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x878(0xb0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x928(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x9f0(0x80)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0xa70(0x1e0)
	struct FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0xc50(0x1e0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xe30(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe50(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xe70(0x30)
	struct FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0xea0(0xb0)
	float DeltaT; // 0xf50(0x04)
	bool IsDriver; // 0xf54(0x01)
	char pad_F55[0x3]; // 0xf55(0x03)
	struct AVehicleBase* VehicleRef; // 0xf58(0x08)
	float VehicleSpeed; // 0xf60(0x04)
	float SteeringValue; // 0xf64(0x04)
	float TotalSteeringAngle; // 0xf68(0x04)
	struct FVector LHandSocketLocation; // 0xf6c(0x0c)
	struct FVector RHandSocketLocation; // 0xf78(0x0c)
	float SteeringAngle; // 0xf84(0x04)
	float CurrentOriginAngle; // 0xf88(0x04)
	float SteeringSpeed; // 0xf8c(0x04)
	bool IsTurningRight; // 0xf90(0x01)
	bool IsTurningLeft; // 0xf91(0x01)

	void VehicleLowerBody(struct FPoseLink LowerInPose, struct FPoseLink VehicleLowerBody); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.VehicleLowerBody // (HasOutParms|BlueprintCallable) // @ game+0x1a38c80
	void VehicleUpperBody(struct FPoseLink UpperInPose, struct FPoseLink VehicleUpperBody); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.VehicleUpperBody // (HasOutParms|BlueprintCallable) // @ game+0x1a38c80
	void AnimGraph(struct FPoseLink AnimGraph); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82(); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B(); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP(int32_t EntryPoint); // Function 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C.ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

