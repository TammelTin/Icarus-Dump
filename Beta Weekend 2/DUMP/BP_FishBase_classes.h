// BlueprintGeneratedClass BP_FishBase.BP_FishBase_C
// Size: 0x450 (Inherited: 0x390)
struct ABP_FishBase_C : AFishActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct UExperienceComponent* Experience; // 0x398(0x08)
	struct UHighlightableComponent* Highlightable; // 0x3a0(0x08)
	struct UInteractableComponent* Interactable; // 0x3a8(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x3b0(0x08)
	float CorrectionUpdateTime; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct FMulticastInlineDelegate FishDetached; // 0x3c0(0x10)
	bool FishSetupInit; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FFishSetup FishSetupData_1; // 0x3d8(0x78)

	void GetFishSetup(struct FFishSetup FishSetup); // Function BP_FishBase.BP_FishBase_C.GetFishSetup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Pickup(struct ABP_IcarusPlayerCharacterSurvival_C* Player); // Function BP_FishBase.BP_FishBase_C.Pickup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DetachFromLure(); // Function BP_FishBase.BP_FishBase_C.DetachFromLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckFishManager(); // Function BP_FishBase.BP_FishBase_C.CheckFishManager // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_FishBase.BP_FishBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRepLocation(); // Function BP_FishBase.BP_FishBase_C.UpdateRepLocation // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FishBase.BP_FishBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BPOnRep_Dead(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_Dead // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BPOnRep_Scale(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_Scale // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BPOnRep_AttachActor(); // Function BP_FishBase.BP_FishBase_C.BPOnRep_AttachActor // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void KillFish(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_FishBase.BP_FishBase_C.KillFish // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_FishBase.BP_FishBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FishBase(int32_t EntryPoint); // Function BP_FishBase.BP_FishBase_C.ExecuteUbergraph_BP_FishBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void FishDetached__DelegateSignature(enum class EFishDetatchReason Reason); // Function BP_FishBase.BP_FishBase_C.FishDetached__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

