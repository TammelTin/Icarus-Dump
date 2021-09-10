// WidgetBlueprintGeneratedClass W_SpectatorUI.W_SpectatorUI_C
// Size: 0x348 (Inherited: 0x260)
struct UW_SpectatorUI_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_168; // 0x268(0x08)
	struct UScrollBox* FilteredActionBox; // 0x270(0x08)
	struct UTextBlock* HelpText; // 0x278(0x08)
	struct UButton* ResetButton; // 0x280(0x08)
	struct UOverlay* UI; // 0x288(0x08)
	struct UUMG_MultiToggle_C* UMG_MultiToggle; // 0x290(0x08)
	struct UW_PostProcessEntry_BloomIntensity_C* W_PostProcessEntry_BloomIntensity; // 0x298(0x08)
	struct UW_PostProcessEntry_BloomThreshold_C* W_PostProcessEntry_BloomThreshold; // 0x2a0(0x08)
	struct UW_PostProcessEntry_CameraSmoothing_C* W_PostProcessEntry_CameraSmoothing; // 0x2a8(0x08)
	struct UW_PostProcessEntry_DoF_C* W_PostProcessEntry_DoF; // 0x2b0(0x08)
	struct UW_PostProcessEntry_DofFStop_C* W_PostProcessEntry_DofFStop; // 0x2b8(0x08)
	struct UW_PostProcessEntry_DofRadius_C* W_PostProcessEntry_DofRadius; // 0x2c0(0x08)
	struct UW_PostProcessEntry_Gamma_C* W_PostProcessEntry_Gamma; // 0x2c8(0x08)
	struct UW_PostProcessEntry_MotionBlur_C* W_PostProcessEntry_MotionBlur; // 0x2d0(0x08)
	struct UW_PostProcessEntry_MouseSmoothing_C* W_PostProcessEntry_MouseSmoothing; // 0x2d8(0x08)
	struct UW_PostProcessEntry_Saturation_C* W_PostProcessEntry_Saturation; // 0x2e0(0x08)
	struct UW_PostProcessEntry_ToggleCollision_C* W_PostProcessEntry_ToggleCollision; // 0x2e8(0x08)
	struct UW_PostProcessEntry_ToggleProjection_C* W_PostProcessEntry_ToggleProjection; // 0x2f0(0x08)
	struct UW_PostProcessEntry_Vinette_C* W_PostProcessEntry_Vinette; // 0x2f8(0x08)
	struct UW_ProjectionInterface_Spectator_C* W_ProjectionInterface_Spectator; // 0x300(0x08)
	struct APawn* SpectatorActor; // 0x308(0x08)
	struct TArray<struct FName> InputConsumeArray; // 0x310(0x10)
	struct TArray<struct UW_PostProcessEntry_C*> PostProcessEntries; // 0x320(0x10)
	struct FMulticastInlineDelegate SettingsUpdated; // 0x330(0x10)
	struct UBP_SpectatorSaveGame_C* SaveGame; // 0x340(0x08)

	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function W_SpectatorUI.W_SpectatorUI_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InputChangePreset(int32_t Index); // Function W_SpectatorUI.W_SpectatorUI_C.InputChangePreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ChangePreset(int32_t NewIndex); // Function W_SpectatorUI.W_SpectatorUI_C.ChangePreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SaveCurrentPreset(); // Function W_SpectatorUI.W_SpectatorUI_C.SaveCurrentPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetEntryValuesFromPreset(struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset, bool Reset); // Function W_SpectatorUI.W_SpectatorUI_C.SetEntryValuesFromPreset // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ApplySaveGame(); // Function W_SpectatorUI.W_SpectatorUI_C.ApplySaveGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FillEmptySaveGame(); // Function W_SpectatorUI.W_SpectatorUI_C.FillEmptySaveGame // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SavePresetToSaveGame(int32_t Index); // Function W_SpectatorUI.W_SpectatorUI_C.SavePresetToSaveGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetPresetFromSaveGame(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset); // Function W_SpectatorUI.W_SpectatorUI_C.GetPresetFromSaveGame // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitSaveGame(); // Function W_SpectatorUI.W_SpectatorUI_C.InitSaveGame // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EntryFunction(struct FString Param); // Function W_SpectatorUI.W_SpectatorUI_C.EntryFunction // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePostProcess(); // Function W_SpectatorUI.W_SpectatorUI_C.UpdatePostProcess // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitEntries(); // Function W_SpectatorUI.W_SpectatorUI_C.InitEntries // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText Get_HelpText_Text_1(); // Function W_SpectatorUI.W_SpectatorUI_C.Get_HelpText_Text_1 // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Construct(); // Function W_SpectatorUI.W_SpectatorUI_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void InventoryPressed(); // Function W_SpectatorUI.W_SpectatorUI_C.InventoryPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SpectatorDestroyed(struct AActor* DestroyedActor); // Function W_SpectatorUI.W_SpectatorUI_C.SpectatorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ToggleHelpScreen(); // Function W_SpectatorUI.W_SpectatorUI_C.ToggleHelpScreen // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetGameFocus(); // Function W_SpectatorUI.W_SpectatorUI_C.SetGameFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CustomEvent_1(); // Function W_SpectatorUI.W_SpectatorUI_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_SpectatorUI.W_SpectatorUI_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_167_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function W_SpectatorUI.W_SpectatorUI_C.BndEvt__Button_167_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature(); // Function W_SpectatorUI.W_SpectatorUI_C.BndEvt__ResetButton_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature(int32_t PreviousToggleIndex, int32_t CurrentToggleIndex); // Function W_SpectatorUI.W_SpectatorUI_C.BndEvt__UMG_MultiToggle_K2Node_ComponentBoundEvent_1_MultiToggleStateChanged__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_W_SpectatorUI(int32_t EntryPoint); // Function W_SpectatorUI.W_SpectatorUI_C.ExecuteUbergraph_W_SpectatorUI // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SettingsUpdated__DelegateSignature(struct FPostProcessSettings Settings); // Function W_SpectatorUI.W_SpectatorUI_C.SettingsUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

