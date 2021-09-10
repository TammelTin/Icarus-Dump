// BlueprintGeneratedClass BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_FX_LocalFogVolume_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Cube; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)

	void SetActivated(); // Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.SetActivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetDeactivated(); // Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.SetDeactivated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FX_LocalFogVolume(int32_t EntryPoint); // Function BP_FX_LocalFogVolume.BP_FX_LocalFogVolume_C.ExecuteUbergraph_BP_FX_LocalFogVolume // (Final|UbergraphFunction) // @ game+0x1a05090
};

