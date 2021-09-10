// WidgetBlueprintGeneratedClass UMG_SettingConfirmation.UMG_SettingConfirmation_C
// Size: 0x2b8 (Inherited: 0x260)
struct UUMG_SettingConfirmation_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* No; // 0x268(0x08)
	struct UTextBlock* TextBlock; // 0x270(0x08)
	struct UTextBlock* TextBlock_114; // 0x278(0x08)
	struct UUMG_BasicButton_2_C* Yes; // 0x280(0x08)
	struct FMulticastInlineDelegate Result; // 0x288(0x10)
	struct FText Text; // 0x298(0x18)
	float Remaining; // 0x2b0(0x04)
	int32_t RemainingInt; // 0x2b4(0x04)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SettingConfirmation.UMG_SettingConfirmation_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingConfirmation.UMG_SettingConfirmation_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_147_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_SettingConfirmation.UMG_SettingConfirmation_C.BndEvt__UMG_BasicButton_147_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SettingConfirmation(int32_t EntryPoint); // Function UMG_SettingConfirmation.UMG_SettingConfirmation_C.ExecuteUbergraph_UMG_SettingConfirmation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Result__DelegateSignature(bool Result); // Function UMG_SettingConfirmation.UMG_SettingConfirmation_C.Result__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

