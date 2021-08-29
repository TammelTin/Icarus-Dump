// BlueprintGeneratedClass BP_Fabricator.BP_Fabricator_C
// Size: 0x719 (Inherited: 0x700)
struct ABP_Fabricator_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Fabricator_SHA; // 0x708(0x08)
	struct UPointLightComponent* PointLight; // 0x710(0x08)
	bool ActiveEffects; // 0x718(0x01)

	void OnRep_ActiveEffects(); // Function BP_Fabricator.BP_Fabricator_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Fabricator.BP_Fabricator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorComponentStateChanged(bool IsActive); // Function BP_Fabricator.BP_Fabricator_C.OnGeneratorComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnProcessorStateChanged(bool bIsActive); // Function BP_Fabricator.BP_Fabricator_C.OnProcessorStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Fabricator(int32_t EntryPoint); // Function BP_Fabricator.BP_Fabricator_C.ExecuteUbergraph_BP_Fabricator // (Final|UbergraphFunction) // @ game+0x1a05090
};

