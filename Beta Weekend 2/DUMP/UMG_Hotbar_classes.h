// WidgetBlueprintGeneratedClass UMG_Hotbar.UMG_Hotbar_C
// Size: 0x2fa (Inherited: 0x260)
struct UUMG_Hotbar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeoutText; // 0x268(0x08)
	struct UUMG_InventoryItem_C* HandsInventory; // 0x270(0x08)
	struct UTextBlock* ItemHint; // 0x278(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem; // 0x280(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_2; // 0x288(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_3; // 0x290(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_4; // 0x298(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_5; // 0x2a0(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_6; // 0x2a8(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_7; // 0x2b0(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_8; // 0x2b8(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_9; // 0x2c0(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_10; // 0x2c8(0x08)
	struct UUMG_InventoryItem_C* UMG_InventoryItem_11; // 0x2d0(0x08)
	struct TArray<struct UUMG_InventoryItem_C*> Slots; // 0x2d8(0x10)
	int32_t SelectedIndex; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct UInventory* Inventory; // 0x2f0(0x08)
	bool TextAnimationPlaying; // 0x2f8(0x01)
	bool Intialised; // 0x2f9(0x01)

	void QuickShiftHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_Hotbar.UMG_Hotbar_C.QuickShiftHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ItemsModified(); // Function UMG_Hotbar.UMG_Hotbar_C.ItemsModified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct UInventory* BoundInventory); // Function UMG_Hotbar.UMG_Hotbar_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFocusedSlot(int32_t FocusedSlot); // Function UMG_Hotbar.UMG_Hotbar_C.GetFocusedSlot // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UnFocusSlot(); // Function UMG_Hotbar.UMG_Hotbar_C.UnFocusSlot // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusSlot(int32_t SlotIndex, struct FItemData FocusedItem); // Function UMG_Hotbar.UMG_Hotbar_C.FocusSlot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFocusedItem(struct FItemData FocusedItem); // Function UMG_Hotbar.UMG_Hotbar_C.GetFocusedItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFocus(); // Function UMG_Hotbar.UMG_Hotbar_C.UpdateFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NavigateHotbar(bool Right, struct FItemData FocusedItem, int32_t NewSlot); // Function UMG_Hotbar.UMG_Hotbar_C.NavigateHotbar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_72A899084060253ECF1986A024942BB2(); // Function UMG_Hotbar.UMG_Hotbar_C.Finished_72A899084060253ECF1986A024942BB2 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnInitialized(); // Function UMG_Hotbar.UMG_Hotbar_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFocusedText(); // Function UMG_Hotbar.UMG_Hotbar_C.UpdateFocusedText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusedItemUpdated(struct AIcarusItem* FocusedItem); // Function UMG_Hotbar.UMG_Hotbar_C.FocusedItemUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Hotbar.UMG_Hotbar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Hotbar(int32_t EntryPoint); // Function UMG_Hotbar.UMG_Hotbar_C.ExecuteUbergraph_UMG_Hotbar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

