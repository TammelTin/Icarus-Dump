// BlueprintGeneratedClass BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C
// Size: 0x88 (Inherited: 0x78)
struct UBP_IcarusGOAPAction_Rest_C : UBP_IcarusGOAPAction_Base_C {
	bool HaveDisabledSight; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct AIcarusNPCGOAPController* CachedControllerRef; // 0x80(0x08)

	bool ActionReset(bool Interrupted); // Function BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C.ActionReset // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetSightPerception(struct AAIController* Target); // Function BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C.ResetSightPerception // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool GOAPAnimNotify(struct FString NotifyName, struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C.GOAPAnimNotify // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ExecutionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_IcarusGOAPAction_Rest.BP_IcarusGOAPAction_Rest_C.ExecutionComplete // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

