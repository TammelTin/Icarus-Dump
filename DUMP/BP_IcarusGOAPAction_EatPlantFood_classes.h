// BlueprintGeneratedClass BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C
// Size: 0xd0 (Inherited: 0x98)
struct UBP_IcarusGOAPAction_EatPlantFood_C : UBP_IcarusGOAPAction_Interact_Base_C {
	struct FTagQueriesRowHandle ValidFoodQuery; // 0x98(0x18)
	struct ABP_GOAPInteractable_FoodNode_C* SpawnedFoodNode; // 0xb0(0x08)
	int32_t Array Index; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct AFLODTile* Tile; // 0xc0(0x08)
	int32_t RecordIndex; // 0xc8(0x04)
	int32_t FLODInstanceIndex; // 0xcc(0x04)

	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C* SpawnedNode); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.SpawnDummyNode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector OutLocation, bool Success); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.GetInteractLocation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_EatPlantFood.BP_IcarusGOAPAction_EatPlantFood_C.ExecutionComplete // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

