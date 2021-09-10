// WidgetBlueprintGeneratedClass CharacterFlagRow.CharacterFlagRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UCharacterFlagRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText NameText; // 0x270(0x18)
	struct FCharacterFlagsRowHandle Flag; // 0x288(0x18)

	void SetCharacterFlagRow(struct FCharacterFlagsRowHandle ProspectRowHandle); // Function CharacterFlagRow.CharacterFlagRow_C.SetCharacterFlagRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_CharacterFlagRow(int32_t EntryPoint); // Function CharacterFlagRow.CharacterFlagRow_C.ExecuteUbergraph_CharacterFlagRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

