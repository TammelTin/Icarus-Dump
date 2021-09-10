// BlueprintGeneratedClass WT_CaveLight_SpotLight.WT_CaveLight_SpotLight_C
// Size: 0x268 (Inherited: 0x244)
struct AWT_CaveLight_SpotLight_C : AWT_CaveLightBase_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x248(0x08)
	struct UArrowComponent* Arrow; // 0x250(0x08)
	struct USpotLightComponent* SpotLight; // 0x258(0x08)
	struct ULightComponent* Light; // 0x260(0x08)

	void Post(float SunIntensity, struct FRotator SunDirection, struct FLinearColor SunColor); // Function WT_CaveLight_SpotLight.WT_CaveLight_SpotLight_C.Post // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function WT_CaveLight_SpotLight.WT_CaveLight_SpotLight_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_WT_CaveLight_SpotLight(int32_t EntryPoint); // Function WT_CaveLight_SpotLight.WT_CaveLight_SpotLight_C.ExecuteUbergraph_WT_CaveLight_SpotLight // (Final|UbergraphFunction) // @ game+0x1a05090
};

