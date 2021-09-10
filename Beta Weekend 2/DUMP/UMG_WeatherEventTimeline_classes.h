// WidgetBlueprintGeneratedClass UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C
// Size: 0x3b8 (Inherited: 0x260)
struct UUMG_WeatherEventTimeline_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeIn; // 0x268(0x08)
	struct UWidgetAnimation* Flashing; // 0x270(0x08)
	struct UImage* BackgroundImage; // 0x278(0x08)
	struct UImage* spessman; // 0x280(0x08)
	struct UImage* StormIcon; // 0x288(0x08)
	struct UTextBlock* StormName; // 0x290(0x08)
	struct USizeBox* Timeline; // 0x298(0x08)
	struct UCanvasPanel* TimelinePanel; // 0x2a0(0x08)
	float StormTotalLength; // 0x2a8(0x04)
	float StormTimeRemaining; // 0x2ac(0x04)
	int32_t CurrentActionIndex; // 0x2b0(0x04)
	float CurrentActionTimeRemaining; // 0x2b4(0x04)
	float TimelineLengthInPixels; // 0x2b8(0x04)
	float TimelineLengthInTime; // 0x2bc(0x04)
	struct FActiveWeatherInfo CurrentWeatherInfo; // 0x2c0(0x48)
	struct FActiveWeatherInfo LastProcessedWeatherInfo; // 0x308(0x48)
	struct TMap<struct UBP_WeatherAction_Base_C*, struct UUMG_WeatherEventTimelineIcon_C*> ActionToIconMap; // 0x350(0x50)
	struct FText AlternatingStormNameText; // 0x3a0(0x18)

	void WeatherActionToTimelineSpace(int32_t ActionIdex, float TimelineLocation); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.WeatherActionToTimelineSpace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateActionIcons(); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.UpdateActionIcons // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateStormData(); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.UpdateStormData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ShowStormNameText(float Show length); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.ShowStormNameText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_WeatherEventTimeline(int32_t EntryPoint); // Function UMG_WeatherEventTimeline.UMG_WeatherEventTimeline_C.ExecuteUbergraph_UMG_WeatherEventTimeline // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

