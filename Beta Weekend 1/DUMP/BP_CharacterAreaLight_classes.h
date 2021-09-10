// BlueprintGeneratedClass BP_CharacterAreaLight.BP_CharacterAreaLight_C
// Size: 0x28c (Inherited: 0x220)
struct ABP_CharacterAreaLight_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct TArray<struct USpotLightComponent*> LightList; // 0x238(0x10)
	float Intensity; // 0x248(0x04)
	struct FLinearColor Color; // 0x24c(0x10)
	float FocalAngleOuter; // 0x25c(0x04)
	float FocalAngleInner; // 0x260(0x04)
	float AttenuationDistance; // 0x264(0x04)
	float LightWidth; // 0x268(0x04)
	float LightLength; // 0x26c(0x04)
	bool CastShadows; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t LightSamplesSquared; // 0x274(0x04)
	float SourceRadiusMult; // 0x278(0x04)
	float CenterOfInterestLength; // 0x27c(0x04)
	bool Enabled; // 0x280(0x01)
	struct FLightingChannels Channels; // 0x281(0x01)
	char pad_282[0x2]; // 0x282(0x02)
	float SoftRadius; // 0x284(0x04)
	float ShadowBias; // 0x288(0x04)

	void LightArraySetup(); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.LightArraySetup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateLightValues(); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.UpdateLightValues // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_CharacterAreaLight(int32_t EntryPoint); // Function BP_CharacterAreaLight.BP_CharacterAreaLight_C.ExecuteUbergraph_BP_CharacterAreaLight // (Final|UbergraphFunction) // @ game+0x1a05090
};

