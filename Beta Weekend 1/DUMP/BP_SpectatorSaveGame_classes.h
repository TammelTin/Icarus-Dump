// BlueprintGeneratedClass BP_SpectatorSaveGame.BP_SpectatorSaveGame_C
// Size: 0x2ac (Inherited: 0x28)
struct UBP_SpectatorSaveGame_C : USaveGame {
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset1; // 0x28(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset2; // 0x78(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset3; // 0xc8(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset5; // 0x118(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset4; // 0x168(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset6; // 0x1b8(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset7; // 0x208(0x50)
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset8; // 0x258(0x50)
	int32_t Index; // 0x2a8(0x04)

	void SetPreset(int32_t Index, struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> Preset); // Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.SetPreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct TMap<struct TSoftClassPtr<UObject>, struct FFPostProcessSaveData> GetPreset(int32_t Index); // Function BP_SpectatorSaveGame.BP_SpectatorSaveGame_C.GetPreset // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

