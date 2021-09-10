// WidgetBlueprintGeneratedClass UMG_MainInventory.UMG_MainInventory_C
// Size: 0x388 (Inherited: 0x260)
struct UUMG_MainInventory_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpenStats; // 0x268(0x08)
	struct UWidgetAnimation* AnimatePointers; // 0x270(0x08)
	struct UUMG_InventoryItem_C* Boots; // 0x278(0x08)
	struct UUMG_Titlebar_C* Character_Titlebar; // 0x280(0x08)
	struct UUMG_InventoryItem_C* Chest; // 0x288(0x08)
	struct UImage* Dropshadow; // 0x290(0x08)
	struct UUMG_InventoryItem_C* EnviroSuit; // 0x298(0x08)
	struct UImage* Frame; // 0x2a0(0x08)
	struct UImage* Frame_2; // 0x2a8(0x08)
	struct UUMG_InventoryItem_C* Gloves; // 0x2b0(0x08)
	struct UUMG_InventoryItem_C* Helmet; // 0x2b8(0x08)
	struct UImage* Image_109; // 0x2c0(0x08)
	struct UUMG_Titlebar_C* Inventory_Titlebar; // 0x2c8(0x08)
	struct UHorizontalBox* Keyprompts; // 0x2d0(0x08)
	struct UUMG_InventoryItem_C* Pants; // 0x2d8(0x08)
	struct UImage* Pointer; // 0x2e0(0x08)
	struct UImage* Pointer_2; // 0x2e8(0x08)
	struct UImage* Pointer_3; // 0x2f0(0x08)
	struct UImage* Pointer_4; // 0x2f8(0x08)
	struct UImage* Pointer_5; // 0x300(0x08)
	struct UOverlay* StatsWindow; // 0x308(0x08)
	struct UVerticalBox* StatusEffectBox; // 0x310(0x08)
	struct UImage* SuitImage; // 0x318(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton; // 0x320(0x08)
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; // 0x328(0x08)
	struct UUMG_EnvirosuitSlots_C* UMG_EnvirosuitSlots; // 0x330(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x338(0x08)
	struct UUMG_InventoryDropZone_C* UMG_InventoryDropZone; // 0x340(0x08)
	struct UUMG_ModifierStateContainer_C* UMG_ModifierStateContainer; // 0x348(0x08)
	struct UUMG_StatDisplay_C* UMG_StatDisplay; // 0x350(0x08)
	struct UUMG_StatsWindow_C* UMG_StatsWindow; // 0x358(0x08)
	struct UUMG_Inventory_C* UpgradeInventoryUMG; // 0x360(0x08)
	struct UUMG_Inventory_C* VisionInventoryUMG_2; // 0x368(0x08)
	struct UInventory* Inventory; // 0x370(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x378(0x08)
	struct ABP_PlayerPreview_Survival_C* PlayerPreview; // 0x380(0x08)

	void IsInventoryVisibile(bool Visible); // Function UMG_MainInventory.UMG_MainInventory_C.IsInventoryVisibile // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_MainInventory.UMG_MainInventory_C.QuickShiftInventoryHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UInventory* BoundInventory, struct UInventory* EnvirosuitInventory, struct UInventory* EquipmentInventory, struct UInventory* UpgradeInventory, struct UInventory* VisionInventory, struct UUMG_UserInterface_C* Parent); // Function UMG_MainInventory.UMG_MainInventory_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_MainInventory.UMG_MainInventory_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ModifiersUpdated_Event_1(int32_t Modifiers); // Function UMG_MainInventory.UMG_MainInventory_C.ModifiersUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MainInventory.UMG_MainInventory_C.BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MainInventory(int32_t EntryPoint); // Function UMG_MainInventory.UMG_MainInventory_C.ExecuteUbergraph_UMG_MainInventory // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

