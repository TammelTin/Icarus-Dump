// WidgetBlueprintGeneratedClass UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C
// Size: 0x668 (Inherited: 0x260)
struct UUMG_PlanetProspectSelected_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x268(0x08)
	struct UHorizontalBox* ClaimCost; // 0x270(0x08)
	struct UBorder* ClaimedWarningPrompt; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* ClaimProspectButton; // 0x280(0x08)
	struct UTextBlock* CostText; // 0x288(0x08)
	struct UTextBlock* Days; // 0x290(0x08)
	struct UTextBlock* Days_2; // 0x298(0x08)
	struct UTextBlock* Days_3; // 0x2a0(0x08)
	struct UTextBlock* Days_4; // 0x2a8(0x08)
	struct UTextBlock* Days_5; // 0x2b0(0x08)
	struct UTextBlock* DescriptionText; // 0x2b8(0x08)
	struct UTextBlock* DifficultyText; // 0x2c0(0x08)
	struct UImage* ExoticImage; // 0x2c8(0x08)
	struct UHorizontalBox* Exotics; // 0x2d0(0x08)
	struct UBorder* FactionMissionDetails; // 0x2d8(0x08)
	struct UTextBlock* FactionMissionObjectives; // 0x2e0(0x08)
	struct UTextBlock* FactionMissionTitle; // 0x2e8(0x08)
	struct UUMG_BasicButton_2_C* HostProspectButton; // 0x2f0(0x08)
	struct UTextBlock* Hours; // 0x2f8(0x08)
	struct UImage* Image_93; // 0x300(0x08)
	struct UImage* Image_198; // 0x308(0x08)
	struct UImage* Image_336; // 0x310(0x08)
	struct UTextBlock* InactiveText; // 0x318(0x08)
	struct UUMG_BasicButton_2_C* JoinProspectButton; // 0x320(0x08)
	struct UTextBlock* Minutes; // 0x328(0x08)
	struct UTextBlock* PlayerCount; // 0x330(0x08)
	struct UVerticalBox* PlayerList; // 0x338(0x08)
	struct UTextBlock* ProspectClaimedPrompt; // 0x340(0x08)
	struct UTextBlock* ProspectName; // 0x348(0x08)
	struct UImage* ProspectTexture; // 0x350(0x08)
	struct UTextBlock* RewardText; // 0x358(0x08)
	struct UTextBlock* Seconds; // 0x360(0x08)
	struct UUMG_LoadingIcon_C* SettleLoading; // 0x368(0x08)
	struct UUMG_BasicButton_2_C* SettleProspectButton; // 0x370(0x08)
	struct UBorder* TimeBorder; // 0x378(0x08)
	struct UImage* Trim1; // 0x380(0x08)
	struct UImage* Trim2; // 0x388(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry; // 0x390(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_2; // 0x398(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_3; // 0x3a0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_4; // 0x3a8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_5; // 0x3b0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_6; // 0x3b8(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_7; // 0x3c0(0x08)
	struct UUMG_PlayerListEntry_C* UMG_PlayerListEntry_8; // 0x3c8(0x08)
	struct FMulticastInlineDelegate StartSelectedProspect; // 0x3d0(0x10)
	struct UUMG_ProspectPin_C* SelectedProspectPin; // 0x3e0(0x08)
	bool Settled; // 0x3e8(0x01)
	char pad_3E9[0x7]; // 0x3e9(0x07)
	struct FFProspectServerInfo Prospect Info; // 0x3f0(0x190)
	struct FSlateColor EasyColour; // 0x580(0x28)
	struct FSlateColor NormalColour; // 0x5a8(0x28)
	struct FSlateColor HardColour; // 0x5d0(0x28)
	struct FSlateColor ExtremeColour; // 0x5f8(0x28)
	struct FMulticastInlineDelegate HostProspect; // 0x620(0x10)
	struct FMulticastInlineDelegate ClaimProspect; // 0x630(0x10)
	struct FMulticastInlineDelegate JoinProspect; // 0x640(0x10)
	struct UUMG_CloseButton_2_C* Close Button; // 0x650(0x08)
	struct FMulticastInlineDelegate SettleProspect; // 0x658(0x10)

	void ReadyCheck(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ReadyCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePlayerList(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdatePlayerList // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct UUMG_CloseButton_2_C* CloseButton); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTime(struct TArray<struct FString> Time); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowSelectedProspect(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ShowSelectedProspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnFailure_6A3406D34D6989803C8B84813F106342 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_6A3406D34D6989803C8B84813F106342(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnSuccess_6A3406D34D6989803C8B84813F106342 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_D495EEF442570EB0BF0B2987C725F79B(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnFailure_D495EEF442570EB0BF0B2987C725F79B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_D495EEF442570EB0BF0B2987C725F79B(struct FErrorCodesEnum Result); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.OnSuccess_D495EEF442570EB0BF0B2987C725F79B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__HostProspectButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__EndProspectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__ClaimProspectButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.BndEvt__JoinProspectButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void SettleProspectResultHandler(bool Success, struct FProspectInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SettleProspectResultHandler // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateSettleButton(struct FProspectInfo ServerInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.UpdateSettleButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AcceptClaim(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.AcceptClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RejectClaim(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.RejectClaim // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PlanetProspectSelected(int32_t EntryPoint); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ExecuteUbergraph_UMG_PlanetProspectSelected // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SettleProspect__DelegateSignature(struct FFProspectServerInfo Prospect Info, bool Settle); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.SettleProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void JoinProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.JoinProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClaimProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.ClaimProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HostProspect__DelegateSignature(struct FFProspectServerInfo ProspectInfo); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.HostProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartSelectedProspect__DelegateSignature(); // Function UMG_PlanetProspectSelected.UMG_PlanetProspectSelected_C.StartSelectedProspect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

