// BlueprintGeneratedClass BP_Deployable_Hab_OxygenFilter.BP_Deployable_Hab_OxygenFilter_C
// Size: 0x578 (Inherited: 0x569)
struct ABP_Deployable_Hab_OxygenFilter_C : ABP_HabDeployable_Base_C {
	char pad_569[0x7]; // 0x569(0x07)
	struct AHab_LightbulbSocket_C* Socket; // 0x570(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Deployable_Hab_OxygenFilter.BP_Deployable_Hab_OxygenFilter_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Pickup(struct AActor* Instigator, bool PickedUp); // Function BP_Deployable_Hab_OxygenFilter.BP_Deployable_Hab_OxygenFilter_C.Deployable_Pickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

