// WidgetBlueprintGeneratedClass UMG_CheatOverlay.UMG_CheatOverlay_C
// Size: 0x3c8 (Inherited: 0x340)
struct UUMG_CheatOverlay_C : UCheatOverlayBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UHorizontalBox* HorizontalBox_2; // 0x348(0x08)
	struct UUMG_SearchBox_C* SearchBar; // 0x350(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_2_C_2; // 0x358(0x08)
	struct UScrollBox* WidgetList; // 0x360(0x08)
	struct TSoftObjectPtr<UCheatFunctionBase> TopFunction; // 0x368(0x28)
	struct TArray<struct UUMG_CheatFunctionBorder_C*> CheatWidgets; // 0x390(0x10)
	enum class ECheatContext Context; // 0x3a0(0x01)
	bool Changed; // 0x3a1(0x01)
	bool QueuePreview; // 0x3a2(0x01)
	char pad_3A3[0x5]; // 0x3a3(0x05)
	struct FString PreviewText; // 0x3a8(0x10)
	struct TArray<struct UCheatFunctionBase*> FilteredWidgets; // 0x3b8(0x10)

	void SetTopFunction(struct UCheatFunctionBase* NewTop); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.SetTopFunction // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSetFilteredWidgets(struct TArray<struct UCheatFunctionBase*> Array); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnSetFilteredWidgets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddCustomAutomationFunctionImpl(struct FString Name, struct TArray<struct FString> Instructions, struct FString Description); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomAutomationFunctionImpl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddCustomFunctionImpl(struct FString Name, struct TArray<struct FString> Instructions, struct FString Description); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomFunctionImpl // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	enum class ESlateVisibility GetPanelVisibility(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.GetPanelVisibility // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void BuildWidget(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.BuildWidget // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTopFunction(struct UCheatFunctionBase* Top); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.GetTopFunction // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnAddCheat(struct UCheatFunctionBase* Widget); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnAddCheat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Toggle(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.Toggle // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearFilteredWidgets(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.ClearFilteredWidgets // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AddFilteredWidget(struct UCheatFunctionBase* Widget); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddFilteredWidget // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature(struct FText Text); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnSearchBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_1_OnSearchBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature(struct FKeyEvent KeyEvent); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_SearchBoxReply__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void Setup(enum class ECheatContext Context); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddCustomFunction(struct FString Name, struct TArray<struct FString> ScriptLines, struct FString Description); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomFunction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void AddCheat(struct UCheatFunctionBase* Widget); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCheat // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AddCustomAutomationFunction(struct FString Name, struct TArray<struct FString> ScriptLines, struct FString Description); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.AddCustomAutomationFunction // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void RequestReloadCheats(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.RequestReloadCheats // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnShowChanged(bool bNewShow); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.OnShowChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetFilteredWidgets(struct TArray<struct UCheatFunctionBase*> Widgets); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.SetFilteredWidgets // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void HidePanelDisplay(); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.HidePanelDisplay // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CheatOverlay(int32_t EntryPoint); // Function UMG_CheatOverlay.UMG_CheatOverlay_C.ExecuteUbergraph_UMG_CheatOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

