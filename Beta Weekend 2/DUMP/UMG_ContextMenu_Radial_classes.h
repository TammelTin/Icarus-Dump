// WidgetBlueprintGeneratedClass UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C
// Size: 0x2e9 (Inherited: 0x288)
struct UUMG_ContextMenu_Radial_C : UUMG_ContextMenu_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* BackgroundFade; // 0x290(0x08)
	struct UTextBlock* ContentText; // 0x298(0x08)
	struct UImage* ContextImage; // 0x2a0(0x08)
	struct UBorder* InteractionFrame; // 0x2a8(0x08)
	struct UOverlay* RadialMenu; // 0x2b0(0x08)
	struct UTextBlock* TitleText; // 0x2b8(0x08)
	struct UUMG_ContextMenu_Radial_Item_C* HighlightedSegment; // 0x2c0(0x08)
	struct FMulticastInlineDelegate SegmentHighlightedChanged; // 0x2c8(0x10)
	int32_t NumItems; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct UUMG_ContextMenu_Radial_Item_C* DefaultSegmentWidgetClass; // 0x2e0(0x08)
	bool IsOpen; // 0x2e8(0x01)

	void CreateItem(int32_t Index, struct FContextMenuItemData ContextMenuItem); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.CreateItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Radial Menu Select(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.Radial Menu Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SegmentHighlightedHandler(struct UUMG_ContextMenu_Radial_Item_C* NewHighlightedSegment); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.SegmentHighlightedHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ListenForActions(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ListenForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopListeningForActions(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.StopListeningForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnClickedInput(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnClickedInput // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowMenu(struct FVector2D ScreenPosition, struct FText MenuName, struct UTexture2D* MenuIcon); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ShowMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddItems(struct TArray<struct FContextMenuItemData> ContextMenuItems); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.AddItems // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CloseMenu(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.CloseMenu // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnMenuOpened(); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.OnMenuOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ContextMenu_Radial(int32_t EntryPoint); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.ExecuteUbergraph_UMG_ContextMenu_Radial // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SegmentHighlightedChanged__DelegateSignature(struct UUMG_ContextMenu_Radial_Item_C* Segment); // Function UMG_ContextMenu_Radial.UMG_ContextMenu_Radial_C.SegmentHighlightedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

