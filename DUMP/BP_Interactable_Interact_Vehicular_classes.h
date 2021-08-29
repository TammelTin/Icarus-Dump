// BlueprintGeneratedClass BP_Interactable_Interact_Vehicular.BP_Interactable_Interact_Vehicular_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_Interactable_Interact_Vehicular_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; // 0xf0(0x08)
	struct UBP_VehicularBase_C* Vehicular; // 0xf8(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_Vehicular.BP_Interactable_Interact_Vehicular_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_Vehicular.BP_Interactable_Interact_Vehicular_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_Vehicular.BP_Interactable_Interact_Vehicular_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Interact_Vehicular(int32_t EntryPoint); // Function BP_Interactable_Interact_Vehicular.BP_Interactable_Interact_Vehicular_C.ExecuteUbergraph_BP_Interactable_Interact_Vehicular // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

