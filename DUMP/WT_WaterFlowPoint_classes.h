// BlueprintGeneratedClass WT_WaterFlowPoint.WT_WaterFlowPoint_C
// Size: 0x25c (Inherited: 0x220)
struct AWT_WaterFlowPoint_C : AActor {
	struct UArrowComponent* Arrow; // 0x220(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float FlowSpeed; // 0x238(0x04)
	float NormalFlatness; // 0x23c(0x04)
	float Clearness; // 0x240(0x04)
	float EdgeTaper; // 0x244(0x04)
	float EdgeNoise; // 0x248(0x04)
	float RapidsIntensity; // 0x24c(0x04)
	struct FVector2D Scale; // 0x250(0x08)
	float RotateRapids; // 0x258(0x04)

	void SetProperties(); // Function WT_WaterFlowPoint.WT_WaterFlowPoint_C.SetProperties // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function WT_WaterFlowPoint.WT_WaterFlowPoint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

