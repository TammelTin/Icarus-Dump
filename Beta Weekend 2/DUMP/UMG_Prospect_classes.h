// WidgetBlueprintGeneratedClass UMG_Prospect.UMG_Prospect_C
// Size: 0x531 (Inherited: 0x260)
struct UUMG_Prospect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* FactionMissonOverlay; // 0x268(0x08)
	struct UTextBlock* HostName; // 0x270(0x08)
	struct UBorder* Inactive; // 0x278(0x08)
	struct UBorder* MainBorder; // 0x280(0x08)
	struct UButton* MainButton; // 0x288(0x08)
	struct UImage* Meta; // 0x290(0x08)
	struct UOverlay* OccupiedOverlay; // 0x298(0x08)
	struct UImage* OtherCharacterImage; // 0x2a0(0x08)
	struct UTextBlock* PlayerCount; // 0x2a8(0x08)
	struct UTextBlock* ProspectDifficulty; // 0x2b0(0x08)
	struct UTextBlock* ProspectName; // 0x2b8(0x08)
	struct UTextBlock* ProspectTime; // 0x2c0(0x08)
	struct UUMG_ProspectPinFactionMission_C* UMG_ProspectPinFactionMission_2; // 0x2c8(0x08)
	struct USizeBox* VersionBox; // 0x2d0(0x08)
	struct UBorder* VersionMismatch; // 0x2d8(0x08)
	struct UTextBlock* VersionText; // 0x2e0(0x08)
	struct FFProspectServerInfo ServerProspectInfo; // 0x2e8(0x190)
	enum class E_ProspectState Prospect State; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct TMap<enum class E_ButtonState, struct FSlateColor> Prospect Pin State Text Colour; // 0x480(0x50)
	struct FSlateColor DifficultyColour; // 0x4d0(0x28)
	struct FSlateColor In Color and Opacity; // 0x4f8(0x28)
	struct FMulticastInlineDelegate SelectedProspect; // 0x520(0x10)
	bool Active; // 0x530(0x01)

	void UpdateToolTip(struct FText ToolTipText); // Function UMG_Prospect.UMG_Prospect_C.UpdateToolTip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetHasClaimedProspect(); // Function UMG_Prospect.UMG_Prospect_C.SetHasClaimedProspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetState(enum class E_ProspectState NewState); // Function UMG_Prospect.UMG_Prospect_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FText GetTimeRemaining(); // Function UMG_Prospect.UMG_Prospect_C.GetTimeRemaining // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetProspectInfo(struct FFProspectServerInfo NewInfo); // Function UMG_Prospect.UMG_Prospect_C.SetProspectInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_Prospect.UMG_Prospect_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Prospect(int32_t EntryPoint); // Function UMG_Prospect.UMG_Prospect_C.ExecuteUbergraph_UMG_Prospect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SelectedProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo, bool Active); // Function UMG_Prospect.UMG_Prospect_C.SelectedProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

