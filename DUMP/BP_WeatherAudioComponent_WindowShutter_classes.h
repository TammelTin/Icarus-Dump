// BlueprintGeneratedClass BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C
// Size: 0x250 (Inherited: 0x244)
struct UBP_WeatherAudioComponent_WindowShutter_C : UBP_WeatherAudioComponent_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)

	void PlayPointSourceAudio(); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.PlayPointSourceAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartWeatherAudio(); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.StartWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckExposure(float Exposure); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.CheckExposure // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetOpenState(bool Open); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.SetOpenState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter(int32_t EntryPoint); // Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter // (Final|UbergraphFunction) // @ game+0x1a05090
};

