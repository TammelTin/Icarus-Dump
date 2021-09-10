// BlueprintGeneratedClass BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C
// Size: 0x2d1 (Inherited: 0x2c0)
struct UBP_ActionableBehaviour_Base_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct FRandomStream RandomStream; // 0x2c8(0x08)
	bool DEBUG_ShowGetAnimationErrorMessages; // 0x2d0(0x01)

	void TryGetFailAnimations(struct TArray<struct FName> TP_AnimNames, struct TArray<struct FName> FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetFailAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryGetMissAnimations(struct TArray<struct FName> TP_AnimNames, struct TArray<struct FName> FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetMissAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryGetSuccessAnimations(struct FValidHitTypesRowHandle ValidHitType, struct TArray<struct FName> TP_AnimNames, struct TArray<struct FName> FP_AnimNames); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.TryGetSuccessAnimations // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Select Random Weighted Montage(struct UAnimMontage* AnimMontage, struct TArray<struct FName> SectionNames, struct FName ChosenSection); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.Select Random Weighted Montage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayActionMontage(struct AIcarusPlayerCharacter* AnimTarget, bool PlayRandom, float SpeedModifier, struct TArray<struct FName> TPAnimSections, struct TArray<struct FName> FPAnimSections); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.PlayActionMontage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Base.BP_ActionableBehaviour_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Base // (Final|UbergraphFunction) // @ game+0x1a05090
};

