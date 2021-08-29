// WidgetBlueprintGeneratedClass UMG_TalentTree.UMG_TalentTree_C
// Size: 0x391 (Inherited: 0x2e0)
struct UUMG_TalentTree_C : UTalentTreeWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct UImage* Background; // 0x2e8(0x08)
	struct UCanvasPanel* Canvas; // 0x2f0(0x08)
	struct UNamedSlot* CanvasSlot; // 0x2f8(0x08)
	struct UNamedSlot* EditorSlot; // 0x300(0x08)
	struct TArray<struct UUMG_Talent_Base_C*> TalentWidgets; // 0x308(0x10)
	bool Horizontal; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct TMap<struct FTalentsRowHandle, struct UUMG_Talent_Base_C*> TalentWidgetsMap; // 0x320(0x50)
	struct FBox2D Boundary; // 0x370(0x14)
	char pad_384[0x4]; // 0x384(0x04)
	struct UUMG_TalentTreeTitle_C* TitleWidget; // 0x388(0x08)
	bool QueueRefresh; // 0x390(0x01)

	struct FVector2D GetCanvasSize(); // Function UMG_TalentTree.UMG_TalentTree_C.GetCanvasSize // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void OnTalentChanged(struct FTalentsRowHandle Talent); // Function UMG_TalentTree.UMG_TalentTree_C.OnTalentChanged // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTalentRemoved(struct FTalentsRowHandle Talent); // Function UMG_TalentTree.UMG_TalentTree_C.OnTalentRemoved // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh Talent State(struct UUMG_Talent_Base_C* Talent); // Function UMG_TalentTree.UMG_TalentTree_C.Refresh Talent State // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FVector2D GetCanvasOffset(bool bAbsolute); // Function UMG_TalentTree.UMG_TalentTree_C.GetCanvasOffset // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void ClearTalentTree(); // Function UMG_TalentTree.UMG_TalentTree_C.ClearTalentTree // (Event|Public|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void OnTalentTreeCreated(); // Function UMG_TalentTree.UMG_TalentTree_C.OnTalentTreeCreated // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTalentAdded(struct FTalentsRowHandle Talent); // Function UMG_TalentTree.UMG_TalentTree_C.OnTalentAdded // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh Tree(struct UTalentModelInterface_Const* Model); // Function UMG_TalentTree.UMG_TalentTree_C.Refresh Tree // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Connect To Model(); // Function UMG_TalentTree.UMG_TalentTree_C.Connect To Model // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Width Override(float Override); // Function UMG_TalentTree.UMG_TalentTree_C.Set Width Override // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Height Override(float Override); // Function UMG_TalentTree.UMG_TalentTree_C.Set Height Override // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetOrientation(enum class EOrientation Orientation); // Function UMG_TalentTree.UMG_TalentTree_C.SetOrientation // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetEditorCanvas(struct UUserWidget* EditorCanvas); // Function UMG_TalentTree.UMG_TalentTree_C.SetEditorCanvas // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Talent Hovered(struct UUMG_Talent_Base_C* Talent); // Function UMG_TalentTree.UMG_TalentTree_C.Talent Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Talent Unhovered(); // Function UMG_TalentTree.UMG_TalentTree_C.Talent Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_TalentTree.UMG_TalentTree_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TalentTree(int32_t EntryPoint); // Function UMG_TalentTree.UMG_TalentTree_C.ExecuteUbergraph_UMG_TalentTree // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

