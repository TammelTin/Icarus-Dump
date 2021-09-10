// AnimBlueprintGeneratedClass SK-Bear_AnimBP.SK-Bear_AnimBP_C
// Size: 0x1035 (Inherited: 0x2c0)
struct USK-Bear_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2c8(0xb0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x378(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x3f8(0xa0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x498(0xe8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x580(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x600(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x6a0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x6c0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x7c8(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x7e8(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x8d0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x900(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x9b0(0x158)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xb08(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xb50(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb78(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xba0(0xa0)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0xc40(0x1c0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe00(0x158)
	struct FAnimNode_Root AnimGraphNode_Root; // 0xf58(0x30)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xf88(0x28)
	struct FVector __CustomProperty_Trace_Length_0E3912484F618EBFA97571B9CD075E81; // 0xfb0(0x0c)
	float __CustomProperty_Trace_Offset_0E3912484F618EBFA97571B9CD075E81; // 0xfbc(0x04)
	float __CustomProperty_Pelvis_Speed_Inc_0E3912484F618EBFA97571B9CD075E81; // 0xfc0(0x04)
	float __CustomProperty_Pelvis_Speed_Dec_0E3912484F618EBFA97571B9CD075E81; // 0xfc4(0x04)
	float PreviousYaw; // 0xfc8(0x04)
	float DeltaT; // 0xfcc(0x04)
	struct APawn* ControlledPawn; // 0xfd0(0x08)
	float PawnVelocity; // 0xfd8(0x04)
	float PawnDirection; // 0xfdc(0x04)
	struct FVector PointToLookAt; // 0xfe0(0x0c)
	bool WithinViewAngle; // 0xfec(0x01)
	bool ShouldRagdoll; // 0xfed(0x01)
	char pad_FEE[0x2]; // 0xfee(0x02)
	struct FPoseSnapshot RagdollPose; // 0xff0(0x38)
	float IKEnabled; // 0x1028(0x04)
	bool IsSwimming; // 0x102c(0x01)
	char pad_102D[0x3]; // 0x102d(0x03)
	float IKStrength; // 0x1030(0x04)
	enum class EMovementState CurrentMovementState; // 0x1034(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetIKStrength(); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.GetIKStrength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void CalcRotationRate(float CurrentYaw, float YawRotationRate); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendListByBool_08BC8BF4457ACC9ECCC6138F7452FA27(); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendListByBool_08BC8BF4457ACC9ECCC6138F7452FA27 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_36BC4CBF4A0C2F5862A11B9313F4D8C5(); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_36BC4CBF4A0C2F5862A11B9313F4D8C5 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_1DB800EB41A9ED5CF2090CA4FD8949FA(); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Bear_AnimBP_AnimGraphNode_BlendSpacePlayer_1DB800EB41A9ED5CF2090CA4FD8949FA // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK-Bear_AnimBP(int32_t EntryPoint); // Function SK-Bear_AnimBP.SK-Bear_AnimBP_C.ExecuteUbergraph_SK-Bear_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

