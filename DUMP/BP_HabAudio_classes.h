// BlueprintGeneratedClass BP_HabAudio.BP_HabAudio_C
// Size: 0x2a4 (Inherited: 0x220)
struct ABP_HabAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FMusicSubsystemConfig MusicConfig; // 0x230(0x08)
	struct TMap<struct AFMODAmbientSound*, struct USphereComponent*> AmbientAudioEmitters; // 0x238(0x50)
	bool HabAudioEnabled; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct UFMODAudioComponent* DioramaAmbience; // 0x290(0x08)
	float DefaultAmbientSoundColliderRadius; // 0x298(0x04)
	struct FName AmbientColliderProfile; // 0x29c(0x08)

	void OnAmbientColliderEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_HabAudio.BP_HabAudio_C.OnAmbientColliderEndOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAmbientColliderBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_HabAudio.BP_HabAudio_C.OnAmbientColliderBeginOverlap // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddColliderToAmbientSound(struct AFMODAmbientSound* AmbientSound, struct USphereComponent* Collider); // Function BP_HabAudio.BP_HabAudio_C.AddColliderToAmbientSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ClearDioramaAmbience(bool IsEndingPlay); // Function BP_HabAudio.BP_HabAudio_C.ClearDioramaAmbience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetDioramaAmbience(struct UFMODEvent* FMODEvent); // Function BP_HabAudio.BP_HabAudio_C.SetDioramaAmbience // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HabAudio.BP_HabAudio_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void SetHabAudioEnabled(bool Enabled); // Function BP_HabAudio.BP_HabAudio_C.SetHabAudioEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HabAudio.BP_HabAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HabAudio(int32_t EntryPoint); // Function BP_HabAudio.BP_HabAudio_C.ExecuteUbergraph_BP_HabAudio // (Final|UbergraphFunction) // @ game+0x1a05090
};

