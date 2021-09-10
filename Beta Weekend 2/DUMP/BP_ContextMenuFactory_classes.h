// BlueprintGeneratedClass BP_ContextMenuFactory.BP_ContextMenuFactory_C
// Size: 0x270 (Inherited: 0x238)
struct ABP_ContextMenuFactory_C : AContextMenuFactory {
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct UUMG_ContextMenu_List_C* ContextMenuClass; // 0x240(0x08)
	struct UUMG_ContextMenu_Radial_C* RadialMenuClass; // 0x248(0x08)
	struct FText ContextMenuName; // 0x250(0x18)
	struct UTexture2D* ContextMenuIcon; // 0x268(0x08)

	void ShouldShow(bool ShouldShow); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShouldShow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct UContextMenuWidget* ShowAsRadialMenu(); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsRadialMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct UContextMenuWidget* ShowAsContextMenu(struct FVector2D ScreenPosition); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.ShowAsContextMenu // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetContextMenuData(struct FText Name, struct UTexture2D* Icon); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.SetContextMenuData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FinaliseMenu(struct UUMG_ContextMenu_Base_C* MenuClass, struct FVector2D ScreenPosition, struct UUMG_ContextMenu_Base_C* ContextMenu); // Function BP_ContextMenuFactory.BP_ContextMenuFactory_C.FinaliseMenu // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

