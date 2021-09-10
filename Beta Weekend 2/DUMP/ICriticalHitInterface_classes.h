// BlueprintGeneratedClass ICriticalHitInterface.ICriticalHitInterface_C
// Size: 0x28 (Inherited: 0x28)
struct UICriticalHitInterface_C : UInterface {

	bool CanKillcam(); // Function ICriticalHitInterface.ICriticalHitInterface_C.CanKillcam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool Return, struct TArray<struct FFCHCollisionStruct> Intersections); // Function ICriticalHitInterface.ICriticalHitInterface_C.GatherIntersections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCHBounds(bool Return, struct UBoxComponent* Box); // Function ICriticalHitInterface.ICriticalHitInterface_C.GetCHBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTargetHealth(bool Return, float Health); // Function ICriticalHitInterface.ICriticalHitInterface_C.GetTargetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetPrediction(bool Return); // Function ICriticalHitInterface.ICriticalHitInterface_C.ResetPrediction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PredictMovement(float Time, bool Return); // Function ICriticalHitInterface.ICriticalHitInterface_C.PredictMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

