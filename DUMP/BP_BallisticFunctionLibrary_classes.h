// BlueprintGeneratedClass BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_BallisticFunctionLibrary_C : UBlueprintFunctionLibrary {

	void GetClosestBoneAlongProjectilePrediction(struct FPredictProjectilePathResult InPredictionData, struct AActor* InActor, struct UObject* __WorldContext, struct FName HitBone, struct UPrimitiveComponent* HitComponent); // Function BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C.GetClosestBoneAlongProjectilePrediction // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PredictProjectileDamage(struct AActor* Weapon, struct AActor* Defender, struct FHitResult ProjectileHit, bool KillCam, struct UObject* __WorldContext, float OutDamage); // Function BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C.PredictProjectileDamage // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateCriticalHitResult(struct FHitResult InPredictedHit, struct FName CriticalHitBone, struct UObject* __WorldContext, struct FHitResult OutCriticalHit); // Function BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C.CreateCriticalHitResult // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	struct UBallisticPoolManager* GetBallisticPoolManager(struct UObject* __WorldContext); // Function BP_BallisticFunctionLibrary.BP_BallisticFunctionLibrary_C.GetBallisticPoolManager // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

