// BlueprintGeneratedClass BP_UIProjectionComponent_VoxelTooltip.BP_UIProjectionComponent_VoxelTooltip_C
// Size: 0x118 (Inherited: 0x104)
struct UBP_UIProjectionComponent_VoxelTooltip_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct AIcarusActor* CurrentActor; // 0x110(0x08)

	enum class EViewTraceResultPriority BP_UIProjectionComponent_Building_AutoGenFunc(struct FViewTraceResult Result); // Function BP_UIProjectionComponent_VoxelTooltip.BP_UIProjectionComponent_VoxelTooltip_C.BP_UIProjectionComponent_Building_AutoGenFunc // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetWidgetLocation(struct FVector Location); // Function BP_UIProjectionComponent_VoxelTooltip.BP_UIProjectionComponent_VoxelTooltip_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_VoxelTooltip.BP_UIProjectionComponent_VoxelTooltip_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_UIProjectionComponent_VoxelTooltip(int32_t EntryPoint); // Function BP_UIProjectionComponent_VoxelTooltip.BP_UIProjectionComponent_VoxelTooltip_C.ExecuteUbergraph_BP_UIProjectionComponent_VoxelTooltip // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

