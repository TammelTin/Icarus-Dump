// WidgetBlueprintGeneratedClass UMG_InventoryDropZone.UMG_InventoryDropZone_C
// Size: 0x340 (Inherited: 0x260)
struct UUMG_InventoryDropZone_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CornerAnimation2; // 0x268(0x08)
	struct UWidgetAnimation* CornerAnimation; // 0x270(0x08)
	struct UBorder* BG; // 0x278(0x08)
	struct UImage* CornerArrow; // 0x280(0x08)
	struct UImage* CornerArrow_2; // 0x288(0x08)
	struct UImage* CornerArrow_3; // 0x290(0x08)
	struct UImage* CornerArrow_4; // 0x298(0x08)
	struct UOverlay* Corners; // 0x2a0(0x08)
	struct UImage* Dropshadow; // 0x2a8(0x08)
	struct UTextBlock* DropZoneText; // 0x2b0(0x08)
	struct UBorder* Frame; // 0x2b8(0x08)
	struct UImage* Image_434; // 0x2c0(0x08)
	struct UBorder* TextBorder; // 0x2c8(0x08)
	struct FLinearColor BorderColour_Base; // 0x2d0(0x10)
	struct FLinearColor BorderColour_Hover; // 0x2e0(0x10)
	struct FSlateColor TextColour_Base; // 0x2f0(0x28)
	struct FSlateColor TextColour_Hover; // 0x318(0x28)

	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_InventoryDropZone.UMG_InventoryDropZone_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_InventoryDropZone.UMG_InventoryDropZone_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_InventoryDropZone.UMG_InventoryDropZone_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_InventoryDropZone.UMG_InventoryDropZone_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_InventoryDropZone(int32_t EntryPoint); // Function UMG_InventoryDropZone.UMG_InventoryDropZone_C.ExecuteUbergraph_UMG_InventoryDropZone // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

