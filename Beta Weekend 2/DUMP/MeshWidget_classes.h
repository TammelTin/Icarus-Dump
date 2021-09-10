// Class MeshWidget.MeshWidget
// Size: 0x140 (Inherited: 0x108)
struct UMeshWidget : UWidget {
	char pad_108[0x8]; // 0x108(0x08)
	struct FMulticastInlineDelegate OnRequestMeshInstanceUpdate; // 0x110(0x10)
	char pad_120[0x20]; // 0x120(0x20)

	void UpdatePerInstanceBuffer(int32_t MeshId, struct TArray<struct FVector4> Data); // Function MeshWidget.MeshWidget.UpdatePerInstanceBuffer // (Final|Native|Public|BlueprintCallable) // @ game+0xa7ed50
	void UpdateMeshInstance(int32_t MeshId, int32_t InstanceId, struct FMeshInstanceData NewData); // Function MeshWidget.MeshWidget.UpdateMeshInstance // (Final|Native|Public|BlueprintCallable) // @ game+0xa7ec10
	struct FGeometry GetCachedAllottedGeometry(); // Function MeshWidget.MeshWidget.GetCachedAllottedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa7ebb0
	void EnableInstancing(int32_t MeshId, int32_t InstanceCount); // Function MeshWidget.MeshWidget.EnableInstancing // (Final|Native|Public|BlueprintCallable) // @ game+0xa7eae0
	struct UMaterialInstanceDynamic* ConvertToMaterialInstanceDynamic(int32_t MeshId); // Function MeshWidget.MeshWidget.ConvertToMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable) // @ game+0xa7ea40
	void ClearRuns(int32_t NumRuns); // Function MeshWidget.MeshWidget.ClearRuns // (Final|Native|Public|BlueprintCallable) // @ game+0xa7e9b0
	void AddRenderRun(int32_t InMeshIndex, int32_t InInstanceOffset, int32_t InNumInstances); // Function MeshWidget.MeshWidget.AddRenderRun // (Final|Native|Public|BlueprintCallable) // @ game+0xa7e8a0
	int32_t AddMeshWithInstancing(struct USlateVectorArtData* InMeshData, int32_t InstanceCount); // Function MeshWidget.MeshWidget.AddMeshWithInstancing // (Final|Native|Public|BlueprintCallable) // @ game+0xa7e7d0
	int32_t AddMesh(struct USlateVectorArtData* InMeshData); // Function MeshWidget.MeshWidget.AddMesh // (Final|Native|Public|BlueprintCallable) // @ game+0xa7e730
};

