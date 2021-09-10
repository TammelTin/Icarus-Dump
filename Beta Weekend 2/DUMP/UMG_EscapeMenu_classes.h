// WidgetBlueprintGeneratedClass UMG_EscapeMenu.UMG_EscapeMenu_C
// Size: 0x2f8 (Inherited: 0x280)
struct UUMG_EscapeMenu_C : UIcarusWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UVerticalBox* EscapeButtons; // 0x288(0x08)
	struct UImage* Gradient; // 0x290(0x08)
	struct UOverlay* PartyMembers; // 0x298(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Continue; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Quit; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_ReturnToMM; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Settings; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Unstuck; // 0x2c0(0x08)
	struct UUMG_MissionTimer_C* UMG_MissionTimer; // 0x2c8(0x08)
	struct UUMG_NetworkDebugInfo_C* UMG_NetworkDebugInfo; // 0x2d0(0x08)
	struct UUMG_Party_C* UMG_Party; // 0x2d8(0x08)
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; // 0x2e0(0x08)
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; // 0x2e8(0x08)
	struct UUMG_SpaceMenuHeader_C* UMG_SpaceMenuHeader; // 0x2f0(0x08)

	void IsHostWithClients(bool Result); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.IsHostWithClients // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Initialize(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.Initialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFocusWidget(bool bValid, struct UWidget* Widget, bool bThis); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.GetFocusWidget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_1770389541D8EE4120B6B7A43CC6B75A(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.OnFailure_1770389541D8EE4120B6B7A43CC6B75A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_1770389541D8EE4120B6B7A43CC6B75A(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.OnSuccess_1770389541D8EE4120B6B7A43CC6B75A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BndEvt__UMG_BasicButton_Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_Exit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BndEvt__UMG_BasicButton_Exit_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void QuitGame(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_ReturnToMM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BndEvt__UMG_BasicButton_ReturnToMM_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void LeaveToMainMenu(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.LeaveToMainMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BackSettingsMenu(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BackSettingsMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void DoNothing(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.DoNothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_Unstuck_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.BndEvt__UMG_BasicButton_Unstuck_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void On Visibility Changed(enum class ESlateVisibility InVisibility); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.On Visibility Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DelayShowSavingDialog(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.DelayShowSavingDialog // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CancelLeaveProspect(); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.CancelLeaveProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_EscapeMenu(int32_t EntryPoint); // Function UMG_EscapeMenu.UMG_EscapeMenu_C.ExecuteUbergraph_UMG_EscapeMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

