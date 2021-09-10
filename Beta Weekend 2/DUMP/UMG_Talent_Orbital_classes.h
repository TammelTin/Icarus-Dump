// WidgetBlueprintGeneratedClass UMG_Talent_Orbital.UMG_Talent_Orbital_C
// Size: 0x400 (Inherited: 0x330)
struct UUMG_Talent_Orbital_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* UnlockedAnimation; // 0x338(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x340(0x08)
	struct UBorder* CountBorder; // 0x348(0x08)
	struct UBorder* Frame; // 0x350(0x08)
	struct UImage* glow; // 0x358(0x08)
	struct UImage* glow_2; // 0x360(0x08)
	struct UOverlay* HoverFrame; // 0x368(0x08)
	struct UImage* Icon; // 0x370(0x08)
	struct UTextBlock* Numerator; // 0x378(0x08)
	struct USizeBox* TalentBox; // 0x380(0x08)
	struct UButton* TalentButton; // 0x388(0x08)
	struct UProgressBar* UnlockedBar; // 0x390(0x08)
	struct UUMG_TalentTooltip_Orbital_C* Tooltip; // 0x398(0x08)
	struct FMulticastInlineDelegate OnTalentClicked; // 0x3a0(0x10)
	struct FSlateColor TextColor; // 0x3b0(0x28)
	struct FSlateColor ButtonStateColour; // 0x3d8(0x28)

	void Set Icon(struct TSoftObjectPtr<UTexture2D> SoftTexture); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Refresh Hover State(struct FTalentView TalentView); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.Refresh Hover State // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_0D99EEB7464653A7694B1E98B42F8FD0(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.Finished_0D99EEB7464653A7694B1E98B42F8FD0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnTalentSet(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Refresh Display(); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.Refresh Display // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.Set Hover States // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnStateChanged(struct FTalentModelData NewState); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Talent_Orbital(int32_t EntryPoint); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.ExecuteUbergraph_UMG_Talent_Orbital // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // Function UMG_Talent_Orbital.UMG_Talent_Orbital_C.OnTalentClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

