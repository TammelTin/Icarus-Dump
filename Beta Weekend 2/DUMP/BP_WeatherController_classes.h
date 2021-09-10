// BlueprintGeneratedClass BP_WeatherController.BP_WeatherController_C
// Size: 0x37c (Inherited: 0x2d0)
struct ABP_WeatherController_C : AWeatherController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	int32_t ProspectFirstGenerationTime; // 0x2d8(0x04)
	int32_t GameStateSeed; // 0x2dc(0x04)
	int32_t WeatherGenerationTime; // 0x2e0(0x04)
	int32_t RequiredTotalForecastTime; // 0x2e4(0x04)
	int32_t NextGenerationTime; // 0x2e8(0x04)
	float Deployable_Max_Damage; // 0x2ec(0x04)
	float Player_Max_Damage; // 0x2f0(0x04)
	float Buildable_Max_Damage; // 0x2f4(0x04)
	float Player_Items_Max_Damage; // 0x2f8(0x04)
	enum class EIcarusProspectDifficulty Difficulty; // 0x2fc(0x01)
	char pad_2FD[0x3]; // 0x2fd(0x03)
	struct TArray<struct FFBiomeWeatherForecast> BiomeForecast; // 0x300(0x10)
	struct FMulticastInlineDelegate StormIncomingAlert; // 0x310(0x10)
	struct FMulticastInlineDelegate StormStartedAlert; // 0x320(0x10)
	bool Debug; // 0x330(0x01)
	char pad_331[0x7]; // 0x331(0x07)
	struct FMulticastInlineDelegate AIPerceptionModifierUpdated; // 0x338(0x10)
	struct FRandomStream RandomStream; // 0x348(0x08)
	float SnowConstant; // 0x350(0x04)
	char pad_354[0x4]; // 0x354(0x04)
	struct UCurveFloat* WeatherPercentageFloatCurve; // 0x358(0x08)
	float Fallback Weather Percentage; // 0x360(0x04)
	struct FWeatherPoolsRowHandle Weather Pool; // 0x364(0x18)

	void ExtinguishFires(struct FBiomesRowHandle Biome, float Intensity); // Function BP_WeatherController.BP_WeatherController_C.ExtinguishFires // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DebugWeatherController(struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.DebugWeatherController // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayerModifiers(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query, struct FModifier Modifier); // Function BP_WeatherController.BP_WeatherController_C.PlayerModifiers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DrawWeatherForecast(); // Function BP_WeatherController.BP_WeatherController_C.DrawWeatherForecast // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PrintWeather(); // Function BP_WeatherController.BP_WeatherController_C.PrintWeather // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckPlannedEvents(); // Function BP_WeatherController.BP_WeatherController_C.CheckPlannedEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckForNewEvents(int32_t CurrentTime); // Function BP_WeatherController.BP_WeatherController_C.CheckForNewEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GenerateWeatherEventsForBiome(struct FBiomesEnum Biome, int32_t StartTime, int32_t EndTime); // Function BP_WeatherController.BP_WeatherController_C.GenerateWeatherEventsForBiome // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetWeatherEvents(); // Function BP_WeatherController.BP_WeatherController_C.ResetWeatherEvents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetEventEndTime(struct FWeatherEventsRowHandle WeatherEvent, int32_t StartTime, int32_t EndTime); // Function BP_WeatherController.BP_WeatherController_C.GetEventEndTime // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetEventDuration(struct FWeatherEventsRowHandle Event, float Duration); // Function BP_WeatherController.BP_WeatherController_C.GetEventDuration // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddPlannedEvent(struct FBiomesEnum Biome, struct FWeatherEventsRowHandle WeatherEventRowHandle, int32_t StartTime); // Function BP_WeatherController.BP_WeatherController_C.AddPlannedEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlanWeather(); // Function BP_WeatherController.BP_WeatherController_C.PlanWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Snow(float Intensity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.Snow // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Rain(struct FBiomesRowHandle Biome, int32_t Rainfall (Millilitre)); // Function BP_WeatherController.BP_WeatherController_C.Rain // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Player Item Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Player Item Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Deployable Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Player Damage(struct FBiomesRowHandle Biome, float Intensity, struct FGameplayTagQuery Query); // Function BP_WeatherController.BP_WeatherController_C.Player Damage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetBiomeForecast(struct FBiomesEnum Biome, int32_t FoundIndex); // Function BP_WeatherController.BP_WeatherController_C.GetBiomeForecast // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_WeatherController.BP_WeatherController_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_03F140C24C788945DD1CE78DE82CCD6C(struct UObject* Loaded); // Function BP_WeatherController.BP_WeatherController_C.OnLoaded_03F140C24C788945DD1CE78DE82CCD6C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetRain(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetRain // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopShelteredCalls(struct FBiomesRowHandle RowHandle); // Function BP_WeatherController.BP_WeatherController_C.StopShelteredCalls // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartSheltedCalls(struct FBiomesRowHandle RowHandle); // Function BP_WeatherController.BP_WeatherController_C.StartSheltedCalls // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_WeatherController.BP_WeatherController_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ClearAllWeather(); // Function BP_WeatherController.BP_WeatherController_C.ClearAllWeather // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearWeather(); // Function BP_WeatherController.BP_WeatherController_C.ClearWeather // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetSnow(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSnow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetSand(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSand // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearWeatherBiome(struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.ClearWeatherBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCheckPlannedEvents(); // Function BP_WeatherController.BP_WeatherController_C.OnCheckPlannedEvents // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSeedInitialised(int32_t Seed); // Function BP_WeatherController.BP_WeatherController_C.OnSeedInitialised // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetCloud(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetCloud // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetThunder(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetThunder // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetSnowStorm(float Severity, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.SetSnowStorm // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowWeatherWarningMessage(struct FBiomesRowHandle Biome, struct FText Message); // Function BP_WeatherController.BP_WeatherController_C.ShowWeatherWarningMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideWeatherWarningMessage(struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.HideWeatherWarningMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetBiomeWindVisuals(float WindSpeed, float WindStrength, float WindGust, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetBiomeWindForce(float WindDirectionStrength, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindForce // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetBiomeWindDirection(struct FVector WindDirection, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetBiomeWindDirection // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetWeatherTemperatureModifier(int32_t TempModifier, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetWeatherTemperatureModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetAIPerceptionModifier(int32_t Modifier, struct FBiomesRowHandle BiomesRowHandle); // Function BP_WeatherController.BP_WeatherController_C.SetAIPerceptionModifier // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetDebris(float Severity, struct FBiomesRowHandle BiomeRow); // Function BP_WeatherController.BP_WeatherController_C.SetDebris // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RestoreWeatherFromDatabase(struct FBiomesRowHandle BiomeRow, struct FWeatherEventsRowHandle WeatherRow, int32_t StartTime); // Function BP_WeatherController.BP_WeatherController_C.RestoreWeatherFromDatabase // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_WeatherController(int32_t EntryPoint); // Function BP_WeatherController.BP_WeatherController_C.ExecuteUbergraph_BP_WeatherController // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void AIPerceptionModifierUpdated__DelegateSignature(int32_t NewValue, struct FBiomesRowHandle Biome); // Function BP_WeatherController.BP_WeatherController_C.AIPerceptionModifierUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StormStartedAlert__DelegateSignature(struct FWeatherEventsRowHandle Event, struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.StormStartedAlert__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StormIncomingAlert__DelegateSignature(int32_t TimeUntilStorm, struct FWeatherEventsRowHandle StormRow, struct FBiomesEnum Biome); // Function BP_WeatherController.BP_WeatherController_C.StormIncomingAlert__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

