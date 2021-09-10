// BlueprintGeneratedClass BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C
// Size: 0x310 (Inherited: 0x2a0)
struct ABP_IcarusRespawnShipSpawn_C : AIcarusActor {
	struct UStaticMeshComponent* SM_DS_Podhopper; // 0x2a0(0x08)
	struct UStaticMeshComponent* LocatorBeacon; // 0x2a8(0x08)
	struct USceneComponent* TempDPPosition; // 0x2b0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2b8(0x08)
	bool Assigned; // 0x2c0(0x01)
	char pad_2C1[0x3]; // 0x2c1(0x03)
	int32_t Group; // 0x2c4(0x04)
	bool ShowEditorLocator; // 0x2c8(0x01)
	char pad_2C9[0x7]; // 0x2c9(0x07)
	struct TArray<struct FColor> GroupColor; // 0x2d0(0x10)
	struct FString PlayerUID; // 0x2e0(0x10)
	bool DebugWithoutBackend; // 0x2f0(0x01)
	char pad_2F1[0x3]; // 0x2f1(0x03)
	float CoolDownTime; // 0x2f4(0x04)
	struct FBiomesRowHandle Biome; // 0x2f8(0x18)

	void UpdateBiomeValue(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UpdateBiomeValue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UnassignSpawn(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UnassignSpawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AssignSpawn(struct FString PlayerID); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.AssignSpawn // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_IcarusRespawnShipSpawn.BP_IcarusRespawnShipSpawn_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

