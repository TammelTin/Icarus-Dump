// WidgetBlueprintGeneratedClass UMG_MetaItemShop.UMG_MetaItemShop_C
// Size: 0x388 (Inherited: 0x280)
struct UUMG_MetaItemShop_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UWidgetAnimation* PurchaseClose; // 0x288(0x08)
	struct UWidgetAnimation* PurchaseLoad; // 0x290(0x08)
	struct UWidgetAnimation* FadeLoadingScreen; // 0x298(0x08)
	struct UImage* Divider; // 0x2a0(0x08)
	struct UImage* Divider_2; // 0x2a8(0x08)
	struct UHorizontalBox* FiltersBox; // 0x2b0(0x08)
	struct UHorizontalBox* FiltersBox_2; // 0x2b8(0x08)
	struct UImage* Image; // 0x2c0(0x08)
	struct UImage* Image_2; // 0x2c8(0x08)
	struct UImage* Image_3; // 0x2d0(0x08)
	struct UImage* Image_4; // 0x2d8(0x08)
	struct UImage* Image_5; // 0x2e0(0x08)
	struct UImage* Image_6; // 0x2e8(0x08)
	struct UImage* Image_7; // 0x2f0(0x08)
	struct UImage* Image_63; // 0x2f8(0x08)
	struct UImage* Image_89; // 0x300(0x08)
	struct UImage* Image_93; // 0x308(0x08)
	struct UUMG_Inventory_C* MainInventory; // 0x310(0x08)
	struct UBorder* ShopClosed; // 0x318(0x08)
	struct UTextBlock* ShopClosedText; // 0x320(0x08)
	struct UGridPanel* ShopItems; // 0x328(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1; // 0x330(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_2; // 0x338(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_3; // 0x340(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_4; // 0x348(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* Tab1_5; // 0x350(0x08)
	int32_t PurchaseIndex; // 0x358(0x04)
	char pad_35C[0x4]; // 0x35c(0x04)
	struct FText TempCost; // 0x360(0x18)
	struct FMargin ShopItemPadding; // 0x378(0x10)

	void Update(); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PurchaseMetaItem(int32_t Index); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseMetaItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PurchaseItemConfirmed(); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseItemConfirmed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PurchaseItemFailed(); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseItemFailed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Opened(); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.Opened // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PurchaseOutcome(bool Success); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.PurchaseOutcome // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShopUpdated(); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.ShopUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MetaItemShop(int32_t EntryPoint); // Function UMG_MetaItemShop.UMG_MetaItemShop_C.ExecuteUbergraph_UMG_MetaItemShop // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

