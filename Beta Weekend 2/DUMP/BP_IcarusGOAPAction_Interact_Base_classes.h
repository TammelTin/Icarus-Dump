// BlueprintGeneratedClass BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C
// Size: 0x98 (Inherited: 0x78)
struct UBP_IcarusGOAPAction_Interact_Base_C : UBP_IcarusGOAPAction_Base_C {
	struct FVector ProjectionExtent; // 0x78(0x0c)
	char pad_84[0x4]; // 0x84(0x04)
	struct ABP_GOAPInteractable_Base_C* InteractableClass; // 0x88(0x08)
	struct ABP_GOAPInteractable_Base_C* SpawnedNode; // 0x90(0x08)

	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SpawnDummyNode(struct AIcarusNPCGOAPController* ForController, struct FVector Spawn Transform Location, struct ABP_GOAPInteractable_Base_C* SpawnedNode); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.SpawnDummyNode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.PlanAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetInteractLocation(struct AIcarusNPCGOAPController* ForController, struct FVector OutLocation, bool Success); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.GetInteractLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool Execute(struct AIcarusNPCGOAPController* Controller, float Delta); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.Execute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Interact_Base.BP_IcarusGOAPAction_Interact_Base_C.IsInRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

