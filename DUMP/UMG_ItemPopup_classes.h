// WidgetBlueprintGeneratedClass UMG_ItemPopup.UMG_ItemPopup_C
// Size: 0x350 (Inherited: 0x260)
struct UUMG_ItemPopup_C : UUserWidget {
	struct UBorder* Description; // 0x260(0x08)
	struct UTextBlock* DescriptionText; // 0x268(0x08)
	struct UTextBlock* DevelopmentText; // 0x270(0x08)
	struct UTextBlock* Durability; // 0x278(0x08)
	struct UTextBlock* FlavourText; // 0x280(0x08)
	struct UBorder* FunctionBorder; // 0x288(0x08)
	struct UBorder* FunctionBorder_2; // 0x290(0x08)
	struct UTextBlock* FunctionText; // 0x298(0x08)
	struct UBorder* Header; // 0x2a0(0x08)
	struct UTextBlock* Name; // 0x2a8(0x08)
	struct UBorder* SetBonus; // 0x2b0(0x08)
	struct UVerticalBox* SetBonusList; // 0x2b8(0x08)
	struct USpacer* SetBonusSpacer; // 0x2c0(0x08)
	struct UTextBlock* Stack; // 0x2c8(0x08)
	struct UBorder* StatsBorder; // 0x2d0(0x08)
	struct UVerticalBox* StatsList; // 0x2d8(0x08)
	struct USpacer* StatsSpacer; // 0x2e0(0x08)
	struct UTextBlock* Weight; // 0x2e8(0x08)
	struct FVector2D CalculatedSize; // 0x2f0(0x08)
	bool MetaItem; // 0x2f8(0x01)
	char pad_2F9[0x7]; // 0x2f9(0x07)
	struct FSlateColor RegularItemColour; // 0x300(0x28)
	struct FSlateColor MetaItemColour; // 0x328(0x28)

	void UpdateMetaVisuals(); // Function UMG_ItemPopup.UMG_ItemPopup_C.UpdateMetaVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSize(struct FVector2D Size); // Function UMG_ItemPopup.UMG_ItemPopup_C.GetSize // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Show for Item(struct FItemData Item, bool Shown); // Function UMG_ItemPopup.UMG_ItemPopup_C.Show for Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

