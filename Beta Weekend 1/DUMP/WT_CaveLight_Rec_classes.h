// BlueprintGeneratedClass WT_CaveLight_Rec.WT_CaveLight_Rec_C
// Size: 0x258 (Inherited: 0x244)
struct AWT_CaveLight_Rec_C : AWT_CaveLightBase_C {
	char pad_244[0x4]; // 0x244(0x04)
	struct UArrowComponent* Arrow; // 0x248(0x08)
	struct URectLightComponent* RectLight; // 0x250(0x08)

	void Post(float SunIntensity, struct FRotator SunDirection, struct FLinearColor SunColor); // Function WT_CaveLight_Rec.WT_CaveLight_Rec_C.Post // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

