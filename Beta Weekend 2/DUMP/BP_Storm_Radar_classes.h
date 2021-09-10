// BlueprintGeneratedClass BP_Storm_Radar.BP_Storm_Radar_C
// Size: 0x57d (Inherited: 0x550)
struct ABP_Storm_Radar_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UPointLightComponent* PointLight; // 0x558(0x08)
	struct UStaticMeshComponent* Cylinder; // 0x560(0x08)
	struct UStaticMeshComponent* Cube; // 0x568(0x08)
	struct UStaticMeshComponent* Sphere; // 0x570(0x08)
	int32_t StormWarningTime; // 0x578(0x04)
	enum class EStormPredictionState StormState; // 0x57c(0x01)

	void OnRep_StormState(); // Function BP_Storm_Radar.BP_Storm_Radar_C.OnRep_StormState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Storm_Radar.BP_Storm_Radar_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void StormWarning(int32_t TimeUntilStorm, struct FWeatherEventsRowHandle StormRow, struct FBiomesEnum Biome); // Function BP_Storm_Radar.BP_Storm_Radar_C.StormWarning // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StormStarted(struct FWeatherEventsRowHandle Event, struct FBiomesEnum Biome); // Function BP_Storm_Radar.BP_Storm_Radar_C.StormStarted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Storm_Radar(int32_t EntryPoint); // Function BP_Storm_Radar.BP_Storm_Radar_C.ExecuteUbergraph_BP_Storm_Radar // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

