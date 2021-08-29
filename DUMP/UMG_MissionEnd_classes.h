// WidgetBlueprintGeneratedClass UMG_MissionEnd.UMG_MissionEnd_C
// Size: 0x428 (Inherited: 0x260)
struct UUMG_MissionEnd_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BGAnimate; // 0x268(0x08)
	struct UWidgetAnimation* ButtonGlow; // 0x270(0x08)
	struct UUMG_CloseButton_2_C* CloseButton; // 0x278(0x08)
	struct UTextBlock* CreditsEarnedText; // 0x280(0x08)
	struct UTextBlock* ExoticsEarnedText; // 0x288(0x08)
	struct UTextBlock* FactionMissionDetails; // 0x290(0x08)
	struct UTextBlock* FactionObjectiveStatus; // 0x298(0x08)
	struct UImage* GradientBack; // 0x2a0(0x08)
	struct UUMG_BasicButton_2_C* NextButton; // 0x2a8(0x08)
	struct UBorder* OuterBorder; // 0x2b0(0x08)
	struct UBorder* OuterBorder_2; // 0x2b8(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* PlayerRating; // 0x2c0(0x08)
	struct UTextBlock* ProspectDescription; // 0x2c8(0x08)
	struct UImage* ProspectImage; // 0x2d0(0x08)
	struct UTextBlock* ProspectName; // 0x2d8(0x08)
	struct UTextBlock* ProspectName_2; // 0x2e0(0x08)
	struct UUMG_ToggleButton_MenuHeader_C* ProspectStats; // 0x2e8(0x08)
	struct UBorder* TitleBoarder; // 0x2f0(0x08)
	struct UBorder* TitleBoarder_2; // 0x2f8(0x08)
	struct UTextBlock* TitleText; // 0x300(0x08)
	struct UTextBlock* TitleText_2; // 0x308(0x08)
	struct UBorder* TopTrim; // 0x310(0x08)
	struct UBorder* TopTrim_2; // 0x318(0x08)
	struct UImage* Triangle; // 0x320(0x08)
	struct UImage* Triangle_2; // 0x328(0x08)
	struct UUMG_PartyEndMission_C* UMG_PartyEndMission; // 0x330(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating; // 0x338(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_2; // 0x340(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_3; // 0x348(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_4; // 0x350(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_5; // 0x358(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_6; // 0x360(0x08)
	struct UUMG_PlayerRating_C* UMG_PlayerRating_7; // 0x368(0x08)
	struct UUMG_ProspectInformation2_C* UMG_ProspectInformation2; // 0x370(0x08)
	struct UWidgetSwitcher* WidgetSwitcher; // 0x378(0x08)
	enum class EMissionEndScreenState CurrentWidgetState; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct FResGetLastProspect LastProspectInfo; // 0x388(0x90)
	struct FMulticastInlineDelegate ClosePanel; // 0x418(0x10)

	void Close(); // Function UMG_MissionEnd.UMG_MissionEnd_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GoToNextWidget(); // Function UMG_MissionEnd.UMG_MissionEnd_C.GoToNextWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetContentState(enum class EMissionEndScreenState State); // Function UMG_MissionEnd.UMG_MissionEnd_C.SetContentState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DisplayProspectInfo(struct FResGetLastProspect ProspectReward); // Function UMG_MissionEnd.UMG_MissionEnd_C.DisplayProspectInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetPlayerIds(struct TArray<struct FPlayerID> CurrentPlayerIds); // Function UMG_MissionEnd.UMG_MissionEnd_C.GetPlayerIds // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void BndEvt__ProspectStats_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MissionEnd.UMG_MissionEnd_C.BndEvt__ProspectStats_K2Node_ComponentBoundEvent_1_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__PlayerRating_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_MissionEnd.UMG_MissionEnd_C.BndEvt__PlayerRating_K2Node_ComponentBoundEvent_3_Toggled__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__NextButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MissionEnd.UMG_MissionEnd_C.BndEvt__NextButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MissionEnd(int32_t EntryPoint); // Function UMG_MissionEnd.UMG_MissionEnd_C.ExecuteUbergraph_UMG_MissionEnd // (Final|UbergraphFunction) // @ game+0x1a05090
	void ClosePanel__DelegateSignature(); // Function UMG_MissionEnd.UMG_MissionEnd_C.ClosePanel__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

