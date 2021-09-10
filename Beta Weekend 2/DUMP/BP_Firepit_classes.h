// BlueprintGeneratedClass BP_Firepit.BP_Firepit_C
// Size: 0x781 (Inherited: 0x6f0)
struct ABP_Firepit_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UStaticMeshComponent* SM_DEP_FirePit_Firewood_Proxy; // 0x6f8(0x08)
	struct UNiagaraComponent* CampfireFX; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_CookingMeat; // 0x708(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full; // 0x710(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med; // 0x718(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low; // 0x720(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Full; // 0x728(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Low; // 0x730(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full; // 0x738(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Low; // 0x740(0x08)
	struct USceneComponent* RawMeat; // 0x748(0x08)
	struct USceneComponent* CookedMeats; // 0x750(0x08)
	struct USceneComponent* FuelSources; // 0x758(0x08)
	struct UPointLightComponent* PointLight_Shadow; // 0x760(0x08)
	struct UPointLightComponent* PointLight_Bloom; // 0x768(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x770(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x778(0x08)
	bool ActiveEffects; // 0x780(0x01)

	void OnRep_ActiveEffects(); // Function BP_Firepit.BP_Firepit_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_Firepit.BP_Firepit_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Firepit.BP_Firepit_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void DeactivateCampfire(); // Function BP_Firepit.BP_Firepit_C.DeactivateCampfire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_Firepit.BP_Firepit_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Firepit(int32_t EntryPoint); // Function BP_Firepit.BP_Firepit_C.ExecuteUbergraph_BP_Firepit // (Final|UbergraphFunction) // @ game+0x1a38c80
};

