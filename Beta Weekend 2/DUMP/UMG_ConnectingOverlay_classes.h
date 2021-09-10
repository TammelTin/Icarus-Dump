// WidgetBlueprintGeneratedClass UMG_ConnectingOverlay.UMG_ConnectingOverlay_C
// Size: 0x349 (Inherited: 0x260)
struct UUMG_ConnectingOverlay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ShowSidePanel; // 0x268(0x08)
	struct UWidgetAnimation* ShowAnnouncementPanel; // 0x270(0x08)
	struct UWidgetAnimation* ShowMenuButtons; // 0x278(0x08)
	struct UWidgetAnimation* FadeOut; // 0x280(0x08)
	struct UImage* AnnouncementBlack; // 0x288(0x08)
	struct UUMG_CloseButton_2_C* AnnouncementScreenCloseButton; // 0x290(0x08)
	struct UImage* BetaImage; // 0x298(0x08)
	struct UUMG_BasicButton_2_C* ButtonExit; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* ButtonOffline; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* ButtonPlay; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* ButtonSettings; // 0x2b8(0x08)
	struct UHorizontalBox* ConnectingHbox; // 0x2c0(0x08)
	struct UImage* Gradient; // 0x2c8(0x08)
	struct UImage* Logo; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* ShowRoadmapButton; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_RetryStatus; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_Status; // 0x2e8(0x08)
	struct UUMG_AnnouncementPanel_C* UMG_AnnouncementPanel; // 0x2f0(0x08)
	struct UUMG_AnnouncementScreenBetaOffline_C* UMG_AnnouncementScreenBetaOffline; // 0x2f8(0x08)
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon_C_1; // 0x300(0x08)
	struct UUMG_FeatureLevelIndicator_C* UMG_FeatureLevelIndicator; // 0x308(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x310(0x08)
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; // 0x318(0x08)
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; // 0x320(0x08)
	struct UIcarusMessageListeners* IcarusMessageListener; // 0x328(0x08)
	struct FText RetryStatusFormat; // 0x330(0x18)
	bool ContentServerConnectionComplete; // 0x348(0x01)

	void IsEscapeMenuDisabled(bool Disabled); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.IsEscapeMenuDisabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Log(struct FString Description); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowCharacterSelectScreen(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ShowCharacterSelectScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRetryStatus(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateRetryStatus // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_E78F06674F46BAE2FA5469B944A0976A(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Finished_E78F06674F46BAE2FA5469B944A0976A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnFail_2E20AAC94911EA94788DB58E9DB4C4EF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF(struct FResGetUserProfile Response); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnSuccess_2E20AAC94911EA94788DB58E9DB4C4EF // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MoveToCharacterSelection(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.MoveToCharacterSelection // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuitGame(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EscapeKeyPressed(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.EscapeKeyPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonPlay_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonPlay_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonExit_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void OnContentServerConnectionSuccess(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnContentServerConnectionSuccess // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckIfConnectionFinished(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CheckIfConnectionFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ButtonSettings_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void CloseSettings(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.CloseSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateConnectingProgress(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.UpdateConnectingProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__ShowRoadmapButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.BndEvt__UMG_ButtonIcon_C_0_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectMessageEvent(bool bSuccess); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.OnConnectMessageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ConnectingOverlay(int32_t EntryPoint); // Function UMG_ConnectingOverlay.UMG_ConnectingOverlay_C.ExecuteUbergraph_UMG_ConnectingOverlay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

