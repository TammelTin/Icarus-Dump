// BlueprintGeneratedClass BP_IcarusGameModeFunctionLibrary.BP_IcarusGameModeFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_IcarusGameModeFunctionLibrary_C : UBlueprintFunctionLibrary {

	void FindMetaSpawnByBiomeAndDistance(struct TArray<struct ABP_IcarusMetaSpawn_C*> MetaSpawns, struct FMetaSpawn MetaSpawnDescription, struct FVector AveragePlayerStartLocation, struct UObject* __WorldContext, struct TArray<struct ABP_IcarusMetaSpawn_C*> ValidCandidates); // Function BP_IcarusGameModeFunctionLibrary.BP_IcarusGameModeFunctionLibrary_C.FindMetaSpawnByBiomeAndDistance // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindMetaSpawnByName(struct TArray<struct ABP_IcarusMetaSpawn_C*> MetaSpawns, struct FMetaSpawn MetaSpawnDescription, struct UObject* __WorldContext, struct ABP_IcarusMetaSpawn_C* MetaSpawn); // Function BP_IcarusGameModeFunctionLibrary.BP_IcarusGameModeFunctionLibrary_C.FindMetaSpawnByName // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PickMetaSpawns(struct FIcarusProspect Prospect, struct FVector AveragePlayerStartLocation, bool AllowDuplicateSelections, struct UObject* __WorldContext, struct TMap<int32_t, struct ABP_IcarusMetaSpawn_C*> MetaSpawns, struct TArray<struct ABP_IcarusMetaSpawn_C*> ValidCandidates1, struct TArray<int32_t> NewCandidateStartIndexs1); // Function BP_IcarusGameModeFunctionLibrary.BP_IcarusGameModeFunctionLibrary_C.PickMetaSpawns // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

