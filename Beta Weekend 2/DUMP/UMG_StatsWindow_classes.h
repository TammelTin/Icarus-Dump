// WidgetBlueprintGeneratedClass UMG_StatsWindow.UMG_StatsWindow_C
// Size: 0x299 (Inherited: 0x260)
struct UUMG_StatsWindow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Backglow; // 0x268(0x08)
	struct UHorizontalBox* Container; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x278(0x08)
	struct UOverlay* Overlay; // 0x280(0x08)
	struct UUMG_StatList_C* CurrentStatList; // 0x288(0x08)
	int32_t MaxVerticalElements; // 0x290(0x04)
	int32_t CurrentElements; // 0x294(0x04)
	bool Bound; // 0x298(0x01)

	void CreateList(); // Function UMG_StatsWindow.UMG_StatsWindow_C.CreateList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateStats(); // Function UMG_StatsWindow.UMG_StatsWindow_C.UpdateStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_StatsWindow.UMG_StatsWindow_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_StatsWindow.UMG_StatsWindow_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void AddWidget(struct UUserWidget* Widget); // Function UMG_StatsWindow.UMG_StatsWindow_C.AddWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_StatsWindow.UMG_StatsWindow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_StatsWindow.UMG_StatsWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Update(); // Function UMG_StatsWindow.UMG_StatsWindow_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_StatsWindow(int32_t EntryPoint); // Function UMG_StatsWindow.UMG_StatsWindow_C.ExecuteUbergraph_UMG_StatsWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

