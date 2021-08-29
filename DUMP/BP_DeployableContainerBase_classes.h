// BlueprintGeneratedClass BP_DeployableContainerBase.BP_DeployableContainerBase_C
// Size: 0x572 (Inherited: 0x560)
struct ABP_DeployableContainerBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UUMG_IcarusLinkedActorPanel_C* WidgetClassToOpen; // 0x568(0x08)
	bool ShowStoreAll; // 0x570(0x01)
	bool ShowTakeAll; // 0x571(0x01)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBecomeInteractedWith(); // Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNoLongerInteractedWith(); // Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DeployableContainerBase(int32_t EntryPoint); // Function BP_DeployableContainerBase.BP_DeployableContainerBase_C.ExecuteUbergraph_BP_DeployableContainerBase // (Final|UbergraphFunction) // @ game+0x1a05090
};

