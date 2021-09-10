// WidgetBlueprintGeneratedClass UMG_Chest.UMG_Chest_C
// Size: 0x30a (Inherited: 0x280)
struct UUMG_Chest_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* OpenMenu; // 0x288(0x08)
	struct UUMG_Inventory_C* Backpack; // 0x290(0x08)
	struct UUMG_Inventory_C* Chest; // 0x298(0x08)
	struct UVerticalBox* ChestVertBox; // 0x2a0(0x08)
	struct UVerticalBox* InventoryVertBox; // 0x2a8(0x08)
	struct UBorder* MainBorder; // 0x2b0(0x08)
	struct UUMG_IconTextButton_C* StoreAllButton; // 0x2b8(0x08)
	struct UUMG_IconTextButton_C* TakeAllButton; // 0x2c0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x2c8(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; // 0x2d0(0x08)
	struct UUMG_EncumbranceBarLight_C* UMG_EncumbranceBarLight; // 0x2d8(0x08)
	struct UUMG_Keybind_C* UMG_Keybind; // 0x2e0(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; // 0x2e8(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_173; // 0x2f0(0x08)
	struct UUMG_Titlebar_C* UMG_Titlebar; // 0x2f8(0x08)
	struct UInventory* Inventory; // 0x300(0x08)
	bool ShowStoreAll; // 0x308(0x01)
	bool ShowTakeAll; // 0x309(0x01)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_Chest.UMG_Chest_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LinkedActorDestroyed(struct AActor* DestroyedActor); // Function UMG_Chest.UMG_Chest_C.LinkedActorDestroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupObjectInventory(struct UInventory* ContainerInventory); // Function UMG_Chest.UMG_Chest_C.SetupObjectInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupPlayerInventory(struct UInventory* BackpackInventory); // Function UMG_Chest.UMG_Chest_C.SetupPlayerInventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_86_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_Chest.UMG_Chest_C.BndEvt__UMG_IconTextButton_86_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_Chest.UMG_Chest_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void F_Pressed(); // Function UMG_Chest.UMG_Chest_C.F_Pressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_Chest.UMG_Chest_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Chest.UMG_Chest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Chest(int32_t EntryPoint); // Function UMG_Chest.UMG_Chest_C.ExecuteUbergraph_UMG_Chest // (Final|UbergraphFunction) // @ game+0x1a38c80
};

