// AnimBlueprintGeneratedClass SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C
// Size: 0x979 (Inherited: 0x2c0)
struct USK_CRE_RedGoat_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2f8(0xe8)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3e0(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x410(0xb0)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0x4c0(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x508(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x660(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x688(0x28)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x6b0(0xa0)
	struct FAnimNode_AimOffsetLookAt AnimGraphNode_AimOffsetLookAt; // 0x750(0x1c0)
	float DeltaT; // 0x910(0x04)
	char pad_914[0x4]; // 0x914(0x04)
	struct APawn* ControlledPawn; // 0x918(0x08)
	bool ShouldRagdoll; // 0x920(0x01)
	char pad_921[0x7]; // 0x921(0x07)
	struct FPoseSnapshot RagdollPose; // 0x928(0x38)
	float PreviousYaw; // 0x960(0x04)
	float PawnVelocity; // 0x964(0x04)
	float PawnDirection; // 0x968(0x04)
	struct FVector PointToLookAt; // 0x96c(0x0c)
	bool WithinViewAngle; // 0x978(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalcRotationRate(float Current_Yaw, float YawRotationRate); // Function SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C.CalcRotationRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RedGoat_AnimBP_AnimGraphNode_BlendSpacePlayer_F0F630824DD929ABA2AD1785F8739216(); // Function SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_CRE_RedGoat_AnimBP_AnimGraphNode_BlendSpacePlayer_F0F630824DD929ABA2AD1785F8739216 // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_CRE_RedGoat_AnimBP(int32_t EntryPoint); // Function SK_CRE_RedGoat_AnimBP.SK_CRE_RedGoat_AnimBP_C.ExecuteUbergraph_SK_CRE_RedGoat_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

