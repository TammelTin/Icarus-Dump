// AnimBlueprintGeneratedClass SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C
// Size: 0x18a0 (Inherited: 0x9c0)
struct USK_BOW_Longbow_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xe78(0xa0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; // 0xf18(0x368)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x1280(0x368)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x15e8(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1740(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1768(0x28)
	struct FVector __CustomProperty_ArrowPlacment_346C68914A7EEA8B0E6F73955A504C04; // 0x1790(0x0c)
	char pad_179C[0x4]; // 0x179c(0x04)
	struct FTransform __CustomProperty_String_Global_Position_346C68914A7EEA8B0E6F73955A504C04; // 0x17a0(0x30)
	struct FVector __CustomProperty_ArrowPlacment_05FAAC694154BA327AF6E0A82B580580; // 0x17d0(0x0c)
	char pad_17DC[0x4]; // 0x17dc(0x04)
	struct FTransform __CustomProperty_AttachArrowToHand_05FAAC694154BA327AF6E0A82B580580; // 0x17e0(0x30)
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; // 0x1810(0x08)
	struct AIcarusPlayerCharacter* Player; // 0x1818(0x08)
	bool IsArrowDetached; // 0x1820(0x01)
	bool Focusing; // 0x1821(0x01)
	char pad_1822[0x6]; // 0x1822(0x06)
	struct UBP_FocusableBehaviour_C* FocusableRef; // 0x1828(0x08)
	struct FTransform StringWorldPosition; // 0x1830(0x30)
	struct FVector HandArrowPlacment; // 0x1860(0x0c)
	bool Is3RDCha; // 0x186c(0x01)
	char pad_186D[0x3]; // 0x186d(0x03)
	struct FTransform AttachOffset; // 0x1870(0x30)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsHandConnectedToString(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.IsHandConnectedToString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D7940AD64B37E8BEA845C2A18C4FD86C // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_4A2404824A08E424DAF3A4BA753A97BE // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_BlendListByBool_D3E8A1FE4BB1A8BC9F8CFC80F89D5E09 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_595421C94D66207DCDE8EFA1D2C571C7 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequenceEvaluator_9CA2EBF6477B6F236BD1439AF9F9EE08 // (BlueprintEvent) // @ game+0x1a38c80
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BOW_Longbow_AnimBP_AnimGraphNode_SequencePlayer_E32111814FB4E3E3640C89B10C4AEEAA // (BlueprintEvent) // @ game+0x1a38c80
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AnimNotify_Bow_AttachArrow(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimNotify_Bow_AttachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AnimNotify_Bow_DetachArrow(); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.AnimNotify_Bow_DetachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_SK_BOW_Longbow_AnimBP(int32_t EntryPoint); // Function SK_BOW_Longbow_AnimBP.SK_BOW_Longbow_AnimBP_C.ExecuteUbergraph_SK_BOW_Longbow_AnimBP // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

