// BlueprintGeneratedClass BP_AnimalTrap_Base.BP_AnimalTrap_Base_C
// Size: 0x580 (Inherited: 0x560)
struct ABP_AnimalTrap_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UBoxComponent* Box; // 0x568(0x08)
	float AttractionRadius; // 0x570(0x04)
	bool IsTrapOccupied; // 0x574(0x01)
	char pad_575[0x3]; // 0x575(0x03)
	struct UInventory* InventoryRef; // 0x578(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAnimalTrapped(struct FItemsStaticRowHandle Item Static Data); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnAnimalTrapped // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnItemRemoved(struct UInventory* Inventory, int32_t Location); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnItemRemoved // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.OnItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multi_TrapTriggered(bool ItemAdded); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.Multi_TrapTriggered // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_AnimalTrap_Base(int32_t EntryPoint); // Function BP_AnimalTrap_Base.BP_AnimalTrap_Base_C.ExecuteUbergraph_BP_AnimalTrap_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

