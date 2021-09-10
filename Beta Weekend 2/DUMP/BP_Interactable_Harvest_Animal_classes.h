// BlueprintGeneratedClass BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C
// Size: 0x138 (Inherited: 0xe8)
struct UBP_Interactable_Harvest_Animal_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; // 0xf0(0x08)
	float SkinningEfficiency; // 0xf8(0x04)
	float BaseSkinningDuration; // 0xfc(0x04)
	struct UAnimMontage* FPMontage; // 0x100(0x08)
	struct UAnimMontage* TPMontage; // 0x108(0x08)
	struct FTimerHandle SkinningTimer; // 0x110(0x08)
	bool IsHarvested; // 0x118(0x01)
	char pad_119[0x7]; // 0x119(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* HarvestingPlayer; // 0x120(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* PreviousHarvester; // 0x128(0x08)
	struct ABP_GOAP_Corpse_C* OwningCorpse; // 0x130(0x08)

	float GetHarvestSpeedModifier(); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.GetHarvestSpeedModifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnRep_HarvestingPlayer(); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnRep_HarvestingPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_IsHarvested(); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnRep_IsHarvested // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnInteractionAborted(); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnInteractionAborted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSkinningComplete(); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.OnSkinningComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EndHarvestMontage(struct ABP_IcarusPlayerCharacterSurvival_C* Harvester); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.EndHarvestMontage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ProcessDurability(int32_t DurabilityDamage); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.ProcessDurability // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Interactable_Harvest_Animal(int32_t EntryPoint); // Function BP_Interactable_Harvest_Animal.BP_Interactable_Harvest_Animal_C.ExecuteUbergraph_BP_Interactable_Harvest_Animal // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

