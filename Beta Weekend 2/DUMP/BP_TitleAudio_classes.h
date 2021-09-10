// BlueprintGeneratedClass BP_TitleAudio.BP_TitleAudio_C
// Size: 0x238 (Inherited: 0x220)
struct ABP_TitleAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMusicSubsystemConfig MusicConfig; // 0x230(0x08)

	void ReceiveBeginPlay(); // Function BP_TitleAudio.BP_TitleAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_TitleAudio(int32_t EntryPoint); // Function BP_TitleAudio.BP_TitleAudio_C.ExecuteUbergraph_BP_TitleAudio // (Final|UbergraphFunction) // @ game+0x1a38c80
};

