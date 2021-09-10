// BlueprintGeneratedClass BP_Refrigerator.BP_Refrigerator_C
// Size: 0x580 (Inherited: 0x572)
struct ABP_Refrigerator_C : ABP_DeployableContainerBase_C {
	char pad_572[0x6]; // 0x572(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x578(0x08)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Refrigerator.BP_Refrigerator_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multicast_DoorAnimation(); // Function BP_Refrigerator.BP_Refrigerator_C.Multicast_DoorAnimation // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Refrigerator(int32_t EntryPoint); // Function BP_Refrigerator.BP_Refrigerator_C.ExecuteUbergraph_BP_Refrigerator // (Final|UbergraphFunction) // @ game+0x1a05090
};

