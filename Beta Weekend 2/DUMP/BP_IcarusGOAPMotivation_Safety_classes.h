// BlueprintGeneratedClass BP_IcarusGOAPMotivation_Safety.BP_IcarusGOAPMotivation_Safety_C
// Size: 0x94 (Inherited: 0x60)
struct UBP_IcarusGOAPMotivation_Safety_C : UBP_IcarusGOAPMotivation_Base_C {
	struct TArray<struct AActor*> KnownSeenActors; // 0x60(0x10)
	struct TArray<struct AActor*> KnownHeardActors; // 0x70(0x10)
	struct UCurveFloat* DistanceCurve; // 0x80(0x08)
	int32_t CallCount; // 0x88(0x04)
	float TimeLastSafe; // 0x8c(0x04)
	float DeltaSafety; // 0x90(0x04)

	bool UpdateCost(float Delta, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPMotivation_Safety.BP_IcarusGOAPMotivation_Safety_C.UpdateCost // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

