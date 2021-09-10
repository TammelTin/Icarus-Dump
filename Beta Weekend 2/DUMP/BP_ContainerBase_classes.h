// BlueprintGeneratedClass BP_ContainerBase.BP_ContainerBase_C
// Size: 0x2d8 (Inherited: 0x2c8)
struct ABP_ContainerBase_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UInventoryComponent* Inventory; // 0x2d0(0x08)

	void WorldObject_Interact(struct AActor* Instigator); // Function BP_ContainerBase.BP_ContainerBase_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ContainerBase.BP_ContainerBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ContainerBase(int32_t EntryPoint); // Function BP_ContainerBase.BP_ContainerBase_C.ExecuteUbergraph_BP_ContainerBase // (Final|UbergraphFunction) // @ game+0x1a38c80
};

