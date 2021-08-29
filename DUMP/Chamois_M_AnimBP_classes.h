// AnimBlueprintGeneratedClass Chamois_M_AnimBP.Chamois_M_AnimBP_C
// Size: 0x1e44 (Inherited: 0x2c0)
struct UChamois_M_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x2c8(0xc8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x390(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x3c0(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x4a8(0xc8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x570(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x5f0(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x690(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6b0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x7b8(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x7d8(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8c0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x8f0(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x9a0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xaf8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xb20(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xb48(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xbe8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xc30(0x158)
	char pad_D88[0x8]; // 0xd88(0x08)
	struct FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0xd90(0x7e0)
	struct FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0x1570(0x6d0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1c40(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1c60(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1c88(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1cb0(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1cd0(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1cf0(0xe8)
	struct FPoseSnapshot RagdollPose; // 0x1dd8(0x38)
	bool ShouldRagdoll; // 0x1e10(0x01)
	char pad_1E11[0x3]; // 0x1e11(0x03)
	float PawnDirection; // 0x1e14(0x04)
	float PawnVelocity; // 0x1e18(0x04)
	float DeltaT; // 0x1e1c(0x04)
	struct APawn* ControlledPawn; // 0x1e20(0x08)
	float PreviousYaw; // 0x1e28(0x04)
	bool WithinViewAngle; // 0x1e2c(0x01)
	char pad_1E2D[0x3]; // 0x1e2d(0x03)
	float IKEnabled; // 0x1e30(0x04)
	bool IsSwimming; // 0x1e34(0x01)
	char pad_1E35[0x3]; // 0x1e35(0x03)
	float IKStrength; // 0x1e38(0x04)
	float LookYaw; // 0x1e3c(0x04)
	float LookPitch; // 0x1e40(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetIKStrength(); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.GetIKStrength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CalcRotationRate(float CurrentYaw, float YawRotationRate); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chamois_M_AnimBP_AnimGraphNode_DragonSpineSolver_8A51C2C348B7E8ED2690F5AD169003BF(); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chamois_M_AnimBP_AnimGraphNode_DragonSpineSolver_8A51C2C348B7E8ED2690F5AD169003BF // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Chamois_M_AnimBP_AnimGraphNode_BlendSpacePlayer_0D42802941EBBF57F67E88AF84BF47E0(); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Chamois_M_AnimBP_AnimGraphNode_BlendSpacePlayer_0D42802941EBBF57F67E88AF84BF47E0 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BlueprintBeginPlay(); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetIKEnabled(bool Value); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_Chamois_M_AnimBP(int32_t EntryPoint); // Function Chamois_M_AnimBP.Chamois_M_AnimBP_C.ExecuteUbergraph_Chamois_M_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

