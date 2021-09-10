// WidgetBlueprintGeneratedClass UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C
// Size: 0x3f0 (Inherited: 0x340)
struct UUMG_SettingControl_Keybindings_C : USettingWidget_Keybindings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct UScrollBox* KeybindBox; // 0x348(0x08)
	struct TMap<struct FKeybindContextsRowHandle, struct UUMG_KeybindingSection_C*> Sections; // 0x350(0x50)
	struct TMap<struct FKeybindingsRowHandle, struct UUMG_Keybinding_C*> Widgets; // 0x3a0(0x50)

	void GetSection(struct FKeybindContextsRowHandle Context, struct UUMG_KeybindingSection_C* Section); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.GetSection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct UKeybindingWidget* CreateKeybindingWidget(struct FKeybindingsRowHandle Keybinding); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.CreateKeybindingWidget // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.Setup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearKeybindingWidgets(); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.ClearKeybindingWidgets // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Setup Sections(); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.Setup Sections // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SettingControl_Keybindings(int32_t EntryPoint); // Function UMG_SettingControl_Keybindings.UMG_SettingControl_Keybindings_C.ExecuteUbergraph_UMG_SettingControl_Keybindings // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

