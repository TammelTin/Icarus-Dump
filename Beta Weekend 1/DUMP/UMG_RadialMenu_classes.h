// WidgetBlueprintGeneratedClass UMG_RadialMenu.UMG_RadialMenu_C
// Size: 0x2e9 (Inherited: 0x280)
struct UUMG_RadialMenu_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UImage* BackgroundFade; // 0x288(0x08)
	struct UTextBlock* ContentText; // 0x290(0x08)
	struct UImage* ContextImage; // 0x298(0x08)
	struct UBorder* InteractionFrame; // 0x2a0(0x08)
	struct UOverlay* RadialMenu; // 0x2a8(0x08)
	struct UTextBlock* TitleText; // 0x2b0(0x08)
	bool OpenedInMenu; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct UUMG_RadialSegment_C* HighlightedSegment; // 0x2c0(0x08)
	struct FMulticastInlineDelegate SegmentHighlightedChanged; // 0x2c8(0x10)
	struct TArray<struct UUMG_RadialSegment_C*> Segments; // 0x2d8(0x10)
	bool Opened; // 0x2e8(0x01)

	void ClearRadialMenu(); // Function UMG_RadialMenu.UMG_RadialMenu_C.ClearRadialMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_RadialMenu.UMG_RadialMenu_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RadialMenuSelect(); // Function UMG_RadialMenu.UMG_RadialMenu_C.RadialMenuSelect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup Radial Menu(struct UUMG_RadialSegment_C* SegmentWidgetClass, int32_t NumberOfEntries, struct UTexture2D* Icon, struct FText Title, struct TArray<struct UUMG_RadialSegment_C*> CreatedSegments); // Function UMG_RadialMenu.UMG_RadialMenu_C.Setup Radial Menu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SegmentHighlightedHandler(struct UUMG_RadialSegment_C* HighlightedSegment); // Function UMG_RadialMenu.UMG_RadialMenu_C.SegmentHighlightedHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_RadialMenu.UMG_RadialMenu_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ListenForActions(); // Function UMG_RadialMenu.UMG_RadialMenu_C.ListenForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopListeningForActions(); // Function UMG_RadialMenu.UMG_RadialMenu_C.StopListeningForActions // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CustomEvent_1(); // Function UMG_RadialMenu.UMG_RadialMenu_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_RadialMenu(int32_t EntryPoint); // Function UMG_RadialMenu.UMG_RadialMenu_C.ExecuteUbergraph_UMG_RadialMenu // (Final|UbergraphFunction) // @ game+0x1a05090
	void SegmentHighlightedChanged__DelegateSignature(struct UUMG_RadialSegment_C* Segment); // Function UMG_RadialMenu.UMG_RadialMenu_C.SegmentHighlightedChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

