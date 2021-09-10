// BlueprintGeneratedClass BP_AIFunctionLibrary.BP_AIFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_AIFunctionLibrary_C : UBlueprintFunctionLibrary {

	int32_t DetermineAILevelAtLocation(struct FVector SpawnLocation, struct FRandomStream RandomStream, struct UObject* __WorldContext); // Function BP_AIFunctionLibrary.BP_AIFunctionLibrary_C.DetermineAILevelAtLocation // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetProspectSpawnConfig(struct UObject* __WorldContext, struct FAISpawnConfigData SpawnConfig, bool Success); // Function BP_AIFunctionLibrary.BP_AIFunctionLibrary_C.GetProspectSpawnConfig // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetBlockingDurableActor(struct AActor* InFrontOf, float ForwardTraceDistance, struct UObject* __WorldContext, struct AActor* BlockingActor); // Function BP_AIFunctionLibrary.BP_AIFunctionLibrary_C.GetBlockingDurableActor // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateLastHostileStimuliLocation(struct AAIController* Controller, struct AActor* TargetActor, struct FVector OptionalOverrideLocation, float OnlyIfCloserThanExisting, struct UObject* __WorldContext); // Function BP_AIFunctionLibrary.BP_AIFunctionLibrary_C.UpdateLastHostileStimuliLocation // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

