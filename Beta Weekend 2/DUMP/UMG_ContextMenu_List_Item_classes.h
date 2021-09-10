// WidgetBlueprintGeneratedClass UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_ContextMenu_List_Item_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Appear; // 0x268(0x08)
	struct UOverlay* FeatureLevelOverlay; // 0x270(0x08)
	struct UTextBlock* FeatureText; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* ListButton; // 0x280(0x08)
	struct USizeBox* MainSizeBox; // 0x288(0x08)
	struct FMulticastInlineDelegate OnWidgetSelected; // 0x290(0x10)
	struct FMulticastInlineDelegate OnItemSelected; // 0x2a0(0x10)
	struct FName ItemIdentifier; // 0x2b0(0x08)
	int32_t ItemIndex; // 0x2b8(0x04)
	int32_t ItemPayload; // 0x2bc(0x04)

	void SetItemData(int32_t ItemIndex, struct FContextMenuItemData ItemData); // Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.SetItemData // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.BndEvt__ListButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ContextMenu_List_Item(int32_t EntryPoint); // Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.ExecuteUbergraph_UMG_ContextMenu_List_Item // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnItemSelected__DelegateSignature(struct FName Identifier, int32_t Payload); // Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.OnItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnWidgetSelected__DelegateSignature(struct UUMG_ContextMenu_List_Item_C* ItemClicked); // Function UMG_ContextMenu_List_Item.UMG_ContextMenu_List_Item_C.OnWidgetSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

