// WidgetBlueprintGeneratedClass UMG_DropPodStorage.UMG_DropPodStorage_C
// Size: 0x2e8 (Inherited: 0x280)
struct UUMG_DropPodStorage_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UUMG_Inventory_C* Backpack; // 0x288(0x08)
	struct UUMG_Inventory_C* Equipment; // 0x290(0x08)
	struct UUMG_Inventory_C* MetaStorage; // 0x298(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; // 0x2a0(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar; // 0x2a8(0x08)
	struct UUMG_DarkTitlebar_C* UMG_DarkTitlebar_2; // 0x2b0(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton; // 0x2b8(0x08)
	struct UUMG_IconTextButton_C* UMG_IconTextButton_87; // 0x2c0(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame; // 0x2c8(0x08)
	struct UUMG_ScaleableFrame_C* UMG_ScaleableFrame_173; // 0x2d0(0x08)
	struct UUMG_Titlebar_C* UMG_Titlebar; // 0x2d8(0x08)
	struct UInventory* Inventory; // 0x2e0(0x08)

	void InventoryQuickShiftHandler(int32_t Location, struct UInventory* Inventory); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.InventoryQuickShiftHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.BndEvt__UMG_IconTextButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_IconTextButton_86_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.BndEvt__UMG_IconTextButton_86_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DropPodStorage(int32_t EntryPoint); // Function UMG_DropPodStorage.UMG_DropPodStorage_C.ExecuteUbergraph_UMG_DropPodStorage // (Final|UbergraphFunction) // @ game+0x1a38c80
};

