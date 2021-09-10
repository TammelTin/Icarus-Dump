// WidgetBlueprintGeneratedClass UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C
// Size: 0x3e0 (Inherited: 0x388)
struct UUMG_UserInterface_TitleScreen_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UBorder* ErrorCodeBox; // 0x390(0x08)
	struct UScaleBox* ErrorCodeScaleBox; // 0x398(0x08)
	struct UOverlay* Menus; // 0x3a0(0x08)
	struct USizeBox* TickerSizeBox; // 0x3a8(0x08)
	struct UUMG_ConnectingOverlay_C* UMG_ConnectingOverlay; // 0x3b0(0x08)
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; // 0x3b8(0x08)
	struct UUMG_QueueWindow_C* UMG_QueueWindow; // 0x3c0(0x08)
	struct UUMG_ServerMessageTicker_C* UMG_ServerMessageTicker; // 0x3c8(0x08)
	struct UUMG_TitleScreen_Background_C* UMG_TitleScreen_Background; // 0x3d0(0x08)
	struct UUserWidget* CurrentDynamicWidget; // 0x3d8(0x08)

	void UpdateQueue(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateMaintenaceText(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.UpdateMaintenaceText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideErrorCode(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.HideErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusDynamicWidget(struct UUserWidget* FocusedWidget); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.FocusDynamicWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DisplayIcarusError(struct FErrorCodesEnum OutgoingError); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.DisplayIcarusError // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature(); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.BndEvt__UMG_QueueWindow_K2Node_ComponentBoundEvent_0_Close__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_UserInterface_TitleScreen(int32_t EntryPoint); // Function UMG_UserInterface_TitleScreen.UMG_UserInterface_TitleScreen_C.ExecuteUbergraph_UMG_UserInterface_TitleScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

