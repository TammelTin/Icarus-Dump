// WidgetBlueprintGeneratedClass UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C
// Size: 0x724 (Inherited: 0x260)
struct UUMG_TalentArchetype_Player_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ReqLvlPulse; // 0x268(0x08)
	struct UButton* Button; // 0x270(0x08)
	struct UImage* IconWidget; // 0x278(0x08)
	struct UBorder* LockedBorder; // 0x280(0x08)
	struct UTextBlock* RequiredLevelText; // 0x288(0x08)
	struct UBorder* TextAndIconBorder; // 0x290(0x08)
	struct UTextBlock* TextWidget; // 0x298(0x08)
	struct UImage* Underline; // 0x2a0(0x08)
	struct FMulticastInlineDelegate OnClicked; // 0x2a8(0x10)
	struct FText Text; // 0x2b8(0x18)
	struct FTalentArchetypesRowHandle Archetype; // 0x2d0(0x18)
	bool Selected; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FSlateBrush IconBrush; // 0x2f0(0x88)
	struct FSlateBrush SelectedBrush; // 0x378(0x88)
	struct FButtonStyle ButtonStyle; // 0x400(0x278)
	struct FSlateColor TextColour; // 0x678(0x28)
	struct FSlateColor SelectedTextColour; // 0x6a0(0x28)
	struct FSlateColor NormalTextColour; // 0x6c8(0x28)
	struct FSlateColor HoveredTextColour; // 0x6f0(0x28)
	struct UTalentViewInterface* View; // 0x718(0x08)
	int32_t Required Level; // 0x720(0x04)

	void UpdateRequiredLevel(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.UpdateRequiredLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_31_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.BndEvt__Button_31_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Refresh(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.Refresh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Select(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.Select // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deselect(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.Deselect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void On Model State Changed(struct UTalentModelInterface_Const* Model); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.On Model State Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_TalentArchetype_Player(int32_t EntryPoint); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.ExecuteUbergraph_UMG_TalentArchetype_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnClicked__DelegateSignature(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentArchetype_Player.UMG_TalentArchetype_Player_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

