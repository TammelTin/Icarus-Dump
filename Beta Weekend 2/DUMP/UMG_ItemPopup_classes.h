// WidgetBlueprintGeneratedClass UMG_ItemPopup.UMG_ItemPopup_C
// Size: 0x39c (Inherited: 0x260)
struct UUMG_ItemPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Description; // 0x268(0x08)
	struct UTextBlock* DescriptionText; // 0x270(0x08)
	struct UTextBlock* DevelopmentText; // 0x278(0x08)
	struct UImage* Divider; // 0x280(0x08)
	struct UImage* Divider_2; // 0x288(0x08)
	struct UTextBlock* Durability; // 0x290(0x08)
	struct UTextBlock* FlavourText; // 0x298(0x08)
	struct UBorder* FunctionBorder; // 0x2a0(0x08)
	struct UBorder* FunctionBorder_2; // 0x2a8(0x08)
	struct UTextBlock* FunctionText; // 0x2b0(0x08)
	struct UBorder* Header; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UBorder* SetBonus; // 0x2c8(0x08)
	struct UVerticalBox* SetBonusList; // 0x2d0(0x08)
	struct USpacer* SetBonusSpacer; // 0x2d8(0x08)
	struct UTextBlock* SpoilText; // 0x2e0(0x08)
	struct UBorder* SpoilTimer; // 0x2e8(0x08)
	struct UTextBlock* Stack; // 0x2f0(0x08)
	struct UBorder* StatsBorder; // 0x2f8(0x08)
	struct UVerticalBox* StatsList; // 0x300(0x08)
	struct USpacer* StatsSpacer; // 0x308(0x08)
	struct UUMG_DamageVariation_C* UMG_DamageVariation; // 0x310(0x08)
	struct UTextBlock* Weight; // 0x318(0x08)
	struct FVector2D CalculatedSize; // 0x320(0x08)
	bool MetaItem; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct FSlateColor RegularItemColour; // 0x330(0x28)
	struct FSlateColor MetaItemColour; // 0x358(0x28)
	struct TArray<struct FStatsEnum> Blacklist; // 0x380(0x10)
	struct UInventory* Inventory; // 0x390(0x08)
	int32_t Slot_1; // 0x398(0x04)

	void GetDamageVariation(struct FItemData Item, bool Melee, int32_t Minimum, int32_t Maximum); // Function UMG_ItemPopup.UMG_ItemPopup_C.GetDamageVariation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateMetaVisuals(); // Function UMG_ItemPopup.UMG_ItemPopup_C.UpdateMetaVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSize(struct FVector2D Size); // Function UMG_ItemPopup.UMG_ItemPopup_C.GetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Show for Item(struct FItemData Item, int32_t Slot, struct UInventory* Inventory, bool Shown); // Function UMG_ItemPopup.UMG_ItemPopup_C.Show for Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ItemPopup.UMG_ItemPopup_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ItemPopup(int32_t EntryPoint); // Function UMG_ItemPopup.UMG_ItemPopup_C.ExecuteUbergraph_UMG_ItemPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

