// BlueprintGeneratedClass BP_LightningStrike.BP_LightningStrike_C
// Size: 0x350 (Inherited: 0x2a0)
struct ABP_LightningStrike_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UPostProcessComponent* PostProcessStrike; // 0x2a8(0x08)
	struct UPointLightComponent* PointLight; // 0x2b0(0x08)
	struct UStaticMeshComponent* LightningMesh; // 0x2b8(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c0(0x08)
	float BuildupTimeRemaining; // 0x2c8(0x04)
	char pad_2CC[0x4]; // 0x2cc(0x04)
	struct AActor* ActorTarget; // 0x2d0(0x08)
	struct FFLODInstanceID FLODRecordTarget; // 0x2d8(0x10)
	enum class ELightningStrikeTarget TargetType; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct TSoftObjectPtr<UFMODEvent> FMODEvent_Strike; // 0x2f0(0x28)
	struct TSoftObjectPtr<UFMODEvent> FMODEvent_Buildup; // 0x318(0x28)
	bool EffectTriggered; // 0x340(0x01)
	char pad_341[0x3]; // 0x341(0x03)
	float StrikeDuration; // 0x344(0x04)
	bool IsDynamicallyShadowCasting; // 0x348(0x01)
	char pad_349[0x3]; // 0x349(0x03)
	float DefaultLightningBurnChance%; // 0x34c(0x04)

	void ConfigureLightningLight(bool CanCastShadows); // Function BP_LightningStrike.BP_LightningStrike_C.ConfigureLightningLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CanCastShadows(bool CanTurnOnShadowCasting); // Function BP_LightningStrike.BP_LightningStrike_C.CanCastShadows // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayBuildupSound(); // Function BP_LightningStrike.BP_LightningStrike_C.PlayBuildupSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayStrikeSound(); // Function BP_LightningStrike.BP_LightningStrike_C.PlayStrikeSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickStrikeSequence(float DeltaTime); // Function BP_LightningStrike.BP_LightningStrike_C.TickStrikeSequence // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StrikeLightningRod(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeLightningRod // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StrikeBuilding(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeBuilding // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StrikeFLOD(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikeFLOD // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StrikePlayer(); // Function BP_LightningStrike.BP_LightningStrike_C.StrikePlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Strike(); // Function BP_LightningStrike.BP_LightningStrike_C.Strike // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_LightningStrike.BP_LightningStrike_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_LightningStrike(int32_t EntryPoint); // Function BP_LightningStrike.BP_LightningStrike_C.ExecuteUbergraph_BP_LightningStrike // (Final|UbergraphFunction) // @ game+0x1a05090
};

