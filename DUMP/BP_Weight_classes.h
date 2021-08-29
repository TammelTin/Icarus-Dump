// BlueprintGeneratedClass BP_Weight.BP_Weight_C
// Size: 0x149 (Inherited: 0xf0)
struct UBP_Weight_C : UWeightComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xf0(0x08)
	struct TMap<struct UShapeComponent*, struct FActorArrayStruct> OnTopOf; // 0xf8(0x50)
	bool SpreadWeightToBuildingNeighbors; // 0x148(0x01)

	void RemoveWeightFromBuilding(struct AActor* Building, struct UShapeComponent* Shape); // Function BP_Weight.BP_Weight_C.RemoveWeightFromBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetWeight(struct UShapeComponent* Shape, float Weight); // Function BP_Weight.BP_Weight_C.GetWeight // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SendWeightToBuilding(struct AActor* Building, struct UShapeComponent* Shape); // Function BP_Weight.BP_Weight_C.SendWeightToBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BoundColliderEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Weight.BP_Weight_C.BoundColliderEndOverlap // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BoundColliderBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Weight.BP_Weight_C.BoundColliderBeginOverlap // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Init(); // Function BP_Weight.BP_Weight_C.Init // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Weight(int32_t EntryPoint); // Function BP_Weight.BP_Weight_C.ExecuteUbergraph_BP_Weight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

