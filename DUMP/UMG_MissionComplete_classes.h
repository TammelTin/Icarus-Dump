// WidgetBlueprintGeneratedClass UMG_MissionComplete.UMG_MissionComplete_C
// Size: 0x4b8 (Inherited: 0x260)
struct UUMG_MissionComplete_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* ClaimButton; // 0x268(0x08)
	struct UUMG_ButtonIcon_C* CloseButton; // 0x270(0x08)
	struct UTextBlock* DaysText; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x280(0x08)
	struct UTextBlock* Difficulty; // 0x288(0x08)
	struct UTextBlock* HoursText; // 0x290(0x08)
	struct UImage* Image_120; // 0x298(0x08)
	struct UBorder* LoadingScreen; // 0x2a0(0x08)
	struct URetainerBox* Mask; // 0x2a8(0x08)
	struct UTextBlock* MinutesText; // 0x2b0(0x08)
	struct UVerticalBox* PlayerList; // 0x2b8(0x08)
	struct UTextBlock* ProspectDescription; // 0x2c0(0x08)
	struct UImage* ProspectImage; // 0x2c8(0x08)
	struct UTextBlock* ProspectName; // 0x2d0(0x08)
	struct UVerticalBox* ProspectRewards; // 0x2d8(0x08)
	struct UImage* Trim2; // 0x2e0(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x2e8(0x08)
	struct UUMG_MissionCompleteFaction_C* UMG_MissionCompleteFaction; // 0x2f0(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer; // 0x2f8(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_2; // 0x300(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_3; // 0x308(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_4; // 0x310(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_5; // 0x318(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_6; // 0x320(0x08)
	struct UUMG_MissionCompletePlayer_C* UMG_MissionCompletePlayer_7; // 0x328(0x08)
	struct UUMG_ProspectRewards_C* UMG_ProspectRewards; // 0x330(0x08)
	struct UUMG_ProspectRewards_C* UMG_ProspectRewards_130; // 0x338(0x08)
	struct FNotification Notification; // 0x340(0x78)
	struct FMulticastInlineDelegate Close; // 0x3b8(0x10)
	struct FProspectCompleteInformation Prospect Information; // 0x3c8(0xf0)

	void Update(); // Function UMG_MissionComplete.UMG_MissionComplete_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFail_2A402FA646AFD380299643AB192EE0B1(struct FResGetProspectSummary Response); // Function UMG_MissionComplete.UMG_MissionComplete_C.OnFail_2A402FA646AFD380299643AB192EE0B1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_2A402FA646AFD380299643AB192EE0B1(struct FResGetProspectSummary Response); // Function UMG_MissionComplete.UMG_MissionComplete_C.OnSuccess_2A402FA646AFD380299643AB192EE0B1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MissionComplete.UMG_MissionComplete_C.BndEvt__ClaimButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ShowForProspect(struct FNotification Notification); // Function UMG_MissionComplete.UMG_MissionComplete_C.ShowForProspect // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_MissionComplete.UMG_MissionComplete_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_MissionComplete.UMG_MissionComplete_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MissionComplete(int32_t EntryPoint); // Function UMG_MissionComplete.UMG_MissionComplete_C.ExecuteUbergraph_UMG_MissionComplete // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void Close__DelegateSignature(); // Function UMG_MissionComplete.UMG_MissionComplete_C.Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

