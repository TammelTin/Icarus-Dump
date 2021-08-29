// WidgetBlueprintGeneratedClass W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C
// Size: 0x2e8 (Inherited: 0x2b5)
struct UW_ProjectionPopup_VoxelTooltip_C : UW_ProjectionWidget_C {
	char pad_2B5[0x3]; // 0x2b5(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2b8(0x08)
	struct UTextBlock* Name; // 0x2c0(0x08)
	struct UImage* OreIcon; // 0x2c8(0x08)
	struct UImage* Pointer; // 0x2d0(0x08)
	struct UProgressBar* ResourceBar; // 0x2d8(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2e0(0x08)

	enum class EViewTraceResultPriority W_ProjectionPopup_Building_AutoGenFunc(struct FViewTraceResult Result); // Function W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C.W_ProjectionPopup_Building_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisuals(); // Function W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C.UpdateVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWidget(); // Function W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C.TickWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_W_ProjectionPopup_VoxelTooltip(int32_t EntryPoint); // Function W_ProjectionPopup_VoxelTooltip.W_ProjectionPopup_VoxelTooltip_C.ExecuteUbergraph_W_ProjectionPopup_VoxelTooltip // (Final|UbergraphFunction) // @ game+0x1a05090
};

