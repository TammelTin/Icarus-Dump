// BlueprintGeneratedClass BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C
// Size: 0x120 (Inherited: 0xe8)
struct UBP_Interactable_RadialMenu_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AActor* LastInstigator; // 0xf0(0x08)
	struct AIcarusPlayerCharacter* Current_Player; // 0xf8(0x08)
	struct FRadialMenuDataRowHandle RadialOptions; // 0x100(0x18)
	struct UContextMenuWidget* CurrentRadialMenu; // 0x118(0x08)

	void GetContextMenuItems(struct TArray<struct FContextMenuItemData> MenuItems); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.GetContextMenuItems // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetContextMenuInfo(struct FText MenuName, struct UTexture2D* MenuIcon); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.GetContextMenuInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void RadialMenuClosed(enum class ERadialOptions Option, struct AIcarusPlayerCharacter* PlayerCharacter); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.RadialMenuClosed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void MenuItemSelected(struct FName ItemActionId, int32_t ItemPayload); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.MenuItemSelected // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_RadialMenu(int32_t EntryPoint); // Function BP_Interactable_RadialMenu.BP_Interactable_RadialMenu_C.ExecuteUbergraph_BP_Interactable_RadialMenu // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

