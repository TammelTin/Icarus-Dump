// BlueprintGeneratedClass BP_Part_BTM_MK1.BP_Part_BTM_MK1_C
// Size: 0x445 (Inherited: 0x422)
struct ABP_Part_BTM_MK1_C : ABP_PartBase_C {
	char pad_422[0x6]; // 0x422(0x06)
	struct UNiagaraComponent* FxTakeOffThruster; // 0x428(0x08)
	struct UNiagaraComponent* FxLandingThruster; // 0x430(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x438(0x08)
	bool EngineActive; // 0x440(0x01)
	bool EngineAudioActive; // 0x441(0x01)
	bool FeetDeployed; // 0x442(0x01)
	bool LandingThrusterFX; // 0x443(0x01)
	bool TakeoffThrusterFX; // 0x444(0x01)

	void OnRep_TakeoffThrusterFX(); // Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.OnRep_TakeoffThrusterFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_LandingThrusterFX(); // Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.OnRep_LandingThrusterFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TriggerEvent(struct FDropShipActionsEnum Actions); // Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.TriggerEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetMesh(struct UPrimitiveComponent* Mesh); // Function BP_Part_BTM_MK1.BP_Part_BTM_MK1_C.GetMesh // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
};

