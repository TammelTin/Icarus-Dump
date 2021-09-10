// WidgetBlueprintGeneratedClass UMG_ShelterDisplay.UMG_ShelterDisplay_C
// Size: 0x431 (Inherited: 0x260)
struct UUMG_ShelterDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* LowPulse; // 0x268(0x08)
	struct UProgressBar* Level; // 0x270(0x08)
	struct UImage* ShelterIcon; // 0x278(0x08)
	struct UTextBlock* ShelterText; // 0x280(0x08)
	float CurrentProgress; // 0x288(0x04)
	bool LowImage; // 0x28c(0x01)
	char pad_28D[0x3]; // 0x28d(0x03)
	struct FProgressBarStyle NormalStyle; // 0x290(0x1a0)
	bool UsePlayerShelter; // 0x430(0x01)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ShelterDisplay.UMG_ShelterDisplay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SetProgress(float Percent); // Function UMG_ShelterDisplay.UMG_ShelterDisplay_C.SetProgress // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ShelterDisplay(int32_t EntryPoint); // Function UMG_ShelterDisplay.UMG_ShelterDisplay_C.ExecuteUbergraph_UMG_ShelterDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

