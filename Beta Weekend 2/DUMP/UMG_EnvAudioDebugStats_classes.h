// WidgetBlueprintGeneratedClass UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_EnvAudioDebugStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_CloseButton_2_C* CloseButton; // 0x268(0x08)
	struct UButton* RefreshButton; // 0x270(0x08)
	struct UScrollBox* RiverScrollView; // 0x278(0x08)
	struct UTextBlock* Summary; // 0x280(0x08)
	int32_t RiverCount; // 0x288(0x04)
	int32_t RiverAudioCount; // 0x28c(0x04)

	struct FText GetSummaryText(); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.GetSummaryText // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetRiverDebugData(struct ABP_InteractableRiver_C* River, struct FString DebugMessage, bool RiverAudioIsValid, struct FVector RiverAudioLocation); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.GetRiverDebugData // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRiverDebug(); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.UpdateRiverDebug // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddRowToScrollView(struct FString Message); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.AddRowToScrollView // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.BndEvt__UMG_CloseButton_2_C_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Refresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.BndEvt__Refresh_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_EnvAudioDebugStats(int32_t EntryPoint); // Function UMG_EnvAudioDebugStats.UMG_EnvAudioDebugStats_C.ExecuteUbergraph_UMG_EnvAudioDebugStats // (Final|UbergraphFunction) // @ game+0x1a38c80
};

