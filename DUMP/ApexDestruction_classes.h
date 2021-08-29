// Class ApexDestruction.DestructibleActor
// Size: 0x238 (Inherited: 0x220)
struct ADestructibleActor : AActor {
	struct UDestructibleComponent* DestructibleComponent; // 0x220(0x08)
	struct FMulticastInlineDelegate OnActorFracture; // 0x228(0x10)
};

// Class ApexDestruction.DestructibleComponent
// Size: 0x7f0 (Inherited: 0x690)
struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x690(0x01)
	char pad_690_1 : 7; // 0x690(0x01)
	char pad_691[0x7]; // 0x691(0x07)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x698(0x10)
	bool bEnableHardSleeping; // 0x6a8(0x01)
	char pad_6A9[0x3]; // 0x6a9(0x03)
	float LargeChunkThreshold; // 0x6ac(0x04)
	struct FName FracturedChunkCollisionProfile; // 0x6b0(0x08)
	char pad_6B8[0x10]; // 0x6b8(0x10)
	struct FMulticastInlineDelegate OnComponentFracture; // 0x6c8(0x10)
	char pad_6D8[0x118]; // 0x6d8(0x118)

	void SetDestructibleMesh(struct UDestructibleMesh* NewMesh); // Function ApexDestruction.DestructibleComponent.SetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7f6a10
	struct UDestructibleMesh* GetDestructibleMesh(); // Function ApexDestruction.DestructibleComponent.GetDestructibleMesh // (Final|Native|Public|BlueprintCallable) // @ game+0x7f69e0
	void ApplyRadiusDamage(float BaseDamage, struct FVector HurtOrigin, float DamageRadius, float ImpulseStrength, bool bFullDamage); // Function ApexDestruction.DestructibleComponent.ApplyRadiusDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7f6820
	void ApplyDamage(float DamageAmount, struct FVector HitLocation, struct FVector ImpulseDir, float ImpulseStrength); // Function ApexDestruction.DestructibleComponent.ApplyDamage // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x7f66a0
};

// Class ApexDestruction.DestructibleFractureSettings
// Size: 0xb8 (Inherited: 0x28)
struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28(0x04)
	struct FFractureMaterial FractureMaterialDesc; // 0x2c(0x24)
	int32_t RandomSeed; // 0x50(0x04)
	char pad_54[0x4]; // 0x54(0x04)
	struct TArray<struct FVector> VoronoiSites; // 0x58(0x10)
	int32_t OriginalSubmeshCount; // 0x68(0x04)
	char pad_6C[0x4]; // 0x6c(0x04)
	struct TArray<struct UMaterialInterface*> Materials; // 0x70(0x10)
	struct TArray<struct FDestructibleChunkParameters> ChunkParameters; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// Class ApexDestruction.DestructibleMesh
// Size: 0x438 (Inherited: 0x398)
struct UDestructibleMesh : USkeletalMesh {
	struct FDestructibleParameters DefaultDestructibleParameters; // 0x398(0x88)
	struct TArray<struct FFractureEffect> FractureEffects; // 0x420(0x10)
	char pad_430[0x8]; // 0x430(0x08)
};

