// WidgetBlueprintGeneratedClass UMG_KeyBind.UMG_Keybind_C
// Size: 0x318 (Inherited: 0x2e1)
struct UUMG_Keybind_C : UUMG_PhysicalKey_C {
	char pad_2E1[0x7]; // 0x2e1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e8(0x08)
	struct FKeybindingsRowHandle Keybinding; // 0x2f0(0x18)
	struct FMulticastInlineDelegate OnKeyBindChanged; // 0x308(0x10)

	void GetDefaultKey(struct FKey Key); // Function UMG_KeyBind.UMG_Keybind_C.GetDefaultKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void GetKey(struct FKey Key); // Function UMG_KeyBind.UMG_Keybind_C.GetKey // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Set Keybind(struct FKeybindingsRowHandle InKey, bool Hold); // Function UMG_KeyBind.UMG_Keybind_C.Set Keybind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_KeyBind.UMG_Keybind_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_KeyBind.UMG_Keybind_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Input Type Changed(enum class EInputTypeSetting Value); // Function UMG_KeyBind.UMG_Keybind_C.Input Type Changed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Keybind(int32_t EntryPoint); // Function UMG_KeyBind.UMG_Keybind_C.ExecuteUbergraph_UMG_Keybind // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnKeyBindChanged__DelegateSignature(bool IsSet); // Function UMG_KeyBind.UMG_Keybind_C.OnKeyBindChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

