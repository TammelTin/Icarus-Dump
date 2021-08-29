// BlueprintGeneratedClass BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C
// Size: 0x128 (Inherited: 0x110)
struct UBP_Interactable_DetachDeploy_LargeDeployable_C : UBP_Interactable_Pickup_Item_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct ABP_DeployableBase_C* Deployable; // 0x118(0x08)
	struct AIcarusItem* HeldDeployable; // 0x120(0x08)

	void OnDestroyFocusedDeployable(struct AActor* DestroyedActor); // Function BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C.OnDestroyFocusedDeployable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Pickup Item(bool PickedUp); // Function BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C.Pickup Item // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_DetachDeploy_LargeDeployable(int32_t EntryPoint); // Function BP_Interactable_DetachDeploy_LargeDeployable.BP_Interactable_DetachDeploy_LargeDeployable_C.ExecuteUbergraph_BP_Interactable_DetachDeploy_LargeDeployable // (Final|UbergraphFunction) // @ game+0x1a05090
};

