// BlueprintGeneratedClass BP_Oxite_Dissolver.BP_Oxite_Dissolver_C
// Size: 0x718 (Inherited: 0x6f0)
struct ABP_Oxite_Dissolver_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Sulfur; // 0x6f8(0x08)
	struct USkeletalMeshComponent* SK_DEP_Oxite_Dissolver_Door_Oxite; // 0x700(0x08)
	bool ActiveEffects; // 0x708(0x01)
	char pad_709[0x7]; // 0x709(0x07)
	struct FTimerHandle ActiveEventTimer; // 0x710(0x08)

	void FillEffect(); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.FillEffect // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ActiveEffects(); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnProcessorStateChanged(bool bIsActive); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.OnProcessorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Oxite_Dissolver(int32_t EntryPoint); // Function BP_Oxite_Dissolver.BP_Oxite_Dissolver_C.ExecuteUbergraph_BP_Oxite_Dissolver // (Final|UbergraphFunction) // @ game+0x1a38c80
};

