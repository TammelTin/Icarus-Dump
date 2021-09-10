// BlueprintGeneratedClass BP_InteractableRiver.BP_InteractableRiver_C
// Size: 0x340 (Inherited: 0x2d0)
struct ABP_InteractableRiver_C : ARiver {
	struct UHighlightableComponent* Highlightable; // 0x2d0(0x08)
	struct UBP_RiverAudioComponent_C* RiverAudio; // 0x2d8(0x08)
	struct UInteractableComponent* Interactable; // 0x2e0(0x08)
	struct USplineComponent* Spline; // 0x2e8(0x08)
	struct USceneComponent* Scene; // 0x2f0(0x08)
	struct TArray<struct FFRiverSplineSetup> List; // 0x2f8(0x10)
	bool ReverseFlow; // 0x308(0x01)
	char pad_309[0x7]; // 0x309(0x07)
	struct TArray<struct FFBasicSplinePoint> LeftSplinePoints; // 0x310(0x10)
	struct TArray<struct FFBasicSplinePoint> RightSplinePoints; // 0x320(0x10)
	struct USplineComponent* LeftEdgeSpline; // 0x330(0x08)
	struct USplineComponent* RightEdgeSpline; // 0x338(0x08)

	void EdgeSplinesAreValid(bool Valid); // Function BP_InteractableRiver.BP_InteractableRiver_C.EdgeSplinesAreValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void AddEdgeSplinePoint(struct USplineComponent* Spline, struct FVector Location, struct FRotator Rotation, enum class ESplinePointType Type); // Function BP_InteractableRiver.BP_InteractableRiver_C.AddEdgeSplinePoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FinaliseEdgeSplines(); // Function BP_InteractableRiver.BP_InteractableRiver_C.FinaliseEdgeSplines // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateEdgeSplines(); // Function BP_InteractableRiver.BP_InteractableRiver_C.CreateEdgeSplines // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OverlapEnd(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_InteractableRiver.BP_InteractableRiver_C.OverlapEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OverlapStart(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_InteractableRiver.BP_InteractableRiver_C.OverlapStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_InteractableRiver.BP_InteractableRiver_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

