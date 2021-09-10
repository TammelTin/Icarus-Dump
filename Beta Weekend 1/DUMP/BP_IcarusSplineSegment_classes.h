// BlueprintGeneratedClass BP_IcarusSplineSegment.BP_IcarusSplineSegment_C
// Size: 0x280 (Inherited: 0x200)
struct UBP_IcarusSplineSegment_C : USceneComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x200(0x08)
	struct FIcarusSplineMeshStruct RepSplineData; // 0x208(0x30)
	struct UMaterialInterface* RepFinalMaterial; // 0x238(0x08)
	struct UStaticMesh* RepMesh; // 0x240(0x08)
	bool Ghost; // 0x248(0x01)
	char pad_249[0x7]; // 0x249(0x07)
	struct UPrimitiveComponent* RepresentitiveComponent; // 0x250(0x08)
	struct UPrimitiveComponent* RepresentitiveClass; // 0x258(0x08)
	int32_t SegmentIndex; // 0x260(0x04)
	bool debug begin play finished; // 0x264(0x01)
	char pad_265[0x3]; // 0x265(0x03)
	struct UMaterialInterface* RepGhostMaterial; // 0x268(0x08)
	struct FVector RepOffset; // 0x270(0x0c)
	int32_t ChangableMaterialIndex; // 0x27c(0x04)

	void IsPointCloserToStart(struct FVector WorldLocationPoint, bool CloserToStart); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.IsPointCloserToStart // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepresentitiveComponent(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepresentitiveComponent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepFinalMaterial(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepFinalMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepGhostMaterial(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepGhostMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepOffset(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepOffset // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerSetStartAndEnd(struct FVector Start Pos, struct FVector Start Tan, struct FVector End Pos, struct FVector End Tan); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ServerSetStartAndEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Ghost(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_Ghost // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepMesh(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RepSplineData(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.OnRep_RepSplineData // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Init(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void async reinit(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.async reinit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusSplineSegment(int32_t EntryPoint); // Function BP_IcarusSplineSegment.BP_IcarusSplineSegment_C.ExecuteUbergraph_BP_IcarusSplineSegment // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

