// BlueprintGeneratedClass BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C
// Size: 0xf8 (Inherited: 0xe8)
struct UBP_Interactable_Interact_BedSetSpawn_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_BedBase_C* Bed; // 0xf0(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C.CanInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Interact_BedSetSpawn(int32_t EntryPoint); // Function BP_Interactable_Interact_BedSetSpawn.BP_Interactable_Interact_BedSetSpawn_C.ExecuteUbergraph_BP_Interactable_Interact_BedSetSpawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

