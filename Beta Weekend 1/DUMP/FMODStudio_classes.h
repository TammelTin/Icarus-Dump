// Class FMODStudio.FMODAmbientSound
// Size: 0x228 (Inherited: 0x220)
struct AFMODAmbientSound : AActor {
	struct UFMODAudioComponent* AudioComponent; // 0x220(0x08)
};

// Class FMODStudio.FMODAsset
// Size: 0x38 (Inherited: 0x28)
struct UFMODAsset : UObject {
	struct FGuid AssetGuid; // 0x28(0x10)
};

// Class FMODStudio.FMODAudioComponent
// Size: 0x380 (Inherited: 0x200)
struct UFMODAudioComponent : USceneComponent {
	struct UFMODEvent* Event; // 0x1f8(0x08)
	struct TMap<struct FName, float> ParameterCache; // 0x200(0x50)
	struct FString ProgrammerSoundName; // 0x258(0x10)
	char bEnableTimelineCallbacks : 1; // 0x268(0x01)
	char pad_268_1 : 7; // 0x268(0x01)
	char pad_269[0x3]; // 0x269(0x03)
	bool bUseListenerRotation; // 0x26c(0x01)
	char pad_26D[0x17]; // 0x26d(0x17)
	char bAutoDestroy : 1; // 0x284(0x01)
	char bStopWhenOwnerDestroyed : 1; // 0x284(0x01)
	char pad_284_2 : 6; // 0x284(0x01)
	char pad_285[0x3]; // 0x285(0x03)
	struct FMulticastInlineDelegate OnEventStopped; // 0x288(0x10)
	struct FMulticastInlineDelegate OnTimelineMarker; // 0x298(0x10)
	struct FMulticastInlineDelegate OnTimelineBeat; // 0x2a8(0x10)
	struct FFMODAttenuationDetails AttenuationDetails; // 0x2b8(0x0c)
	struct FFMODOcclusionDetails OcclusionDetails; // 0x2c4(0x03)
	char pad_2C7[0xb9]; // 0x2c7(0xb9)

	void TriggerCue(); // Function FMODStudio.FMODAudioComponent.TriggerCue // (Final|Native|Public|BlueprintCallable) // @ game+0x8577d0
	void Stop(); // Function FMODStudio.FMODAudioComponent.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x8577b0
	void SetVolume(float Volume); // Function FMODStudio.FMODAudioComponent.SetVolume // (Final|Native|Public|BlueprintCallable) // @ game+0x857730
	void SetTimelinePosition(int32_t Time); // Function FMODStudio.FMODAudioComponent.SetTimelinePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x8576a0
	void SetProperty(enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODAudioComponent.SetProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x8575d0
	void SetProgrammerSoundName(struct FString Value); // Function FMODStudio.FMODAudioComponent.SetProgrammerSoundName // (Final|Native|Public|BlueprintCallable) // @ game+0x8574e0
	void SetPitch(float Pitch); // Function FMODStudio.FMODAudioComponent.SetPitch // (Final|Native|Public|BlueprintCallable) // @ game+0x857460
	void SetPaused(bool paused); // Function FMODStudio.FMODAudioComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0x8573d0
	void SetParameter(struct FName Name, float Value); // Function FMODStudio.FMODAudioComponent.SetParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x857300
	void SetEvent(struct UFMODEvent* NewEvent, bool bKeepParameterValues); // Function FMODStudio.FMODAudioComponent.SetEvent // (Final|Native|Public|BlueprintCallable) // @ game+0x857230
	void Release(); // Function FMODStudio.FMODAudioComponent.Release // (Final|Native|Public|BlueprintCallable) // @ game+0x857210
	void Play(); // Function FMODStudio.FMODAudioComponent.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x8571f0
	bool IsPlaying(); // Function FMODStudio.FMODAudioComponent.IsPlaying // (Final|Native|Public|BlueprintCallable) // @ game+0x8571c0
	int32_t GetTimelinePosition(); // Function FMODStudio.FMODAudioComponent.GetTimelinePosition // (Final|Native|Public|BlueprintCallable) // @ game+0x857190
	float GetProperty(enum class EFMODEventProperty Property); // Function FMODStudio.FMODAudioComponent.GetProperty // (Final|Native|Public|BlueprintCallable) // @ game+0x857100
	void GetParameterValue(struct FName Name, float UserValue, float FinalValue); // Function FMODStudio.FMODAudioComponent.GetParameterValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x856fe0
	float GetParameter(struct FName Name); // Function FMODStudio.FMODAudioComponent.GetParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x856f40
	int32_t GetLength(); // Function FMODStudio.FMODAudioComponent.GetLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x856f10
};

// Class FMODStudio.FMODBank
// Size: 0x38 (Inherited: 0x38)
struct UFMODBank : UFMODAsset {
};

// Class FMODStudio.FMODBankLookup
// Size: 0x60 (Inherited: 0x28)
struct UFMODBankLookup : UObject {
	struct UDataTable* DataTable; // 0x28(0x08)
	struct FString MasterBankPath; // 0x30(0x10)
	struct FString MasterAssetsBankPath; // 0x40(0x10)
	struct FString MasterStringsBankPath; // 0x50(0x10)
};

// Class FMODStudio.FMODBlueprintStatics
// Size: 0x28 (Inherited: 0x28)
struct UFMODBlueprintStatics : UBlueprintFunctionLibrary {

