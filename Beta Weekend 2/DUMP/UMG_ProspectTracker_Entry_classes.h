// WidgetBlueprintGeneratedClass UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C
// Size: 0x461 (Inherited: 0x260)
struct UUMG_ProspectTracker_Entry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x268(0x08)
	struct UButton* ButtonBase; // 0x270(0x08)
	struct UTextBlock* ClaimedText; // 0x278(0x08)
	struct UTextBlock* Days; // 0x280(0x08)
	struct UTextBlock* Hours; // 0x288(0x08)
	struct UUMG_BasicButton_2_C* JoinButton; // 0x290(0x08)
	struct UTextBlock* JoinedText; // 0x298(0x08)
	struct UTextBlock* Minutes; // 0x2a0(0x08)
	struct UTextBlock* OccupiedText; // 0x2a8(0x08)
	struct UTextBlock* ProspectName; // 0x2b0(0x08)
	struct UTextBlock* Seconds; // 0x2b8(0x08)
	struct UUMG_BasicButton_2_C* SettleButton; // 0x2c0(0x08)
	struct UHorizontalBox* SettleStateBoxes; // 0x2c8(0x08)
	struct FIcarusSession Session; // 0x2d0(0x190)
	bool Found; // 0x460(0x01)

	void SetTime(struct TArray<struct FString> Time); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.SetTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ProspectTracker_Entry(int32_t EntryPoint); // Function UMG_ProspectTracker_Entry.UMG_ProspectTracker_Entry_C.ExecuteUbergraph_UMG_ProspectTracker_Entry // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

