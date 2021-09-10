// BlueprintGeneratedClass BP_Campfire.BP_Campfire_C
// Size: 0x779 (Inherited: 0x6f0)
struct ABP_Campfire_C : ABP_ProcessorBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x6f0(0x08)
	struct UNiagaraComponent* CampfireFX; // 0x6f8(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_CookingMeat; // 0x700(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Full; // 0x708(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Med; // 0x710(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Cooked_Low; // 0x718(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Full; // 0x720(0x08)
	struct UStaticMeshComponent* SM_DEP_Camfire_Sticks_Low; // 0x728(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Full; // 0x730(0x08)
	struct UStaticMeshComponent* SM_DEP_Campfire_Wood_Low; // 0x738(0x08)
	struct USceneComponent* RawMeat; // 0x740(0x08)
	struct USceneComponent* CookedMeats; // 0x748(0x08)
	struct USceneComponent* FuelSources; // 0x750(0x08)
	struct UPointLightComponent* PointLight_Shadow; // 0x758(0x08)
	struct UPointLightComponent* PointLight_Bloom; // 0x760(0x08)
	struct UFMODAudioComponent* FMOD_Fire_Audio; // 0x768(0x08)
	struct UCapsuleComponent* FireSettingCapsule; // 0x770(0x08)
	bool ActiveEffects; // 0x778(0x01)

	void OnRep_ActiveEffects(); // Function BP_Campfire.BP_Campfire_C.OnRep_ActiveEffects // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_Campfire.BP_Campfire_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Campfire.BP_Campfire_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void DeactivateCampfire(); // Function BP_Campfire.BP_Campfire_C.DeactivateCampfire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnGeneratorActiveStateUpdated(bool IsActive); // Function BP_Campfire.BP_Campfire_C.OnGeneratorActiveStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Campfire(int32_t EntryPoint); // Function BP_Campfire.BP_Campfire_C.ExecuteUbergraph_BP_Campfire // (Final|UbergraphFunction) // @ game+0x1a38c80
};

