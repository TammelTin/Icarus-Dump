// WidgetBlueprintGeneratedClass UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C
// Size: 0x2e1 (Inherited: 0x260)
struct UUMG_PhysicalKeyPrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UNamedSlot* LHS; // 0x268(0x08)
	struct UNamedSlot* RHS; // 0x270(0x08)
	struct URetainerBox* ShadowRetainer; // 0x278(0x08)
	struct UTextBlock* TextPrompt; // 0x280(0x08)
	struct UUMG_PhysicalKey_C* UMG_PhysicalKey; // 0x288(0x08)
	bool Hold; // 0x290(0x01)
	char pad_291[0x7]; // 0x291(0x07)
	struct FKey Physical Key; // 0x298(0x18)
	struct FText PromptTextString; // 0x2b0(0x18)
	struct FKey Physical Gamepad Key; // 0x2c8(0x18)
	bool TextOnRight; // 0x2e0(0x01)

	void SwapText(); // Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.SwapText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void KeyChanged(bool IsSet); // Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.KeyChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_PhysicalKeyPrompt(int32_t EntryPoint); // Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.ExecuteUbergraph_UMG_PhysicalKeyPrompt // (Final|UbergraphFunction) // @ game+0x1a38c80
};

