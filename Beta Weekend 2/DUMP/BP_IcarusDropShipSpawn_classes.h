// BlueprintGeneratedClass BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C
// Size: 0x2f0 (Inherited: 0x2b8)
struct ABP_IcarusDropShipSpawn_C : AIcarusRocketSpawnBase {
	struct UStaticMeshComponent* SM_DS_Podhopper; // 0x2b8(0x08)
	struct UStaticMeshComponent* LocatorBeacon; // 0x2c0(0x08)
	struct USceneComponent* TempDPPosition; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	int32_t Group; // 0x2d8(0x04)
	bool ShowEditorLocator; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct TArray<struct FColor> GroupColor; // 0x2e0(0x10)

	int32_t GetGroupIndex(); // Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.GetGroupIndex // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_IcarusDropShipSpawn.BP_IcarusDropShipSpawn_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

