// BlueprintGeneratedClass BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C
// Size: 0x588 (Inherited: 0x569)
struct ABP_Deployable_Hab_PrintCanister_C : ABP_HabDeployable_Base_C {
	char pad_569[0x7]; // 0x569(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x570(0x08)
	struct AHab_LightbulbSocket_C* Socket; // 0x578(0x08)
	struct UMaterialInstanceDynamic* CanisterFillMaterial; // 0x580(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Pickup(struct AActor* Instigator, bool PickedUp); // Function BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C.Deployable_Pickup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void UpdateHealthValue(struct UActorState* ActorState, float NewHealth); // Function BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C.UpdateHealthValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Deployable_Hab_PrintCanister(int32_t EntryPoint); // Function BP_Deployable_Hab_PrintCanister.BP_Deployable_Hab_PrintCanister_C.ExecuteUbergraph_BP_Deployable_Hab_PrintCanister // (Final|UbergraphFunction) // @ game+0x1a05090
};

