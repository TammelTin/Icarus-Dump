// Class CableComponent.CableActor
// Size: 0x228 (Inherited: 0x220)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x220(0x08)
};

// Class CableComponent.CableComponent
// Size: 0x500 (Inherited: 0x470)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x468(0x01)
	bool bAttachEnd; // 0x469(0x01)
	struct FComponentReference AttachEndTo; // 0x470(0x28)
	struct FName AttachEndToSocketName; // 0x498(0x08)
	struct FVector EndLocation; // 0x4a0(0x0c)
	float CableLength; // 0x4ac(0x04)
	int32_t NumSegments; // 0x4b0(0x04)
	float SubstepTime; // 0x4b4(0x04)
	int32_t SolverIterations; // 0x4b8(0x04)
	bool bEnableStiffness; // 0x4bc(0x01)
	bool bUseSubstepping; // 0x4bd(0x01)
	bool bSkipCableUpdateWhenNotVisible; // 0x4be(0x01)
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4bf(0x01)
	bool bEnableCollision; // 0x4c0(0x01)
	char pad_4C3[0x1]; // 0x4c3(0x01)
	float CollisionFriction; // 0x4c4(0x04)
	struct FVector CableForce; // 0x4c8(0x0c)
	float CableGravityScale; // 0x4d4(0x04)
	float CableWidth; // 0x4d8(0x04)
	int32_t NumSides; // 0x4dc(0x04)
	float TileMaterial; // 0x4e0(0x04)
	char pad_4E4[0x1c]; // 0x4e4(0x1c)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x111c000
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // @ game+0x111bef0
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x111be40
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x111be10
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x111bde0
};

