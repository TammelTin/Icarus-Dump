// BlueprintGeneratedClass BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C
// Size: 0x2e8 (Inherited: 0x2d8)
struct UBP_ActionableBehaviour_Building_C : UBP_ActionableBehaviour_Radial_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct FTimerHandle ReloadTimer; // 0x2e0(0x08)

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData> MenuItems); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.GetContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReloadHeld(); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.ReloadHeld // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void MenuItemSelected(struct FName ItemIdentifier, int32_t ItemPayload); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.MenuItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OpenRadialMenu(); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.OpenRadialMenu // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnContextMenuSegmentHighlightChanged(struct UUMG_ContextMenu_Radial_Item_C* Segment); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.OnContextMenuSegmentHighlightChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Building(int32_t EntryPoint); // Function BP_ActionableBehaviour_Building.BP_ActionableBehaviour_Building_C.ExecuteUbergraph_BP_ActionableBehaviour_Building // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

