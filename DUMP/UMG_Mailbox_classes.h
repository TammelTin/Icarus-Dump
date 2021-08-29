// WidgetBlueprintGeneratedClass UMG_Mailbox.UMG_Mailbox_C
// Size: 0x2f0 (Inherited: 0x260)
struct UUMG_Mailbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OpenAnimation; // 0x268(0x08)
	struct UImage* Angle; // 0x270(0x08)
	struct UImage* Gradient; // 0x278(0x08)
	struct UVerticalBox* MailContainer; // 0x280(0x08)
	struct UImage* MailIcon; // 0x288(0x08)
	struct UTextBlock* MailItems; // 0x290(0x08)
	struct USizeBox* MainContentBox; // 0x298(0x08)
	struct USizeBox* OpenMail; // 0x2a0(0x08)
	struct UUMG_NotificationContent_C* UMG_NotificationContent; // 0x2a8(0x08)
	struct FMulticastInlineDelegate CloseWindowEvent; // 0x2b0(0x10)
	bool Update; // 0x2c0(0x01)
	bool Visible; // 0x2c1(0x01)
	char pad_2C2[0x2]; // 0x2c2(0x02)
	int32_t StoredMail; // 0x2c4(0x04)
	int32_t MaxMail; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct FMulticastInlineDelegate DeleteMailEvent; // 0x2d0(0x10)
	struct UBackendProxyComponent* P; // 0x2e0(0x08)
	struct UFMODEvent* Event; // 0x2e8(0x08)

	void Opened(); // Function UMG_Mailbox.UMG_Mailbox_C.Opened // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Closed(); // Function UMG_Mailbox.UMG_Mailbox_C.Closed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowNotification(struct FNotification Notification, int32_t Index); // Function UMG_Mailbox.UMG_Mailbox_C.ShowNotification // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Refresh(); // Function UMG_Mailbox.UMG_Mailbox_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideMail(); // Function UMG_Mailbox.UMG_Mailbox_C.HideMail // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotificationsUpdated(); // Function UMG_Mailbox.UMG_Mailbox_C.OnNotificationsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CollectRewards(struct FString ID); // Function UMG_Mailbox.UMG_Mailbox_C.CollectRewards // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DeleteNotification(struct FString ID); // Function UMG_Mailbox.UMG_Mailbox_C.DeleteNotification // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReadMail(struct FString ID); // Function UMG_Mailbox.UMG_Mailbox_C.ReadMail // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Mailbox.UMG_Mailbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Mailbox(int32_t EntryPoint); // Function UMG_Mailbox.UMG_Mailbox_C.ExecuteUbergraph_UMG_Mailbox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void DeleteMailEvent__DelegateSignature(); // Function UMG_Mailbox.UMG_Mailbox_C.DeleteMailEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CloseWindowEvent__DelegateSignature(); // Function UMG_Mailbox.UMG_Mailbox_C.CloseWindowEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

