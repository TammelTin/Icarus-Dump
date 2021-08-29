// WidgetBlueprintGeneratedClass W_ProjectionInterface.W_ProjectionInterface_C
// Size: 0x2a4 (Inherited: 0x260)
struct UW_ProjectionInterface_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UCanvasPanel* ProjectionWidgetCanvas; // 0x268(0x08)
	struct TArray<struct UBP_UIProjectionComponent_C*> ProjectionActors; // 0x270(0x10)
	struct TArray<struct UW_ProjectionWidget_C*> ProjectionWidgets; // 0x280(0x10)
	struct TArray<struct UBP_UIProjectionComponent_C*> NearbyProjectionActors; // 0x290(0x10)
	int32_t MaxProjectionWidgets; // 0x2a0(0x04)

	bool ProjectionApproved(struct UBP_UIProjectionComponent_C* Component); // Function W_ProjectionInterface.W_ProjectionInterface_C.ProjectionApproved // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetPlayer(struct APawn* Player); // Function W_ProjectionInterface.W_ProjectionInterface_C.GetPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateNearbyProjectionActors(); // Function W_ProjectionInterface.W_ProjectionInterface_C.UpdateNearbyProjectionActors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWidgets(); // Function W_ProjectionInterface.W_ProjectionInterface_C.TickWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveProjectionWidget(struct UW_ProjectionWidget_C* Widget); // Function W_ProjectionInterface.W_ProjectionInterface_C.RemoveProjectionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateProjectionWidget(struct UHuntingWidget* Class, struct UW_ProjectionWidget_C* Return); // Function W_ProjectionInterface.W_ProjectionInterface_C.CreateProjectionWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddProjectionWidget(struct UBP_UIProjectionComponent_C* ProjectionActor); // Function W_ProjectionInterface.W_ProjectionInterface_C.AddProjectionWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateProjectionWidgets(); // Function W_ProjectionInterface.W_ProjectionInterface_C.UpdateProjectionWidgets // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function W_ProjectionInterface.W_ProjectionInterface_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function W_ProjectionInterface.W_ProjectionInterface_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionInterface(int32_t EntryPoint); // Function W_ProjectionInterface.W_ProjectionInterface_C.ExecuteUbergraph_W_ProjectionInterface // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

