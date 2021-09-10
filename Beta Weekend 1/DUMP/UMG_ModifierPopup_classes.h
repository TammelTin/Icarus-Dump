// WidgetBlueprintGeneratedClass UMG_ModifierPopup.UMG_ModifierPopup_C
// Size: 0x488 (Inherited: 0x260)
struct UUMG_ModifierPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* ModifierBackground; // 0x268(0x08)
	struct UTextBlock* ModifierDescription; // 0x270(0x08)
	struct UTextBlock* ModifierName; // 0x278(0x08)
	struct UVerticalBox* StatsList; // 0x280(0x08)
	struct UBorder* TitleBorder; // 0x288(0x08)
	struct FModifierStateData Modifier Row; // 0x290(0x1f8)

	void Construct(); // Function UMG_ModifierPopup.UMG_ModifierPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ModifierPopup(int32_t EntryPoint); // Function UMG_ModifierPopup.UMG_ModifierPopup_C.ExecuteUbergraph_UMG_ModifierPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