	void VCASetVolume(struct UFMODVCA* Vca, float Volume); // Function FMODStudio.FMODBlueprintStatics.VCASetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a840
	void UnloadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.UnloadEventSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a780
	void UnloadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBankSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a700
	void UnloadBank(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.UnloadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a680
	void SetOutputDriverByName(struct FString NewDriverName); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a5a0
	void SetOutputDriverByIndex(int32_t NewDriverIndex); // Function FMODStudio.FMODBlueprintStatics.SetOutputDriverByIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a520
	void SetLocale(struct FString Locale); // Function FMODStudio.FMODBlueprintStatics.SetLocale // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a490
	void SetGlobalParameterByName(struct FName Name, float Value); // Function FMODStudio.FMODBlueprintStatics.SetGlobalParameterByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x85a3d0
	struct UFMODAudioComponent* PlayEventAttached(struct UFMODEvent* Event, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, enum class EAttachLocation LocationType, bool bStopWhenAttachedToDestroyed, bool bAutoPlay, bool bAutoDestroy, bool bUseListenerRotation); // Function FMODStudio.FMODBlueprintStatics.PlayEventAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0x85a110
	struct FFMODEventInstance PlayEventAtLocation(struct UObject* WorldContextObject, struct UFMODEvent* Event, struct FTransform Location, bool bAutoPlay, bool bUseListenerRotation); // Function FMODStudio.FMODBlueprintStatics.PlayEventAtLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x859f00
	struct FFMODEventInstance PlayEvent2D(struct UObject* WorldContextObject, struct UFMODEvent* Event, bool bAutoPlay); // Function FMODStudio.FMODBlueprintStatics.PlayEvent2D // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859e00
	void MixerSuspend(); // Function FMODStudio.FMODBlueprintStatics.MixerSuspend // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859de0
	void MixerResume(); // Function FMODStudio.FMODBlueprintStatics.MixerResume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859dc0
	void LoadEventSampleData(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.LoadEventSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859d00
	void LoadBankSampleData(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.LoadBankSampleData // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859c80
	void LoadBank(struct UFMODBank* Bank, bool bBlocking, bool bLoadSampleData); // Function FMODStudio.FMODBlueprintStatics.LoadBank // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859b70
	bool IsBankLoaded(struct UFMODBank* Bank); // Function FMODStudio.FMODBlueprintStatics.IsBankLoaded // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859ae0
	struct TArray<struct FString> GetOutputDrivers(); // Function FMODStudio.FMODBlueprintStatics.GetOutputDrivers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859a00
	void GetGlobalParameterValueByName(struct FName Name, float UserValue, float FinalValue); // Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterValueByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8598e0
	float GetGlobalParameterByName(struct FName Name); // Function FMODStudio.FMODBlueprintStatics.GetGlobalParameterByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859850
	struct TArray<struct FFMODEventInstance> FindEventInstances(struct UObject* WorldContextObject, struct UFMODEvent* Event); // Function FMODStudio.FMODBlueprintStatics.FindEventInstances // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859740
	struct UFMODEvent* FindEventByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindEventByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8596a0
	struct UFMODAsset* FindAssetByName(struct FString Name); // Function FMODStudio.FMODBlueprintStatics.FindAssetByName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859600
	void EventInstanceTriggerCue(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceTriggerCue // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859590
	void EventInstanceStop(struct FFMODEventInstance EventInstance, bool Release); // Function FMODStudio.FMODBlueprintStatics.EventInstanceStop // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8594d0
	void EventInstanceSetVolume(struct FFMODEventInstance EventInstance, float Volume); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859410
	void EventInstanceSetTransform(struct FFMODEventInstance EventInstance, struct FTransform Location); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x859300
	void EventInstanceSetProperty(struct FFMODEventInstance EventInstance, enum class EFMODEventProperty Property, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetProperty // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859200
	void EventInstanceSetPitch(struct FFMODEventInstance EventInstance, float Pitch); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPitch // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859140
	void EventInstanceSetPaused(struct FFMODEventInstance EventInstance, bool paused); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetPaused // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x859080
	void EventInstanceSetParameter(struct FFMODEventInstance EventInstance, struct FName Name, float Value); // Function FMODStudio.FMODBlueprintStatics.EventInstanceSetParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858f80
	void EventInstanceRelease(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceRelease // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858f10
	void EventInstancePlay(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstancePlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858ea0
	bool EventInstanceIsValid(struct FFMODEventInstance EventInstance); // Function FMODStudio.FMODBlueprintStatics.EventInstanceIsValid // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858e20
	void EventInstanceGetParameterValue(struct FFMODEventInstance EventInstance, struct FName Name, float UserValue, float FinalValue); // Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameterValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x858cc0
	float EventInstanceGetParameter(struct FFMODEventInstance EventInstance, struct FName Name); // Function FMODStudio.FMODBlueprintStatics.EventInstanceGetParameter // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858bf0
	void BusStopAllEvents(struct UFMODBus* Bus, enum class EFMOD_STUDIO_STOP_MODE stopMode); // Function FMODStudio.FMODBlueprintStatics.BusStopAllEvents // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858b30
	void BusSetVolume(struct UFMODBus* Bus, float Volume); // Function FMODStudio.FMODBlueprintStatics.BusSetVolume // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x858a70
	void BusSetPaused(struct UFMODBus* Bus, bool bPaused); // Function FMODStudio.FMODBlueprintStatics.BusSetPaused // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8589b0
	void BusSetMute(struct UFMODBus* Bus, bool bMute); // Function FMODStudio.FMODBlueprintStatics.BusSetMute // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8588f0
};

// Class FMODStudio.FMODBus
// Size: 0x38 (Inherited: 0x38)
struct UFMODBus : UFMODAsset {
};

// Class FMODStudio.FMODEvent
// Size: 0x38 (Inherited: 0x38)
struct UFMODEvent : UFMODAsset {
};

// Class FMODStudio.FMODEventControlSection
// Size: 0x180 (Inherited: 0xe8)
struct UFMODEventControlSection : UMovieSceneSection {
	struct FFMODEventControlChannel ControlKeys; // 0xe8(0x98)
};

// Class FMODStudio.FMODEventControlTrack
// Size: 0x90 (Inherited: 0x78)
struct UFMODEventControlTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> ControlSections; // 0x80(0x10)
};

// Class FMODStudio.FMODEventParameterTrack
// Size: 0x90 (Inherited: 0x78)
struct UFMODEventParameterTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class FMODStudio.FMODSettings
// Size: 0x160 (Inherited: 0x28)
struct UFMODSettings : UObject {
	bool bLoadAllBanks; // 0x28(0x01)
	bool bLoadAllSampleData; // 0x29(0x01)
	bool bEnableLiveUpdate; // 0x2a(0x01)
	bool bEnableEditorLiveUpdate; // 0x2b(0x01)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FDirectoryPath BankOutputDirectory; // 0x30(0x10)
	enum class EFMODSpeakerMode OutputFormat; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FFMODProjectLocale> Locales; // 0x48(0x10)
	bool bVol0Virtual; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	float Vol0VirtualLevel; // 0x5c(0x04)
	int32_t SampleRate; // 0x60(0x04)
	bool bMatchHardwareSampleRate; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
	int32_t RealChannelCount; // 0x68(0x04)
	int32_t TotalChannelCount; // 0x6c(0x04)
	int32_t DSPBufferLength; // 0x70(0x04)
	int32_t DSPBufferCount; // 0x74(0x04)
	int32_t FileBufferSize; // 0x78(0x04)
	int32_t StudioUpdatePeriod; // 0x7c(0x04)
	struct FString InitialOutputDriverName; // 0x80(0x10)
	bool bLockAllBuses; // 0x90(0x01)
	char pad_91[0x3]; // 0x91(0x03)
	struct FCustomPoolSizes MemoryPoolSizes; // 0x94(0x14)
	int32_t LiveUpdatePort; // 0xa8(0x04)
	int32_t EditorLiveUpdatePort; // 0xac(0x04)
	int32_t ReloadBanksDelay; // 0xb0(0x04)
	bool bEnableMemoryTracking; // 0xb4(0x01)
	char pad_B5[0x3]; // 0xb5(0x03)
	struct TArray<struct FString> PluginFiles; // 0xb8(0x10)
	struct FString ContentBrowserPrefix; // 0xc8(0x10)
	struct FString ForcePlatformName; // 0xd8(0x10)
	struct FString MasterBankName; // 0xe8(0x10)
	struct FString SkipLoadBankName; // 0xf8(0x10)
	struct FString StudioBankKey; // 0x108(0x10)
	struct FString WavWriterPath; // 0x118(0x10)
	enum class EFMODLogging LoggingLevel; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FString OcclusionParameter; // 0x130(0x10)
	struct FString AmbientVolumeParameter; // 0x140(0x10)
	struct FString AmbientLPFParameter; // 0x150(0x10)
};

// Class FMODStudio.FMODSnapshot
// Size: 0x38 (Inherited: 0x38)
struct UFMODSnapshot : UFMODEvent {
};

// Class FMODStudio.FMODSnapshotReverb
// Size: 0x70 (Inherited: 0x60)
struct UFMODSnapshotReverb : UReverbEffect {
	struct FGuid AssetGuid; // 0x60(0x10)
};

// Class FMODStudio.FMODVCA
// Size: 0x38 (Inherited: 0x38)
struct UFMODVCA : UFMODAsset {
};

