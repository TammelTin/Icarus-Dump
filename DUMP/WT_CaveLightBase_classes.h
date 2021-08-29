// BlueprintGeneratedClass WT_CaveLightBase.WT_CaveLightBase_C
// Size: 0x244 (Inherited: 0x220)
struct AWT_CaveLightBase_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* Scene; // 0x228(0x08)
	struct UBP_CaveLightController_C* CaveLightSetup; // 0x230(0x08)
	bool Track Sun; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float SunlightPercentage; // 0x23c(0x04)
	struct FColor Light Tint; // 0x240(0x04)

	void Post(float SunIntensity, struct FRotator SunDirection, struct FLinearColor SunColor); // Function WT_CaveLightBase.WT_CaveLightBase_C.Post // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function WT_CaveLightBase.WT_CaveLightBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void WeatherManTick(); // Function WT_CaveLightBase.WT_CaveLightBase_C.WeatherManTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LightDetails_Event_1(float Intensity Out, struct FLinearColor Color Out, struct FRotator Sun Direction Out); // Function WT_CaveLightBase.WT_CaveLightBase_C.LightDetails_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_WT_CaveLightBase(int32_t EntryPoint); // Function WT_CaveLightBase.WT_CaveLightBase_C.ExecuteUbergraph_WT_CaveLightBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

