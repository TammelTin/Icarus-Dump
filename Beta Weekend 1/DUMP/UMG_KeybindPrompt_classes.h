// WidgetBlueprintGeneratedClass UMG_KeybindPrompt.UMG_KeybindPrompt_C
// Size: 0x2c8 (Inherited: 0x260)
struct UUMG_KeybindPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UNamedSlot* LHS; // 0x268(0x08)
	struct UNamedSlot* RHS; // 0x270(0x08)
	struct URetainerBox* ShadowRetainer; // 0x278(0x08)
	struct UTextBlock* TextPrompt; // 0x280(0x08)
	struct UUMG_Keybind_C* UMG_Keybind; // 0x288(0x08)
	bool Hold; // 0x290(0x01)
	char pad_291[0x3]; // 0x291(0x03)
	struct FKeybindingsRowHandle Keybinding; // 0x294(0x18)
	bool TextOnRight; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	struct FText OverrideText; // 0x2b0(0x18)

	void SwapText(); // Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.SwapText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void KeyChanged(bool IsSet); // Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.KeyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_KeybindPrompt(int32_t EntryPoint); // Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.ExecuteUbergraph_UMG_KeybindPrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

