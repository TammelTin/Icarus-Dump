// AnimBlueprintGeneratedClass SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C
// Size: 0x1c79 (Inherited: 0x9c0)
struct USK_Bow_Wood_AnimBP_C : UIcarusBowAnimInstance {
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
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_3; // 0xe78(0x368)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x11e0(0xa0)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig_2; // 0x1280(0x368)
	struct FAnimNode_ControlRig AnimGraphNode_ControlRig; // 0x15e8(0x368)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1950(0x20)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1970(0x20)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1990(0x158)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1ae8(0x28)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1b10(0x28)
	struct FVector __CustomProperty_ArrowPlacment_1AFC6DC841DF1B33A148B680C698303C; // 0x1b38(0x0c)
	char pad_1B44[0xc]; // 0x1b44(0x0c)
	struct FTransform __CustomProperty_String_Global_Position_1AFC6DC841DF1B33A148B680C698303C; // 0x1b50(0x30)
	struct FVector __CustomProperty_ArrowPlacment_762D9D894231EBD747476CA4B48DD47C; // 0x1b80(0x0c)
	char pad_1B8C[0x4]; // 0x1b8c(0x04)
	struct FTransform __CustomProperty_AttachArrowToHand_762D9D894231EBD747476CA4B48DD47C; // 0x1b90(0x30)
	struct UBP_ActionableBehaviour_Firearm_C* FirearmActionable; // 0x1bc0(0x08)
	struct AIcarusPlayerCharacter* Player; // 0x1bc8(0x08)
	struct FTransform StringWorldPosition; // 0x1bd0(0x30)
	struct FVector HandArrowPlacment; // 0x1c00(0x0c)
	bool ArrowSwitch; // 0x1c0c(0x01)
	bool IsArrowDetached; // 0x1c0d(0x01)
	char pad_1C0E[0x2]; // 0x1c0e(0x02)
	struct UBP_FocusableBehaviour_C* FocusableRef; // 0x1c10(0x08)
	bool Focusing; // 0x1c18(0x01)
	char pad_1C19[0x7]; // 0x1c19(0x07)
	struct FTransform AttachOffset; // 0x1c20(0x30)
	bool Is3RDCha; // 0x1c50(0x01)
	char pad_1C51[0x7]; // 0x1c51(0x07)
	struct UBP_ActionableBehaviour_FireArm_FireController_Base_C* Fire Controller; // 0x1c58(0x08)
	struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C* Ammo Controller; // 0x1c60(0x08)
	struct UBP_ActionableBehaviour_Firearm_AimController_Base_C* Aim Controller; // 0x1c68(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Owning Player; // 0x1c70(0x08)
	bool ThirdPerson; // 0x1c78(0x01)

	void AnimGraph(struct FPoseLink AnimGraph); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.AnimGraph // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CacheFocusing(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.CacheFocusing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CacheHandArrowPlacement(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.CacheHandArrowPlacement // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CacheStringPosition(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.CacheStringPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CacheThirdPerson(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.CacheThirdPerson // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsHandConnectedToString(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.IsHandConnectedToString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_70413D204D31EB91B5FDB9A182B588B7(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_70413D204D31EB91B5FDB9A182B588B7 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_32A8F6624DF7992ABC9209A21EF8085F(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_32A8F6624DF7992ABC9209A21EF8085F // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_64FCB31F4605BEED61D62A8CB5B4B258(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_BlendListByBool_64FCB31F4605BEED61D62A8CB5B4B258 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_7C9B176D4A593DD24D7ABFA297A8BA37(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_7C9B176D4A593DD24D7ABFA297A8BA37 // (BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_6DD8745D426A6F38770086BF085F12DF(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequenceEvaluator_6DD8745D426A6F38770086BF085F12DF // (BlueprintEvent) // @ game+0x1a05090
	void BlueprintUpdateAnimation(float DeltaTimeX); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.BlueprintUpdateAnimation // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_0B0929B943D728A6B691ABBCA2363390(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SK_Bow_Wood_AnimBP_AnimGraphNode_SequencePlayer_0B0929B943D728A6B691ABBCA2363390 // (BlueprintEvent) // @ game+0x1a05090
	void AnimNotify_Bow_AttachArrow(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.AnimNotify_Bow_AttachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AnimNotify_Bow_DetachArrow(); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.AnimNotify_Bow_DetachArrow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SK_Bow_Wood_AnimBP(int32_t EntryPoint); // Function SK_Bow_Wood_AnimBP.SK_Bow_Wood_AnimBP_C.ExecuteUbergraph_SK_Bow_Wood_AnimBP // (Final|UbergraphFunction) // @ game+0x1a05090
};

