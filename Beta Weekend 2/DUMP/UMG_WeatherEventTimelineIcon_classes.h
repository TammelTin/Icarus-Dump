// WidgetBlueprintGeneratedClass UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C
// Size: 0x290 (Inherited: 0x260)
struct UUMG_WeatherEventTimelineIcon_C : UUserWidget {
	struct UImage* WeatherActionImage; // 0x260(0x08)
	struct UImage* WeatherTailBar; // 0x268(0x08)
	struct UUMG_WeatherEventTimeline_C* Timeline; // 0x270(0x08)
	struct FWeatherActionsRowHandle WeatherActionRowHandle; // 0x278(0x18)

	void SetupIcon(); // Function UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C.SetupIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(struct FWeatherActionsRowHandle WeatherAction, float LifeTime); // Function UMG_WeatherEventTimelineIcon.UMG_WeatherEventTimelineIcon_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

