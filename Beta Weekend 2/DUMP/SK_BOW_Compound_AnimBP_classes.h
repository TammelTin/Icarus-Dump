// AnimBlueprintGeneratedClass SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C
// Size: 0x18a1 (Inherited: 0x9c0)
struct USK_BOW_Compound_AnimBP_C : UIcarusBowAnimInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9c0(0x08)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x9c8(0x30)
	struct FAnimNode_Inertialization AnimGraphNode_Inertialization; // 0x9f8(0x70)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xa68(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xb08(0x80)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xb88(0xa0)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xc28(0x50)
	struct FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xc78(0x50)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xcc8(0xa0)
	struct FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xd68(0x80)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0xde8(0x48)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xe30(0x48)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xe78(0x158)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xfd0(0xa0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; // 0x1070(0x368)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x13d8(0x368)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1740(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1768(0x28)
	struct FVector __CustomProperty_ArrowPlacment_BDB4F72B4518DD90CB4119BB036AE435; // 0x1790(0x0c)
	char pad_179C[0x4]; // 0x179c(0x04)
	struct FTransform __CustomProperty_String_Global_Position_BDB4F72B4518DD90CB4119BB036AE435; // 0x17a0(0x30)
	struct FVector __CustomProperty_ArrowPlacment_B26C34D24B2ABA795C98F4812B72BFD8; // 0x17d0(0x0c)
	char pad_17DC[0x4]; // 0x17dc(0x04)
	struct FTransform __CustomProperty_AttachArrowToHand_B26C34D24B2ABA795C98F4812B72BFD8; // 0x17e0(0x30)
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; // 0x1810(0x08)
	struct AIcarusPlayerCharacter* Player; // 0x1818(0x08)
	struct UBP_FocusableBehaviour_C* FocusableRef; // 0x1820(0x08)
	bool IsArrowDetached; // 0x1828(0x01)
	bool Focusing; // 0x1829(0x01)
	char pad_182A[0x6]; // 0x182a(0x06)
	struct FTransform StringWorldPosition; // 0x1830(0x30)
	struct FVector HandArrowPlacment; // 0x1860(0x0c)
	char pad_186C[0x4]; // 0x186c(0x04)
	struct FTransform AttachOffset; // 0x1870(0x30)
	bool Is3RDCha; // 0x18a0(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsHandConnectedToString(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.IsHandConnectedToString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_AA08317045CA4F85288555AB8FBA0EF1(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_AA08317045CA4F85288555AB8FBA0EF1 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_37F8541B4B53CE1261744D83C201076C(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_37F8541B4B53CE1261744D83C201076C // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_DBE7D59C4B35C1FDDCF1678B47AFDFDF(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_BlendListByBool_DBE7D59C4B35C1FDDCF1678B47AFDFDF // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_6C687CB14ABBE926703B7C974DD74AF9(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_6C687CB14ABBE926703B7C974DD74AF9 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_0B377C5B4EC457C562A423A9AC27E086(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequenceEvaluator_0B377C5B4EC457C562A423A9AC27E086 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_36B9DD0F47DEB9B544D99B9083D0FC99(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Compound_AnimBP_AnimGraphNode_SequencePlayer_36B9DD0F47DEB9B544D99B9083D0FC99 // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AnimNotify_Bow_AttachArrow(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.AnimNotify_Bow_AttachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AnimNotify_Bow_DetachArrow(); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.AnimNotify_Bow_DetachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_BOW_Compound_AnimBP(int32_t EntryPoint); // Function SK_BOW_Compound_AnimBP.SK_BOW_Compound_AnimBP_C.ExecuteUbergraph_SK_BOW_Compound_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

