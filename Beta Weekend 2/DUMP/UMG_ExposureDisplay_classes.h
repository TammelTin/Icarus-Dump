// WidgetBlueprintGeneratedClass UMG_ExposureDisplay.UMG_ExposureDisplay_C
// Size: 0x450 (Inherited: 0x260)
struct UUMG_ExposureDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LowPulse; // 0x268(0x08)
	struct UBorder* Divider; // 0x270(0x08)
	struct UBorder* Divider_2; // 0x278(0x08)
	struct UProgressBar* ExposurePercentageBar; // 0x280(0x08)
	struct UVerticalBox* ExposureVerticalBox; // 0x288(0x08)
	struct UUMG_ShelterDisplay_C* UMG_ShelterDisplay; // 0x290(0x08)
	float CurrentProgress; // 0x298(0x04)
	bool LowImage; // 0x29c(0x01)
	char pad_29D[0x3]; // 0x29d(0x03)
	struct FProgressBarStyle NormalStyle; // 0x2a0(0x1a0)
	bool UsePlayerShelter; // 0x440(0x01)
	char pad_441[0x7]; // 0x441(0x07)
	struct UCurveLinearColor* ColourCurve; // 0x448(0x08)

	void SetProgress(float Percent); // Function UMG_ExposureDisplay.UMG_ExposureDisplay_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ExposureDisplay.UMG_ExposureDisplay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ExposureDisplay(int32_t EntryPoint); // Function UMG_ExposureDisplay.UMG_ExposureDisplay_C.ExecuteUbergraph_UMG_ExposureDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

