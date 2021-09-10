// BlueprintGeneratedClass BP_BuildingAudioComponent.BP_BuildingAudioComponent_C
// Size: 0x250 (Inherited: 0x200)
struct UBP_BuildingAudioComponent_C : USceneComponent {
	struct TMap<struct UFMODEvent*, struct UMultiPointAudioEmitter*> Emitters; // 0x200(0x50)

	void RemoveWeatherAudio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.RemoveWeatherAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Add Weather Audio(struct UWeatherAudioComponent* WeatherAudioComponent, struct UFMODEvent* Event); // Function BP_BuildingAudioComponent.BP_BuildingAudioComponent_C.Add Weather Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

