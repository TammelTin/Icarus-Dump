// WidgetBlueprintGeneratedClass UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C
// Size: 0xb71 (Inherited: 0x260)
struct UUMG_FriendTutorialProspect_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x268(0x08)
	struct UTextBlock* ActiveInsessiontext; // 0x270(0x08)
	struct UBorder* ActivePlayers; // 0x278(0x08)
	struct UBorder* AssignedPlayers; // 0x280(0x08)
	struct UTextBlock* AssignedPlayersText; // 0x288(0x08)
	struct UBorder* BackgroundHostName; // 0x290(0x08)
	struct UBorder* BackgroundHostStatus; // 0x298(0x08)
	struct UBorder* BackgroundProspectPin; // 0x2a0(0x08)
	struct UBorder* BackgroundSlot; // 0x2a8(0x08)
	struct UBorder* BackgroundSlot_2; // 0x2b0(0x08)
	struct UButton* ButtonBase; // 0x2b8(0x08)
	struct UTextBlock* Days; // 0x2c0(0x08)
	struct UTextBlock* Days_2; // 0x2c8(0x08)
	struct UTextBlock* Days_3; // 0x2d0(0x08)
	struct UTextBlock* Days_4; // 0x2d8(0x08)
	struct UTextBlock* Days_5; // 0x2e0(0x08)
	struct UVerticalBox* DifficultyExoticsVbox; // 0x2e8(0x08)
	struct UHorizontalBox* DifficultyHbox; // 0x2f0(0x08)
	struct UTextBlock* DifficultyText; // 0x2f8(0x08)
	struct UImage* DifficutlyIcon; // 0x300(0x08)
	struct UTextBlock* DropStatusText; // 0x308(0x08)
	struct UBorder* FrameHostName; // 0x310(0x08)
	struct UBorder* FrameProspectPin; // 0x318(0x08)
	struct UTextBlock* HostName; // 0x320(0x08)
	struct UOverlay* HostNameOverlay; // 0x328(0x08)
	struct UTextBlock* HostStatus; // 0x330(0x08)
	struct UTextBlock* Hours; // 0x338(0x08)
	struct UImage* HoveredLines; // 0x340(0x08)
	struct UOverlay* HoverEffects; // 0x348(0x08)
	struct UImage* Icon; // 0x350(0x08)
	struct UTextBlock* Minutes; // 0x358(0x08)
	struct UTextBlock* PersistantText; // 0x360(0x08)
	struct UHorizontalBox* PlayerSlots; // 0x368(0x08)
	struct UTextBlock* ProspectName; // 0x370(0x08)
	struct UOverlay* ProspectStatus; // 0x378(0x08)
	struct UBorder* ProspectTitleBackground; // 0x380(0x08)
	struct UTextBlock* Seconds; // 0x388(0x08)
	struct UImage* SlotsIcon; // 0x390(0x08)
	struct UImage* SlotsIcon_2; // 0x398(0x08)
	struct UTextBlock* SlotsTitle; // 0x3a0(0x08)
	struct UTextBlock* SlotsTitle_2; // 0x3a8(0x08)
	struct UTextBlock* TextBlock_122; // 0x3b0(0x08)
	struct UHorizontalBox* Time; // 0x3b8(0x08)
	struct UBorder* TimeBorder; // 0x3c0(0x08)
	struct UOverlay* VersionMismatch; // 0x3c8(0x08)
	struct UBorder* VersionNumber; // 0x3d0(0x08)
	struct UTextBlock* VersionText; // 0x3d8(0x08)
	struct FSlateColor TitleText_Hovered; // 0x3e0(0x28)
	struct FSlateColor TitleText_Default; // 0x408(0x28)
	struct FSlateColor DetailTitleText_Default; // 0x430(0x28)
	struct FFProspectServerInfo ProspectInfo; // 0x458(0x190)
	struct FOnlineProspectInfo CurrentOnlineProspect; // 0x5e8(0x150)
	enum class E_ProspectState ProspectState; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
	struct FMulticastInlineDelegate ProspectSelected; // 0x740(0x10)
	struct FSlateColor DifficultyText_Easy; // 0x750(0x28)
	struct FSlateColor DifficultyText_Normal; // 0x778(0x28)
	struct FSlateColor DifficultyText_Hard; // 0x7a0(0x28)
	struct FSlateColor DifficultyText_Extreme; // 0x7c8(0x28)
	struct FSlateColor DifficultyTextColor; // 0x7f0(0x28)
	struct FSlateColor SlotsText_Hover; // 0x818(0x28)
	bool Hovered; // 0x840(0x01)
	bool Pressed; // 0x841(0x01)
	char pad_842[0x6]; // 0x842(0x06)
	struct FSlateColor TitleText_Pressed; // 0x848(0x28)
	struct FLinearColor Frame_Default; // 0x870(0x10)
	struct FLinearColor Frame_Hovered; // 0x880(0x10)
	struct FLinearColor Frame_Pressed; // 0x890(0x10)
	enum class E_PinState Pin State; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	struct FLinearColor Title; // 0x8a4(0x10)
	struct FLinearColor TitleBackground_Default; // 0x8b4(0x10)
	struct FLinearColor TitleBackground_Hover; // 0x8c4(0x10)
	struct FLinearColor TitleBackground_Pressed; // 0x8d4(0x10)
	struct FLinearColor Background_Hovered; // 0x8e4(0x10)
	struct FLinearColor Background_Pressed; // 0x8f4(0x10)
	struct FLinearColor Background_Default; // 0x904(0x10)
	char pad_914[0x4]; // 0x914(0x04)
	struct FSlateColor Black; // 0x918(0x28)
	struct FLinearColor Claimed_Default; // 0x940(0x10)
	struct FLinearColor Claimed_Hover; // 0x950(0x10)
	struct FLinearColor Claimed_Pressed; // 0x960(0x10)
	struct FLinearColor Claimable_Default; // 0x970(0x10)
	struct FLinearColor Claimable_Hover; // 0x980(0x10)
	struct FLinearColor Claimable_Pressed; // 0x990(0x10)
	struct FSlateColor Detail Title Text Default; // 0x9a0(0x28)
	struct FLinearColor OpenDefault; // 0x9c8(0x10)
	struct FLinearColor Open_Hover; // 0x9d8(0x10)
	struct FLinearColor Open_Pressed; // 0x9e8(0x10)
	struct FLinearColor Joined Default; // 0x9f8(0x10)
	struct FLinearColor Joined_Hover; // 0xa08(0x10)
	struct FLinearColor Joined Pressed; // 0xa18(0x10)
	struct FLinearColor CalimableFrame Default; // 0xa28(0x10)
	struct FSlateColor ClaimableTitle; // 0xa38(0x28)
	struct TMap<enum class EIcarusProspectDifficulty, struct FColor> DifficultyColourMap; // 0xa60(0x50)
	struct FSlateColor CoinDefault; // 0xab0(0x28)
	struct FSlateColor CoinHovered; // 0xad8(0x28)
	struct FSlateColor CoinPressed; // 0xb00(0x28)
	struct FLinearColor Occupied Default; // 0xb28(0x10)
	struct FLinearColor Occupied Hovered; // 0xb38(0x10)
	struct FLinearColor Occupied Pressed; // 0xb48(0x10)
	bool Active; // 0xb58(0x01)
	char pad_B59[0x7]; // 0xb59(0x07)
	struct FMulticastInlineDelegate ProspectExpired; // 0xb60(0x10)
	bool Is Persistent; // 0xb70(0x01)

	void SetHasClaimedProspect(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.SetHasClaimedProspect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetTime(struct TArray<struct FString> Time); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.SetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetState(enum class E_ProspectState NewState); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Pin Visuals(enum class E_PinState PinState); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.Update Pin Visuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetProspectInfo(struct FFProspectServerInfo Prospect); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.SetProspectInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_5_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_FriendTutorialProspect(int32_t EntryPoint); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.ExecuteUbergraph_UMG_FriendTutorialProspect // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ProspectExpired__DelegateSignature(); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.ProspectExpired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProspectSelected__DelegateSignature(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_FriendTutorialProspect.UMG_FriendTutorialProspect_C.ProspectSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

