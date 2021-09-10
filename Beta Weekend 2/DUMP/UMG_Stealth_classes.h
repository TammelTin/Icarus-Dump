// WidgetBlueprintGeneratedClass UMG_Stealth.UMG_Stealth_C
// Size: 0x299 (Inherited: 0x260)
struct UUMG_Stealth_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UWidgetAnimation* EyetoHidden; // 0x270(0x08)
	struct UImage* Eye; // 0x278(0x08)
	struct UImage* Hidden; // 0x280(0x08)
	struct UImage* Iris; // 0x288(0x08)
	int32_t DetectionValue; // 0x290(0x04)
	float LerpedDetectionPercentage; // 0x294(0x04)
	bool WantsVisible; // 0x298(0x01)

	void UpdateDetectionValue(int32_t NewDetectionValue); // Function UMG_Stealth.UMG_Stealth_C.UpdateDetectionValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Stealth.UMG_Stealth_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdateVisibility(bool IsVisible); // Function UMG_Stealth.UMG_Stealth_C.UpdateVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFadeAnimFinished(); // Function UMG_Stealth.UMG_Stealth_C.OnFadeAnimFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Stealth.UMG_Stealth_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Stealth(int32_t EntryPoint); // Function UMG_Stealth.UMG_Stealth_C.ExecuteUbergraph_UMG_Stealth // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

