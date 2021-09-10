// AnimBlueprintGeneratedClass SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C
// Size: 0x1764 (Inherited: 0x2c0)
struct USK_CRE_Wulv_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x2c8(0x28)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x2f0(0x158)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x448(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x530(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x560(0xb0)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x610(0x20)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x630(0x30)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x660(0x158)
	char pad_7B8[0x8]; // 0x7b8(0x08)
	struct FAnimNode_DragonSpineSolver AnimGraphNode_DragonSpineSolver; // 0x7c0(0x7e0)
	struct FAnimNode_DragonFeetSolver AnimGraphNode_DragonFeetSolver; // 0xfa0(0x6d0)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1670(0x20)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1690(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x16b8(0x28)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x16e0(0x20)
	float PawnDirection; // 0x1700(0x04)
	float DeltaT; // 0x1704(0x04)
	struct APawn* ControlledPawn; // 0x1708(0x08)
	bool ShouldRagdoll; // 0x1710(0x01)
	char pad_1711[0x7]; // 0x1711(0x07)
	struct FPoseSnapshot RagdollPose; // 0x1718(0x38)
	float IKEnabled; // 0x1750(0x04)
	bool WithinViewAngle; // 0x1754(0x01)
	char pad_1755[0x3]; // 0x1755(0x03)
	float LookYaw; // 0x1758(0x04)
	float LookPitch; // 0x175c(0x04)
	float PawnVelocity; // 0x1760(0x04)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetIKEnabled(bool Enabled); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.SetIKEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wulv_AnimBP_AnimGraphNode_DragonSpineSolver_72EBBCAD4325588C5C34F5B50BB36A98(); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_Wulv_AnimBP_AnimGraphNode_DragonSpineSolver_72EBBCAD4325588C5C34F5B50BB36A98 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BlueprintBeginPlay(); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.BlueprintBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnSetIKEnabled(bool Value); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.OnSetIKEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CRE_Wulv_AnimBP(int32_t EntryPoint); // Function SK_CRE_Wulv_AnimBP.SK_CRE_Wulv_AnimBP_C.ExecuteUbergraph_SK_CRE_Wulv_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

