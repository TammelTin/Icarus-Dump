// WidgetBlueprintGeneratedClass UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C
// Size: 0xcb1 (Inherited: 0x260)
struct UUMG_MissionCompletePlayer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UHorizontalBox* CharacterEntry; // 0x268(0x08)
	struct UTextBlock* CharacterName; // 0x270(0x08)
	struct UImage* HostImage; // 0x278(0x08)
	struct UTextBlock* Level; // 0x280(0x08)
	struct UButton* ThumbsUp; // 0x288(0x08)
	struct FButtonStyle Button_Up_Default; // 0x290(0x278)
	struct FButtonStyle Button_Up_Selected; // 0x508(0x278)
	struct FButtonStyle Button_Down_Default; // 0x780(0x278)
	struct FButtonStyle Button_Down_Selected; // 0x9f8(0x278)
	bool CanRate; // 0xc70(0x01)
	bool Liked; // 0xc71(0x01)
	char pad_C72[0x6]; // 0xc72(0x06)
	struct FAssociatedMemberInfo Member; // 0xc78(0x38)
	bool Host; // 0xcb0(0x01)

	void ShowRatings(); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.ShowRatings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Rating Button Style(bool Liked); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.Set Rating Button Style // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsSettled(bool Settled); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.IsSettled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_MissionCompletePlayer(int32_t EntryPoint); // Function UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C.ExecuteUbergraph_UMG_MissionCompletePlayer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

