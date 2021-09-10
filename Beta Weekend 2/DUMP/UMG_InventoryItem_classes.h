// WidgetBlueprintGeneratedClass UMG_InventoryItem.UMG_InventoryItem_C
// Size: 0x4d0 (Inherited: 0x260)
struct UUMG_InventoryItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* AssociatedItem; // 0x268(0x08)
	struct UBorder* AssociatedItemContainer; // 0x270(0x08)
	struct UBorder* BaseBorder; // 0x278(0x08)
	struct UBorder* BrokenIconContainer; // 0x280(0x08)
	struct UImage* BrokenIconImage; // 0x288(0x08)
	struct UBorder* CountContainer; // 0x290(0x08)
	struct UProgressBar* DurabilityBar; // 0x298(0x08)
	struct UImage* HoveredHandles; // 0x2a0(0x08)
	struct UOverlay* HoverImage; // 0x2a8(0x08)
	struct UImage* ImprovedItem; // 0x2b0(0x08)
	struct UBorder* InteractableFrame; // 0x2b8(0x08)
	struct UBorder* InteractableFrameLarge; // 0x2c0(0x08)
	struct UImage* ItemIcon; // 0x2c8(0x08)
	struct UOverlay* ItemSlot; // 0x2d0(0x08)
	struct UBorder* LastItem; // 0x2d8(0x08)
	struct UImage* LastItemIcon; // 0x2e0(0x08)
	struct UBorder* LockedState; // 0x2e8(0x08)
	struct UOverlay* MasterOverlay; // 0x2f0(0x08)
	struct UBorder* SpoilContainerDebug; // 0x2f8(0x08)
	struct UProgressBar* SpoilPercentage; // 0x300(0x08)
	struct UTextBlock* SpoilTime; // 0x308(0x08)
	struct UTextBlock* Stack; // 0x310(0x08)
	struct UUMG_FillableProgressBar_C* UMG_FillableProgressBar; // 0x318(0x08)
	struct FItemData Item; // 0x320(0x80)
	struct UInventory* Inventory; // 0x3a0(0x08)
	int32_t CurrentLocation; // 0x3a8(0x04)
	int32_t Hotkey_Number; // 0x3ac(0x04)
	enum class E_SlotState State; // 0x3b0(0x01)
	char pad_3B1[0x7]; // 0x3b1(0x07)
	struct UTexture2D* Image_Normal; // 0x3b8(0x08)
	struct UTexture2D* Image_Pressed; // 0x3c0(0x08)
	struct UTexture2D* Image_Hovered; // 0x3c8(0x08)
	struct UTexture2D* Image_Valid; // 0x3d0(0x08)
	struct UTexture2D* Image_Invalid; // 0x3d8(0x08)
	bool HiddenForDrag; // 0x3e0(0x01)
	bool RightClick; // 0x3e1(0x01)
	char pad_3E2[0x6]; // 0x3e2(0x06)
	struct FMulticastInlineDelegate QuickShift; // 0x3e8(0x10)
	bool Locked; // 0x3f8(0x01)
	bool BeingMoved; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	int32_t MovingCount; // 0x3fc(0x04)
	bool ShowLastItem; // 0x400(0x01)
	char pad_401[0x7]; // 0x401(0x07)
	struct UCurveLinearColor* SpoiltColourCurve; // 0x408(0x08)
	bool LockOverride; // 0x410(0x01)
	char pad_411[0x7]; // 0x411(0x07)
	struct UFMODEvent* SFX_SocketItem; // 0x418(0x08)
	struct UUMG_ItemPopup_C* Tooltip; // 0x420(0x08)
	struct FName ContextMenuUseItemId; // 0x428(0x08)
	struct FItemData CachedItem; // 0x430(0x80)
	struct UFMODEvent* SFX_DestroyItemDefault; // 0x4b0(0x08)
	struct UUserWidget* HighlightWidget; // 0x4b8(0x08)
	struct FTagQueriesEnum NewVar_1; // 0x4c0(0x10)

	void Should Show Highlight(struct UInventory* Inventory, bool Show); // Function UMG_InventoryItem.UMG_InventoryItem_C.Should Show Highlight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnCursorCleared(); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnCursorCleared // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCursorUpdated(struct FItemData Item); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnCursorUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetDestroyItemSound(struct FItemData ItemData, struct UFMODEvent* Sound); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetDestroyItemSound // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void DestroyItemConfirmed(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DestroyItemConfirmed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DestroyItemCancelled(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DestroyItemCancelled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanDestroyItem(struct FItemData Item, bool CanDestroy); // Function UMG_InventoryItem.UMG_InventoryItem_C.CanDestroyItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void HasStackContextMenuItems(struct FItemData Item, struct FItemableData ItemableData, bool HasStackActions, bool SplitStackEnabled); // Function UMG_InventoryItem.UMG_InventoryItem_C.HasStackContextMenuItems // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void HasUseContextMenuItems(struct FItemData Item, bool HasUseItems); // Function UMG_InventoryItem.UMG_InventoryItem_C.HasUseContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnContextMenuDropClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuDropClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnContextMenuItemClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuItemClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnContextMenuSplitStackClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuSplitStackClicked // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnContextMenuDestroyItemClicked(struct FName ID, int32_t Payload); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnContextMenuDestroyItemClicked // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryShowContextMenu(); // Function UMG_InventoryItem.UMG_InventoryItem_C.TryShowContextMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Get Meta Inventory ID(struct UInventory* Inventory, enum class EMetaInventoryID Meta ID); // Function UMG_InventoryItem.UMG_InventoryItem_C.Get Meta Inventory ID // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateSpoilColour(float SpoilPercent); // Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateSpoilColour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetDropShipMode(); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetDropShipMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FLinearColor DurabilityBarColour(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DurabilityBarColour // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Set Being Moved(int32_t MovingCount); // Function UMG_InventoryItem.UMG_InventoryItem_C.Set Being Moved // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetCursorInfo(struct UInventory* CurrentInventory, int32_t Location); // Function UMG_InventoryItem.UMG_InventoryItem_C.SetCursorInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateState(enum class E_SlotState NewState); // Function UMG_InventoryItem.UMG_InventoryItem_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCursorInfo(struct UInventory* Inventory, int32_t Location, bool Success, int32_t Count); // Function UMG_InventoryItem.UMG_InventoryItem_C.GetCursorInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Unfocus(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Unfocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Focus(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Focus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update(struct FItemData Item Reference, struct FItemsStaticRowHandle Last Item); // Function UMG_InventoryItem.UMG_InventoryItem_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise (struct UInventory* BoundInventory, int32_t Location); // Function UMG_InventoryItem.UMG_InventoryItem_C.Initialise  // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_InventoryItem.UMG_InventoryItem_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DragOff(); // Function UMG_InventoryItem.UMG_InventoryItem_C.DragOff // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_InventoryItem.UMG_InventoryItem_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_InventoryItem.UMG_InventoryItem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Trigger Hover(); // Function UMG_InventoryItem.UMG_InventoryItem_C.Trigger Hover // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_InventoryItem(int32_t EntryPoint); // Function UMG_InventoryItem.UMG_InventoryItem_C.ExecuteUbergraph_UMG_InventoryItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void QuickShift__DelegateSignature(int32_t CurrentLocation, struct UInventory* Inventory); // Function UMG_InventoryItem.UMG_InventoryItem_C.QuickShift__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

