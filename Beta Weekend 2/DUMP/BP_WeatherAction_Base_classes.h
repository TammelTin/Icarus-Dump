// BlueprintGeneratedClass BP_WeatherAction_Base.BP_WeatherAction_Base_C
// Size: 0x4b1 (Inherited: 0x408)
struct UBP_WeatherAction_Base_C : UIcarusWeatherAction {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x408(0x08)
	struct FText ActiveWarningMessage; // 0x410(0x18)
	struct TArray<struct ABP_Building_Base_C*> WindDamagedBuildings; // 0x428(0x10)
	struct ABP_WeatherController_C* WeatherControllerRef; // 0x438(0x08)
	struct FTimerHandle DamageDeployablesRef; // 0x440(0x08)
	struct FTimerHandle DamagePlayerRef; // 0x448(0x08)
	struct TArray<struct UObject*> LoadedSoftObjects; // 0x450(0x10)
	struct TMap<struct AIcarusPlayerCharacter*, int32_t> AppliedExposureModifiers; // 0x460(0x50)
	bool DebugPrintStormData; // 0x4b0(0x01)

	void Action_SnowBuildUp(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_SnowBuildUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearExposureModifierForPlayer(struct AIcarusPlayerCharacter* Player); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ClearExposureModifierForPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetStormTier(float Tier); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.GetStormTier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Action_ExtinguishFire(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_ExtinguishFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Action_RainFillable(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_RainFillable // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Action_Wind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_Wind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Action_AIPerception(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_AIPerception // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Action_Temperature(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Action_Temperature // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_SnowStorm(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_SnowStorm // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Snow(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Snow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Sand(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Sand // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Wind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Wind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Debris(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Debris // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Clouds(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Clouds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Visual_Rain(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Visual_Rain // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayerExposureChecks(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.PlayerExposureChecks // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RandomizeWind(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.RandomizeWind // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetTimeRemaining(struct UCurveFloat* Curve, bool Inverse); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.GetTimeRemaining // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void StartWindDamageToBuilding(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.StartWindDamageToBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DebugWeatherActionBase(struct UObject* Object, struct FBiomesRowHandle BiomesRowHandle, float CurrentLifeTime, float TotalLifeTime); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.DebugWeatherActionBase // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814(struct UObject* Loaded); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.OnLoaded_2B8B2B624CE5F97DAE6892B7F63BB814 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WeatherActionStarted(struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionStarted // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void WeatherActionEnded(struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionEnded // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void StormWindDamageSelectBuildingPiece(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.StormWindDamageSelectBuildingPiece // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WeatherActionVisualTick(float Delta, struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionVisualTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void WeatherActionTick(float Delta, struct AWeatherController* WeatherController); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.WeatherActionTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Damage_Deployables(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Damage_Deployables // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Damage_Player(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.Damage_Player // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LoadSoftObjects(); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.LoadSoftObjects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_WeatherAction_Base(int32_t EntryPoint); // Function BP_WeatherAction_Base.BP_WeatherAction_Base_C.ExecuteUbergraph_BP_WeatherAction_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

