// WidgetBlueprintGeneratedClass UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C
// Size: 0x480 (Inherited: 0x260)
struct UUMG_FirstTutorialScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* BackgroundImage; // 0x268(0x08)
	struct UUMG_BasicButton_2_C* DismissButton; // 0x270(0x08)
	struct UImage* Divider; // 0x278(0x08)
	struct UImage* Divider2; // 0x280(0x08)
	struct UImage* Divider3; // 0x288(0x08)
	struct UImage* Divider3_2; // 0x290(0x08)
	struct UVerticalBox* FriendProspects; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_92; // 0x2b8(0x08)
	struct UImage* Image_223; // 0x2c0(0x08)
	struct UImage* Image_418; // 0x2c8(0x08)
	struct UImage* ItemIcon; // 0x2d0(0x08)
	struct UVerticalBox* JoinableProspects_2; // 0x2d8(0x08)
	struct UTextBlock* LoadingProspectText; // 0x2e0(0x08)
	struct UUMG_BasicButton_2_C* PlayButton; // 0x2e8(0x08)
	struct FIcarusSession ClaimableTutorialSession; // 0x2f0(0x190)

	void MatchmakingAvailableSessionsUpdated(); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.MatchmakingAvailableSessionsUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_DE710CC4405D0905A113A3AEDEECA7A6(struct FErrorCodesEnum Result); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.OnFailure_DE710CC4405D0905A113A3AEDEECA7A6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_DE710CC4405D0905A113A3AEDEECA7A6(struct FErrorCodesEnum Result); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.OnSuccess_DE710CC4405D0905A113A3AEDEECA7A6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFailure_51F72EC04F9DC32B48986AB88CA20325(struct FErrorCodesEnum Result); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.OnFailure_51F72EC04F9DC32B48986AB88CA20325 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSuccess_51F72EC04F9DC32B48986AB88CA20325(struct FErrorCodesEnum Result); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.OnSuccess_51F72EC04F9DC32B48986AB88CA20325 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FriendProspectSelected(struct FFProspectServerInfo Prospect, bool Active); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.FriendProspectSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ShowJoiningGameUI(bool Visible, struct FText Text); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.ShowJoiningGameUI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__PlayButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__DismissButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.BndEvt__DismissButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_FirstTutorialScreen(int32_t EntryPoint); // Function UMG_FirstTutorialScreen.UMG_FirstTutorialScreen_C.ExecuteUbergraph_UMG_FirstTutorialScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

