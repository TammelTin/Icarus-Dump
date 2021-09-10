// BlueprintGeneratedClass BP_Deployable_Hab_Lightbulb.BP_Deployable_Hab_Lightbulb_C
// Size: 0x568 (Inherited: 0x559)
struct ABP_Deployable_Hab_Lightbulb_C : ABP_HabDeployable_Base_C {
	char pad_559[0x7]; // 0x559(0x07)
	struct AHab_LightbulbSocket_C* Socket; // 0x560(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Deployable_Hab_Lightbulb.BP_Deployable_Hab_Lightbulb_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Pickup(struct AActor* Instigator, bool PickedUp); // Function BP_Deployable_Hab_Lightbulb.BP_Deployable_Hab_Lightbulb_C.Deployable_Pickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

