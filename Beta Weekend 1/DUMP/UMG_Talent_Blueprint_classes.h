// WidgetBlueprintGeneratedClass UMG_Talent_Blueprint.UMG_Talent_Blueprint_C
// Size: 0x450 (Inherited: 0x330)
struct UUMG_Talent_Blueprint_C : UUMG_Talent_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* UnlockedAnimation; // 0x338(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x340(0x08)
	struct UOverlay* ComingSoonOverlay; // 0x348(0x08)
	struct UBorder* CountBorder; // 0x350(0x08)
	struct URetainerBox* Desaturator; // 0x358(0x08)
	struct UImage* Glow_2; // 0x360(0x08)
	struct UOverlay* HoverFrame; // 0x368(0x08)
	struct UImage* Icon; // 0x370(0x08)
	struct UOverlay* MainOverlay; // 0x378(0x08)
	struct UTextBlock* Numerator; // 0x380(0x08)
	struct UTextBlock* ReqLevelNumber; // 0x388(0x08)
	struct UBorder* ReqTextBorder; // 0x390(0x08)
	struct UOverlay* RequiredLevel; // 0x398(0x08)
	struct UImage* requiredlevelbase; // 0x3a0(0x08)
	struct USizeBox* TalentBox; // 0x3a8(0x08)
	struct UButton* TalentButton; // 0x3b0(0x08)
	struct UBorder* TextBorder; // 0x3b8(0x08)
	struct UTextBlock* TextName; // 0x3c0(0x08)
	struct UUMG_Talent_ComingSoon_C* UMG_Talent_ComingSoon; // 0x3c8(0x08)
	struct UUMG_TalentRequiredIcon_C* UMG_TalentRequiredIcon; // 0x3d0(0x08)
	struct FMulticastInlineDelegate OnTalentClicked; // 0x3d8(0x10)
	struct FSlateColor TextColor; // 0x3e8(0x28)
	struct FSlateColor ButtonStateColour; // 0x410(0x28)
	struct FText NodeName; // 0x438(0x18)

	void UpdateRequiredTalent(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateRequiredTalent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Required Level(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Update Required Level // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateDesaturationMaterial(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.UpdateDesaturationMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetOverlay(struct UOverlay* Overlay); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.GetOverlay // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Icon(struct UTexture2D* Texture); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetSize(struct FVector2D InVec); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.SetSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh Hover State(struct FTalentView TalentView); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Refresh Hover State // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_A81076484900AC102F0EE58623931564(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Finished_A81076484900AC102F0EE58623931564 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTalentSet(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.BndEvt__TalentButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Refresh Display(); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Refresh Display // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Hover States(struct FSlateColor TextColor, struct FSlateColor IconColor); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.Set Hover States // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnStateChanged(struct FTalentModelData NewState); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Talent_Blueprint(int32_t EntryPoint); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.ExecuteUbergraph_UMG_Talent_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnTalentClicked__DelegateSignature(struct FTalentsRowHandle Talent); // Function UMG_Talent_Blueprint.UMG_Talent_Blueprint_C.OnTalentClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

