// BlueprintGeneratedClass BP_DestructibleMeshActor.BP_DestructibleMeshActor_C
// Size: 0x240 (Inherited: 0x220)
struct ABP_DestructibleMeshActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDestructibleComponent* Destructible; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x238(0x08)

	void ReceiveBeginPlay(); // Function BP_DestructibleMeshActor.BP_DestructibleMeshActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_DestructibleMeshActor(int32_t EntryPoint); // Function BP_DestructibleMeshActor.BP_DestructibleMeshActor_C.ExecuteUbergraph_BP_DestructibleMeshActor // (Final|UbergraphFunction) // @ game+0x1a38c80
};

