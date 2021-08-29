// WidgetBlueprintGeneratedClass UMG_MainMenu_Space.UMG_MainMenu_Space_C
// Size: 0x3e0 (Inherited: 0x260)
struct UUMG_MainMenu_Space_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CharacterFadeIn; // 0x268(0x08)
	struct UWidgetAnimation* MailNotification; // 0x270(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonDropships; // 0x278(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonInventory; // 0x280(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonLeaveSession; // 0x288(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonLoadout; // 0x290(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonOrbitalTree; // 0x298(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonProspects; // 0x2a0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ButtonReadyUp; // 0x2a8(0x08)
	struct UHorizontalBox* Buttons; // 0x2b0(0x08)
	struct UUMG_NewDropshipEditor_C* Dropships; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* ExitButton; // 0x2c0(0x08)
	struct UImage* Glow; // 0x2c8(0x08)
	struct UImage* Gradient; // 0x2d0(0x08)
	struct UBorder* Header_2; // 0x2d8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* HomeButton; // 0x2e0(0x08)
	struct UUMG_SpaceMenu_Cargo_C* Loadout; // 0x2e8(0x08)
	struct UUMG_ButtonIcon_C* MailboxButton; // 0x2f0(0x08)
	struct UOverlay* MailboxOverlay; // 0x2f8(0x08)
	struct UImage* MainBackground; // 0x300(0x08)
	struct UUMG_MainInventory_Space_C* MainInventory; // 0x308(0x08)
	struct UWidgetSwitcher* Menus; // 0x310(0x08)
	struct UUMG_MetaItemShop_C* MetaShop; // 0x318(0x08)
	struct UUMG_MissionEnd_C* MissionEndScreen; // 0x320(0x08)
	struct UHorizontalBox* NewMail; // 0x328(0x08)
	struct UImage* Notification; // 0x330(0x08)
	struct UOverlay* NotificationOverlay; // 0x338(0x08)
	struct UNamedSlot* OrbitalTreeSlot; // 0x340(0x08)
	struct UImage* Pattern; // 0x348(0x08)
	struct UUMG_ReadyUp_C* ReadyUp; // 0x350(0x08)
	struct UUMG_ButtonIcon_C* SettingsButton; // 0x358(0x08)
	struct UUMG_HabitatTerminal_C* Terminal; // 0x360(0x08)
	struct UUMG_SpaceMenus_TopLevel_C* TopLevel; // 0x368(0x08)
	struct UUMG_CloseButton_2_C* UMG_CloseButton_3; // 0x370(0x08)
	struct UUMG_FirstTutorialScreen_C* UMG_FirstTutorialScreen; // 0x378(0x08)
	struct UUMG_Mailbox_C* UMG_Mailbox; // 0x380(0x08)
	struct UUMG_SpacePlayerInfo_C* UMG_SpacePlayerInfo; // 0x388(0x08)
	struct UImage* Vignette; // 0x390(0x08)
	struct UInventory* Inventory; // 0x398(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x3a0(0x08)
	bool Initialised; // 0x3a8(0x01)
	char pad_3A9[0x7]; // 0x3a9(0x07)
	struct UUMG_UserInterfaceSpace_C* UserInterace_Space; // 0x3b0(0x08)
	enum class ESpaceMainMenuOptions CurrentMenu; // 0x3b8(0x01)
	enum class ESpaceMainMenuOptions LastMenu; // 0x3b9(0x01)
	bool BackReturnsToLastMenu; // 0x3ba(0x01)
	char pad_3BB[0x5]; // 0x3bb(0x05)
	struct FText ChatKeyBind; // 0x3c0(0x18)
	struct ABP_PlayerPreview_HAB_C* PlayerPreview; // 0x3d8(0x08)

	void TutorialDismissed(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.TutorialDismissed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TutorialAccepted(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.TutorialAccepted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowTutorialScreen(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ShowTutorialScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitCharacterData(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.InitCharacterData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void NotificationsUpdated(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.NotificationsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ContractUpdated(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ContractUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowOption(enum class ESpaceMainMenuOptions Option); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ShowOption // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetContentState(enum class ESpaceMainMenuOptions State); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.SetContentState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetBackReturnsToLastMenu(bool ShouldReturn); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.SetBackReturnsToLastMenu // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetContentSwitcher(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ResetContentSwitcher // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonInventory_K2Node_ComponentBoundEvent_0_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonShop_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonDropships_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonProspects_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonReadyUp_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonReadyUp_K2Node_ComponentBoundEvent_4_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ExitButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void CreateDropship(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.CreateDropship // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ShowTopMenu(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ShowTopMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GoToInventory(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToInventory // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GotToDropship(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GotToDropship // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GoToShop(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToShop // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GoToProspect(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GoToContract(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToContract // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonLeaveSession_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void GoToLoadout(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoToLoadout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__UMG_ButtonIcon_429_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__HomeButton_K2Node_ComponentBoundEvent_11_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void GoBackToHome(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.GoBackToHome // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__ButtonMetaShop_K2Node_ComponentBoundEvent_10_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.BndEvt__SettingsButton_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void LeaveToMainMenu(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.LeaveToMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReturnToCharacterSelect(struct UUMG_ButtonBase_C* Button); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ReturnToCharacterSelect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void CancelLeaveToMainMenu(); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.CancelLeaveToMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MainMenu_Space(int32_t EntryPoint); // Function UMG_MainMenu_Space.UMG_MainMenu_Space_C.ExecuteUbergraph_UMG_MainMenu_Space // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

