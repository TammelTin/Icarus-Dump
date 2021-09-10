// WidgetBlueprintGeneratedClass W_ProjectionPopup_Building.W_ProjectionPopup_Building_C
// Size: 0x2e0 (Inherited: 0x2b5)
struct UW_ProjectionPopup_Building_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UProgressBar* DurabilityBar; // 0x2c0(0x08)
	struct UTextBlock* Name; // 0x2c8(0x08)
	struct UImage* Pointer; // 0x2d0(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2d8(0x08)

	enum class EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult Result); // Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.W_ProjectionPopup_Building_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.UpdateVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void UpdateBuildingVisuals(); // Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.UpdateBuildingVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionPopup_Building(int32_t EntryPoint); // Function W_ProjectionPopup_Building.W_ProjectionPopup_Building_C.ExecuteUbergraph_W_ProjectionPopup_Building // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

