// WidgetBlueprintGeneratedClass UMG_PartyMemberSpace.UMG_PartyMemberSpace_C
// Size: 0x478 (Inherited: 0x260)
struct UUMG_PartyMemberSpace_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button_89; // 0x268(0x08)
	struct UBorder* ColourBorder; // 0x270(0x08)
	struct UUMG_BasicButton_2_C* KickButton; // 0x278(0x08)
	struct UBorder* PlayerBorder; // 0x280(0x08)
	struct UBorder* PlayerIcon; // 0x288(0x08)
	struct UTextBlock* PlayerIndex; // 0x290(0x08)
	struct UTextBlock* PlayerLevel; // 0x298(0x08)
	struct UTextBlock* PlayerNameText; // 0x2a0(0x08)
	struct UBorder* ReadyBox; // 0x2a8(0x08)
	struct UBorder* ShareBorder; // 0x2b0(0x08)
	struct USlider* SharesSlider; // 0x2b8(0x08)
	struct UTextBlock* SharesText; // 0x2c0(0x08)
	struct APlayerState* PlayerState; // 0x2c8(0x08)
	struct FSlateColor EmptyPlayerColour; // 0x2d0(0x28)
	struct FSlateColor ValidPlayerColour; // 0x2f8(0x28)
	struct FMulticastInlineDelegate SharesSliderChanged; // 0x320(0x10)
	struct FSlateBrush NotReady; // 0x330(0x88)
	struct FSlateBrush Ready; // 0x3b8(0x88)
	struct FLinearColor ValidBorderColour; // 0x440(0x10)
	struct FLinearColor InvalidBorderColour; // 0x450(0x10)
	struct FText PlayerName; // 0x460(0x18)

	void UpdateKickButton(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateKickButton // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateReadyState(bool Ready); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateReadyState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateSharesValue(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateSharesValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateMemberColour(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdateMemberColour // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetPlayerState(struct APlayerState* PlayerState); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SetPlayerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetColorAndOpacity(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.GetColorAndOpacity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePlayerName(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerName // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePlayerLevel(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerLevel // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePlayerIcon(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.UpdatePlayerIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SliderValueChange(float Value); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SliderValueChange // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_PartyMemberSpace(int32_t EntryPoint); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.ExecuteUbergraph_UMG_PartyMemberSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void SharesSliderChanged__DelegateSignature(struct UUMG_PartyMemberSpace_C* PartyMember, float SliderValueChange); // Function UMG_PartyMemberSpace.UMG_PartyMemberSpace_C.SharesSliderChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

