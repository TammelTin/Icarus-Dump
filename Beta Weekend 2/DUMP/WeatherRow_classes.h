// WidgetBlueprintGeneratedClass WeatherRow.WeatherRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UWeatherRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText WeatherEventName; // 0x270(0x18)
	struct FWeatherEventsRowHandle WeatherEvent; // 0x288(0x18)

	void AddWeather(struct FName AddWeatherEvent); // Function WeatherRow.WeatherRow_C.AddWeather // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_WeatherRow(int32_t EntryPoint); // Function WeatherRow.WeatherRow_C.ExecuteUbergraph_WeatherRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

