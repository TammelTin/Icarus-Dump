// WidgetBlueprintGeneratedClass UMG_WarningContainer.UMG_WarningContainer_C
// Size: 0x2c8 (Inherited: 0x260)
struct UUMG_WarningContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BlinkAll; // 0x268(0x08)
	struct UUMG_Warning_C* Exposure; // 0x270(0x08)
	struct UUMG_Warning_C* Food; // 0x278(0x08)
	struct UUMG_Warning_C* Health; // 0x280(0x08)
	struct UUMG_Warning_C* Oxgen; // 0x288(0x08)
	struct UUMG_Warning_C* RepairWarning; // 0x290(0x08)
	struct UUMG_Warning_C* Water; // 0x298(0x08)
	float WarnThreshold_Water; // 0x2a0(0x04)
	float WarnThreshold_Health; // 0x2a4(0x04)
	float WarnThreshold_Food; // 0x2a8(0x04)
	float WarnThreshold_Oxygen; // 0x2ac(0x04)
	float WarnThreshold_Exposure; // 0x2b0(0x04)
	char pad_2B4[0x4]; // 0x2b4(0x04)
	struct FFMODEventInstance Sound; // 0x2b8(0x08)
	struct UPlayerCharacterState* PlayerCharacterState; // 0x2c0(0x08)

	void OnRepairWarningUpdated(); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnRepairWarningUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetAudioPlayState(bool ShouldPlay); // Function UMG_WarningContainer.UMG_WarningContainer_C.SetAudioPlayState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudio(); // Function UMG_WarningContainer.UMG_WarningContainer_C.UpdateAudio // (Private|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAliveChanged(struct UActorState* ActorState); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnAliveChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnExposureUpdated(float NewExposure); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnExposureUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnHealthUpdated(struct UActorState* ActorState, float NewHealth); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnHealthUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnOxygenUpdated(int32_t NewOxygen); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnOxygenUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFoodUpdated(int32_t NewFood); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnFoodUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnWaterUpdated(int32_t NewWater); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnWaterUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Destruct(); // Function UMG_WarningContainer.UMG_WarningContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnInitialized(); // Function UMG_WarningContainer.UMG_WarningContainer_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_WarningContainer.UMG_WarningContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_WarningContainer(int32_t EntryPoint); // Function UMG_WarningContainer.UMG_WarningContainer_C.ExecuteUbergraph_UMG_WarningContainer // (Final|UbergraphFunction) // @ game+0x1a05090
};

