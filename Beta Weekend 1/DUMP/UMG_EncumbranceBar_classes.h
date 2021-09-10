// WidgetBlueprintGeneratedClass UMG_EncumbranceBar.UMG_EncumbranceBar_C
// Size: 0x655 (Inherited: 0x260)
struct UUMG_EncumbranceBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OverencumberedPulse2; // 0x268(0x08)
	struct UWidgetAnimation* FadeToOverencumbered; // 0x270(0x08)
	struct UWidgetAnimation* WeightFadeOut; // 0x278(0x08)
	struct UWidgetAnimation* OverencumberedPulse; // 0x280(0x08)
	struct UProgressBar* EncumbranceBar; // 0x288(0x08)
	struct URetainerBox* EncumbranceBox; // 0x290(0x08)
	struct UOverlay* Overlay_1; // 0x298(0x08)
	struct UTextBlock* WarningText; // 0x2a0(0x08)
	struct UTextBlock* WeightText; // 0x2a8(0x08)
	bool WeightWarning; // 0x2b0(0x01)
	bool OverEncumbered; // 0x2b1(0x01)
	bool CachedCurrentWeight; // 0x2b2(0x01)
	char pad_2B3[0x1]; // 0x2b3(0x01)
	float PlayerWeight; // 0x2b4(0x04)
	struct FProgressBarStyle OverencumberedStyle; // 0x2b8(0x1a0)
	struct FProgressBarStyle NormalStyle; // 0x458(0x1a0)
	bool WarningVisible; // 0x5f8(0x01)
	char pad_5F9[0x3]; // 0x5f9(0x03)
	float PlayerWeightLastReduced; // 0x5fc(0x04)
	struct FSlateColor Red; // 0x600(0x28)
	struct FSlateColor Green; // 0x628(0x28)
	float CurrentEncumbrance; // 0x650(0x04)
	bool Initialised; // 0x654(0x01)

	void OverEncumbrance(); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.OverEncumbrance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowEncumbrance(); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.ShowEncumbrance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetEncumbrance(); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.GetEncumbrance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void PlayerWeightUpdated_Event_1(int32_t NewWeight); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.PlayerWeightUpdated_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetEncumeranceAmount(); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.GetEncumeranceAmount // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_EncumbranceBar(int32_t EntryPoint); // Function UMG_EncumbranceBar.UMG_EncumbranceBar_C.ExecuteUbergraph_UMG_EncumbranceBar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

