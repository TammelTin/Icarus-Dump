// BlueprintGeneratedClass BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C
// Size: 0x494 (Inherited: 0x470)
struct ABP_IcarusNPCGOAPController_C : AIcarusNPCGOAPController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x470(0x08)
	struct UCurveFloat* ThreatOverDistanceCurve; // 0x478(0x08)
	float MaximumThreatRadius; // 0x480(0x04)
	bool GOAP Debugging; // 0x484(0x01)
	char pad_485[0x3]; // 0x485(0x03)
	struct UIcarusGOAPAIMemory* Memory; // 0x488(0x08)
	float BaseStealthThreatModifier; // 0x490(0x04)

	bool OnProcessedNoise(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.OnProcessedNoise // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool OnProcessedDamage(struct AActor* PerceivedActor, struct FAIStimulus EventStimulus); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.OnProcessedDamage // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool RecalculateGOAPState(); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.RecalculateGOAPState // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool MoveToAction(struct UIcarusGOAPAction* Action); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.MoveToAction // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetActorThreat(struct AActor* PerceivedActor, bool bIgnoreRelationships); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.GetActorThreat // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceivePossess(struct APawn* PossessedPawn); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.ReceivePossess // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusNPCGOAPController(int32_t EntryPoint); // Function BP_IcarusNPCGOAPController.BP_IcarusNPCGOAPController_C.ExecuteUbergraph_BP_IcarusNPCGOAPController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

