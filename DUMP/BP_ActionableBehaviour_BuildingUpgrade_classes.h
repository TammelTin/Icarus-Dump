// BlueprintGeneratedClass BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C
// Size: 0x2e1 (Inherited: 0x2d8)
struct UBP_ActionableBehaviour_BuildingUpgrade_C : UBP_ActionableBehaviour_Radial_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	enum class EBuildingResourceType SelectedResource; // 0x2e0(0x01)

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData> MenuItems); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.GetContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReplaceBuilding(struct ABP_Building_Base_C* BuildingToReplace, enum class EBuildingResourceType ResourceType); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ReplaceBuilding // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SwapBuilding(); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.SwapBuilding // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.MenuItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade(int32_t EntryPoint); // Function BP_ActionableBehaviour_BuildingUpgrade.BP_ActionableBehaviour_BuildingUpgrade_C.ExecuteUbergraph_BP_ActionableBehaviour_BuildingUpgrade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

