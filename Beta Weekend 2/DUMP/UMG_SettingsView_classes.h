// WidgetBlueprintGeneratedClass UMG_SettingsView.UMG_SettingsView_C
// Size: 0x2f0 (Inherited: 0x290)
struct UUMG_SettingsView_C : USettingsView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UVerticalBox* SectionsBox; // 0x298(0x08)
	struct FText SettingsViewDescription; // 0x2a0(0x18)
	struct UTextBlock* SettingOptionDescription; // 0x2b8(0x08)
	struct FMulticastInlineDelegate On Setting Option Hovered; // 0x2c0(0x10)
	struct FMulticastInlineDelegate On Setting Option Unhovered; // 0x2d0(0x10)
	struct FMulticastInlineDelegate On View Refresh; // 0x2e0(0x10)

	struct USettingsSection* CreateNewSection(); // Function UMG_SettingsView.UMG_SettingsView_C.CreateNewSection // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct USettingsSection* AddNewSection(); // Function UMG_SettingsView.UMG_SettingsView_C.AddNewSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setting Option Hovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsView.UMG_SettingsView_C.Setting Option Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setting Option Unhovered(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsView.UMG_SettingsView_C.Setting Option Unhovered // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PostSetup(); // Function UMG_SettingsView.UMG_SettingsView_C.PostSetup // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnRefresh(); // Function UMG_SettingsView.UMG_SettingsView_C.OnRefresh // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Set Confirmation Slot(struct UNamedSlot* Confirmation Slot); // Function UMG_SettingsView.UMG_SettingsView_C.Set Confirmation Slot // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SettingsView(int32_t EntryPoint); // Function UMG_SettingsView.UMG_SettingsView_C.ExecuteUbergraph_UMG_SettingsView // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void On View Refresh__DelegateSignature(struct UUMG_SettingsView_C* View); // Function UMG_SettingsView.UMG_SettingsView_C.On View Refresh__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void On Setting Option Unhovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsView.UMG_SettingsView_C.On Setting Option Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void On Setting Option Hovered__DelegateSignature(struct UUMG_SettingRowBorder_C* Setting Option); // Function UMG_SettingsView.UMG_SettingsView_C.On Setting Option Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

