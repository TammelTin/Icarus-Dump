// BlueprintGeneratedClass BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C
// Size: 0xfc (Inherited: 0xe8)
struct UBP_Interactable_Rain_Reservior_Drink_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	int32_t AmountToDrink; // 0xf0(0x04)
	int32_t AmountAllowedToDrink; // 0xf4(0x04)
	int32_t StoredUnits; // 0xf8(0x04)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Interactable_Rain_Reservior_Drink(int32_t EntryPoint); // Function BP_Interactable_Rain_Reservior_Drink.BP_Interactable_Rain_Reservior_Drink_C.ExecuteUbergraph_BP_Interactable_Rain_Reservior_Drink // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

