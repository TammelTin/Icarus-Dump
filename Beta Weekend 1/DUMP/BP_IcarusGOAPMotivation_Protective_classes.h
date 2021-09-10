// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C
// Size: 0x88 (Inherited: 0x60)
struct UBP_IcarusGOAPMotivation_Protective_C : UBP_IcarusGOAPMotivation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x60(0x08)
	struct AAITargetNode_C* TargetNodeRef; // 0x68(0x08)
	float DeltaThreat; // 0x70(0x04)
	char pad_74[0x4]; // 0x74(0x04)
	struct UCurveFloat* ThreatCurve; // 0x78(0x08)
	struct AActor* LastTargetActor; // 0x80(0x08)

	void SpawnTargetNode(struct AController* Controller, struct AAITargetNode_C* TargetNodeRef); // Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.SpawnTargetNode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.UpdateCost // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnMotivationTriggerEvent(struct AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger TriggeredEvent, bool bWasTriggered); // Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.OnMotivationTriggerEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective(int32_t EntryPoint); // Function BP_IcarusGOAPMotivation_Protective.BP_IcarusGOAPMotivation_Protective_C.ExecuteUbergraph_BP_IcarusGOAPMotivation_Protective // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

