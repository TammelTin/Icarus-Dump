// BlueprintGeneratedClass BP_Overflow_Bag.BP_Overflow_Bag_C
// Size: 0x2e8 (Inherited: 0x2c8)
struct ABP_Overflow_Bag_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UInventoryComponent* Inventory; // 0x2d0(0x08)
	struct ABP_AtmosphereController_C* AtmosphereController; // 0x2d8(0x08)
	struct UUMG_IcarusLinkedActorPanel_C* Widget Class to Open; // 0x2e0(0x08)

	void WorldObject_Interact(struct AActor* Instigator); // Function BP_Overflow_Bag.BP_Overflow_Bag_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_Overflow_Bag.BP_Overflow_Bag_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Overflow_Bag.BP_Overflow_Bag_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnItemRemoved_Event(struct UInventory* Inventory, int32_t Location); // Function BP_Overflow_Bag.BP_Overflow_Bag_C.OnItemRemoved_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Overflow_Bag(int32_t EntryPoint); // Function BP_Overflow_Bag.BP_Overflow_Bag_C.ExecuteUbergraph_BP_Overflow_Bag // (Final|UbergraphFunction) // @ game+0x1a05090
};

