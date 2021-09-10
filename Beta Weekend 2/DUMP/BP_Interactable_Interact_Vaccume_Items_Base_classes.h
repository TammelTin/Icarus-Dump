// BlueprintGeneratedClass BP_Interactable_Interact_Vaccume_Items_Base.BP_Interactable_Interact_Vaccume_Items_Base_C
// Size: 0x12c (Inherited: 0xe8)
struct UBP_Interactable_Interact_Vaccume_Items_Base_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_DeployableBase_C* Deployable; // 0xf0(0x08)
	struct FItemsStaticRowHandle Item; // 0xf8(0x18)
	int32_t Count; // 0x110(0x04)
	char pad_114[0x4]; // 0x114(0x04)
	struct FInventoryIDEnum Inventory Id; // 0x118(0x10)
	int32_t Max; // 0x128(0x04)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_Vaccume_Items_Base.BP_Interactable_Interact_Vaccume_Items_Base_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_Vaccume_Items_Base.BP_Interactable_Interact_Vaccume_Items_Base_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_Vaccume_Items_Base.BP_Interactable_Interact_Vaccume_Items_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Interactable_Interact_Vaccume_Items_Base(int32_t EntryPoint); // Function BP_Interactable_Interact_Vaccume_Items_Base.BP_Interactable_Interact_Vaccume_Items_Base_C.ExecuteUbergraph_BP_Interactable_Interact_Vaccume_Items_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

