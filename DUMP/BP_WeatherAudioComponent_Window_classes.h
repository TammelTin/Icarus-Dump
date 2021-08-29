// BlueprintGeneratedClass BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C
// Size: 0x251 (Inherited: 0x244)
struct UBP_WeatherAudioComponent_Window_C : UBP_WeatherAudioComponent_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	bool Open; // 0x250(0x01)

	void BuildingOpenStateChanged(enum class EBuildingOpenableState NewState); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.BuildingOpenStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetOpenParameter(); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.SetOpenParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckExposure(float Exposure); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.CheckExposure // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartWeatherAudio(); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.StartWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetOpenState(bool Open); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.SetOpenState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WeatherAudioComponent_Window(int32_t EntryPoint); // Function BP_WeatherAudioComponent_Window.BP_WeatherAudioComponent_Window_C.ExecuteUbergraph_BP_WeatherAudioComponent_Window // (Final|UbergraphFunction) // @ game+0x1a05090
};

