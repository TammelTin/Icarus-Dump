// WidgetBlueprintGeneratedClass UMG_CharacterInitialization.UMG_CharacterInitialization_C
// Size: 0x540 (Inherited: 0x260)
struct UUMG_CharacterInitialization_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UWidgetAnimation* AmbientBackground; // 0x270(0x08)
	struct UWidgetAnimation* FadeIn; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x280(0x08)
	struct UOverlay* BackendLoadingScreen; // 0x288(0x08)
	struct UUMG_LoadingProgress_C* CharacterProgress; // 0x290(0x08)
	struct UWidgetSwitcher* ContentSwitcher; // 0x298(0x08)
	struct UUMG_LoadingProgress_C* ProfileProgress; // 0x2a0(0x08)
	struct UUMG_LoadingProgress_C* ProspectProgress; // 0x2a8(0x08)
	struct UUMG_BasicButton_2_C* QuitToDesktopButton; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_Settings; // 0x2b8(0x08)
	struct UUMG_CharacterCreation_C* UMG_CharacterCreation; // 0x2c0(0x08)
	struct UUMG_CharacterSelection_C* UMG_CharacterSelection; // 0x2c8(0x08)
	struct UUMG_RevisionNumber_C* UMG_RevisionNumber; // 0x2d0(0x08)
	struct UUMG_SettingsMenu_C* UMG_SettingsMenu; // 0x2d8(0x08)
	struct UImage* Vignette; // 0x2e0(0x08)
	enum class ECharacterCreationMenus CurrentState; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct ABP_PlayerPreviewManager_C* PlayerPreviewManager; // 0x2f0(0x08)
	struct TArray<struct FOnlineCharacterProspectInfo> CharacterProspectLists; // 0x2f8(0x10)
	struct FOnlineProspectInfo CurrentActiveProspect; // 0x308(0x150)
	struct TArray<struct FOnlineProfileCharacter> RetrievedCharacterList; // 0x458(0x10)
	struct FIcarusProfile RetrievedUserProfile; // 0x468(0x20)
	bool UserProfileRetrieved; // 0x488(0x01)
	bool ActiveProspectsRetrieved; // 0x489(0x01)
	bool CharactersRetrieved; // 0x48a(0x01)
	bool IsComplete; // 0x48b(0x01)
	struct FProspectListRowHandle JoinProspectRow; // 0x48c(0x18)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct FMulticastInlineDelegate OnCharacterChanged; // 0x4a8(0x10)
	struct TSoftObjectPtr<UWorld> Diorama_Prospect; // 0x4b8(0x28)
	struct TSoftObjectPtr<UWorld> Diorama_Hab; // 0x4e0(0x28)
	struct TSoftObjectPtr<UWorld> Diorama_Abandoned; // 0x508(0x28)
	bool CanRetryConnection; // 0x530(0x01)
	char pad_531[0x7]; // 0x531(0x07)
	struct FTimerHandle ConnectionTimeoutTimerHandle; // 0x538(0x08)

	void CreateResumeSessionConfirmationSetups(struct FIcarusResumeSessionConfirmationSetups Setups); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CreateResumeSessionConfirmationSetups // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Initialise(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetActiveProspectForCharacter(struct FOnlineProfileCharacter OnlineCharacterProfile, struct FOnlineProspectInfo Online Prospect Info); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetActiveProspectForCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CharacterCosmeticsUpdate(bool Success, struct FOnlineProfileCharacter UpdatedCharacter); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCosmeticsUpdate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CharacterCreationResult(bool Success); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CharacterCreationResult // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetChacterSlots(struct TArray<int32_t> ChrSlots, bool HasCharacter); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetChacterSlots // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct TSoftObjectPtr<UWorld> GetDioramaForCurrentCharacter(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GetDioramaForCurrentCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnCharacterSelected(struct FOnlineProfileCharacter Character); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SelectCharacter(struct FOnlineProfileCharacter SelectedCharacter); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SelectCharacter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCharacterPreview(struct FCharacterCosmetics CosmeticData); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.UpdateCharacterPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NewCharacterSelected(struct FCharacterCosmetics CosmeticData); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.NewCharacterSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideSettings(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.HideSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowSettings(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ShowSettings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BackButtonPressed(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackButtonPressed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GenerateCharacterSelectList(bool CreateCharacterIfEmpty); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.GenerateCharacterSelectList // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetContentState(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ResetContentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetContentState(enum class ECharacterCreationMenus State); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SetContentState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_AA2196B04AC3B92C0431BDB2754010AC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_AA2196B04AC3B92C0431BDB2754010AC(struct FResGetCharacters Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_AA2196B04AC3B92C0431BDB2754010AC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_16D5FF39449681E05656E5AEB0E4B6EC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC(struct FResCreateCharacter Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_16D5FF39449681E05656E5AEB0E4B6EC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_8DEB61DF48DB1B1A9300A098DF26F53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D(struct FResDeleteCharacter Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_8DEB61DF48DB1B1A9300A098DF26F53D // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_49458CA04D20AEFC814952AE4F767256 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_49458CA04D20AEFC814952AE4F767256(struct FResGetCharacters Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_49458CA04D20AEFC814952AE4F767256 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_4ABA496E4835CAEFD2C97EA32B206271(struct FResLeaveProspect Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_4ABA496E4835CAEFD2C97EA32B206271 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_4ABA496E4835CAEFD2C97EA32B206271(struct FResLeaveProspect Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_4ABA496E4835CAEFD2C97EA32B206271 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_A199ABC24AC7A7F27C5A65A9B3F9E898 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898(struct FResGetAllProspects Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_A199ABC24AC7A7F27C5A65A9B3F9E898 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_D51C16E4437C3F4A4FBEF7B13E7E0F57(struct FResGetAllProspects Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_D51C16E4437C3F4A4FBEF7B13E7E0F57 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_D51C16E4437C3F4A4FBEF7B13E7E0F57(struct FResGetAllProspects Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_D51C16E4437C3F4A4FBEF7B13E7E0F57 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_F77B8CB74F4AF05825B964AC18481892 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_F77B8CB74F4AF05825B964AC18481892(struct FResUpdateCosmetics Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_F77B8CB74F4AF05825B964AC18481892 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFail_BEC856464A75D4A166FC988B8C7226EC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_BEC856464A75D4A166FC988B8C7226EC(struct FResGetUserProfile Response); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_BEC856464A75D4A166FC988B8C7226EC // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_44B14CE547DFF8246956988960A52B7B(struct FErrorCodesEnum Result); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnFailure_44B14CE547DFF8246956988960A52B7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_44B14CE547DFF8246956988960A52B7B(struct FErrorCodesEnum Result); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnSuccess_44B14CE547DFF8246956988960A52B7B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Destruct(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BackSettings(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BackSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RetrieveUserProfile(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveUserProfile // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RetrieveCharacters(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveCharacters // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCreateCharacterRequest(struct FReqCreateCharacter CharacterName, int32_t NumRetries, bool SelectNewCharacter); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCreateCharacterRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCharacterDeletionRequest(struct FOnlineProfileCharacter Character); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterDeletionRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RefreshCharacterList(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RefreshCharacterList // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckIfAccountRetrieved(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CheckIfAccountRetrieved // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RetrieveActiveProspects(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.RetrieveActiveProspects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResumeCurrentActiveProspect(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ResumeCurrentActiveProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AbandonActiveProspect(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.AbandonActiveProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MoveToHAB(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.MoveToHAB // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AbandonProspect(struct FOnlineProspectInfo OnlineProspectInfo, int32_t SelectedCharacterSlot); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.AbandonProspect // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuitGame(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.QuitGame // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__QuitToDesktopButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void UpdateConnectingProgress(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.UpdateConnectingProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.BndEvt__UMG_BasicButton_Settings_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void SwapToCharacterCreate(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.SwapToCharacterCreate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AbandonSelectedCharacterProspect(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.AbandonSelectedCharacterProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCosmeticUpdateRequest(struct FReqUpdateCosmetics Request, int32_t Retries); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCosmeticUpdateRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void QuitToDesktopCancelled(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.QuitToDesktopCancelled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CancelAbandonProspect(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.CancelAbandonProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectMessageEvent(bool Success); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnConnectMessageEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ConnectionTimeout(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ConnectionTimeout // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterInitialization(int32_t EntryPoint); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.ExecuteUbergraph_UMG_CharacterInitialization // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnCharacterChanged__DelegateSignature(); // Function UMG_CharacterInitialization.UMG_CharacterInitialization_C.OnCharacterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

