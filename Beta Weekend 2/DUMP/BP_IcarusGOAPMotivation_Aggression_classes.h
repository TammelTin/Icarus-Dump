// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C
// Size: 0x88 (Inherited: 0x60)
struct UBP_IcarusGOAPMotivation_Aggression_C : UBP_IcarusGOAPMotivation_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x60(0x08)
	struct UCurveFloat* DistanceCurve; // 0x68(0x08)
	int32_t CallCount; // 0x70(0x04)
	float TimeLastSafe; // 0x74(0x04)
	struct AAITargetNode_C* TargetNodeRef; // 0x78(0x08)
	struct AActor* LastHostileTarget; // 0x80(0x08)

	void SpawnTargetNode(struct AController* Controller, struct AAITargetNode_C* TargetNode); // Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.SpawnTargetNode // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.UpdateCost // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnMotivationTriggerEvent(struct AIcarusNPCGOAPController* Controller, struct FGOAPMotivationTrigger TriggeredEvent, bool bWasTriggered); // Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.OnMotivationTriggerEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression(int32_t EntryPoint); // Function BP_IcarusGOAPMotivation_Aggression.BP_IcarusGOAPMotivation_Aggression_C.ExecuteUbergraph_BP_IcarusGOAPMotivation_Aggression // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

