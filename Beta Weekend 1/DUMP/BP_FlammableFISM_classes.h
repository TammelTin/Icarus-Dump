// BlueprintGeneratedClass BP_FlammableFISM.BP_FlammableFISM_C
// Size: 0x3a0 (Inherited: 0x348)
struct UBP_FlammableFISM_C : UFlammableFISM {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct TMap<int32_t, struct UNiagaraComponent*> FoliageEmbersNiagaraSystems; // 0x350(0x50)

	void CombustedEnter(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.CombustedEnter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CombustingExit(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingExit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CombustingEnter(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.CombustingEnter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnReplacedInstanceCombusted(struct FFLODInstanceID NewInstance, struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnReplacedInstanceCombusted // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryReplaceInstanceCombusted(struct UFlammableInstanceFLOD* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.TryReplaceInstanceCombusted // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceState_Combusted_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusted_Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FlammableFISM.BP_FlammableFISM_C.OnFlammableInstanceState_Combusting_Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FlammableFISM(int32_t EntryPoint); // Function BP_FlammableFISM.BP_FlammableFISM_C.ExecuteUbergraph_BP_FlammableFISM // (Final|UbergraphFunction) // @ game+0x1a05090
};

