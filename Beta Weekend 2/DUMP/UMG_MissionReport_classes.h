// WidgetBlueprintGeneratedClass UMG_MissionReport.UMG_MissionReport_C
// Size: 0x3c0 (Inherited: 0x260)
struct UUMG_MissionReport_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UUMG_BasicButton_2_C* ContinueButton; // 0x270(0x08)
	struct UTextBlock* DescriptionText; // 0x278(0x08)
	struct UImage* Divider; // 0x280(0x08)
	struct UImage* Divider_2; // 0x288(0x08)
	struct UTextBlock* Error; // 0x290(0x08)
	struct UVerticalBox* FactionMissionList; // 0x298(0x08)
	struct UBorder* LoadingScreen; // 0x2a0(0x08)
	struct UTextBlock* PlayerCount; // 0x2a8(0x08)
	struct UVerticalBox* PlayerList; // 0x2b0(0x08)
	struct UTextBlock* ProspectTitle; // 0x2b8(0x08)
	struct UVerticalBox* Rewards; // 0x2c0(0x08)
	struct UVerticalBox* RewardsVertBox; // 0x2c8(0x08)
	struct UWidgetSwitcher* Switcher; // 0x2d0(0x08)
	struct UUMG_CharacterTimeline_C* UMG_CharacterTimeline; // 0x2d8(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x2e0(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; // 0x2e8(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction_2; // 0x2f0(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction_3; // 0x2f8(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; // 0x300(0x08)
	struct UUMG_MissionTimer_C* UMG_MissionTimer; // 0x308(0x08)
	struct UUMG_ProspectRewards_C* UMG_ProspectRewards; // 0x310(0x08)
	struct FProspectInfo Prospect Info; // 0x318(0x80)
	struct FAttachment Current Rewards; // 0x398(0x28)

	void Setup(); // Function UMG_MissionReport.UMG_MissionReport_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_26DCCB094F15ED9B889AF28EC15E3C63(struct FResGetProspectReport Response); // Function UMG_MissionReport.UMG_MissionReport_C.OnFail_26DCCB094F15ED9B889AF28EC15E3C63 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_26DCCB094F15ED9B889AF28EC15E3C63(struct FResGetProspectReport Response); // Function UMG_MissionReport.UMG_MissionReport_C.OnSuccess_26DCCB094F15ED9B889AF28EC15E3C63 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowForProspect(struct FString ProspectUID); // Function UMG_MissionReport.UMG_MissionReport_C.ShowForProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MissionReport.UMG_MissionReport_C.BndEvt__ContinueButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void TriggerError(); // Function UMG_MissionReport.UMG_MissionReport_C.TriggerError // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Close(); // Function UMG_MissionReport.UMG_MissionReport_C.Close // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_MissionReport(int32_t EntryPoint); // Function UMG_MissionReport.UMG_MissionReport_C.ExecuteUbergraph_UMG_MissionReport // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

