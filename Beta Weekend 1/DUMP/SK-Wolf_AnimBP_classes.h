// AnimBlueprintGeneratedClass SK-Wolf_AnimBP.SK-Wolf_AnimBP_C
// Size: 0x11f9 (Inherited: 0x2c0)
struct USK-Wolf_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x2f8(0x80)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x378(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x398(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x4a0(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x4c0(0xe8)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x5a8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x628(0xa0)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6c8(0xa0)
	struct FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x768(0xb0)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x818(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x900(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x930(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x9e0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa28(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb80(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xba8(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xbd0(0xa0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0xc70(0x368)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xfd8(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x10c0(0xc8)
	float DeltaT; // 0x1188(0x04)
	char pad_118C[0x4]; // 0x118c(0x04)
	struct APawn* ControlledPawn; // 0x1190(0x08)
	float PreviousYaw; // 0x1198(0x04)
	float PawnVelocity; // 0x119c(0x04)
	float PawnDirection; // 0x11a0(0x04)
	bool WithinViewAngle; // 0x11a4(0x01)
	bool ShouldRagdoll; // 0x11a5(0x01)
	char pad_11A6[0x2]; // 0x11a6(0x02)
	struct FPoseSnapshot RagdollPose; // 0x11a8(0x38)
	struct FVector Trace L; // 0x11e0(0x0c)
	enum class EMovementState Current Movement State; // 0x11ec(0x01)
	char pad_11ED[0x3]; // 0x11ed(0x03)
	float LookYaw; // 0x11f0(0x04)
	float LookPitch; // 0x11f4(0x04)
	bool IsSwimming; // 0x11f8(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalcRotationRate(float InCurrentYaw, float YawRotationRate); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_5A99F42445C3117E4C8398A977885D44(); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_5A99F42445C3117E4C8398A977885D44 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_4126597A410D8E2EE1B0C98E39852809(); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendListByBool_4126597A410D8E2EE1B0C98E39852809 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_546C95C6415776AEF547859C8D181151(); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Wolf_AnimBP_AnimGraphNode_BlendSpacePlayer_546C95C6415776AEF547859C8D181151 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK-Wolf_AnimBP(int32_t EntryPoint); // Function SK-Wolf_AnimBP.SK-Wolf_AnimBP_C.ExecuteUbergraph_SK-Wolf_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

