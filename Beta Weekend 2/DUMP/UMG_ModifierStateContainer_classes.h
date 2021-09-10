// WidgetBlueprintGeneratedClass UMG_ModifierStateContainer.UMG_ModifierStateContainer_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_ModifierStateContainer_C : UUserWidget {
	struct UUniformGridPanel* Modifiers; // 0x260(0x08)
	int32_t MaxX; // 0x268(0x04)
	bool ShowTimer; // 0x26c(0x01)
	char pad_26D[0x3]; // 0x26d(0x03)
	struct FMulticastInlineDelegate ModifiersUpdated; // 0x270(0x10)

	void UpdateLayout(); // Function UMG_ModifierStateContainer.UMG_ModifierStateContainer_C.UpdateLayout // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveModifier(struct UModifierStateComponent* Modifier Component); // Function UMG_ModifierStateContainer.UMG_ModifierStateContainer_C.RemoveModifier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddModifier(struct UModifierStateComponent* Modifier Component); // Function UMG_ModifierStateContainer.UMG_ModifierStateContainer_C.AddModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifiersUpdated__DelegateSignature(int32_t Modifiers); // Function UMG_ModifierStateContainer.UMG_ModifierStateContainer_C.ModifiersUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

