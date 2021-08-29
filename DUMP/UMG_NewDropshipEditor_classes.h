// WidgetBlueprintGeneratedClass UMG_NewDropshipEditor.UMG_NewDropshipEditor_C
// Size: 0x361 (Inherited: 0x280)
struct UUMG_NewDropshipEditor_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* FadeInLoadingScreen; // 0x288(0x08)
	struct UWidgetAnimation* FadeOutLoadingScreen; // 0x290(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x298(0x08)
	struct UUMG_IconTextButton_C* CreateDropship; // 0x2a0(0x08)
	struct UHorizontalBox* FiltersBox; // 0x2a8(0x08)
	struct UImage* Image; // 0x2b0(0x08)
	struct UImage* Image_2; // 0x2b8(0x08)
	struct UImage* Image_3; // 0x2c0(0x08)
	struct UImage* Image_4; // 0x2c8(0x08)
	struct UImage* Image_63; // 0x2d0(0x08)
	struct UImage* Image_93; // 0x2d8(0x08)
	struct UImage* Image_103; // 0x2e0(0x08)
	struct UImage* ImageRenderTarget; // 0x2e8(0x08)
	struct UUMG_Inventory_C* MainInventory; // 0x2f0(0x08)
	struct UVerticalBox* MenuButtons; // 0x2f8(0x08)
	struct UUMG_BasicButton_2_C* MetaShopButton; // 0x300(0x08)
	struct UBorder* NoDropships; // 0x308(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1; // 0x310(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_2; // 0x318(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_3; // 0x320(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_4; // 0x328(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_5; // 0x330(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x338(0x08)
	struct ABP_DropshipPreview_C* DropshipPreview; // 0x340(0x08)
	int32_t CurrentDropshipID; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FMulticastInlineDelegate ActiveDropshipUpdated; // 0x350(0x10)
	bool NewDropshipCreated; // 0x360(0x01)

	void DropshipSelected(struct UUMG_ButtonBase_C* Button); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.DropshipSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipsUpdated(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.DropshipsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipCreated(bool Success); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.DropshipCreated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipModified(bool Success); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.DropshipModified // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipDeleted(bool Success); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.DropshipDeleted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateDropships(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.UpdateDropships // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetState(enum class EDropshipTypeEditor State); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void OnDropshipsUpdated(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.OnDropshipsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CreateDropship_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.BndEvt__CreateDropship_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Opened(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__MetaShopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.BndEvt__MetaShopButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void CloseLoadingScreen(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.CloseLoadingScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_NewDropshipEditor(int32_t EntryPoint); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.ExecuteUbergraph_UMG_NewDropshipEditor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ActiveDropshipUpdated__DelegateSignature(); // Function UMG_NewDropshipEditor.UMG_NewDropshipEditor_C.ActiveDropshipUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

