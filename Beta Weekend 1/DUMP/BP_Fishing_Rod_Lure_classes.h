// BlueprintGeneratedClass BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C
// Size: 0x2f0 (Inherited: 0x2a0)
struct ABP_Fishing_Rod_Lure_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	struct UBP_BaitComponent_C* BP_BaitComponent; // 0x2b0(0x08)
	struct USceneComponent* Scene; // 0x2b8(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x2c0(0x08)
	struct UStaticMeshComponent* Mesh; // 0x2c8(0x08)
	bool Casted; // 0x2d0(0x01)
	char pad_2D1[0x3]; // 0x2d1(0x03)
	struct FVector LaunchVelocity; // 0x2d4(0x0c)
	struct ABP_SkeletalItem_Fishing_Rod_C* Rod; // 0x2e0(0x08)
	struct ABP_FishBase_C* FishRef; // 0x2e8(0x08)

	void CheckOverlappingFish(); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.CheckOverlappingFish // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FishDetatched(enum class EFishDetatchReason Reason); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.FishDetatched // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DetachFish(); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.DetachFish // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateOverlap(); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.UpdateOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TakeFish(struct ABP_FishBase_C* Fish, bool Success); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.TakeFish // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Casted(); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.OnRep_Casted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFishingRod(struct ABP_SkeletalItem_Fishing_Rod_C* FishingRod); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.GetFishingRod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.BndEvt__Mesh_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__BP_BaitComponent_K2Node_ComponentBoundEvent_2_FishTaken__DelegateSignature(struct ABP_FishBase_C* Fish); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.BndEvt__BP_BaitComponent_K2Node_ComponentBoundEvent_2_FishTaken__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Fishing_Rod_Lure(int32_t EntryPoint); // Function BP_Fishing_Rod_Lure.BP_Fishing_Rod_Lure_C.ExecuteUbergraph_BP_Fishing_Rod_Lure // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

