// BlueprintGeneratedClass BP_IcarusSplinePoint.BP_IcarusSplinePoint_C
// Size: 0x530 (Inherited: 0x4d0)
struct UBP_IcarusSplinePoint_C : UStaticMeshComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4d0(0x08)
	struct UStaticMesh* RepMesh; // 0x4d8(0x08)
	struct UMaterialInterface* RepMaterial; // 0x4e0(0x08)
	char pad_4E8[0x8]; // 0x4e8(0x08)
	struct FTransform RepTrans; // 0x4f0(0x30)
	bool Ghost; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct UMaterialInterface* GhostMaterial; // 0x528(0x08)

	void OnRep_Ghost(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_Ghost // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_GhostMaterial(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_GhostMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RepTrans(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepTrans // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RepMaterial(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_RepMesh(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.OnRep_RepMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Async ReInit(); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.Async ReInit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusSplinePoint(int32_t EntryPoint); // Function BP_IcarusSplinePoint.BP_IcarusSplinePoint_C.ExecuteUbergraph_BP_IcarusSplinePoint // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

