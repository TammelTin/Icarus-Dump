// BlueprintGeneratedClass BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C
// Size: 0x1c5 (Inherited: 0xb0)
struct UBP_PlayerEffectsComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_AtmosphereController_C* AtmosphereController; // 0xb8(0x08)
	struct ABP_FX_Snow_C* FxActorSnow; // 0xc0(0x08)
	struct ABP_FX_Rain_C* FxActorRain; // 0xc8(0x08)
	struct ABP_FX_DistantFog_C* FxDistantFog; // 0xd0(0x08)
	struct UNiagaraComponent* NFX_Motes; // 0xd8(0x08)
	struct UNiagaraComponent* NFX_StormCF; // 0xe0(0x08)
	struct UNiagaraComponent* NFX_StormDC; // 0xe8(0x08)
	struct UNiagaraComponent* NFX_StormAC; // 0xf0(0x08)
	struct UMaterialInstanceDynamic* PP_Mat_DebrisCF; // 0xf8(0x08)
	struct UMaterialInstanceDynamic* PP_Mat_DebrisAC; // 0x100(0x08)
	float LightningNext; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct TArray<struct UStaticMesh*> FxLightningMeshes; // 0x110(0x10)
	struct ABP_FX_ThunderStrike_C* FxStrikeActor; // 0x120(0x08)
	struct UPostProcessComponent* PP_Lightning; // 0x128(0x08)
	float FxStrikeIntensity; // 0x130(0x04)
	char pad_134[0x4]; // 0x134(0x04)
	struct ABP_IcarusPlayerCharacterSurvival_C* LocalPlayer; // 0x138(0x08)
	float DES_LastCheck; // 0x140(0x04)
	bool InWater; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float NextWaterWake; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct UNiagaraComponent* NFX_Rain; // 0x150(0x08)
	struct UPostProcessComponent* PP_RainDroplets; // 0x158(0x08)
	struct UNiagaraComponent* NFX_Snow; // 0x160(0x08)
	struct ABP_Fx_StormWall_C* FxActorStormWall; // 0x168(0x08)
	bool IsSheltered; // 0x170(0x01)
	bool LocalController; // 0x171(0x01)
	char pad_172[0x2]; // 0x172(0x02)
	float RainDropMultiplier; // 0x174(0x04)
	struct USceneCaptureComponent2D* ShelterSceneCapture; // 0x178(0x08)
	bool bStormWallActive; // 0x180(0x01)
	char pad_181[0x7]; // 0x181(0x07)
	struct ABP_FX_ShelterCapture_C* FxShelterCaptureActor; // 0x188(0x08)
	float FireIntensity; // 0x190(0x04)
	float FireIntensityLerpSpeed; // 0x194(0x04)
	float FireIntensityMaxDistance; // 0x198(0x04)
	float DesiredFireIntensity; // 0x19c(0x04)
	struct ABP_FX_LocalFogVolume_C* FxLocalFogVolume; // 0x1a0(0x08)
	struct UCurveFloat* CurveLocFogExtinction; // 0x1a8(0x08)
	float WeatherCullGridSize; // 0x1b0(0x04)
	char pad_1B4[0x4]; // 0x1b4(0x04)
	struct UCurveLinearColor* CurveLocFogColour; // 0x1b8(0x08)
	float WeatherCullGridTraceSize; // 0x1c0(0x04)
	bool Initialised; // 0x1c4(0x01)

	void Calculate Desired Fire Intensity(float DeltaSeconds); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Calculate Desired Fire Intensity // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Is Sheltered(bool Sheltered); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Is Sheltered // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CreateCosmeticLightningStrike(struct FVector StrikeLocation); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.CreateCosmeticLightningStrike // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FVector DES_TraceAroundPlayer(float FOV, float RangeMin, float RangeMax); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.DES_TraceAroundPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TickDynamicEmitterSystem(float Delta); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickDynamicEmitterSystem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickLightning(float DeltaSeconds); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickLightning // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Get Atmos Controller(struct ABP_AtmosphereController_C* Controller, bool Success); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Get Atmos Controller // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickFire(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitLocalFogVolume(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitLocalFogVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickLocalVolume(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickLocalVolume // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWeatherCaptureGrid(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickWeatherCaptureGrid // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TrackStormWall(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TrackStormWall // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickMiscFx(struct ABP_AtmosphereController_C* AtmosphereController); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickMiscFx // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickSnow(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickSnow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickStorms(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickStorms // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickRain(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickRain // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickWaterInteraction(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickWaterInteraction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitMiscFx(struct AIcarusPlayerCharacter* Character); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitMiscFx // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void InitStorms(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitStorms // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitDistantFog(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitDistantFog // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitSnow(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitSnow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitRain(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitRain // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitPostProcess(struct AIcarusPlayerCharacter* IcarusController); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitPostProcess // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickShelterCapture(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.TickShelterCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitShelterCapture(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.InitShelterCapture // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_PlayerEffectsComponent(int32_t EntryPoint); // Function BP_PlayerEffectsComponent.BP_PlayerEffectsComponent_C.ExecuteUbergraph_BP_PlayerEffectsComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

