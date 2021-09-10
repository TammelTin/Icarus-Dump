// WidgetBlueprintGeneratedClass IcarusCompassWidget.IcarusCompassWidget_C
// Size: 0x2b0 (Inherited: 0x260)
struct UIcarusCompassWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UOverlay* CompassContainer; // 0x268(0x08)
	struct UImage* CompassFrame; // 0x270(0x08)
	struct UOverlay* CompassOverlay; // 0x278(0x08)
	struct UImage* DialImageWidget; // 0x280(0x08)
	struct URetainerBox* RetainerBox_EdgeTransparency; // 0x288(0x08)
	struct UMaterialInstanceDynamic* Dynamic Mat; // 0x290(0x08)
	struct UIcarusCompassWaypoint_C* CompassWaypointWidgets; // 0x298(0x08)
	struct TArray<struct UIcarusCompassWaypoint_C*> AddedWaypointWidgets; // 0x2a0(0x10)

	void RemoveWaypoint(); // Function IcarusCompassWidget.IcarusCompassWidget_C.RemoveWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddWaypoint(struct ABP_IcarusWaypointActor_C* New waypoint); // Function IcarusCompassWidget.IcarusCompassWidget_C.AddWaypoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function IcarusCompassWidget.IcarusCompassWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IcarusCompassWidget.IcarusCompassWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StatsUpdated(); // Function IcarusCompassWidget.IcarusCompassWidget_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_IcarusCompassWidget(int32_t EntryPoint); // Function IcarusCompassWidget.IcarusCompassWidget_C.ExecuteUbergraph_IcarusCompassWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

