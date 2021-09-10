// Class RTXGI.DDGIBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UDDGIBlueprintLibrary : UBlueprintFunctionLibrary {

	void EnableVolume(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.EnableVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xf5c3b0
	void DisableVolume(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.DisableVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xf5c330
	void ClearProbeData(struct UDDGIVolumeComponent* DDGIVolumeComponent); // Function RTXGI.DDGIBlueprintLibrary.ClearProbeData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xf5c290
};

// Class RTXGI.DDGIVolume
// Size: 0x228 (Inherited: 0x220)
struct ADDGIVolume : AActor {
	struct UDDGIVolumeComponent* DDGIVolumeComponent; // 0x220(0x08)
};

// Class RTXGI.DDGIVolumeComponent
// Size: 0x330 (Inherited: 0x200)
struct UDDGIVolumeComponent : USceneComponent {
	enum class EDDGIRaysPerProbe RaysPerProbe; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FIntVector ProbeCounts; // 0x204(0x0c)
	int32_t LightingPriority; // 0x210(0x04)
	float UpdatePriority; // 0x214(0x04)
	float ProbeMaxRayDistance; // 0x218(0x04)
	float ProbeHysteresis; // 0x21c(0x04)
	float ViewBias; // 0x220(0x04)
	float NormalBias; // 0x224(0x04)
	struct FLightingChannels LightingChannels; // 0x228(0x01)
	char pad_229[0x3]; // 0x229(0x03)
	float VolumeBlendDistance; // 0x22c(0x04)
	float VolumeBlendDistanceBlack; // 0x230(0x04)
	bool EnableProbeRelocation; // 0x234(0x01)
	bool EnableProbeScrolling; // 0x235(0x01)
	bool EnableVolume; // 0x236(0x01)
	bool RuntimeStatic; // 0x237(0x01)
	float probeDistanceExponent; // 0x238(0x04)
	float probeIrradianceEncodingGamma; // 0x23c(0x04)
	float probeChangeThreshold; // 0x240(0x04)
	float probeBrightnessThreshold; // 0x244(0x04)
	float ProbeMinFrontfaceDistance; // 0x248(0x04)
	float ProbeBackfaceThreshold; // 0x24c(0x04)
	float LightMultiplier; // 0x250(0x04)
	float EmissiveMultiplier; // 0x254(0x04)
	float IrradianceScalar; // 0x258(0x04)
	bool SkyLight; // 0x25c(0x01)
	char pad_25D[0x3]; // 0x25d(0x03)
	struct FVector LastOrigin; // 0x260(0x0c)
	struct FIntVector ProbeScrollOffset; // 0x26c(0x0c)
	char pad_278[0xb8]; // 0x278(0xb8)

	void DDGIClearVolumes(); // Function RTXGI.DDGIVolumeComponent.DDGIClearVolumes // (Final|Exec|Native|Public) // @ game+0xf5c310
};

// Class RTXGI.RTXGIPluginSettings
// Size: 0x48 (Inherited: 0x38)
struct URTXGIPluginSettings : UDeveloperSettings {
	enum class EDDGIIrradianceBits IrradianceBits; // 0x38(0x01)
	enum class EDDGIDistanceBits DistanceBits; // 0x39(0x01)
	char pad_3A[0x2]; // 0x3a(0x02)
	float DebugProbeRadius; // 0x3c(0x04)
	int32_t ProbeUpdateRayBudget; // 0x40(0x04)
	char pad_44[0x4]; // 0x44(0x04)
};

