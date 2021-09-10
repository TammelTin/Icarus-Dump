// WidgetBlueprintGeneratedClass IcarusCompassWaypoint.IcarusCompassWaypoint_C
// Size: 0x278 (Inherited: 0x260)
struct UIcarusCompassWaypoint_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_Waypoint; // 0x268(0x08)
	struct ABP_IcarusWaypointActor_C* LinkedWaypoint; // 0x270(0x08)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IcarusCompassWaypoint.IcarusCompassWaypoint_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function IcarusCompassWaypoint.IcarusCompassWaypoint_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StatsUpdated(); // Function IcarusCompassWaypoint.IcarusCompassWaypoint_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_IcarusCompassWaypoint(int32_t EntryPoint); // Function IcarusCompassWaypoint.IcarusCompassWaypoint_C.ExecuteUbergraph_IcarusCompassWaypoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

