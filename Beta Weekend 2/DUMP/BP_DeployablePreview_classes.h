// BlueprintGeneratedClass BP_DeployablePreview.BP_DeployablePreview_C
// Size: 0x274 (Inherited: 0x230)
struct ABP_DeployablePreview_C : AStaticMeshActor {
	struct UWidgetComponent* RotatorWidget; // 0x230(0x08)
	struct UBoxComponent* BoundsCollider; // 0x238(0x08)
	struct UStaticMesh* MeshRef; // 0x240(0x08)
	float WidgetDrawSize; // 0x248(0x04)
	enum class EWorldPlacementType PlacementType; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct FVector ExtentOffset; // 0x250(0x0c)
	struct FVector OriginOffset; // 0x25c(0x0c)
	struct FVector ExtentScale; // 0x268(0x0c)

	void ToggleRotationIndicator(bool Enabled, bool SnappingAvailable); // Function BP_DeployablePreview.BP_DeployablePreview_C.ToggleRotationIndicator // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_DeployablePreview.BP_DeployablePreview_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

