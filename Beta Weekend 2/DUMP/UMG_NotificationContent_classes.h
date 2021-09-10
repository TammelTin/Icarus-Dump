// WidgetBlueprintGeneratedClass UMG_NotificationContent.UMG_NotificationContent_C
// Size: 0x358 (Inherited: 0x260)
struct UUMG_NotificationContent_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* CollectButton; // 0x268(0x08)
	struct UTextBlock* Content; // 0x270(0x08)
	struct UTextBlock* Credits; // 0x278(0x08)
	struct UHorizontalBox* Currency; // 0x280(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x288(0x08)
	struct UHorizontalBox* Items; // 0x290(0x08)
	struct USizeBox* OpenMail; // 0x298(0x08)
	struct UUMG_BasicButton_2_C* ShowProspectInfoButton; // 0x2a0(0x08)
	struct UTextBlock* Time; // 0x2a8(0x08)
	struct UTextBlock* Title; // 0x2b0(0x08)
	int32_t Index; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct FNotification Notification; // 0x2c0(0x78)
	struct FMulticastInlineDelegate DeleteMailEvent; // 0x338(0x10)
	struct FMulticastInlineDelegate CollectRewardsEvent; // 0x348(0x10)

	void Update(struct FNotification Notification, int32_t Index); // Function UMG_NotificationContent.UMG_NotificationContent_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationContent.UMG_NotificationContent_C.BndEvt__DeleteButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__CollectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationContent.UMG_NotificationContent_C.BndEvt__CollectButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ShowProspectInfoButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_NotificationContent.UMG_NotificationContent_C.BndEvt__ShowProspectInfoButton_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_NotificationContent(int32_t EntryPoint); // Function UMG_NotificationContent.UMG_NotificationContent_C.ExecuteUbergraph_UMG_NotificationContent // (Final|UbergraphFunction) // @ game+0x1a38c80
	void CollectRewardsEvent__DelegateSignature(struct FString ID); // Function UMG_NotificationContent.UMG_NotificationContent_C.CollectRewardsEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DeleteMailEvent__DelegateSignature(struct FString ID); // Function UMG_NotificationContent.UMG_NotificationContent_C.DeleteMailEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

