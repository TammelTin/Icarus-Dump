// BlueprintGeneratedClass BP_Flammable_Actor.BP_Flammable_Actor_C
// Size: 0x11d (Inherited: 0x100)
struct UBP_Flammable_Actor_C : UFlammableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)
	int32_t ModifierUID; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct UThermalComponent* ThermalComponent; // 0x110(0x08)
	float ModifierTime; // 0x118(0x04)
	bool PersistentFire; // 0x11c(0x01)

	bool CanPropagateToTarget(struct FFlammableTargetIgnite Target); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.CanPropagateToTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void TeardownCosmetics(); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.TeardownCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupCosmetics(); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.SetupCosmetics // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnModifierUpdated(struct UModifierStateComponent* Component, bool bRemoved); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnModifierUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnFlammableInstanceState_Combusting_Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnFlammableInstanceState_Combusting_Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Tick(struct UFlammableInstance* Instance, struct UFlammableState* State, float DeltaSeconds); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.OnFlammableInstanceState_Combusting_Tick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Flammable_Actor(int32_t EntryPoint); // Function BP_Flammable_Actor.BP_Flammable_Actor_C.ExecuteUbergraph_BP_Flammable_Actor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

