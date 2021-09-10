// AnimBlueprintGeneratedClass AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C
// Size: 0x1a3c (Inherited: 0x2c0)
struct UAfricanElephant_M_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2c8(0x20)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2e8(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x308(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x338(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x420(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x450(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x500(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x658(0x28)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x680(0x1c0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x840(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x868(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x908(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x950(0x158)
	char pad_AA8[0x8]; // 0xaa8(0x08)
	struct FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0xab0(0x7e0)
	struct FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0x1290(0x6d0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1960(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1980(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x19a8(0x28)
	bool ShouldRagdoll; // 0x19d0(0x01)
	char pad_19D1[0x7]; // 0x19d1(0x07)
	struct FPoseSnapshot RagdollPose; // 0x19d8(0x38)
	struct FVector PointToLookAt; // 0x1a10(0x0c)
	bool WithinViewAngle; // 0x1a1c(0x01)
	char pad_1A1D[0x3]; // 0x1a1d(0x03)
	float PawnVelocity; // 0x1a20(0x04)
	float IKEnabled; // 0x1a24(0x04)
	float PawnDirection; // 0x1a28(0x04)
	float DeltaT; // 0x1a2c(0x04)
	struct APawn* ControlledPawn; // 0x1a30(0x08)
	float PreviousYaw; // 0x1a38(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalcRotationRate(float CurrentYaw, float YawRotationRate); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AfricanElephant_M_AnimBP_AnimGraphNode_DragonSpineSolver_C95270F84B1131C67614CB8C69CC8280(); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AfricanElephant_M_AnimBP_AnimGraphNode_DragonSpineSolver_C95270F84B1131C67614CB8C69CC8280 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AfricanElephant_M_AnimBP_AnimGraphNode_BlendSpacePlayer_815C8834496EA90C4643CA99A0EEF6F0(); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_AfricanElephant_M_AnimBP_AnimGraphNode_BlendSpacePlayer_815C8834496EA90C4643CA99A0EEF6F0 // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_AfricanElephant_M_AnimBP(int32_t EntryPoint); // Function AfricanElephant_M_AnimBP.AfricanElephant_M_AnimBP_C.ExecuteUbergraph_AfricanElephant_M_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

