// BlueprintGeneratedClass BP_Target.BP_Target_C
// Size: 0x5b0 (Inherited: 0x550)
struct ABP_Target_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UStaticMeshComponent* TargetPanel; // 0x558(0x08)
	struct UTextRenderComponent* Text_Lane; // 0x560(0x08)
	struct UTextRenderComponent* Text_Score; // 0x568(0x08)
	struct UPointLightComponent* TargetLight; // 0x570(0x08)
	struct USphereComponent* BullseyeSphere; // 0x578(0x08)
	struct UStaticMeshComponent* Sphere; // 0x580(0x08)
	struct UStaticMeshComponent* TargetSphere; // 0x588(0x08)
	float MinDistanceRequirement; // 0x590(0x04)
	char pad_594[0x4]; // 0x594(0x04)
	struct FString Lane; // 0x598(0x10)
	float HighScore; // 0x5a8(0x04)
	float DistanceShot; // 0x5ac(0x04)

	bool CanKillcam(); // Function BP_Target.BP_Target_C.CanKillcam // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GatherIntersections(struct AActor* Projectile, bool Debug, bool Return, struct TArray<struct FFCHCollisionStruct> Intersections); // Function BP_Target.BP_Target_C.GatherIntersections // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PredictMovement(float Time, bool Return); // Function BP_Target.BP_Target_C.PredictMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetPrediction(bool Return); // Function BP_Target.BP_Target_C.ResetPrediction // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetTargetHealth(bool Return, float Health); // Function BP_Target.BP_Target_C.GetTargetHealth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCHBounds(bool Return, struct UBoxComponent* Box); // Function BP_Target.BP_Target_C.GetCHBounds // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void 500mShotCheck(); // Function BP_Target.BP_Target_C.500mShotCheck // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateLightPosition(struct FVector position); // Function BP_Target.BP_Target_C.UpdateLightPosition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateScoreText(struct FString Name, float Distance); // Function BP_Target.BP_Target_C.UpdateScoreText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_Target.BP_Target_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Target.BP_Target_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TargetPanel_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Target.BP_Target_C.BndEvt__TargetPanel_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Target(int32_t EntryPoint); // Function BP_Target.BP_Target_C.ExecuteUbergraph_BP_Target // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

