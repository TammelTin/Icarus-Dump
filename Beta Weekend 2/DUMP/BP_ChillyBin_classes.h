// BlueprintGeneratedClass BP_ChillyBin.BP_ChillyBin_C
// Size: 0x570 (Inherited: 0x562)
struct ABP_ChillyBin_C : ABP_DeployableContainerBase_C {
	char pad_562[0x6]; // 0x562(0x06)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x568(0x08)

	void CheckAndUpdateStat(bool HasPreservationItem); // Function BP_ChillyBin.BP_ChillyBin_C.CheckAndUpdateStat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CheckForPreservationItem(struct UInventory* Inventory, struct FItemsStaticRowHandle ItemStaticRow); // Function BP_ChillyBin.BP_ChillyBin_C.CheckForPreservationItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_ChillyBin.BP_ChillyBin_C.ItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void itemremovedverbose(struct UInventory* Inventory, int32_t Location, struct FItemData Item); // Function BP_ChillyBin.BP_ChillyBin_C.itemremovedverbose // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ChillyBin(int32_t EntryPoint); // Function BP_ChillyBin.BP_ChillyBin_C.ExecuteUbergraph_BP_ChillyBin // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

