// WidgetBlueprintGeneratedClass UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C
// Size: 0x398 (Inherited: 0x260)
struct UUMG_ProspectComplete_Notification_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* GlowPulse; // 0x268(0x08)
	struct UImage* ButtonImage; // 0x270(0x08)
	struct UBorder* GlowBorder; // 0x278(0x08)
	struct UButton* MainButton; // 0x280(0x08)
	struct UBorder* PromptBorder; // 0x288(0x08)
	struct UTextBlock* PromptText; // 0x290(0x08)
	struct UTextBlock* ProspectCompleteText; // 0x298(0x08)
	struct FSlateColor Orange; // 0x2a0(0x28)
	struct FSlateColor White; // 0x2c8(0x28)
	struct FSlateColor Black; // 0x2f0(0x28)
	bool Found; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct FNotification Notification; // 0x320(0x78)

	void SetHoverStateVisuals(bool Hovered); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.SetHoverStateVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature(); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ProspectComplete_Notification(int32_t EntryPoint); // Function UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C.ExecuteUbergraph_UMG_ProspectComplete_Notification // (Final|UbergraphFunction) // @ game+0x1a38c80
};

