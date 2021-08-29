// BlueprintGeneratedClass BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C
// Size: 0x88 (Inherited: 0x78)
struct UBP_IcarusGOAPAction_Melee_Attack_C : UBP_IcarusGOAPAction_Base_C {
	struct AActor* TargetActor; // 0x78(0x08)
	struct AAITargetNode_C* TargetNodeRef; // 0x80(0x08)

	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool UpdateCost(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.UpdateCost // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsInRange(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.IsInRange // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool PlanAction(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.PlanAction // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CheckContextualPreconditions(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Melee_Attack.BP_IcarusGOAPAction_Melee_Attack_C.CheckContextualPreconditions // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
};

