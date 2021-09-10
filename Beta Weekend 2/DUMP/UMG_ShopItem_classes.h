// WidgetBlueprintGeneratedClass UMG_ShopItem.UMG_ShopItem_C
// Size: 0x380 (Inherited: 0x260)
struct UUMG_ShopItem_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* CategoryIcon; // 0x268(0x08)
	struct UImage* CategoryImage; // 0x270(0x08)
	struct UBorder* CostBorder; // 0x278(0x08)
	struct UHorizontalBox* CostList; // 0x280(0x08)
	struct UImage* Image_104; // 0x288(0x08)
	struct UButton* ItemButton; // 0x290(0x08)
	struct UTextBlock* ItemName; // 0x298(0x08)
	struct UImage* Shadow; // 0x2a0(0x08)
	struct FWorkshopPack WorkshopPack; // 0x2a8(0x50)
	int32_t Index; // 0x2f8(0x04)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct FMulticastInlineDelegate Purchase; // 0x300(0x10)
	struct FSlateColor TextColour_Default; // 0x310(0x28)
	struct FSlateColor TextColour_Hovered; // 0x338(0x28)
	struct FLinearColor ImagePurple; // 0x360(0x10)
	struct FLinearColor ImageBlack; // 0x370(0x10)

	void UpdateVisuals(bool Hovered); // Function UMG_ShopItem.UMG_ShopItem_C.UpdateVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ShopItem.UMG_ShopItem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ShopItem.UMG_ShopItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ShopItem.UMG_ShopItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ShopItem.UMG_ShopItem_C.BndEvt__ItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ShopItem(int32_t EntryPoint); // Function UMG_ShopItem.UMG_ShopItem_C.ExecuteUbergraph_UMG_ShopItem // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Purchase__DelegateSignature(int32_t Index); // Function UMG_ShopItem.UMG_ShopItem_C.Purchase__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

