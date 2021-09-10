// WidgetBlueprintGeneratedClass UMG_VehicleComponentSet.UMG_VehicleComponentSet_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUMG_VehicleComponentSet_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUniformGridPanel* UniformGridPanel; // 0x268(0x08)
	struct UTextBlock* VehicleComponentSetTitle; // 0x270(0x08)
	struct UInventory* Inventory; // 0x278(0x08)
	struct TArray<int32_t> InventorySlots; // 0x280(0x10)
	int32_t SlotCount; // 0x290(0x04)
	char pad_294[0x4]; // 0x294(0x04)
	struct FString Title; // 0x298(0x10)
	struct ABP_VehicleBase_C* Vehicle; // 0x2a8(0x08)

	void AddInventorySlots(); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.AddInventorySlots // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnInventoryMove(int32_t Location, struct UInventory* Inventory); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.OnInventoryMove // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update(); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct UInventory* Inventory, struct ABP_VehicleBase_C* Vehicle, int32_t SlotCount, struct TArray<int32_t> InventorySlots, struct FString Title); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.Initialise // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_VehicleComponentSet(int32_t EntryPoint); // Function UMG_VehicleComponentSet.UMG_VehicleComponentSet_C.ExecuteUbergraph_UMG_VehicleComponentSet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

