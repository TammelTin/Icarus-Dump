// BlueprintGeneratedClass BP_MachiningBench.BP_MachiningBench_C
// Size: 0x711 (Inherited: 0x6f0)
struct ABP_MachiningBench_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UStaticMeshComponent* SM_DEP_Bench_Machining_SHA; // 0x6f8(0x08)
	struct UPointLightComponent* PointLight_3; // 0x700(0x08)
	struct UPointLightComponent* PointLight; // 0x708(0x08)
	bool ActiveEffects; // 0x710(0x01)

	void OnRep_ActiveEffects(); // Function BP_MachiningBench.BP_MachiningBench_C.OnRep_ActiveEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnEnergyComponentStateChanged(bool IsActive); // Function BP_MachiningBench.BP_MachiningBench_C.OnEnergyComponentStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_MachiningBench.BP_MachiningBench_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_MachiningBench(int32_t EntryPoint); // Function BP_MachiningBench.BP_MachiningBench_C.ExecuteUbergraph_BP_MachiningBench // (Final|UbergraphFunction) // @ game+0x1a38c80
};

