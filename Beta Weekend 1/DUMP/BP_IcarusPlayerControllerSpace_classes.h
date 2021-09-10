// BlueprintGeneratedClass BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C
// Size: 0xb78 (Inherited: 0x6a0)
struct ABP_IcarusPlayerControllerSpace_C : AIcarusPlayerControllerSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6a0(0x08)
	struct UBP_NetworkProxyComponent_C* BP_NetworkProxyComponent; // 0x6a8(0x08)
	float MoveToOperable_NewTrack_0_AE7BB1BA4A6ECAA53003F08A62920011; // 0x6b0(0x04)
	enum class ETimelineDirection MoveToOperable__Direction_AE7BB1BA4A6ECAA53003F08A62920011; // 0x6b4(0x01)
	char pad_6B5[0x3]; // 0x6b5(0x03)
	struct UTimelineComponent* MoveToOperable; // 0x6b8(0x08)
	struct UUMG_UserInterfaceSpace_C* UserInterface; // 0x6c0(0x08)
	bool FocusedOnObject; // 0x6c8(0x01)
	char pad_6C9[0x7]; // 0x6c9(0x07)
	struct FFProspectServerInfo ProspectInfo; // 0x6d0(0x190)
	bool Requested_Prospect_Info; // 0x860(0x01)
	char pad_861[0x7]; // 0x861(0x07)
	struct UBP_InputCaptureComponent_C* InputCapture; // 0x868(0x08)
	struct AIcarusPlayerCharacter* PlayerCharacterClass; // 0x870(0x08)
	bool bTransitioningPossession; // 0x878(0x01)
	char pad_879[0x7]; // 0x879(0x07)
	struct ABP_IcarusCharacterDummy_C* DefaultCharacterDummy; // 0x880(0x08)
	struct ABP_IcarusCameraPawn_C* CharacterSelectionCamera; // 0x888(0x08)
	struct TMap<enum class ESpaceMenuScene, struct ABP_SpaceMenuCamera_C*> MenuScreenCameras; // 0x890(0x50)
	struct FOnlineProfileCharacter SelectedCharacter; // 0x8e0(0x130)
	struct AExponentialHeightFog* FxInteriorFogComponent; // 0xa10(0x08)
	struct FCharacterLoadout Retrieved Character Loadout; // 0xa18(0x138)
	bool bLoadoutTutorialShown; // 0xb50(0x01)
	bool RequiresBackendInitialisation; // 0xb51(0x01)
	char pad_B52[0x6]; // 0xb52(0x06)
	struct TArray<struct FMetaItem> Meta Inventory; // 0xb58(0x10)
	struct TArray<struct FMetaItem> Loadout Inventory; // 0xb68(0x10)

	void GetUserInterface(struct UUMG_UserInterface_Base_C* UserInterface); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UUserInterfaceBase* GetUserInterfaceInternal(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetUserInterfaceInternal // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void Return to Character Select(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Return to Character Select // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BackendConnection_PostInitialise(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_PostInitialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UCheatOverlayBase* GetCheatOverlay(struct UObject* WorldContextObject); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetCheatOverlay // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	bool GetIsThirdPerson(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetIsThirdPerson // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void HasActiveSelectedCharacter(bool HasSelectedCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.HasActiveSelectedCharacter // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetProspectInfo(struct FFProspectServerInfo ProspectServerInfo); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.GetProspectInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_ProspectInfo(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnRep_ProspectInfo // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MoveToOperable__FinishedFunc(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MoveToOperable__FinishedFunc // (BlueprintEvent) // @ game+0x1a05090
	void MoveToOperable__UpdateFunc(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MoveToOperable__UpdateFunc // (BlueprintEvent) // @ game+0x1a05090
	void OnFail_80826B944ED42E3EB4C97F96C9FB62DA(struct FResGetLastProspect Response); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnFail_80826B944ED42E3EB4C97F96C9FB62DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_80826B944ED42E3EB4C97F96C9FB62DA(struct FResGetLastProspect Response); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnSuccess_80826B944ED42E3EB4C97F96C9FB62DA // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Escape_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Escape_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Fire_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Fire_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_AltFire_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_AltFire_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Interact_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Interact_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Jump_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void OnConnectedPlayerInitialised(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnConnectedPlayerInitialised // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnActiveCharacterSet(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnActiveCharacterSet // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ServerPushClientDynamicWidget(struct UUMG_IcarusLinkedActorPanel_C* WidgetClass, struct AActor* LinkedActorForWidget); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ServerPushClientDynamicWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OwningClientDisplayDynamicWidget(struct UUMG_IcarusLinkedActorPanel_C* WidgetClass, struct AActor* LinkedActorForWidget); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OwningClientDisplayDynamicWidget // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.CreateUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnServer_ReturnFocus(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_ReturnFocus // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnServer_GiveFocusToObject(struct AActor* Object); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_GiveFocusToObject // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Open Drop Screen(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Open Drop Screen // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CloseUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.CloseUI // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1a05090
	void BeginInputCapture(struct UBP_InputCaptureComponent_C* InputCaptureComponent, struct AActor* CapturedActor); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BeginInputCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EndInputCapture(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.EndInputCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Get End Of Drop Screen Info(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Get End Of Drop Screen Info // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MailRequest(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.MailRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LerpToInputCaptureLocation(struct AActor* Target); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.LerpToInputCaptureLocation // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void SetCharacterUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.SetCharacterUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClientUpdateSelectedCharacter(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ClientUpdateSelectedCharacter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BackendConnection_SetCharacter(struct FOnlineProfileCharacter SelectedCharacter); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.BackendConnection_SetCharacter // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCharacterInitialisationUI(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.SetCharacterInitialisationUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void RequestSessionSettings(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.RequestSessionSettings // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateSessionSettings(struct FFProspectServerInfo ProspectInfo); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.UpdateSessionSettings // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void NotifyOfCheater(struct FString CharacterName); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.NotifyOfCheater // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Client_CheaterAlert(struct FString Name); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Client_CheaterAlert // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateCharacterPossession(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.UpdateCharacterPossession // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ClientOnPossess(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ClientOnPossess // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowLoadingScreen_Event(bool Show); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ShowLoadingScreen_Event // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnClient_SetReadyState(bool Ready); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnClient_SetReadyState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnServer_SetReadyState(bool Ready); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.OnServer_SetReadyState // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshSessionSettings(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.RefreshSessionSettings // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Kick(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.Kick // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LeaveSession(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.LeaveSession // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Mouse Sensitivity Changed(); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.On Mouse Sensitivity Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusPlayerControllerSpace(int32_t EntryPoint); // Function BP_IcarusPlayerControllerSpace.BP_IcarusPlayerControllerSpace_C.ExecuteUbergraph_BP_IcarusPlayerControllerSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

