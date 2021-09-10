// BlueprintGeneratedClass BP_AISpawner.BP_AISpawner_C
// Size: 0x611 (Inherited: 0x3a8)
struct ABP_AISpawner_C : AAISpawner {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3a8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3b0(0x08)
	int32_t AmountToSpawn; // 0x3b8(0x04)
	char pad_3BC[0x4]; // 0x3bc(0x04)
	struct TArray<struct AActor*> SpawnedActors; // 0x3c0(0x10)
	float SpawnRadius; // 0x3d0(0x04)
	float MaxPlayerDistance; // 0x3d4(0x04)
	struct FVector SpawnLocation; // 0x3d8(0x0c)
	bool SpawningActivated; // 0x3e4(0x01)
	char pad_3E5[0x3]; // 0x3e5(0x03)
	struct TMap<struct APlayerController*, struct FActorArrayStruct> TetheredAIMap; // 0x3e8(0x50)
	struct APlayerController* NextTetherTarget; // 0x438(0x08)
	struct FActorArrayStruct CurrentTethers; // 0x440(0x10)
	struct TArray<struct AActor*> AIPendingCleanup; // 0x450(0x10)
	struct FTimerHandle TetherCleanupTimer; // 0x460(0x08)
	struct FRandomStream RandomStream; // 0x468(0x08)
	struct TArray<struct UObject*> StoredGameplayTextures; // 0x470(0x10)
	struct TArray<struct TSoftObjectPtr<UGameplayTexture>> HeatmapTextures; // 0x480(0x10)
	struct AIcarusNPCGOAPCharacter* SpawnedNPC; // 0x490(0x08)
	int32_t DefaultSpawnDensity; // 0x498(0x04)
	bool IsRunningSpawnEQS; // 0x49c(0x01)
	char pad_49D[0x3]; // 0x49d(0x03)
	struct TArray<struct AIcarusNPCGOAPCharacter*> SpawnedChildren; // 0x4a0(0x10)
	struct ABP_WeatherController_C* WeatherControllerRef; // 0x4b0(0x08)
	struct TMap<struct FBiomesRowHandle, int32_t> BiomePerceptionModifiers; // 0x4b8(0x50)
	struct FAISpawnConfigData Spawn Config; // 0x508(0x108)
	enum class EBPLogVerbosity LoggingVerbosity; // 0x610(0x01)

	void GetTetherDebugName(struct APlayerController* Tether, struct FName Name); // Function BP_AISpawner.BP_AISpawner_C.GetTetherDebugName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetTotalSpawnWeightForBiome(struct FBiomesRowHandle InBiome, int32_t TotalWeight); // Function BP_AISpawner.BP_AISpawner_C.GetTotalSpawnWeightForBiome // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetNearbyNPCs(struct FVector InOrigin, struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*> OutputNPCs); // Function BP_AISpawner.BP_AISpawner_C.GetNearbyNPCs // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetModifiedSpawnWeightForAI(struct FAISetupRowHandle InAIType, struct FVector AtLocation, int32_t OriginalWeight, int32_t ModifiedWeight); // Function BP_AISpawner.BP_AISpawner_C.GetModifiedSpawnWeightForAI // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSpawnConfig(struct FAISpawnConfigData SpawnConfig, bool Success); // Function BP_AISpawner.BP_AISpawner_C.GetSpawnConfig // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Debug Biome Perception Modifiers(); // Function BP_AISpawner.BP_AISpawner_C.Debug Biome Perception Modifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateBiomePerceptionModifiers(); // Function BP_AISpawner.BP_AISpawner_C.UpdateBiomePerceptionModifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSpawnDensityForLocation(struct FVector WorldLocation, int32_t Biome Spawn Density); // Function BP_AISpawner.BP_AISpawner_C.GetSpawnDensityForLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReorganiseCleanupQueue(); // Function BP_AISpawner.BP_AISpawner_C.ReorganiseCleanupQueue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetNumberOfAINearTarget(struct AActor* Target); // Function BP_AISpawner.BP_AISpawner_C.GetNumberOfAINearTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PickNewAIToSpawn(struct FVector AtLocation, struct FAISetupRowHandle Output, bool ValidSpawn); // Function BP_AISpawner.BP_AISpawner_C.PickNewAIToSpawn // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TetherActor(struct AActor* Actor, struct APlayerController* TetherTarget); // Function BP_AISpawner.BP_AISpawner_C.TetherActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CleanupDestroyedActors(); // Function BP_AISpawner.BP_AISpawner_C.CleanupDestroyedActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TrySpawn(); // Function BP_AISpawner.BP_AISpawner_C.TrySpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetNewTetherTarget(struct APlayerController* OutControllerTether); // Function BP_AISpawner.BP_AISpawner_C.GetNewTetherTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DebugDistances(); // Function BP_AISpawner.BP_AISpawner_C.DebugDistances // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindSpawnLocation(struct FVector Locaiton, bool Return); // Function BP_AISpawner.BP_AISpawner_C.FindSpawnLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckLocation(struct FVector Location, bool Found); // Function BP_AISpawner.BP_AISpawner_C.CheckLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckAIDistance(struct ABP_IcarusNPCGOAPCharacter_C* AI); // Function BP_AISpawner.BP_AISpawner_C.CheckAIDistance // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_2B8B2B624CE5F97DAE6892B799469007(struct UObject* Loaded); // Function BP_AISpawner.BP_AISpawner_C.OnLoaded_2B8B2B624CE5F97DAE6892B799469007 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_AISpawner.BP_AISpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void SpawnActor(); // Function BP_AISpawner.BP_AISpawner_C.SpawnActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DestroyedActorEvent(struct AActor* DestroyedActor); // Function BP_AISpawner.BP_AISpawner_C.DestroyedActorEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ValidateAndSpawn(); // Function BP_AISpawner.BP_AISpawner_C.ValidateAndSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EQSFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BP_AISpawner.BP_AISpawner_C.EQSFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryDestroyAI(); // Function BP_AISpawner.BP_AISpawner_C.TryDestroyAI // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnEQSComplete(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BP_AISpawner.BP_AISpawner_C.OnEQSComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnSeedUpdated(int32_t Seed); // Function BP_AISpawner.BP_AISpawner_C.OnSeedUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SpawnPointGenerationComplete(); // Function BP_AISpawner.BP_AISpawner_C.SpawnPointGenerationComplete // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void WeatherEventStarted(struct FBiomesRowHandle Biome, struct FWeatherEventsRowHandle Event); // Function BP_AISpawner.BP_AISpawner_C.WeatherEventStarted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WeatherEventCompleted(struct FBiomesRowHandle Biome, struct FWeatherEventsRowHandle Event); // Function BP_AISpawner.BP_AISpawner_C.WeatherEventCompleted // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBiomePerceptionUpdated(int32_t NewValue, struct FBiomesRowHandle Biome); // Function BP_AISpawner.BP_AISpawner_C.OnBiomePerceptionUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_AISpawner(int32_t EntryPoint); // Function BP_AISpawner.BP_AISpawner_C.ExecuteUbergraph_BP_AISpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

