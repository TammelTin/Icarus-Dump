// BlueprintGeneratedClass BP_StatLibrary.BP_StatLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_StatLibrary_C : UBlueprintFunctionLibrary {

	void DualActorStatCheck(struct AActor* Actor1, struct FStatsEnum Stat1, struct AActor* Actor2, struct FStatsEnum Stat2, struct UObject* __WorldContext, bool BothActors have Stats); // Function BP_StatLibrary.BP_StatLibrary_C.DualActorStatCheck // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasAllBoolStatCheck(struct AActor* Actor, struct TArray<struct FItemsStaticEnum> Stat, struct UObject* __WorldContext, bool HasAllStats); // Function BP_StatLibrary.BP_StatLibrary_C.HasAllBoolStatCheck // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasAnyBoolStatCheck(struct AActor* Actor, struct TArray<struct FStatsEnum> Stat, struct UObject* __WorldContext, bool HasSomeStats); // Function BP_StatLibrary.BP_StatLibrary_C.HasAnyBoolStatCheck // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BoolStatCheck(struct AActor* Actor, struct FStatsEnum Stat, struct UObject* __WorldContext, bool HasStat); // Function BP_StatLibrary.BP_StatLibrary_C.BoolStatCheck // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

