// AnimBlueprintGeneratedClass SK-Deer_AnimBP.SK-Deer_AnimBP_C
// Size: 0x10ec (Inherited: 0x2c0)
struct USK-Deer_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x2f8(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x378(0xa0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x418(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x438(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x540(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x560(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x648(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x678(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x728(0x48)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x770(0x1c0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x930(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xa88(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xab0(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xad8(0xa0)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb78(0x158)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0xcd0(0x368)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1038(0x28)
	struct FVector __CustomProperty_Trace_Length_162BB0D7450977913D57BAA9039D54DD; // 0x1060(0x0c)
	float __CustomProperty_Trace_Offset_162BB0D7450977913D57BAA9039D54DD; // 0x106c(0x04)
	float __CustomProperty_Pelvis_Speed_Inc_162BB0D7450977913D57BAA9039D54DD; // 0x1070(0x04)
	float __CustomProperty_Pelvis_Speed_Dec_162BB0D7450977913D57BAA9039D54DD; // 0x1074(0x04)
	float PawnVelocity; // 0x1078(0x04)
	float PawnDirection; // 0x107c(0x04)
	float PreviousYaw; // 0x1080(0x04)
	bool ShouldRagdoll; // 0x1084(0x01)
	char pad_1085[0x3]; // 0x1085(0x03)
	struct FPoseSnapshot RagdollPose; // 0x1088(0x38)
	struct FVector PointToLookAt; // 0x10c0(0x0c)
	char pad_10CC[0x4]; // 0x10cc(0x04)
	struct APawn* ControlledPawn; // 0x10d0(0x08)
	bool WithinViewAngle; // 0x10d8(0x01)
	char pad_10D9[0x3]; // 0x10d9(0x03)
	float DeltaT; // 0x10dc(0x04)
	float IKEnabled; // 0x10e0(0x04)
	bool IsSwimming; // 0x10e4(0x01)
	char pad_10E5[0x3]; // 0x10e5(0x03)
	float IKStrength; // 0x10e8(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetIKStrength(); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.GetIKStrength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CalcRotationRate(float CurrentYaw, float YawRotationRate); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Deer_AnimBP_AnimGraphNode_BlendSpacePlayer_4D5A5B6C4BC22AA35441F7BC6BC83EE6(); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK-Deer_AnimBP_AnimGraphNode_BlendSpacePlayer_4D5A5B6C4BC22AA35441F7BC6BC83EE6 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BlueprintBeginPlay(); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SetIKEnabled(bool Value); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK-Deer_AnimBP(int32_t EntryPoint); // Function SK-Deer_AnimBP.SK-Deer_AnimBP_C.ExecuteUbergraph_SK-Deer_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

