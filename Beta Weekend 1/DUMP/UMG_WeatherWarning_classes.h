// WidgetBlueprintGeneratedClass UMG_WeatherWarning.UMG_WeatherWarning_C
// Size: 0x380 (Inherited: 0x260)
struct UUMG_WeatherWarning_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOutBanner; // 0x268(0x08)
	struct UWidgetAnimation* FadeInBanner; // 0x270(0x08)
	struct UWidgetAnimation* Flash; // 0x278(0x08)
	struct UBorder* BGBorder; // 0x280(0x08)
	struct UBorder* BotBorder; // 0x288(0x08)
	struct UImage* BotLines; // 0x290(0x08)
	struct UOverlay* Container; // 0x298(0x08)
	struct UTextBlock* Description; // 0x2a0(0x08)
	struct UImage* Frame; // 0x2a8(0x08)
	struct UBorder* TopBorder; // 0x2b0(0x08)
	struct UImage* TopLines; // 0x2b8(0x08)
	struct UImage* WarningIcon; // 0x2c0(0x08)
	struct UImage* WarningIconFlash; // 0x2c8(0x08)
	struct UTextBlock* WarningTitle; // 0x2d0(0x08)
	struct UImage* WeatherCard; // 0x2d8(0x08)
	struct FSlateColor WarningTitleRed; // 0x2e0(0x28)
	struct FSlateColor WarningDescriptionRed; // 0x308(0x28)
	struct FSlateColor Warning Title Orange; // 0x330(0x28)
	struct FSlateColor WarningDescriptionOrange; // 0x358(0x28)

	void Finished_91F8DE864341FFCE52E84CB5A6C3A465(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.Finished_91F8DE864341FFCE52E84CB5A6C3A465 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_069D5CD545DEF11BEBB16BAC3843D6C6(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.Finished_069D5CD545DEF11BEBB16BAC3843D6C6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_7BA92EFA48D45D7C185FDFB51C6A9FEE(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.Finished_7BA92EFA48D45D7C185FDFB51C6A9FEE // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_9AF543A248403E24F17D9F9DA0B67A79(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.Finished_9AF543A248403E24F17D9F9DA0B67A79 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_F8766EF443CBD8ADF25A38B6FF1A718C(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.Finished_F8766EF443CBD8ADF25A38B6FF1A718C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayShowAnimations(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.PlayShowAnimations // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HideWeatherWarning(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.HideWeatherWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayMediumWeatherWarning(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.PlayMediumWeatherWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowWeatherWarning(struct FText WarningMessage); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.ShowWeatherWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayEasyWeatherWarning(); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.PlayEasyWeatherWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_WeatherWarning(int32_t EntryPoint); // Function UMG_WeatherWarning.UMG_WeatherWarning_C.ExecuteUbergraph_UMG_WeatherWarning // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

