// WidgetBlueprintGeneratedClass UMG_WeatherEventCard_3.UMG_WeatherEventCard_2_C
// Size: 0x2b8 (Inherited: 0x260)
struct UUMG_WeatherEventCard_2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* CardReveal; // 0x268(0x08)
	struct UTextBlock* EventCard; // 0x270(0x08)
	struct UImage* ImageBack; // 0x278(0x08)
	struct UTextBlock* StormName; // 0x280(0x08)
	struct UTextBlock* WeatherDescription; // 0x288(0x08)
	struct UImage* WeatherEventImage; // 0x290(0x08)
	struct UImage* WeatherFrame; // 0x298(0x08)
	struct FWeatherEventsRowHandle CurrentEvent; // 0x2a0(0x18)

	void UpdateWeatherEvent(struct FWeatherEventsRowHandle NewEvent); // Function UMG_WeatherEventCard_3.UMG_WeatherEventCard_2_C.UpdateWeatherEvent // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG_WeatherEventCard_3.UMG_WeatherEventCard_2_C.OnAnimationStarted // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_WeatherEventCard_3(int32_t EntryPoint); // Function UMG_WeatherEventCard_3.UMG_WeatherEventCard_2_C.ExecuteUbergraph_UMG_WeatherEventCard_3 // (Final|UbergraphFunction) // @ game+0x1a05090
};

