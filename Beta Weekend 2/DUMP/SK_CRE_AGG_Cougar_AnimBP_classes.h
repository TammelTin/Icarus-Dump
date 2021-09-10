// AnimBlueprintGeneratedClass SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C
// Size: 0x1268 (Inherited: 0x2c0)
struct USK_CRE_AGG_Cougar_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x2f8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x450(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x478(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x4a0(0xa0)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x540(0xc8)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x608(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x650(0x158)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x7a8(0xe8)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x890(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x930(0x80)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x9b0(0x20)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x9d0(0x108)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xad8(0x20)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xaf8(0xe8)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xbe0(0xe8)
	struct FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xcc8(0xc8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0xd90(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xdc0(0xb0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0xe70(0x368)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x11d8(0x28)
	float DeltaT; // 0x1200(0x04)
	float PawnDirection; // 0x1204(0x04)
	float PawnVelocity; // 0x1208(0x04)
	bool ShouldRagdoll; // 0x120c(0x01)
	char pad_120D[0x3]; // 0x120d(0x03)
	struct FPoseSnapshot RagdollPose; // 0x1210(0x38)
	struct APawn* ControlledPawn; // 0x1248(0x08)
	float LookYaw; // 0x1250(0x04)
	float LookPitch; // 0x1254(0x04)
	bool WithinViewAngle; // 0x1258(0x01)
	char pad_1259[0x3]; // 0x1259(0x03)
	float IKEnabled; // 0x125c(0x04)
	bool IsSwimming; // 0x1260(0x01)
	char pad_1261[0x3]; // 0x1261(0x03)
	float IKStrength; // 0x1264(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetIKStrength(); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.GetIKStrength // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_AGG_Cougar_AnimBP_AnimGraphNode_BlendSpacePlayer_F6EB156740E84E6D093F018A4E102487(); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_AGG_Cougar_AnimBP_AnimGraphNode_BlendSpacePlayer_F6EB156740E84E6D093F018A4E102487 // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BlueprintBeginPlay(); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetIKEnabled(bool Value); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.SetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_CRE_AGG_Cougar_AnimBP(int32_t EntryPoint); // Function SK_CRE_AGG_Cougar_AnimBP.SK_CRE_AGG_Cougar_AnimBP_C.ExecuteUbergraph_SK_CRE_AGG_Cougar_AnimBP // (Final|UbergraphFunction) // @ game+0x1a38c80
};

