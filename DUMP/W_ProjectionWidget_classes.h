// WidgetBlueprintGeneratedClass W_ProjectionWidget.W_ProjectionWidget_C
// Size: 0x2b5 (Inherited: 0x260)
struct UW_ProjectionWidget_C : UHuntingWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct FVector2D MinSize; // 0x268(0x08)
	struct FVector2D MaxSize; // 0x270(0x08)
	float SizeDistanceStart; // 0x278(0x04)
	float SizeDistanceEnd; // 0x27c(0x04)
	float OpacityDistanceStart; // 0x280(0x04)
	float OpacityDistanceEnd; // 0x284(0x04)
	struct UBP_UIProjectionComponent_C* ProjectionActor; // 0x288(0x08)
	struct FVector2D Alignment; // 0x290(0x08)
	struct FVector2D CachedSize; // 0x298(0x08)
	bool UseAutoSizing; // 0x2a0(0x01)
	char pad_2A1[0x3]; // 0x2a1(0x03)
	float MinAutoSize; // 0x2a4(0x04)
	float MaxAutoSize; // 0x2a8(0x04)
	bool UseScreenEdge; // 0x2ac(0x01)
	char pad_2AD[0x3]; // 0x2ad(0x03)
	float ScreenEdgeBuffer; // 0x2b0(0x04)
	bool IsAtEdge; // 0x2b4(0x01)

	void GetOverridePlacement(struct FVector2D Location, float ScaleAlpha); // Function W_ProjectionWidget.W_ProjectionWidget_C.GetOverridePlacement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ShouldUseOverride(); // Function W_ProjectionWidget.W_ProjectionWidget_C.ShouldUseOverride // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateEdgeScreen(bool AtEdge); // Function W_ProjectionWidget.W_ProjectionWidget_C.UpdateEdgeScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickEdgeScreen(struct FVector2D DirFromCentre); // Function W_ProjectionWidget.W_ProjectionWidget_C.TickEdgeScreen // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetProjectionActor(struct UBP_UIProjectionComponent_C* ProjectionActor); // Function W_ProjectionWidget.W_ProjectionWidget_C.SetProjectionActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function W_ProjectionWidget.W_ProjectionWidget_C.UpdateVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWidget(); // Function W_ProjectionWidget.W_ProjectionWidget_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function W_ProjectionWidget.W_ProjectionWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Set Scale(float Scale); // Function W_ProjectionWidget.W_ProjectionWidget_C.Set Scale // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionWidget(int32_t EntryPoint); // Function W_ProjectionWidget.W_ProjectionWidget_C.ExecuteUbergraph_W_ProjectionWidget // (Final|UbergraphFunction) // @ game+0x1a05090
};

