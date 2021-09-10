// Class MagicLeapARPin.MagicLeapARPinComponent
// Size: 0x3b0 (Inherited: 0x200)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x1f8(0x10)
	int32_t UserIndex; // 0x208(0x04)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x20c(0x01)
	bool bShouldPinActor; // 0x20d(0x01)
	struct UMagicLeapARPinSaveGame* PinDataClass; // 0x210(0x08)
	struct TSet<enum class EMagicLeapARPinType> SearchPinTypes; // 0x218(0x50)
	struct USphereComponent* SearchVolume; // 0x268(0x08)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x270(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x280(0x10)
	struct FMulticastInlineDelegate OnPinDataLoadAttemptCompleted; // 0x290(0x10)
	struct FGuid PinnedCFUID; // 0x2a0(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x2b0(0x08)
	struct UMagicLeapARPinSaveGame* PinData; // 0x2b8(0x08)
	char pad_2C6[0xea]; // 0x2c6(0xea)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // @ game+0x10b0350
	struct UMagicLeapARPinSaveGame* TryGetPinData(struct UMagicLeapARPinSaveGame* InPinDataClass, bool OutPinDataValid); // Function MagicLeapARPin.MagicLeapARPinComponent.TryGetPinData // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x10b0130
	bool PinToRestoredOrSyncedID(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToRestoredOrSyncedID // (Final|Native|Public|BlueprintCallable) // @ game+0x10afdd0
	bool PinToID(struct FGuid PinId); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10afd20
	void PinToBestFit(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinToBestFit // (Final|Native|Public|BlueprintCallable) // @ game+0x10afd00
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // @ game+0x10afc60
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10afc30
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // @ game+0x10afb90
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a38c80
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a38c80
	void MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature(bool bDataRestored); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.MagicLeapARPinDataLoadAttemptCompleted__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0x1a38c80
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x10afa40
	bool GetPinState(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x10af8e0
	bool GetPinnedPinID(struct FGuid PinId); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x10af990
	struct UMagicLeapARPinSaveGame* GetPinData(struct UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // @ game+0x10af840
	void AttemptPinDataRestorationAsync(); // Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestorationAsync // (Final|Native|Public|BlueprintCallable) // @ game+0x10aee00
	bool AttemptPinDataRestoration(); // Function MagicLeapARPin.MagicLeapARPinComponent.AttemptPinDataRestoration // (Final|Native|Public|BlueprintCallable) // @ game+0x10aedd0
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapContentBindingFoundDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10b02b0
	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10b0210
	enum class EMagicLeapPassableWorldError SetGlobalQueryFilter(struct FMagicLeapARPinQuery InGlobalFilter); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetGlobalQueryFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10affc0
	void SetContentBindingSaveGameUserIndex(int32_t UserIndex); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.SetContentBindingSaveGameUserIndex // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10aff40
	enum class EMagicLeapPassableWorldError QueryARPins(struct FMagicLeapARPinQuery Query, struct TArray<struct FGuid> Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.QueryARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10afe00
	bool ParseStringToARPinId(struct FString PinIdString, struct FGuid ARPinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ParseStringToARPinId // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x10afaa0
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10afa70
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10af7b0
	enum class EMagicLeapPassableWorldError GetGlobalQueryFilter(struct FMagicLeapARPinQuery CurrentGlobalFilter); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetGlobalQueryFilter // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10af6d0
	int32_t GetContentBindingSaveGameUserIndex(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetContentBindingSaveGameUserIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x10af6a0
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector SearchPoint, struct FGuid PinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10af5b0
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid> Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10af4c0
	struct FString GetARPinStateToString(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x10af3e0
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid PinId, struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10af2e0
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid PinId, struct FVector position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10af150
	bool GetARPinPositionAndOrientation(struct FGuid PinId, struct FVector position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x10aefc0
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10aef90
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x10aef60
	void BindToOnMagicLeapContentBindingFoundDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapContentBindingFoundDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10aeec0
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x10aee20
	struct FString ARPinIdToString(struct FGuid ARPinId); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.ARPinIdToString // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // @ game+0x10aecf0
};

// Class MagicLeapARPin.MagicLeapARPinInfoActorBase
// Size: 0x238 (Inherited: 0x220)
struct AMagicLeapARPinInfoActorBase : AActor {
	struct FGuid PinId; // 0x220(0x10)
	bool bVisibilityOverride; // 0x230(0x01)
	char pad_231[0x7]; // 0x231(0x07)

	void OnUpdateARPinState(); // Function MagicLeapARPin.MagicLeapARPinInfoActorBase.OnUpdateARPinState // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

// Class MagicLeapARPin.MagicLeapARPinRenderer
// Size: 0x288 (Inherited: 0x220)
struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x220(0x01)
	char pad_221[0x7]; // 0x221(0x07)
	struct TMap<struct FGuid, struct AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228(0x50)
	char pad_278[0x8]; // 0x278(0x08)
	struct AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280(0x08)

	void SetVisibilityOverride(bool InVisibilityOverride); // Function MagicLeapARPin.MagicLeapARPinRenderer.SetVisibilityOverride // (Final|Native|Private|BlueprintCallable) // @ game+0x10b00a0
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size: 0x40 (Inherited: 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x04)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c(0x14)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size: 0xb0 (Inherited: 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	char pad_38[0x8]; // 0x38(0x08)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
	bool bShouldPinActor; // 0xa0(0x01)
	char pad_A1[0xf]; // 0xa1(0x0f)
};

// Class MagicLeapARPin.MagicLeapARPinContentBindings
// Size: 0x78 (Inherited: 0x28)
struct UMagicLeapARPinContentBindings : USaveGame {
	struct TMap<struct FGuid, struct FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28(0x50)
};

