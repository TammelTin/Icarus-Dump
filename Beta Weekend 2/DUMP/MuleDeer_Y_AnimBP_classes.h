// AnimBlueprintGeneratedClass MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C
// Size: 0x1e45 (Inherited: 0x2c0)
struct UMuleDeer_Y_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2f8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x398(0x80)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x418(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x438(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x540(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x560(0xe8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x648(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x730(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x7f8(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x828(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x8d8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xa30(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa58(0x28)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xa80(0x48)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xac8(0xa0)
	char pad_B68[0x8]; // 0xb68(0x08)
	struct FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0xb70(0x7e0)
	struct FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0x1350(0x6d0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1a20(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1a40(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1a60(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1bb8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1be0(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1c08(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1c28(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1d10(0xc8)
	float PawnDirection; // 0x1dd8(0x04)
	float PawnVelocity; // 0x1ddc(0x04)
	float DeltaT; // 0x1de0(0x04)
	char pad_1DE4[0x4]; // 0x1de4(0x04)
	struct APawn* ControlledPawn; // 0x1de8(0x08)
	bool ShouldRagdoll; // 0x1df0(0x01)
	char pad_1DF1[0x7]; // 0x1df1(0x07)
	struct FPoseSnapshot RagdollPose; // 0x1df8(0x38)
	float IKEnabled; // 0x1e30(0x04)
	bool WithinViewAngle; // 0x1e34(0x01)
	char pad_1E35[0x3]; // 0x1e35(0x03)
	float LookYaw; // 0x1e38(0x04)
	float LookPitch; // 0x1e3c(0x04)
	float IKStrength; // 0x1e40(0x04)
	bool IsSwimming; // 0x1e44(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetIKStrength(); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.GetIKStrength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MuleDeer_Y_AnimBP_AnimGraphNode_DragonSpineSolver_A9B502644FD89F19289A09B1FB79CFC7(); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MuleDeer_Y_AnimBP_AnimGraphNode_DragonSpineSolver_A9B502644FD89F19289A09B1FB79CFC7 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_MuleDeer_Y_AnimBP_AnimGraphNode_BlendSpacePlayer_E25F94CA4D6DD7B41580C59DBC36EEBC(); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MuleDeer_Y_AnimBP_AnimGraphNode_BlendSpacePlayer_E25F94CA4D6DD7B41580C59DBC36EEBC // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_MuleDeer_Y_AnimBP(int32_t EntryPoint); // Function MuleDeer_Y_AnimBP.MuleDeer_Y_AnimBP_C.ExecuteUbergraph_MuleDeer_Y_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

