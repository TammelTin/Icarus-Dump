// WidgetBlueprintGeneratedClass UMG_Talent_Player.UMG_Talent_Player_C
// Size: 0x450 (Inherited: 0x330)
struct UUMG_Talent_Player_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* CompleteAnimation; // 0x338(0x08)
	struct UWidgetAnimation* UnlockedAnimation; // 0x340(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x348(0x08)
	struct UOverlay* ComingSoonOverlay; // 0x350(0x08)
	struct UProgressBar* CompleteFrameBar; // 0x358(0x08)
	struct UBorder* CountBorder; // 0x360(0x08)
	struct UTextBlock* Denominator; // 0x368(0x08)
	struct URetainerBox* Desaturator; // 0x370(0x08)
	struct UImage* Glow; // 0x378(0x08)
	struct UOverlay* HoverCorners; // 0x380(0x08)
	struct UImage* Icon; // 0x388(0x08)
	struct UImage* Image; // 0x390(0x08)
	struct UImage* Image_2; // 0x398(0x08)
	struct UImage* Image_3; // 0x3a0(0x08)
	struct UImage* Image_49; // 0x3a8(0x08)
	struct UOverlay* MainOverlay; // 0x3b0(0x08)
	struct UImage* MissingRewards; // 0x3b8(0x08)
	struct UTextBlock* Numerator; // 0x3c0(0x08)
	struct UImage* RankIcon; // 0x3c8(0x08)
	struct UTextBlock* Separator; // 0x3d0(0x08)
	struct USizeBox* TalentBox; // 0x3d8(0x08)
	struct UButton* TalentButton; // 0x3e0(0x08)
	struct UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon; // 0x3e8(0x08)
	struct UProgressBar* UnlockedBar; // 0x3f0(0x08)
	struct UProgressBar* UnlockedCount; // 0x3f8(0x08)
	struct FMulticastInlineDelegate OnTalentClicked; // 0x400(0x10)
	struct FSlateColor TextColor; // 0x410(0x28)
	struct FTalentRanksRowHandle Talent Rank; // 0x438(0x18)

	void GetOverlay(struct UOverlay* Overlay); // Function UMG_Talent_Player.UMG_Talent_Player_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateDesaturationMaterial(); // Function UMG_Talent_Player.UMG_Talent_Player_C.UpdateDesaturationMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Icon(struct TSoftObjectPtr<UTexture2D> SoftTexture); // Function UMG_Talent_Player.UMG_Talent_Player_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh Hover State(struct FTalentView TalentView); // Function UMG_Talent_Player.UMG_Talent_Player_C.Refresh Hover State // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_3C782BCA44885C4331A270B17A1E04E8(); // Function UMG_Talent_Player.UMG_Talent_Player_C.Finished_3C782BCA44885C4331A270B17A1E04E8 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTalentSet(); // Function UMG_Talent_Player.UMG_Talent_Player_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Talent_Player.UMG_Talent_Player_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Player.UMG_Talent_Player_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Player.UMG_Talent_Player_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Talent_Player.UMG_Talent_Player_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_Talent_Player.UMG_Talent_Player_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Refresh Display(); // Function UMG_Talent_Player.UMG_Talent_Player_C.Refresh Display // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // Function UMG_Talent_Player.UMG_Talent_Player_C.Set Hover States // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnStateChanged(struct FTalentModelData NewState); // Function UMG_Talent_Player.UMG_Talent_Player_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup Talent Rank(); // Function UMG_Talent_Player.UMG_Talent_Player_C.Setup Talent Rank // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Talent_Player(int32_t EntryPoint); // Function UMG_Talent_Player.UMG_Talent_Player_C.ExecuteUbergraph_UMG_Talent_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // Function UMG_Talent_Player.UMG_Talent_Player_C.OnTalentClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

