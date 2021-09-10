// WidgetBlueprintGeneratedClass UMG_Warning.UMG_Warning_C
// Size: 0x280 (Inherited: 0x260)
struct UUMG_Warning_C : UUserWidget {
	struct UWidgetAnimation* Blink; // 0x260(0x08)
	struct UImage* Border; // 0x268(0x08)
	struct UTextBlock* ReasonWarningText; // 0x270(0x08)
	struct UOverlay* WarningBorder; // 0x278(0x08)

	void SetState(bool Visible); // Function UMG_Warning.UMG_Warning_C.SetState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct FString Reason); // Function UMG_Warning.UMG_Warning_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

