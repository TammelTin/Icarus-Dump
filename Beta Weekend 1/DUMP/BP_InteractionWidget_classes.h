// BlueprintGeneratedClass BP_InteractionWidget.BP_InteractionWidget_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_InteractionWidget_C : AActor {
	struct URectLightComponent* RectLight; // 0x220(0x08)
	struct UWidgetComponent* DisplayWidget; // 0x228(0x08)
	struct UStaticMeshComponent* StaticMeshSlot; // 0x230(0x08)
	struct UWidgetComponent* InteractWidget; // 0x238(0x08)
	struct UStaticMesh* Static Mesh Select; // 0x240(0x08)

	void UpdateWidget(bool Interacting); // Function BP_InteractionWidget.BP_InteractionWidget_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_InteractionWidget.BP_InteractionWidget_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

