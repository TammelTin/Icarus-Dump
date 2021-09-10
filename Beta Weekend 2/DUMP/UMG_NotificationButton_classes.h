// WidgetBlueprintGeneratedClass UMG_NotificationButton.UMG_NotificationButton_C
// Size: 0x308 (Inherited: 0x260)
struct UUMG_NotificationButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* MainButton; // 0x268(0x08)
	struct UTextBlock* MessageTitle; // 0x270(0x08)
	struct FNotification Notification; // 0x278(0x78)
	struct FMulticastInlineDelegate ShowMail; // 0x2f0(0x10)
	enum class E_MailState MailState; // 0x300(0x01)
	char pad_301[0x3]; // 0x301(0x03)
	int32_t Index; // 0x304(0x04)

	void SetStyle(enum class E_MailState State); // Function UMG_NotificationButton.UMG_NotificationButton_C.SetStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(); // Function UMG_NotificationButton.UMG_NotificationButton_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_NotificationButton.UMG_NotificationButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__Button_29_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature(); // Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature(); // Function UMG_NotificationButton.UMG_NotificationButton_C.BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_NotificationButton(int32_t EntryPoint); // Function UMG_NotificationButton.UMG_NotificationButton_C.ExecuteUbergraph_UMG_NotificationButton // (Final|UbergraphFunction) // @ game+0x1a38c80
	void ShowMail__DelegateSignature(struct FNotification Notification, int32_t Index); // Function UMG_NotificationButton.UMG_NotificationButton_C.ShowMail__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

