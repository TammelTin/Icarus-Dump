// WidgetBlueprintGeneratedClass UMG_Keybinding.UMG_Keybinding_C
// Size: 0x2d8 (Inherited: 0x298)
struct UUMG_Keybinding_C : UKeybindingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UBorder* BindingBorder; // 0x2a0(0x08)
	struct UImage* DarkTint; // 0x2a8(0x08)
	struct UTextBlock* FeatureLevelText; // 0x2b0(0x08)
	struct UButton* HoverButton; // 0x2b8(0x08)
	struct UBorder* NameBorder; // 0x2c0(0x08)
	struct UTextBlock* NameText; // 0x2c8(0x08)
	struct UUMG_KeyRebindable_C* UMG_KeyRebindable; // 0x2d0(0x08)

	void PostSetup(); // Function UMG_Keybinding.UMG_Keybinding_C.PostSetup // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Keybinding(int32_t EntryPoint); // Function UMG_Keybinding.UMG_Keybinding_C.ExecuteUbergraph_UMG_Keybinding // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

