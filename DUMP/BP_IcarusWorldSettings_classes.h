// BlueprintGeneratedClass BP_IcarusWorldSettings.BP_IcarusWorldSettings_C
// Size: 0x3e0 (Inherited: 0x3c8)
struct ABP_IcarusWorldSettings_C : AIcarusWorldSettings {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x3d0(0x08)
	struct AActor* AtmosphereController; // 0x3d8(0x08)

	void CreateAssets(); // Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.CreateAssets // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CaptureMap(); // Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.CaptureMap // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusWorldSettings(int32_t EntryPoint); // Function BP_IcarusWorldSettings.BP_IcarusWorldSettings_C.ExecuteUbergraph_BP_IcarusWorldSettings // (Final|UbergraphFunction) // @ game+0x1a05090
};

