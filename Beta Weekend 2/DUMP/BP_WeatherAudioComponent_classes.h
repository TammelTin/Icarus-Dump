// BlueprintGeneratedClass BP_WeatherAudioComponent.BP_WeatherAudioComponent_C
// Size: 0x244 (Inherited: 0x200)
struct UBP_WeatherAudioComponent_C : UWeatherAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct ABP_WeatherController_C* WeatherController; // 0x208(0x08)
	struct AIcarusActor* IcarusActor; // 0x210(0x08)
	bool WeatherAudioActive; // 0x218(0x01)
	char pad_219[0x7]; // 0x219(0x07)
	struct UFMODAudioComponent* AudioComponent; // 0x220(0x08)
	float WeatherExposureUpdateFrequency; // 0x228(0x04)
	char pad_22C[0x4]; // 0x22c(0x04)
	struct FTimerHandle WeatherExposureTimerHandle; // 0x230(0x08)
	struct UFMODEvent* ItemFMODEvent; // 0x238(0x08)
	float Exposure; // 0x240(0x04)

	void CheckExposure(float Exposure); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.CheckExposure // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetPointSourceExposureParameter(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.SetPointSourceExposureParameter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopPointSourceAudio(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopPointSourceAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopExposureTimer(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopExposureTimer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartExposureTimer(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StartExposureTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayPointSourceAudio(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.PlayPointSourceAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopWeatherAudio(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StopWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartWeatherAudio(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.StartWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateWeatherExposure(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.UpdateWeatherExposure // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateWeatherAudio(bool WeatherActive); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.UpdateWeatherAudio // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnWeatherUpdated(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.OnWeatherUpdated // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_WeatherAudioComponent(int32_t EntryPoint); // Function BP_WeatherAudioComponent.BP_WeatherAudioComponent_C.ExecuteUbergraph_BP_WeatherAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

