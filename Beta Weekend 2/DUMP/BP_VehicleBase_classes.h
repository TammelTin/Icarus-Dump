// BlueprintGeneratedClass BP_VehicleBase.BP_VehicleBase_C
// Size: 0x3ec (Inherited: 0x3b0)
struct ABP_VehicleBase_C : AVehicleBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct UBP_Weight_C* Weight; // 0x3b8(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x3c0(0x08)
	struct UAudioComponent* EngineAC; // 0x3c8(0x08)
	float UnflipLinearSpeed; // 0x3d0(0x04)
	float UnflipRotationSpeed; // 0x3d4(0x04)
	struct TArray<struct UBoxComponent*> WeightColliders; // 0x3d8(0x10)
	float ImpactForceScaledThreshold; // 0x3e8(0x04)

	struct TArray<struct FCriticalHitLocation> GetCriticalHitBones(); // Function BP_VehicleBase.BP_VehicleBase_C.GetCriticalHitBones // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	int32_t GetTargetAlertness(); // Function BP_VehicleBase.BP_VehicleBase_C.GetTargetAlertness // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FAIRelationshipsRowHandle GetRelationshipData(); // Function BP_VehicleBase.BP_VehicleBase_C.GetRelationshipData // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FVector GetTargetLocation(); // Function BP_VehicleBase.BP_VehicleBase_C.GetTargetLocation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsActorAlive(); // Function BP_VehicleBase.BP_VehicleBase_C.IsActorAlive // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsHidden(); // Function BP_VehicleBase.BP_VehicleBase_C.IsHidden // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void OnVehicleCollision(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_VehicleBase.BP_VehicleBase_C.OnVehicleCollision // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CreateWeightCollider(struct UVehicularComponent* VehicularComponent); // Function BP_VehicleBase.BP_VehicleBase_C.CreateWeightCollider // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RefreshWeightColliders(struct UVehicleComponentModel* VehicleComponentModel, struct UWheeledVehicleMovementComponent* VehicleMovement); // Function BP_VehicleBase.BP_VehicleBase_C.RefreshWeightColliders // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryUnflip(); // Function BP_VehicleBase.BP_VehicleBase_C.TryUnflip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HasDriver(bool HasDriver, struct AIcarusPlayerCharacter* PlayerCharacter); // Function BP_VehicleBase.BP_VehicleBase_C.HasDriver // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateEngineAudio(); // Function BP_VehicleBase.BP_VehicleBase_C.UpdateEngineAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateBrakelightMaterial(); // Function BP_VehicleBase.BP_VehicleBase_C.UpdateBrakelightMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateHeadlightMaterial(); // Function BP_VehicleBase.BP_VehicleBase_C.UpdateHeadlightMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_VehicleBase.BP_VehicleBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_VehicleBase.BP_VehicleBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_VehicleBase.BP_VehicleBase_C.BndEvt__VehicleMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleBase(int32_t EntryPoint); // Function BP_VehicleBase.BP_VehicleBase_C.ExecuteUbergraph_BP_VehicleBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

