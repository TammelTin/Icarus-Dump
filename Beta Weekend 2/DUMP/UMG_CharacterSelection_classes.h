// WidgetBlueprintGeneratedClass UMG_CharacterSelection.UMG_CharacterSelection_C
// Size: 0x4c8 (Inherited: 0x260)
struct UUMG_CharacterSelection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CharacterAbandonedText; // 0x268(0x08)
	struct UUniformGridPanel* CharacterContainer; // 0x270(0x08)
	struct UTextBlock* CharacterLevel; // 0x278(0x08)
	struct UTextBlock* CharacterName; // 0x280(0x08)
	struct UVerticalBox* CharacterSelectionBox; // 0x288(0x08)
	struct URetainerBox* CharacterSelectTitle; // 0x290(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x298(0x08)
	struct UImage* Dividers; // 0x2a0(0x08)
	struct UImage* Dividers_2; // 0x2a8(0x08)
	struct UTextBlock* DurationTime; // 0x2b0(0x08)
	struct UUMG_BasicButton_2_C* PlayButton; // 0x2b8(0x08)
	struct UBorder* PlayFrame; // 0x2c0(0x08)
	struct UVerticalBox* ProspectInfoBox; // 0x2c8(0x08)
	struct UTextBlock* ProspectName; // 0x2d0(0x08)
	struct UUMG_BasicButton_2_C* ResumeButton; // 0x2d8(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2e0(0x08)
	struct USizeBox* SelectedCharacterInfo; // 0x2e8(0x08)
	struct UImage* Shadow; // 0x2f0(0x08)
	struct UImage* SuitImage; // 0x2f8(0x08)
	struct UUMG_CreateNewCharacterButton_C* UMG_CreateNewCharacterButton; // 0x300(0x08)
	struct FMulticastInlineDelegate OnRequestCharacterSelect; // 0x308(0x10)
	int32_t SelectedCharacterIndex; // 0x318(0x04)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct FMulticastInlineDelegate OnRequestCharacterDelete; // 0x320(0x10)
	int32_t NumColumns; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FMulticastInlineDelegate CreateCharacter; // 0x338(0x10)
	int32_t MaxNumCharacters; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FOnlineProfileCharacter SelectedCharacter; // 0x350(0x130)
	bool HasSelectedCharacter; // 0x480(0x01)
	bool SelectedCharacterLockedToProspect; // 0x481(0x01)
	char pad_482[0x6]; // 0x482(0x06)
	struct FMulticastInlineDelegate SelectedCharacterUpdated; // 0x488(0x10)
	struct ABP_PlayerPreview_HAB_Selection_C* PlayerPreview; // 0x498(0x08)
	struct FPreviewCameraSettingsEnum CurrentCameraFocus; // 0x4a0(0x10)
	int32_t ProspectEndTime; // 0x4b0(0x04)
	char pad_4B4[0x4]; // 0x4b4(0x04)
	struct FString JoinLobbyName; // 0x4b8(0x10)

	void GetCameraFocus(struct FPreviewCameraSettingsEnum CameraFocus); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCameraFocus // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCosmeticData(struct FCharacterCosmetics CosmeticData); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCosmeticData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindActiveProspectForCharacter(struct FOnlineProfileCharacter OnlineCharacterProfile, struct TArray<struct FOnlineCharacterProspectInfo> ProspectArray, struct FOnlineProspectInfo Online Prospect Info); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.FindActiveProspectForCharacter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ToggleFriendProspectJoinButton(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ToggleFriendProspectJoinButton // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText Get_DurationTime_Text(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.Get_DurationTime_Text // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetCharacterVoiceParam(struct FString Voice); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.SetCharacterVoiceParam // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearSelectedCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ClearSelectedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCreationRowFromItem(struct FMetaItem Item, struct FCharacterCreationDataRowHandle Row); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetCreationRowFromItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void CharacterPlay(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CalculatePlayerLevelFromExp(int32_t Experience, int32_t Level); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CalculatePlayerLevelFromExp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetButtonRowIndex(struct UWidget* Button, int32_t RowIndex, bool Found); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GetButtonRowIndex // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DeleteSelectedCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.DeleteSelectedCharacter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CharacterSelected(struct UUMG_CharacterProfileSlot_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CharacterSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GenerateCharacterSelectList(struct TArray<struct FOnlineProfileCharacter> CharacterArray, struct TArray<struct FOnlineCharacterProspectInfo> ActiveProspectArray); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.GenerateCharacterSelectList // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_A48D630E4E71677B936301938CFBD011(struct FResAddPlayerToProspect Response); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnFail_A48D630E4E71677B936301938CFBD011 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_A48D630E4E71677B936301938CFBD011(struct FResAddPlayerToProspect Response); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnSuccess_A48D630E4E71677B936301938CFBD011 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_365E465B408BCFD937A35DB6EACFF696(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnFailure_365E465B408BCFD937A35DB6EACFF696 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_365E465B408BCFD937A35DB6EACFF696(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnSuccess_365E465B408BCFD937A35DB6EACFF696 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_8AA4C8484D898C5DD0D4DEAF3A676DF5(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnFailure_8AA4C8484D898C5DD0D4DEAF3A676DF5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_8AA4C8484D898C5DD0D4DEAF3A676DF5(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnSuccess_8AA4C8484D898C5DD0D4DEAF3A676DF5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature(struct UUMG_CreateNewCharacterButton_C* Input); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__UMG_CreateNewCharacterButton_K2Node_ComponentBoundEvent_1_ButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__JoinButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.BndEvt__JoinButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void JoinFriendSession(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.JoinFriendSession // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CancelDeleteCharacter(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CancelDeleteCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CancelJoinProspect(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CancelJoinProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterSelection(int32_t EntryPoint); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.ExecuteUbergraph_UMG_CharacterSelection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SelectedCharacterUpdated__DelegateSignature(struct FCharacterCosmetics CharacterData); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.SelectedCharacterUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CreateCharacter__DelegateSignature(); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.CreateCharacter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRequestCharacterDelete__DelegateSignature(struct FOnlineProfileCharacter Character); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterDelete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRequestCharacterSelect__DelegateSignature(struct FOnlineProfileCharacter Character); // Function UMG_CharacterSelection.UMG_CharacterSelection_C.OnRequestCharacterSelect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

