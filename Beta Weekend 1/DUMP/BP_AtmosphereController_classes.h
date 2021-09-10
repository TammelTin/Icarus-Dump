// BlueprintGeneratedClass BP_AtmosphereController.BP_AtmosphereController_C
// Size: 0x66c (Inherited: 0x2a0)
struct ABP_AtmosphereController_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* SM_PlanetCard6; // 0x2a8(0x08)
	struct UStaticMeshComponent* SM_PlanetCard5; // 0x2b0(0x08)
	struct UStaticMeshComponent* SM_PlanetCard4; // 0x2b8(0x08)
	struct UStaticMeshComponent* SM_PlanetCard3; // 0x2c0(0x08)
	struct UStaticMeshComponent* SM_PlanetCard2; // 0x2c8(0x08)
	struct USceneComponent* Scene1; // 0x2d0(0x08)
	struct UStaticMeshComponent* SM_PlanetCard1; // 0x2d8(0x08)
	struct UStaticMeshComponent* SM_PlanetCard; // 0x2e0(0x08)
	struct USceneComponent* Scene; // 0x2e8(0x08)
	struct UPostProcessComponent* PostProcess_Fire; // 0x2f0(0x08)
	struct UStaticMeshComponent* Sphere; // 0x2f8(0x08)
	struct UBP_CaveLightController_C* BP_CaveLightController; // 0x300(0x08)
	struct UPostProcessComponent* PostProcess_SandStorm; // 0x308(0x08)
	struct UVolumetricCloudComponent* VolumetricCloud; // 0x310(0x08)
	struct USkyAtmosphereComponent* SkyAtmosphere; // 0x318(0x08)
	struct UPostProcessComponent* PostProcess_Base; // 0x320(0x08)
	struct UStaticMeshComponent* Skysphere; // 0x328(0x08)
	struct UDirectionalLightComponent* DirectionalLightMoon; // 0x330(0x08)
	struct USceneComponent* MoonOffset; // 0x338(0x08)
	struct UPostProcessComponent* PostProcess_WL; // 0x340(0x08)
	struct UPostProcessComponent* PostProcess_AC; // 0x348(0x08)
	struct UPostProcessComponent* PostProcess_DC; // 0x350(0x08)
	struct UPostProcessComponent* PostProcess_LC; // 0x358(0x08)
	struct UPostProcessComponent* PostProcess_CF; // 0x360(0x08)
	struct USceneComponent* Moon; // 0x368(0x08)
	struct UDirectionalLightComponent* DirectionalLight; // 0x370(0x08)
	struct UExponentialHeightFogComponent* ExponentialHeightFog; // 0x378(0x08)
	struct USkyLightComponent* SkyLight; // 0x380(0x08)
	struct UChildActorComponent* WindDirectionalSource; // 0x388(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x390(0x08)
	int32_t StartHour; // 0x398(0x04)
	float StartMinute; // 0x39c(0x04)
	float SkylightUpdateSpeed; // 0x3a0(0x04)
	bool TickSkylightUpdate; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UCurveFloat* CurveWeatherWind; // 0x3a8(0x08)
	struct FTimerHandle UpdateSkylightHandle; // 0x3b0(0x08)
	bool Enabled; // 0x3b8(0x01)
	char pad_3B9[0x3]; // 0x3b9(0x03)
	float SnowcapHeight; // 0x3bc(0x04)
	float SunRoll; // 0x3c0(0x04)
	float BiomeInfluenceCF; // 0x3c4(0x04)
	float BiomeInfluenceLC; // 0x3c8(0x04)
	float BiomeInfluenceDC; // 0x3cc(0x04)
	float BiomeInfluenceAC; // 0x3d0(0x04)
	float BiomeInfluenceWL; // 0x3d4(0x04)
	float DampnessAmount; // 0x3d8(0x04)
	float RainAmountCF; // 0x3dc(0x04)
	float RainAmountLC; // 0x3e0(0x04)
	float RainAmountDC; // 0x3e4(0x04)
	float RainAmountAC; // 0x3e8(0x04)
	float RainAmountWL; // 0x3ec(0x04)
	float StormAmountCF; // 0x3f0(0x04)
	float StormAmountLC; // 0x3f4(0x04)
	float StormAmountDC; // 0x3f8(0x04)
	float StormAmountAC; // 0x3fc(0x04)
	float StormAmountWL; // 0x400(0x04)
	bool Debug_Wind; // 0x404(0x01)
	enum class EBiomes CurrentBiome; // 0x405(0x01)
	char pad_406[0x2]; // 0x406(0x02)
	float TransitionValue; // 0x408(0x04)
	bool SpineTransition; // 0x40c(0x01)
	char pad_40D[0x3]; // 0x40d(0x03)
	struct FTimerHandle TransitionTimeoutHandle; // 0x410(0x08)
	float BiomeInfluenceCave; // 0x418(0x04)
	char pad_41C[0x4]; // 0x41c(0x04)
	struct UMaterialInstanceDynamic* SkyMaterialInstance; // 0x420(0x08)
	struct UCurveFloat* CurveNightSky; // 0x428(0x08)
	float FogOffset; // 0x430(0x04)
	float SunDirection; // 0x434(0x04)
	struct UCurveFloat* CurveSunIntensity; // 0x438(0x08)
	struct UCurveFloat* CurveSkylightIntensity; // 0x440(0x08)
	struct UCurveLinearColor* CurveSunColour; // 0x448(0x08)
	float Debug_SkylightIntensity; // 0x450(0x04)
	bool AutoTransition; // 0x454(0x01)
	char pad_455[0x3]; // 0x455(0x03)
	struct UCurveFloat* TimeScaleCurve; // 0x458(0x08)
	float TimeOfDay; // 0x460(0x04)
	float TimeScale; // 0x464(0x04)
	struct FLinearColor Debug_FogColour; // 0x468(0x10)
	float Debug_FogDensity; // 0x478(0x04)
	float MoonRoll; // 0x47c(0x04)
	float MoonIntensity; // 0x480(0x04)
	float FogHeight; // 0x484(0x04)
	struct UCurveFloat* CurveMoonIntensity; // 0x488(0x08)
	float WeatherVal_Rain; // 0x490(0x04)
	float WeatherVal_SandStorm; // 0x494(0x04)
	float WeatherVal_Snow; // 0x498(0x04)
	float WeatherVal_Cloudy; // 0x49c(0x04)
	float WeatherVal_Thunder; // 0x4a0(0x04)
	char pad_4A4[0x4]; // 0x4a4(0x04)
	struct UMaterialInstanceDynamic* DynamicCloudMaterial; // 0x4a8(0x08)
	struct FColor CONT_FogTint_CF; // 0x4b0(0x04)
	struct FColor CONT_FogTint_AC; // 0x4b4(0x04)
	struct FColor CONT_FogTint_DC; // 0x4b8(0x04)
	struct FColor CONT_FogTint_Cave; // 0x4bc(0x04)
	struct FColor CONT_FogTint_LC; // 0x4c0(0x04)
	struct FColor CONT_FogTint_WL; // 0x4c4(0x04)
	struct FColor CONT_FogTintNight_CF; // 0x4c8(0x04)
	struct FColor CONT_FogTintNight_AC; // 0x4cc(0x04)
	struct FColor CONT_FogTintNight_DC; // 0x4d0(0x04)
	struct FColor CONT_FogTintNight_LC; // 0x4d4(0x04)
	struct FColor CONT_FogTintNight_WL; // 0x4d8(0x04)
	struct FColor CONT_FogTintNight_Cave; // 0x4dc(0x04)
	float CONT_SunIntensity_CF; // 0x4e0(0x04)
	float CONT_SunIntensity_LC; // 0x4e4(0x04)
	float CONT_SunIntensity_DC; // 0x4e8(0x04)
	float CONT_SunIntensity_AC; // 0x4ec(0x04)
	float CONT_SunIntensity_WL; // 0x4f0(0x04)
	float CONT_SunIntensity_Cave; // 0x4f4(0x04)
	float CONT_SkyLightIntensity_CF; // 0x4f8(0x04)
	float CONT_SkyLightIntensity_LC; // 0x4fc(0x04)
	float CONT_SkyLightIntensity_DC; // 0x500(0x04)
	float CONT_SkyLightIntensity_AC; // 0x504(0x04)
	float CONT_SkyLightIntensity_WL; // 0x508(0x04)
	float CONT_SkyLightIntensity_Cave; // 0x50c(0x04)
	float CONT_OvercastScattering_CF; // 0x510(0x04)
	float CONT_OvercastScattering_DC; // 0x514(0x04)
	float CONT_OvercastScattering_AC; // 0x518(0x04)
	float CONT_OvercastScattering_WL; // 0x51c(0x04)
	float CONT_OvercastScattering_LC; // 0x520(0x04)
	float CONT_OvercastScattering_Cave; // 0x524(0x04)
	float WeatherVal_SnowStorm; // 0x528(0x04)
	float CONT_DistFogScale_CF; // 0x52c(0x04)
	float CONT_DistFogScale_Cave; // 0x530(0x04)
	float CONT_DistFogScale_LC; // 0x534(0x04)
	float CONT_DistFogScale_AC; // 0x538(0x04)
	float CONT_DistFogScale_DC; // 0x53c(0x04)
	float CONT_DistFogScale_WL; // 0x540(0x04)
	char pad_544[0x4]; // 0x544(0x04)
	struct FBiomesEnum PlayerBiome; // 0x548(0x10)
	struct FBiomesEnum PlayerNewBiome; // 0x558(0x10)
	struct UTexture* CloudMAP; // 0x568(0x08)
	float DropshipOverride; // 0x570(0x04)
	float WeatherVal_WindSpeed; // 0x574(0x04)
	float WeatherVal_WindStrength; // 0x578(0x04)
	float WeatherVal_WindMaxGustAmount; // 0x57c(0x04)
	float WeatherVal_WindMinGustAmount; // 0x580(0x04)
	char pad_584[0x4]; // 0x584(0x04)
	struct UCurveFloat* CurveContactShadow; // 0x588(0x08)
	float WeatherVal_Debris; // 0x590(0x04)
	bool Disable Time Tick; // 0x594(0x01)
	bool OverrideWind; // 0x595(0x01)
	char pad_596[0x2]; // 0x596(0x02)
	float OverrideWindSpeed; // 0x598(0x04)
	float OverrideWindStrength; // 0x59c(0x04)
	bool UpdateWeather; // 0x5a0(0x01)
	char pad_5A1[0x7]; // 0x5a1(0x07)
	struct UCurveFloat* CloudCoverageFogCurve; // 0x5a8(0x08)
	struct UCurveFloat* SnowStormEmissiveInjectionCurve; // 0x5b0(0x08)
	struct FMulticastInlineDelegate SunLightDirection; // 0x5b8(0x10)
	struct FMulticastInlineDelegate SunLightColor; // 0x5c8(0x10)
	float WeatherVal_FogDensity; // 0x5d8(0x04)
	float WeatherVal_FogExtinction; // 0x5dc(0x04)
	struct FLinearColor WeatherVal_FogBaseEmission; // 0x5e0(0x10)
	struct FLinearColor Color_2; // 0x5f0(0x10)
	float Intensity_2; // 0x600(0x04)
	struct FRotator SunDirection_2; // 0x604(0x0c)
	struct UCurveFloat* CaveLightCurve; // 0x610(0x08)
	struct TArray<struct AWT_CaveVolume_C*> CaveVolumesInUse; // 0x618(0x10)
	float CaveInfluence; // 0x628(0x04)
	char pad_62C[0x4]; // 0x62c(0x04)
	struct UCurveFloat* CurvePlanetSunDirection; // 0x630(0x08)
	struct FString Texture Path; // 0x638(0x10)
	struct FRotator WindRotation; // 0x648(0x0c)
	bool useWeatherMan; // 0x654(0x01)
	char pad_655[0x3]; // 0x655(0x03)
	struct UCurveLinearColor* LocalFogTimeOfDay; // 0x658(0x08)
	struct UCurveFloat* CurveShadowCascades; // 0x660(0x08)
	float ImpassableSnowOffset; // 0x668(0x04)

	void FogTimeOfDay(); // Function BP_AtmosphereController.BP_AtmosphereController_C.FogTimeOfDay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveCaveVolume(struct AWT_CaveVolume_C* Volume); // Function BP_AtmosphereController.BP_AtmosphereController_C.RemoveCaveVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddCaveVolume(struct AWT_CaveVolume_C* Volume); // Function BP_AtmosphereController.BP_AtmosphereController_C.AddCaveVolume // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void WeatherVisualUpdated(); // Function BP_AtmosphereController.BP_AtmosphereController_C.WeatherVisualUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LinearBiomeTransition(struct FBiomesEnum PlayerNewBiome); // Function BP_AtmosphereController.BP_AtmosphereController_C.LinearBiomeTransition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TransitionWeather(struct FBiomesEnum FromBiome, struct FBiomesEnum ToBiome, float Amount); // Function BP_AtmosphereController.BP_AtmosphereController_C.TransitionWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetStaticCapture(bool UseStatic); // Function BP_AtmosphereController.BP_AtmosphereController_C.SetStaticCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetDistFogScale(struct FVector Scale); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetDistFogScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetAtmosphere(float TimeNormalized, float TimeRealtime, float Influence Confier, float Influence Lava, float Influence Desert, float Influence Arctic, float Influence Wetlands, float Rain, float Overcast, float Snow, float Storm Sand, float Storm Snow, float Thunder, float FogDensity, struct FBiomesEnum CurrentBiome, float CurrentDebris, float WindStrength); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetAtmosphere // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Get Cloud Coverage(float Coverage, float CoverageNoClamp); // Function BP_AtmosphereController.BP_AtmosphereController_C.Get Cloud Coverage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateCloudCoverage(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateCloudCoverage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MoonSetRotation(); // Function BP_AtmosphereController.BP_AtmosphereController_C.MoonSetRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetStartingTime(float StartingTime); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetStartingTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCurrentTimeScale(float Hour, float TimeScale); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetCurrentTimeScale // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetTimeOfDay(float Time); // Function BP_AtmosphereController.BP_AtmosphereController_C.SetTimeOfDay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitTimeOfDay(); // Function BP_AtmosphereController.BP_AtmosphereController_C.InitTimeOfDay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateMPC(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateMPC // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCubemap(enum class EBiomes Biome); // Function BP_AtmosphereController.BP_AtmosphereController_C.SetCubemap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Rain Amount(); // Function BP_AtmosphereController.BP_AtmosphereController_C.Update Rain Amount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SkylightSetProperties(); // Function BP_AtmosphereController.BP_AtmosphereController_C.SkylightSetProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FogSetProperties(); // Function BP_AtmosphereController.BP_AtmosphereController_C.FogSetProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SunSetProperties(); // Function BP_AtmosphereController.BP_AtmosphereController_C.SunSetProperties // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SkydomeCreateInstance(); // Function BP_AtmosphereController.BP_AtmosphereController_C.SkydomeCreateInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SunSetRotation(); // Function BP_AtmosphereController.BP_AtmosphereController_C.SunSetRotation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetBiomeInfluence(struct FBiomesEnum Biome, float Influence); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetBiomeInfluence // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Transition Biome(struct FBiomesEnum FromBiome, struct FBiomesEnum ToBiome, float Amount); // Function BP_AtmosphereController.BP_AtmosphereController_C.Transition Biome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Storm Modifier(float Modifier); // Function BP_AtmosphereController.BP_AtmosphereController_C.Storm Modifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CycleBiome(); // Function BP_AtmosphereController.BP_AtmosphereController_C.CycleBiome // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ForceSetBiome(struct FBiomesEnum Biome); // Function BP_AtmosphereController.BP_AtmosphereController_C.ForceSetBiome // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Fog Track Player(); // Function BP_AtmosphereController.BP_AtmosphereController_C.Fog Track Player // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePostProcessing(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UpdatePostProcessing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetBiomeInfo(float CF, float LC, float DC, float AC, float WL); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetBiomeInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateWind(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateWind // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetAtmosphereInfo(float TimeNormalized, float TimeRealtime, float BiomeInfluenceConfier, float BiomeInfluenceLava, float BiomeInfluenceDesert, float BiomeInfluenceArctic, float BiomeInfluenceWetlands, float RainAmount, float EnvironmentDampness, float StormAmount, float WindAmount, float FogAmount, float FogHeightOffset, struct FBiomesEnum Current Biome); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetAtmosphereInfo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetTerrainDetails(); // Function BP_AtmosphereController.BP_AtmosphereController_C.SetTerrainDetails // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetSkylightTimer(); // Function BP_AtmosphereController.BP_AtmosphereController_C.ResetSkylightTimer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_TimeScale(); // Function BP_AtmosphereController.BP_AtmosphereController_C.OnRep_TimeScale // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTime(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UpdateTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RecaptureSkylight(); // Function BP_AtmosphereController.BP_AtmosphereController_C.RecaptureSkylight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheatSetTime(int32_t TimeHour); // Function BP_AtmosphereController.BP_AtmosphereController_C.CheatSetTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EditorReset(); // Function BP_AtmosphereController.BP_AtmosphereController_C.EditorReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Atmosphere Settings(); // Function BP_AtmosphereController.BP_AtmosphereController_C.Update Atmosphere Settings // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTime(float Total, float Normalized, float Realtime); // Function BP_AtmosphereController.BP_AtmosphereController_C.GetTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_AtmosphereController.BP_AtmosphereController_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckBiome(); // Function BP_AtmosphereController.BP_AtmosphereController_C.CheckBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_AtmosphereController.BP_AtmosphereController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnActorDatabaseRestoreFinished(); // Function BP_AtmosphereController.BP_AtmosphereController_C.OnActorDatabaseRestoreFinished // (BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_AtmosphereController.BP_AtmosphereController_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_AtmosphereController(int32_t EntryPoint); // Function BP_AtmosphereController.BP_AtmosphereController_C.ExecuteUbergraph_BP_AtmosphereController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void SunLightColor__DelegateSignature(struct FLinearColor Color, float Intensity, float CaveCover); // Function BP_AtmosphereController.BP_AtmosphereController_C.SunLightColor__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SunLightDirection__DelegateSignature(struct FRotator SunDirection); // Function BP_AtmosphereController.BP_AtmosphereController_C.SunLightDirection__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

