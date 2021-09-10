// AnimBlueprintGeneratedClass Mammoth_M_AnimBP.Mammoth_M_AnimBP_C
// Size: 0xc9c (Inherited: 0x2c0)
struct UMammoth_M_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x2f8(0xe8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x3e0(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x4c8(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x590(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x5c0(0xb0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x670(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7c8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x7f0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x818(0xa0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x8b8(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x900(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xa58(0x28)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xa80(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xb68(0xc8)
	bool ShouldRagdoll; // 0xc30(0x01)
	char pad_C31[0x7]; // 0xc31(0x07)
	struct FPoseSnapshot RagdollPose; // 0xc38(0x38)
	bool WithinViewAngle; // 0xc70(0x01)
	char pad_C71[0x3]; // 0xc71(0x03)
	float PawnVelocity; // 0xc74(0x04)
	float IKEnabled; // 0xc78(0x04)
	float PawnDirection; // 0xc7c(0x04)
	float DeltaT; // 0xc80(0x04)
	char pad_C84[0x4]; // 0xc84(0x04)
	struct APawn* ControlledPawn; // 0xc88(0x08)
	float PreviousYaw; // 0xc90(0x04)
	float LookYaw; // 0xc94(0x04)
	float LookPitch; // 0xc98(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mammoth_M_AnimBP_AnimGraphNode_BlendSpacePlayer_EC24EAD0408ADF55DC3785A67B1B8EB9(); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Mammoth_M_AnimBP_AnimGraphNode_BlendSpacePlayer_EC24EAD0408ADF55DC3785A67B1B8EB9 // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_Mammoth_M_AnimBP(int32_t EntryPoint); // Function Mammoth_M_AnimBP.Mammoth_M_AnimBP_C.ExecuteUbergraph_Mammoth_M_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

