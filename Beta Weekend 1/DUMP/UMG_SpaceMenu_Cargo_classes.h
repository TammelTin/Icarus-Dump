// WidgetBlueprintGeneratedClass UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C
// Size: 0x2f9 (Inherited: 0x260)
struct UUMG_SpaceMenu_Cargo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AnimatePointers; // 0x268(0x08)
	struct UHorizontalBox* FiltersBox; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_3; // 0x288(0x08)
	struct UImage* Image_63; // 0x290(0x08)
	struct UImage* Image_93; // 0x298(0x08)
	struct UUMG_Inventory_C* MainInventory; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* SuitClearButton; // 0x2a8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1; // 0x2b0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_2; // 0x2b8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_3; // 0x2c0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_4; // 0x2c8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_5; // 0x2d0(0x08)
	struct UUMG_DropshipSelector_C* UMG_DropshipSelector; // 0x2d8(0x08)
	struct UUMG_LoadoutEnvirosuit_C* UMG_LoadoutEnvirosuit; // 0x2e0(0x08)
	struct UUMG_DropCargo_C* UMG_LoadoutSelection; // 0x2e8(0x08)
	struct UInventory* Inventory; // 0x2f0(0x08)
	bool Initialised; // 0x2f8(0x01)

	void QuickShiftInventoryHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.QuickShiftInventoryHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UInventory* Main, struct UInventory* Loadout); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.BndEvt__SuitClearButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_SpaceMenu_Cargo(int32_t EntryPoint); // Function UMG_SpaceMenu_Cargo.UMG_SpaceMenu_Cargo_C.ExecuteUbergraph_UMG_SpaceMenu_Cargo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

