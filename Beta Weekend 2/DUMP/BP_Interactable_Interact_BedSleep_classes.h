// BlueprintGeneratedClass BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C
// Size: 0xf8 (Inherited: 0xe8)
struct UBP_Interactable_Interact_BedSleep_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_BedBase_C* Bed; // 0xf0(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Interactable_Interact_BedSleep(int32_t EntryPoint); // Function BP_Interactable_Interact_BedSleep.BP_Interactable_Interact_BedSleep_C.ExecuteUbergraph_BP_Interactable_Interact_BedSleep // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

