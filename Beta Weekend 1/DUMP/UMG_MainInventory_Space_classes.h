// WidgetBlueprintGeneratedClass UMG_MainInventory_Space.UMG_MainInventory_Space_C
// Size: 0x2b1 (Inherited: 0x260)
struct UUMG_MainInventory_Space_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimatePointers; // 0x268(0x08)
	struct UHorizontalBox* FiltersBox; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_3; // 0x288(0x08)
	struct UImage* Image_93; // 0x290(0x08)
	struct UUMG_Inventory_C* MainInventory; // 0x298(0x08)
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; // 0x2a0(0x08)
	struct UInventory* Inventory; // 0x2a8(0x08)
	bool Initialised; // 0x2b0(0x01)

	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_MainInventory_Space.UMG_MainInventory_Space_C.QuickShiftInventoryHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UInventory* Main, struct UInventory* Loadout); // Function UMG_MainInventory_Space.UMG_MainInventory_Space_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_MainInventory_Space.UMG_MainInventory_Space_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_MainInventory_Space.UMG_MainInventory_Space_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MainInventory_Space(int32_t EntryPoint); // Function UMG_MainInventory_Space.UMG_MainInventory_Space_C.ExecuteUbergraph_UMG_MainInventory_Space // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

