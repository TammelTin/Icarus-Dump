// BlueprintGeneratedClass BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C
// Size: 0x23c (Inherited: 0x220)
struct ABP_FireInstance_RVTCapture_C : AActor {
	struct UStaticMeshComponent* SceneCaptureTarget; // 0x220(0x08)
	struct USceneCaptureComponent2D* SceneCaptureComponent2D; // 0x228(0x08)
	struct UProceduralMeshComponent* ProceduralMesh; // 0x230(0x08)
	int32_t test; // 0x238(0x04)

	void Capture(struct UConcaveHullMesh* ConcaveHull); // Function BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C.Capture // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_FireInstance_RVTCapture.BP_FireInstance_RVTCapture_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

