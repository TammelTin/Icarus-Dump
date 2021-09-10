// Class VirtualHeightfieldMesh.HeightfieldMinMaxTexture
// Size: 0x60 (Inherited: 0x28)
struct UHeightfieldMinMaxTexture : UObject {
	struct UTexture2D* Texture; // 0x28(0x08)
	int32_t MaxCPULevels; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FVector2D> TextureData; // 0x38(0x10)
	struct FIntPoint TextureDataSize; // 0x48(0x08)
	struct TArray<int32_t> TextureDataMips; // 0x50(0x10)
};

// Class VirtualHeightfieldMesh.MaterialExpressionHeightfieldMinMaxTexture
// Size: 0x48 (Inherited: 0x40)
struct UMaterialExpressionHeightfieldMinMaxTexture : UMaterialExpression {
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0x40(0x08)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMesh
// Size: 0x228 (Inherited: 0x220)
struct AVirtualHeightfieldMesh : AActor {
	struct UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent; // 0x220(0x08)
};

// Class VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent
// Size: 0x4c0 (Inherited: 0x440)
struct UVirtualHeightfieldMeshComponent : UPrimitiveComponent {
	struct TSoftObjectPtr<ARuntimeVirtualTextureVolume> VirtualTexture; // 0x440(0x28)
	struct ARuntimeVirtualTextureVolume* VirtualTextureRef; // 0x468(0x08)
	struct UObject* VirtualTextureThumbnail; // 0x470(0x08)
	bool bCopyBoundsButton; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UHeightfieldMinMaxTexture* MinMaxTexture; // 0x480(0x08)
	int32_t NumMinMaxTextureBuildLevels; // 0x488(0x04)
	bool bBuildMinMaxTextureButton; // 0x48c(0x01)
	char pad_48D[0x3]; // 0x48d(0x03)
	struct UMaterialInterface* Material; // 0x490(0x08)
	float Lod0ScreenSize; // 0x498(0x04)
	float Lod0Distribution; // 0x49c(0x04)
	float LodDistribution; // 0x4a0(0x04)
	int32_t NumSubdivisionLods; // 0x4a4(0x04)
	int32_t NumTailLods; // 0x4a8(0x04)
	int32_t NumOcclusionLods; // 0x4ac(0x04)
	bool bHiddenInEditor; // 0x4b0(0x01)
	char pad_4B1[0xf]; // 0x4b1(0x0f)

	void GatherHideFlags(bool InOutHidePrimitivesInEditor, bool InOutHidePrimitivesInGame); // Function VirtualHeightfieldMesh.VirtualHeightfieldMeshComponent.GatherHideFlags // (Final|Native|Protected|HasOutParms|Const) // @ game+0xaef020
};

