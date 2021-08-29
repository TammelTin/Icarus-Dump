// BlueprintGeneratedClass BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C
// Size: 0x118 (Inherited: 0xe8)
struct UBP_Interactable_Drink_WaterSource_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FModifier WaterCoolingBuff; // 0xf0(0x1c)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UFMODEvent* InteractSound; // 0x110(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void MULTI_PlayInteractFX(struct ABP_IcarusPlayerCharacterSurvival_C* Player); // Function BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C.MULTI_PlayInteractFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Drink_WaterSource(int32_t EntryPoint); // Function BP_Interactable_Drink_WaterSource.BP_Interactable_Drink_WaterSource_C.ExecuteUbergraph_BP_Interactable_Drink_WaterSource // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

