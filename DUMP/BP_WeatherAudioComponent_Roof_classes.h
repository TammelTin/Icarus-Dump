// BlueprintGeneratedClass BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C
// Size: 0x260 (Inherited: 0x244)
struct UBP_WeatherAudioComponent_Roof_C : UBP_WeatherAudioComponent_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UBP_BuildingAudioComponent_C* BuildingAudio; // 0x250(0x08)
	struct UFMODEvent* BuildingFMODEvent; // 0x258(0x08)

	struct FVector GetMultiPointAudioLocation(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.GetMultiPointAudioLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	float GetMultiPointAudioWeighting(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.GetMultiPointAudioWeighting // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void CheckExposure(float Exposure); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.CheckExposure // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DeregisterWithBuilding(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.DeregisterWithBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RegisterWithBuilding(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.RegisterWithBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateWeatherExposure(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.UpdateWeatherExposure // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopWeatherAudio(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.StopWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartWeatherAudio(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.StartWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnBuildingDestroyed(struct ABP_Building_Base_C* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.OnBuildingDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_WeatherAudioComponent_Roof(int32_t EntryPoint); // Function BP_WeatherAudioComponent_Roof.BP_WeatherAudioComponent_Roof_C.ExecuteUbergraph_BP_WeatherAudioComponent_Roof // (Final|UbergraphFunction) // @ game+0x1a05090
};

