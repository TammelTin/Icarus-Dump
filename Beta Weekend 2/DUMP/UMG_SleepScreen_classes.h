// WidgetBlueprintGeneratedClass UMG_SleepScreen.UMG_SleepScreen_C
// Size: 0x2c0 (Inherited: 0x260)
struct UUMG_SleepScreen_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* ExitBedText; // 0x268(0x08)
	struct UBorder* FadeBorder; // 0x270(0x08)
	struct UTextBlock* InvalidTimeText; // 0x278(0x08)
	struct UOverlay* Overlay_27; // 0x280(0x08)
	struct UTextBlock* PlayersSleepingText; // 0x288(0x08)
	struct TSoftClassPtr<UObject> BedSeatClass; // 0x290(0x28)
	float FadeAlpha; // 0x2b8(0x04)
	float FadeSpeed; // 0x2bc(0x04)

	void SetAudioSleepParameter(float FadeValue); // Function UMG_SleepScreen.UMG_SleepScreen_C.SetAudioSleepParameter // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetSleepingPlayerCount(); // Function UMG_SleepScreen.UMG_SleepScreen_C.GetSleepingPlayerCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateSleepingState(bool Sleeping); // Function UMG_SleepScreen.UMG_SleepScreen_C.UpdateSleepingState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttachedSeatChanged(); // Function UMG_SleepScreen.UMG_SleepScreen_C.AttachedSeatChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_SleepScreen.UMG_SleepScreen_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_SleepScreen.UMG_SleepScreen_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_SleepScreen(int32_t EntryPoint); // Function UMG_SleepScreen.UMG_SleepScreen_C.ExecuteUbergraph_UMG_SleepScreen // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

