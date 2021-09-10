// WidgetBlueprintGeneratedClass UMG_CursorWidget.UMG_CursorWidget_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_CursorWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetSwitcher* InventoryItemBox; // 0x268(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem; // 0x270(0x08)
	struct UUMG_InventoryItem_C* ItemWidget; // 0x278(0x08)
	struct UInventory* CurrentInventory; // 0x280(0x08)
	int32_t CurrentLocation; // 0x288(0x04)
	int32_t Count; // 0x28c(0x04)

	void Clear(); // Function UMG_CursorWidget.UMG_CursorWidget_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DragItem(struct UInventory* Inventory, int32_t Location, struct UUMG_InventoryItem_C* Item, int32_t Count); // Function UMG_CursorWidget.UMG_CursorWidget_C.DragItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update(); // Function UMG_CursorWidget.UMG_CursorWidget_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function UMG_CursorWidget.UMG_CursorWidget_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CursorWidget.UMG_CursorWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnWindowLostFocus(); // Function UMG_CursorWidget.UMG_CursorWidget_C.OnWindowLostFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CursorWidget(int32_t EntryPoint); // Function UMG_CursorWidget.UMG_CursorWidget_C.ExecuteUbergraph_UMG_CursorWidget // (Final|UbergraphFunction) // @ game+0x1a38c80
};

