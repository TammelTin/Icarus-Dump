// BlueprintGeneratedClass BP_TreeHUD.BP_TreeHUD_C
// Size: 0x350 (Inherited: 0x310)
struct ABP_TreeHUD_C : AHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct ABP_ActorPreview_C* PlayerPreview; // 0x320(0x08)
	bool ShouldDrawWeather; // 0x328(0x01)
	char pad_329[0x7]; // 0x329(0x07)
	struct TArray<struct FFBiomeWeatherForecast> BiomeWeatherData; // 0x330(0x10)
	struct ABP_TooltipProjectionActor_C* ToolTipActor; // 0x340(0x08)
	struct ABP_CardPreview_C* CardPreview; // 0x348(0x08)

	void DrawWeather(int32_t SizeX, int32_t SizeY); // Function BP_TreeHUD.BP_TreeHUD_C.DrawWeather // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetEventEndTime(struct FWeatherEventsRowHandle Event, int32_t StartTime, int32_t EndTime); // Function BP_TreeHUD.BP_TreeHUD_C.GetEventEndTime // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function BP_TreeHUD.BP_TreeHUD_C.ReceiveDrawHUD // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_TreeHUD.BP_TreeHUD_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_TreeHUD(int32_t EntryPoint); // Function BP_TreeHUD.BP_TreeHUD_C.ExecuteUbergraph_BP_TreeHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

