// BlueprintGeneratedClass Deployable_Boombox.Deployable_Boombox_C
// Size: 0x599 (Inherited: 0x560)
struct ADeployable_Boombox_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UFMODAudioComponent* BoomboxAudio; // 0x568(0x08)
	int32_t CurrentStationIndex; // 0x570(0x04)
	int32_t CurrentVolumeLevel; // 0x574(0x04)
	struct TArray<float> VolumeLevels; // 0x578(0x10)
	struct TArray<struct UFMODEvent*> AvailableStations; // 0x588(0x10)
	bool BoomboxOn; // 0x598(0x01)

	void IsFunctional(bool bFunctional); // Function Deployable_Boombox.Deployable_Boombox_C.IsFunctional // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function Deployable_Boombox.Deployable_Boombox_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_BoomboxOn(); // Function Deployable_Boombox.Deployable_Boombox_C.OnRep_BoomboxOn // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_CurrentVolumeLevel(); // Function Deployable_Boombox.Deployable_Boombox_C.OnRep_CurrentVolumeLevel // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BeginPlayingCurrentStation(); // Function Deployable_Boombox.Deployable_Boombox_C.BeginPlayingCurrentStation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_CurrentStationIndex(); // Function Deployable_Boombox.Deployable_Boombox_C.OnRep_CurrentStationIndex // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function Deployable_Boombox.Deployable_Boombox_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void Server_ChangeSong(bool Next); // Function Deployable_Boombox.Deployable_Boombox_C.Server_ChangeSong // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_ToggleRadio(bool BoomboxOn); // Function Deployable_Boombox.Deployable_Boombox_C.Server_ToggleRadio // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_Deployable_Boombox(int32_t EntryPoint); // Function Deployable_Boombox.Deployable_Boombox_C.ExecuteUbergraph_Deployable_Boombox // (Final|UbergraphFunction) // @ game+0x1a05090
};

