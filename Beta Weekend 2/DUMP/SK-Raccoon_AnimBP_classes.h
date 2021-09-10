// AnimBlueprintGeneratedClass SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C
// Size: 0xc2c (Inherited: 0x2c0)
struct USK-Raccoon_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2f8(0xa0)
	struct FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x398(0x90)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x428(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x510(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x540(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x5f0(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x748(0x28)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x770(0x1c0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x930(0x48)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x978(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9a0(0xa0)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa40(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa68(0x158)
	float DeltaT; // 0xbc0(0x04)
	char pad_BC4[0x4]; // 0xbc4(0x04)
	struct APawn* ControlledPawn; // 0xbc8(0x08)
	float PreviousYaw; // 0xbd0(0x04)
	float PawnVelocity; // 0xbd4(0x04)
	float PawnDirection; // 0xbd8(0x04)
	struct FVector PointToLookAt; // 0xbdc(0x0c)
	bool WithinViewAngle; // 0xbe8(0x01)
	bool ShouldRagdoll; // 0xbe9(0x01)
	char pad_BEA[0x6]; // 0xbea(0x06)
	struct FPoseSnapshot RagdollPose; // 0xbf0(0x38)
	float IKEnabled; // 0xc28(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalcRotationRate(float CurrentYaw, float YawRotationRate); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Raccoon_AnimBP_AnimGraphNode_BlendSpacePlayer_5F6E1F72411639FE00C683B281D5A65F(); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Raccoon_AnimBP_AnimGraphNode_BlendSpacePlayer_5F6E1F72411639FE00C683B281D5A65F // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK-Raccoon_AnimBP(int32_t EntryPoint); // Function SK-Raccoon_AnimBP.SK-Raccoon_AnimBP_C.ExecuteUbergraph_SK-Raccoon_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

