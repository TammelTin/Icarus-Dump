// WidgetBlueprintGeneratedClass UMG_KeybindingSection.UMG_KeybindingSection_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_KeybindingSection_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* KeybindArea; // 0x268(0x08)
	struct UTextBlock* Title; // 0x270(0x08)
	struct FKeybindContextsRowHandle Context; // 0x278(0x18)

	void Construct(); // Function UMG_KeybindingSection.UMG_KeybindingSection_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Add Keybinding(struct UUMG_Keybinding_C* Keybind Widget); // Function UMG_KeybindingSection.UMG_KeybindingSection_C.Add Keybinding // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct FKeybindContextsRowHandle Context); // Function UMG_KeybindingSection.UMG_KeybindingSection_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_KeybindingSection(int32_t EntryPoint); // Function UMG_KeybindingSection.UMG_KeybindingSection_C.ExecuteUbergraph_UMG_KeybindingSection // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

