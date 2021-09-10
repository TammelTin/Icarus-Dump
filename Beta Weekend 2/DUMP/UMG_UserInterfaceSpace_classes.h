// WidgetBlueprintGeneratedClass UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C
// Size: 0x590 (Inherited: 0x388)
struct UUMG_UserInterfaceSpace_C : UUMG_UserInterface_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x388(0x08)
	struct UScaleBox* ConfirmationScaleBox; // 0x390(0x08)
	struct USizeBox* CursorItemSize; // 0x398(0x08)
	struct UScaleBox* CursorScaleBox; // 0x3a0(0x08)
	struct UCanvasPanel* Debug; // 0x3a8(0x08)
	struct UBorder* ErrorCodeBox; // 0x3b0(0x08)
	struct UScaleBox* ErrorCodeScaleBox; // 0x3b8(0x08)
	struct UTextBlock* GameVersionNumber; // 0x3c0(0x08)
	struct UUMG_ButtonIcon_C* HUDUnreadNotificationIcon; // 0x3c8(0x08)
	struct UScaleBox* JoiningGameScaleBox; // 0x3d0(0x08)
	struct UScaleBox* LoadingScreenScaleBox; // 0x3d8(0x08)
	struct UScaleBox* MainDisplayScaleBox; // 0x3e0(0x08)
	struct UUMG_ButtonIcon_C* MenuNotificationButton; // 0x3e8(0x08)
	struct UOverlay* Menus; // 0x3f0(0x08)
	struct UBorder* ProspectSummary; // 0x3f8(0x08)
	struct UScaleBox* RadialScaleBox; // 0x400(0x08)
	struct URetainerBox* RetainerBox_1; // 0x408(0x08)
	struct UHorizontalBox* TABhint; // 0x410(0x08)
	struct UImage* Target; // 0x418(0x08)
	struct UBorder* TemporaryMouseWidget; // 0x420(0x08)
	struct UUMG_CharacterInitialization_C* UMG_CharacterInitialization; // 0x428(0x08)
	struct UUMG_Chatbox_C* UMG_Chatbox; // 0x430(0x08)
	struct UUMG_ConfirmationPopup_C* UMG_ConfirmationPopup; // 0x438(0x08)
	struct UUMG_CursorWidget_C* UMG_CursorWidget; // 0x440(0x08)
	struct UUMG_ErrorCodeDisplay_C* UMG_ErrorCodeDisplay; // 0x448(0x08)
	struct UUMG_EscapeMenu_C* UMG_EscapeMenu; // 0x450(0x08)
	struct UUMG_InteractionPrompt_C* UMG_InteractionPrompt; // 0x458(0x08)
	struct UUMG_IntroTips_Space_C* UMG_IntroTips_Space; // 0x460(0x08)
	struct UUMG_Inventory_C* UMG_Inventory; // 0x468(0x08)
	struct UUMG_JoiningGame_C* UMG_JoiningGame; // 0x470(0x08)
	struct UUMG_LoadingScreen_C* UMG_LoadingScreen; // 0x478(0x08)
	struct UUMG_MainMenu_Space_C* UMG_MainMenu_Space; // 0x480(0x08)
	struct UUMG_MissionComplete_C* UMG_MissionComplete; // 0x488(0x08)
	struct UUMG_Party_C* UMG_Party; // 0x490(0x08)
	struct UUMG_Target_C* UMG_Target; // 0x498(0x08)
	struct UW_ProjectionInterface_C* W_ProjectionInterface; // 0x4a0(0x08)
	struct ABP_IcarusPlayerControllerSpace_C* PlayerController; // 0x4a8(0x08)
	struct UUserWidget* CurrentDynamicWidget; // 0x4b0(0x08)
	bool VerboseStatDebugging; // 0x4b8(0x01)
	char pad_4B9[0x7]; // 0x4b9(0x07)
	struct UMaterialInstanceDynamic* CurvedHudDynMat; // 0x4c0(0x08)
	struct FRotator LastViewRot; // 0x4c8(0x0c)
	struct FVector DeltaRotation; // 0x4d4(0x0c)
	float ScreenWarpAmount; // 0x4e0(0x04)
	char pad_4E4[0x4]; // 0x4e4(0x04)
	struct UMaterialInstanceDynamic* SwayHudDynMat; // 0x4e8(0x08)
	float ScreenSwayAmount; // 0x4f0(0x04)
	float CADistance; // 0x4f4(0x04)
	int32_t CASteps; // 0x4f8(0x04)
	bool PendingProspectReward; // 0x4fc(0x01)
	char pad_4FD[0x3]; // 0x4fd(0x03)
	struct FResGetLastProspect ProspectReward; // 0x500(0x90)

	void HideProspectSummary(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideProspectSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleEscapeMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ToggleEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsSpace?(bool InSpace); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.IsSpace? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void HideLoadingScreen(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowLoadingScreen(struct FText Optional Message); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowLoadingScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowErrorCode(struct FErrorCodesEnum ErrorCode); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideErrorCode(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideErrorCode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EscapeKeyPressed(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.EscapeKeyPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowMissionSummary(struct FNotification Notification); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMissionSummary // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowReturnFromHABScreen(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowReturnFromHABScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCharacterSelected(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnCharacterSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowMailbox(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMailbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowMainMenu(enum class ESpaceMainMenuOptions Option, bool Success); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowMainMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Toggle Inventory(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Toggle Inventory // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCheatContext(enum class ECheatContext Context); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetCheatContext // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct UW_ProjectionInterface_C* GetProjectionInterface(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetProjectionInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetConfirmationWindow(struct UUMG_ConfirmationPopup_C* ConfirmationWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetConfirmationWindow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetCursorWidget(struct UUMG_CursorWidget_C* CursorWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.GetCursorWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void FocusStaticWidget(enum class EStaticUIWidgets Panel); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.FocusStaticWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HidePanelDisplay(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HidePanelDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Reset(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsMenuVisible_1(bool Visible); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.IsMenuVisible_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePlayerHighlighting(bool Active); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.UpdatePlayerHighlighting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideStaticWidgets(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.HideStaticWidgets // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusDynamicWidget(struct UUserWidget* DynamicWidget); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.FocusDynamicWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowTipsMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowTipsMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetHUDVisibility(bool Visible); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.SetHUDVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowEscapeMenu(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ShowEscapeMenu // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct ABP_IcarusPlayerControllerSpace_C* Controller); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseHandInventory(); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.InitialiseHandInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnItemAdded_Event_1(struct UInventory* Inventory, int32_t Location); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnItemAdded_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnItemRemoved_Event_1(struct UInventory* Inventory, int32_t Location); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.OnItemRemoved_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_UserInterfaceSpace(int32_t EntryPoint); // Function UMG_UserInterfaceSpace.UMG_UserInterfaceSpace_C.ExecuteUbergraph_UMG_UserInterfaceSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

