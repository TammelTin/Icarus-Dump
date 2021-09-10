// BlueprintGeneratedClass BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C
// Size: 0x2c0 (Inherited: 0x170)
struct UBP_PlayerEnvironmentalAudioComponent_C : UPlayerEnvironmentalAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x170(0x08)
	struct ABP_AtmosphereController_C* AtmosphereController; // 0x178(0x08)
	float AmbienceUpdateFrequency; // 0x180(0x04)
	struct FName FMODParamBiomeInfluence; // 0x184(0x08)
	char pad_18C[0x4]; // 0x18c(0x04)
	struct ABP_Cave_C* CaveOverride; // 0x190(0x08)
	struct TMap<struct FBiomesEnum, struct UFMODAudioComponent*> BiomeAmbiences; // 0x198(0x50)
	float BiomeInfluenceMinTolerance; // 0x1e8(0x04)
	int32_t ReflectionTraceIndex; // 0x1ec(0x04)
	struct TArray<float> ReflectionTraceResults; // 0x1f0(0x10)
	bool DebugBiomes; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FName FMODParamWind; // 0x204(0x08)
	struct FName FMODParamShelter; // 0x20c(0x08)
	float ReflectionTraceDistance; // 0x214(0x04)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x218(0x08)
	float LevelHeightScale; // 0x220(0x04)
	float ShelterRoomToneThreshold; // 0x224(0x04)
	struct UFMODAudioComponent* RoomToneAudioComponent; // 0x228(0x08)
	struct UFMODEvent* RoomToneFMODEvent; // 0x230(0x08)
	enum class EPhysicalSurface CurrentRoomToneSurface; // 0x238(0x01)
	char pad_239[0x7]; // 0x239(0x07)
	struct UFMODEvent* DistantThunderFMODEvent; // 0x240(0x08)
	struct UFMODEvent* SleepFMODEvent; // 0x248(0x08)
	struct UFMODEvent* SleepSnapshotFMODEvent; // 0x250(0x08)
	struct UCurveFloat* FireIntensityCurve; // 0x258(0x08)
	float MaxFireIntensity; // 0x260(0x04)
	char pad_264[0x4]; // 0x264(0x04)
	struct TMap<enum class EPhysicalSurface, float> SurfaceReflectionMultipliers; // 0x268(0x50)
	struct FFMODEventInstance SleepSnapshotFMODEventInstance; // 0x2b8(0x08)

	void PlaySleepAudio(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.PlaySleepAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetSleepSnapshotActive(bool Active); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.SetSleepSnapshotActive // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerAttachedSeatChanged(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.OnPlayerAttachedSeatChanged // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetCaveOverride(struct ACave* Actor); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.SetCaveOverride // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAmbienceInfluence(struct FBiomesEnum Biome, float Value); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.GetAmbienceInfluence // (Private|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayCosmeticThunderSound(struct FVector Location); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.PlayCosmeticThunderSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CacheSurfaceReflectionMultipliers(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.CacheSurfaceReflectionMultipliers // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetShelterTraceLocation(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.GetShelterTraceLocation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateShelterParameters(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.UpdateShelterParameters // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector GetFoliageTraceLocation(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.GetFoliageTraceLocation // (Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetFireIntensity(float Weighting, float Distance, float Intensity); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.GetFireIntensity // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateFireIntensity(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.UpdateFireIntensity // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSurfaceReflectionMultiplier(struct UPhysicalMaterial* PhysicalMaterial, float ReflectionMultiplier); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.GetSurfaceReflectionMultiplier // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateRoomTone(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.UpdateRoomTone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetGlobalWeatherParameters(float Time, float Rain, float Overcast, float Snow, float Sandstorm, float SnowStorm, float Thunder, float Debris, float Wind); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.SetGlobalWeatherParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetPlayerPositionParameters(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.SetPlayerPositionParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFoliageParameters(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.UpdateFoliageParameters // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void On Player Health Updated(struct UActorState* ActorState, float NewHealth); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.On Player Health Updated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TraceForReflections(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.TraceForReflections // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemoveBiomeAmbience(struct FBiomesEnum Biome); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.RemoveBiomeAmbience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddBiomeAmbience(struct FBiomesEnum Biome, float InitialInfluence); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.AddBiomeAmbience // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateBiomeAmbiences(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.UpdateBiomeAmbiences // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Environment Update(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.Environment Update // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void RemoveCaveOverride(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.RemoveCaveOverride // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.OnConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_PlayerEnvironmentalAudioComponent(int32_t EntryPoint); // Function BP_PlayerEnvironmentalAudioComponent.BP_PlayerEnvironmentalAudioComponent_C.ExecuteUbergraph_BP_PlayerEnvironmentalAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

