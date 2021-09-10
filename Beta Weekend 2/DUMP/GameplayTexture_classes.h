// Class GameplayTexture.GameplayTexture
// Size: 0x60 (Inherited: 0x28)
struct UGameplayTexture : UObject {
	struct TArray<struct FColor> TextureData; // 0x28(0x10)
	struct FIntPoint CachedResolution; // 0x38(0x08)
	struct UTexture2D* SourceTexture; // 0x40(0x08)
	struct FIntPoint Resolution; // 0x48(0x08)
	struct FVector2D BeginUV; // 0x50(0x08)
	struct FVector2D EndUV; // 0x58(0x08)

	struct UTexture2D* GetSourceTexture(); // Function GameplayTexture.GameplayTexture.GetSourceTexture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xa7c680
};

