// BlueprintGeneratedClass BP_Light_Spotlight.BP_Light_Spotlight_C
// Size: 0x579 (Inherited: 0x550)
struct ABP_Light_Spotlight_C : ABP_DeployableBase_C {
	struct UStaticMeshComponent* SwivelTop; // 0x550(0x08)
	struct UStaticMeshComponent* RotatorBase; // 0x558(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x560(0x08)
	struct UStaticMeshComponent* Base; // 0x568(0x08)
	struct UStaticMeshComponent* Beam; // 0x570(0x08)
	bool LightActive; // 0x578(0x01)

	void OnRep_LightActive(); // Function BP_Light_Spotlight.BP_Light_Spotlight_C.OnRep_LightActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Light_Spotlight.BP_Light_Spotlight_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

