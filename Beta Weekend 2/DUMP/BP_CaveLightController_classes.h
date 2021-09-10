// BlueprintGeneratedClass BP_CaveLightController.BP_CaveLightController_C
// Size: 0x138 (Inherited: 0xb0)
struct UBP_CaveLightController_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	bool IntensityAdvanced; // 0xb8(0x01)
	char pad_B9[0x3]; // 0xb9(0x03)
	float IntensityOverride; // 0xbc(0x04)
	bool ColorAdvanced; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FLinearColor ColorOverride; // 0xc4(0x10)
	bool DirectionAdvanced; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	struct FRotator DirectionOverride; // 0xd8(0x0c)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct ABP_AtmosphereController_C* AtmosphereController; // 0xe8(0x08)
	float CurrentIntensity; // 0xf0(0x04)
	struct FRotator CurrentSunDirection; // 0xf4(0x0c)
	struct FLinearColor CurrentColour; // 0x100(0x10)
	float Time; // 0x110(0x04)
	int32_t StartHour; // 0x114(0x04)
	float StartMinute; // 0x118(0x04)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FMulticastInlineDelegate LightDetails; // 0x120(0x10)
	float EntranceFade; // 0x130(0x04)
	float Entrance; // 0x134(0x04)

	struct ABP_AtmosphereController_C* GetAtmosphereController(); // Function BP_CaveLightController.BP_CaveLightController_C.GetAtmosphereController // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void AtmosphereControllerInput(struct FRotator SunDirection, float Intensity, struct FLinearColor Color, float Entrance); // Function BP_CaveLightController.BP_CaveLightController_C.AtmosphereControllerInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SunLightDirection(struct FRotator SunDirection); // Function BP_CaveLightController.BP_CaveLightController_C.SunLightDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EventSetup(); // Function BP_CaveLightController.BP_CaveLightController_C.EventSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SunLightColor(struct FLinearColor Color, float Intensity, float CaveCover); // Function BP_CaveLightController.BP_CaveLightController_C.SunLightColor // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WeatherManTick(); // Function BP_CaveLightController.BP_CaveLightController_C.WeatherManTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_CaveLightController.BP_CaveLightController_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_CaveLightController(int32_t EntryPoint); // Function BP_CaveLightController.BP_CaveLightController_C.ExecuteUbergraph_BP_CaveLightController // (Final|UbergraphFunction) // @ game+0x1a38c80
	void LightDetails__DelegateSignature(float Intensity Out, struct FLinearColor Color Out, struct FRotator Sun Direction Out); // Function BP_CaveLightController.BP_CaveLightController_C.LightDetails__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

