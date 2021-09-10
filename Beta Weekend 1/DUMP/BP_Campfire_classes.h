// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
// Size: 0x789 (Inherited: 0x700)
struct ABP_Campfire_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x700(0x08)
	struct UNiagaraComponent* CampfireFX; // 0x708(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_CookingMeat; // 0x710(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full; // 0x718(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med; // 0x720(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low; // 0x728(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Full; // 0x730(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Low; // 0x738(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full; // 0x740(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Low; // 0x748(0x08)
	struct USceneComponent* RawMeat; // 0x750(0x08)
	struct USceneComponent* CookedMeats; // 0x758(0x08)
	struct USceneComponent* FuelSources; // 0x760(0x08)
	struct UPointLightComponent* PointLight_Shadow; // 0x768(0x08)
	struct UPointLightComponent* PointLight_Bloom; // 0x770(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x778(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x780(0x08)
	bool ActiveEffects; // 0x788(0x01)

	void OnRep_ActiveEffects(); // Function BP_Campfire.BP_Campfire_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_Campfire.BP_Campfire_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Campfire.BP_Campfire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__FireSettingCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Campfire.BP_Campfire_C.BndEvt__FireSettingCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void DeactivateCampfire(); // Function BP_Campfire.BP_Campfire_C.DeactivateCampfire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_Campfire.BP_Campfire_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Campfire(int32_t EntryPoint); // Function BP_Campfire.BP_Campfire_C.ExecuteUbergraph_BP_Campfire // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

