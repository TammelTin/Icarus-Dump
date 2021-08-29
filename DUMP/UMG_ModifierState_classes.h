// WidgetBlueprintGeneratedClass UMG_ModifierState.UMG_ModifierState_C
// Size: 0x4d4 (Inherited: 0x260)
struct UUMG_ModifierState_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* AddBuff; // 0x268(0x08)
	struct UWidgetAnimation* Pulse; // 0x270(0x08)
	struct UBorder* Background; // 0x278(0x08)
	struct UBorder* Icon; // 0x280(0x08)
	struct UTextBlock* Stack; // 0x288(0x08)
	struct UBorder* StackContainer; // 0x290(0x08)
	struct UTextBlock* Timer; // 0x298(0x08)
	struct UBorder* TimerContainer; // 0x2a0(0x08)
	struct TArray<struct UModifierStateComponent*> StateList; // 0x2a8(0x10)
	struct FModifierStateData ModifierRow; // 0x2b8(0x1f8)
	bool Initialised; // 0x4b0(0x01)
	char pad_4B1[0x3]; // 0x4b1(0x03)
	int32_t StackCount; // 0x4b4(0x04)
	bool UpdateTrigger; // 0x4b8(0x01)
	bool Hovered; // 0x4b9(0x01)
	char pad_4BA[0x6]; // 0x4ba(0x06)
	struct UTexture2D* BackgroundImage; // 0x4c0(0x08)
	struct FName RowName; // 0x4c8(0x08)
	float ModifierTime; // 0x4d0(0x04)

	struct FText GetTimer(); // Function UMG_ModifierState.UMG_ModifierState_C.GetTimer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Construct(); // Function UMG_ModifierState.UMG_ModifierState_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ModifierState.UMG_ModifierState_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void AddModifier(struct UModifierStateComponent* Modifier); // Function UMG_ModifierState.UMG_ModifierState_C.AddModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_ModifierState.UMG_ModifierState_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_ModifierState.UMG_ModifierState_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG_ModifierState.UMG_ModifierState_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void RemoveModifier(struct UModifierStateComponent* Modifier); // Function UMG_ModifierState.UMG_ModifierState_C.RemoveModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideTimer(); // Function UMG_ModifierState.UMG_ModifierState_C.HideTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ModifierState(int32_t EntryPoint); // Function UMG_ModifierState.UMG_ModifierState_C.ExecuteUbergraph_UMG_ModifierState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

