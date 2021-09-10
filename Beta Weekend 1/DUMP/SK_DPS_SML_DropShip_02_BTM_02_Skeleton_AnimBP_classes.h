// AnimBlueprintGeneratedClass SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C
// Size: 0x7c1 (Inherited: 0x2c0)
struct USK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C : UAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2c8(0x30)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2f8(0x28)
	struct FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x320(0x28)
	struct FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x348(0x30)
	struct FAnimNode_StateResult AnimGraphNode_StateResult; // 0x378(0x30)
	struct FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3a8(0xb0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x458(0x368)
	bool IsDeployed; // 0x7c0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AnimNotify_PlaySound(); // Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.AnimNotify_PlaySound // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP(int32_t EntryPoint); // Function SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP.SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP_C.ExecuteUbergraph_SK_DPS_SML_DropShip_02_BTM_02_Skeleton_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

