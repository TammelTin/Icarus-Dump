// WidgetBlueprintGeneratedClass UMG_ReadyUp.UMG_ReadyUp_C
// Size: 0x4b1 (Inherited: 0x260)
struct UUMG_ReadyUp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* CancelButton; // 0x268(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x270(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ContractTabButton; // 0x278(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* CrewTabButton; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* EvenSplitButton; // 0x288(0x08)
	struct UUMG_BasicButton_2_C* HomeButton; // 0x290(0x08)
	struct UImage* Image_140; // 0x298(0x08)
	struct UBorder* LaunchButtonBorder; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* LaunchDropButton; // 0x2a8(0x08)
	struct UOverlay* LaunchDropOverlay; // 0x2b0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* LoadoutTabButton; // 0x2b8(0x08)
	struct UOverlay* MainOverlay; // 0x2c0(0x08)
	struct UBorder* NoContractBorder; // 0x2c8(0x08)
	struct UTextBlock* NotReadyInstructionText; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* ReadyButton; // 0x2d8(0x08)
	struct UUMG_Chatbox_C* UMG_Chatbox; // 0x2e0(0x08)
	struct UUMG_Crew_C* UMG_Crew; // 0x2e8(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x2f0(0x08)
	struct UUMG_PartySpace_C* UMG_PartySpace; // 0x2f8(0x08)
	struct UUMG_ProspectInformation2_C* UMG_ProspectInformation; // 0x300(0x08)
	struct UUMG_SpaceMenu_Cargo_C* UMG_SpaceMenu_Cargo; // 0x308(0x08)
	struct FString ProspectID; // 0x310(0x10)
	struct FFProspectServerInfo Current Contract; // 0x320(0x190)
	bool BoundToBackend; // 0x4b0(0x01)

	void SetReadyUpButtonStates(bool Enabled); // Function UMG_ReadyUp.UMG_ReadyUp_C.SetReadyUpButtonStates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowError(struct FErrorCodesEnum ErrorCode); // Function UMG_ReadyUp.UMG_ReadyUp_C.ShowError // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetContentState(enum class E_ContractTabs Tab); // Function UMG_ReadyUp.UMG_ReadyUp_C.SetContentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Log(struct FString Description); // Function UMG_ReadyUp.UMG_ReadyUp_C.Log // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadoutUpdated(); // Function UMG_ReadyUp.UMG_ReadyUp_C.LoadoutUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PartyReadyStateChanged(bool AllPlayersReady); // Function UMG_ReadyUp.UMG_ReadyUp_C.PartyReadyStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Reset(); // Function UMG_ReadyUp.UMG_ReadyUp_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_A5FA9CF24374E1EDA7DE3792F1AA0606(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnFailure_A5FA9CF24374E1EDA7DE3792F1AA0606 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_A5FA9CF24374E1EDA7DE3792F1AA0606(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnSuccess_A5FA9CF24374E1EDA7DE3792F1AA0606 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_684309AE4CDDA4DCBB8B3AADF7999E9A(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnFailure_684309AE4CDDA4DCBB8B3AADF7999E9A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_684309AE4CDDA4DCBB8B3AADF7999E9A(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnSuccess_684309AE4CDDA4DCBB8B3AADF7999E9A // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_D717658646067350321303968A0664C1(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnFailure_D717658646067350321303968A0664C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_D717658646067350321303968A0664C1(struct FErrorCodesEnum Result); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnSuccess_D717658646067350321303968A0664C1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Show Loading Screen(struct FText Loading Screen Text); // Function UMG_ReadyUp.UMG_ReadyUp_C.Show Loading Screen // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ReadyUp.UMG_ReadyUp_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__LaunchDropButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__EvenSplitButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void OnOpened(); // Function UMG_ReadyUp.UMG_ReadyUp_C.OnOpened // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__ReadyButton_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Launch(); // Function UMG_ReadyUp.UMG_ReadyUp_C.Launch // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__ContractTabButton_K2Node_ComponentBoundEvent_2_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__LoadoutTabButton_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_ReadyUp.UMG_ReadyUp_C.BndEvt__CrewTabButton_K2Node_ComponentBoundEvent_6_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ReadyUpResult(); // Function UMG_ReadyUp.UMG_ReadyUp_C.ReadyUpResult // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ReadyUp(int32_t EntryPoint); // Function UMG_ReadyUp.UMG_ReadyUp_C.ExecuteUbergraph_UMG_ReadyUp // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

