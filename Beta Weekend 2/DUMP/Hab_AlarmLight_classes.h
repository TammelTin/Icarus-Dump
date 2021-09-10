// BlueprintGeneratedClass Hab_AlarmLight.Hab_AlarmLight_C
// Size: 0x2d9 (Inherited: 0x2a0)
struct AHab_AlarmLight_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UAudioComponent* Audio; // 0x2a8(0x08)
	struct USpotLightComponent* SpotLight1; // 0x2b0(0x08)
	struct USpotLightComponent* SpotLight; // 0x2b8(0x08)
	struct UStaticMeshComponent* SpinnyBit; // 0x2c0(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x2c8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2d0(0x08)
	bool Active; // 0x2d8(0x01)

	void OnRep_Active(); // Function Hab_AlarmLight.Hab_AlarmLight_C.OnRep_Active // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function Hab_AlarmLight.Hab_AlarmLight_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_Hab_AlarmLight(int32_t EntryPoint); // Function Hab_AlarmLight.Hab_AlarmLight_C.ExecuteUbergraph_Hab_AlarmLight // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

