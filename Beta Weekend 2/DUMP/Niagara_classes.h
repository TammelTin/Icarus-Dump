// Class Niagara.NiagaraDataInterface
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraDataInterface : UNiagaraDataInterfaceBase {
	char pad_28[0x10]; // 0x28(0x10)
};

// Class Niagara.NiagaraDataInterfaceRWBase
// Size: 0xd8 (Inherited: 0x38)
struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	struct TSet<int32_t> OutputShaderStages; // 0x38(0x50)
	struct TSet<int32_t> IterationShaderStages; // 0x88(0x50)
};

// Class Niagara.MovieSceneNiagaraTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class Niagara.MovieSceneNiagaraParameterTrack
// Size: 0xa8 (Inherited: 0x88)
struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	struct FNiagaraVariable Parameter; // 0x88(0x20)
};

// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraBoolParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraColorParameterTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraColorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraFloatParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneNiagaraIntegerParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8(0x04)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec(0x04)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0(0x04)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
};

// Class Niagara.MovieSceneNiagaraSystemTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieSceneNiagaraSystemTrack : UMovieSceneNiagaraTrack {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	int32_t ChannelsUsed; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class Niagara.NiagaraActor
// Size: 0x230 (Inherited: 0x220)
struct ANiagaraActor : AActor {
	struct UNiagaraComponent* NiagaraComponent; // 0x220(0x08)
	char bDestroyOnSystemFinish : 1; // 0x228(0x01)
	char pad_228_1 : 7; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish); // Function Niagara.NiagaraActor.SetDestroyOnSystemFinish // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0xd66320
	void OnNiagaraSystemFinished(struct UNiagaraComponent* FinishedComponent); // Function Niagara.NiagaraActor.OnNiagaraSystemFinished // (Final|Native|Private) // @ game+0xd66290
};

// Class Niagara.NiagaraComponent
// Size: 0x5f0 (Inherited: 0x440)
struct UNiagaraComponent : UFXSystemComponent {
	struct UNiagaraSystem* Asset; // 0x440(0x08)
	enum class ENiagaraTickBehavior TickBehavior; // 0x448(0x01)
	char pad_449[0x7]; // 0x449(0x07)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x450(0xc8)
	char bForceSolo : 1; // 0x518(0x01)
	char bEnableGpuComputeDebug : 1; // 0x518(0x01)
	char pad_518_2 : 6; // 0x518(0x01)
	char pad_519[0x2b]; // 0x519(0x2b)
	char bAutoDestroy : 1; // 0x544(0x01)
	char bRenderingEnabled : 1; // 0x544(0x01)
	char bAutoManageAttachment : 1; // 0x544(0x01)
	char bAutoAttachWeldSimulatedBodies : 1; // 0x544(0x01)
	char pad_544_4 : 4; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	float MaxTimeBeforeForceUpdateTransform; // 0x548(0x04)
	char pad_54C[0x4]; // 0x54c(0x04)
	struct TArray<struct FNiagaraMaterialOverride> EmitterMaterials; // 0x550(0x10)
	char pad_560[0x8]; // 0x560(0x08)
	struct FMulticastInlineDelegate OnSystemFinished; // 0x568(0x10)
	struct TWeakObjectPtr<struct USceneComponent> AutoAttachParent; // 0x578(0x08)
	struct FName AutoAttachSocketName; // 0x580(0x08)
	enum class EAttachmentRule AutoAttachLocationRule; // 0x588(0x01)
	enum class EAttachmentRule AutoAttachRotationRule; // 0x589(0x01)
	enum class EAttachmentRule AutoAttachScaleRule; // 0x58a(0x01)
	char pad_58B[0x65]; // 0x58b(0x65)

	void SetVariableVec4(struct FName InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd6a8c0
	void SetVariableVec3(struct FName InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd6a7e0
	void SetVariableVec2(struct FName InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd6a710
	void SetVariableTextureRenderTarget(struct FName InVariableName, struct UTextureRenderTarget* TextureRenderTarget); // Function Niagara.NiagaraComponent.SetVariableTextureRenderTarget // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a640
	void SetVariableQuat(struct FName InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd6a570
	void SetVariableObject(struct FName InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a4a0
	void SetVariableMaterial(struct FName InVariableName, struct UMaterialInterface* Object); // Function Niagara.NiagaraComponent.SetVariableMaterial // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a3d0
	void SetVariableLinearColor(struct FName InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd6a300
	void SetVariableInt(struct FName InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a230
	void SetVariableFloat(struct FName InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a160
	void SetVariableBool(struct FName InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xd6a090
	void SetVariableActor(struct FName InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xd69fc0
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior); // Function Niagara.NiagaraComponent.SetTickBehavior // (Final|Native|Public|BlueprintCallable) // @ game+0xd69f40
	void SetSeekDelta(float InSeekDelta); // Function Niagara.NiagaraComponent.SetSeekDelta // (Final|Native|Public|BlueprintCallable) // @ game+0xd69ec0
	void SetRenderingEnabled(bool bInRenderingEnabled); // Function Niagara.NiagaraComponent.SetRenderingEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0xd69e30
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance); // Function Niagara.NiagaraComponent.SetPreviewLODDistance // (Final|Native|Public|BlueprintCallable) // @ game+0xd69d60
	void SetPaused(bool bInPaused); // Function Niagara.NiagaraComponent.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xd69cd0
	void SetNiagaraVariableVec4(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec4 // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd69be0
	void SetNiagaraVariableVec3(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec3 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd69af0
	void SetNiagaraVariableVec2(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableVec2 // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd69a10
	void SetNiagaraVariableQuat(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd69920
	void SetNiagaraVariableObject(struct FString InVariableName, struct UObject* Object); // Function Niagara.NiagaraComponent.SetNiagaraVariableObject // (Final|Native|Public|BlueprintCallable) // @ game+0xd694a0
	void SetNiagaraVariableLinearColor(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableLinearColor // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd69830
	void SetNiagaraVariableInt(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableInt // (Final|Native|Public|BlueprintCallable) // @ game+0xd69750
	void SetNiagaraVariableFloat(struct FString InVariableName, float InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableFloat // (Final|Native|Public|BlueprintCallable) // @ game+0xd69660
	void SetNiagaraVariableBool(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraComponent.SetNiagaraVariableBool // (Final|Native|Public|BlueprintCallable) // @ game+0xd69580
	void SetNiagaraVariableActor(struct FString InVariableName, struct AActor* Actor); // Function Niagara.NiagaraComponent.SetNiagaraVariableActor // (Final|Native|Public|BlueprintCallable) // @ game+0xd694a0
	void SetMaxSimTime(float InMaxTime); // Function Niagara.NiagaraComponent.SetMaxSimTime // (Final|Native|Public|BlueprintCallable) // @ game+0xd69420
	void SetGpuComputeDebug(bool bEnableDebug); // Function Niagara.NiagaraComponent.SetGpuComputeDebug // (Final|Native|Public|BlueprintCallable) // @ game+0xd69390
	void SetForceSolo(bool bInForceSolo); // Function Niagara.NiagaraComponent.SetForceSolo // (Final|Native|Public|BlueprintCallable) // @ game+0xd69300
	void SetDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SetDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xd69280
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking); // Function Niagara.NiagaraComponent.SetCanRenderWhileSeeking // (Final|Native|Public|BlueprintCallable) // @ game+0xd691f0
	void SetAutoDestroy(bool bInAutoDestroy); // Function Niagara.NiagaraComponent.SetAutoDestroy // (Final|Native|Public|BlueprintCallable) // @ game+0xd69160
	void SetAsset(struct UNiagaraSystem* InAsset); // Function Niagara.NiagaraComponent.SetAsset // (Final|Native|Public|BlueprintCallable) // @ game+0xd690d0
	void SetAllowScalability(bool bAllow); // Function Niagara.NiagaraComponent.SetAllowScalability // (Final|Native|Public|BlueprintCallable) // @ game+0xd69040
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode); // Function Niagara.NiagaraComponent.SetAgeUpdateMode // (Final|Native|Public|BlueprintCallable) // @ game+0xd68fc0
	void SeekToDesiredAge(float InDesiredAge); // Function Niagara.NiagaraComponent.SeekToDesiredAge // (Final|Native|Public|BlueprintCallable) // @ game+0xd68f40
	void ResetSystem(); // Function Niagara.NiagaraComponent.ResetSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xd68f20
	void ReinitializeSystem(); // Function Niagara.NiagaraComponent.ReinitializeSystem // (Final|Native|Public|BlueprintCallable) // @ game+0xd68f00
	bool IsPaused(); // Function Niagara.NiagaraComponent.IsPaused // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68ed0
	enum class ENiagaraTickBehavior GetTickBehavior(); // Function Niagara.NiagaraComponent.GetTickBehavior // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68eb0
	float GetSeekDelta(); // Function Niagara.NiagaraComponent.GetSeekDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68e80
	bool GetPreviewLODDistanceEnabled(); // Function Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68e60
	int32_t GetPreviewLODDistance(); // Function Niagara.NiagaraComponent.GetPreviewLODDistance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68e40
	struct TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd68ba0
	struct TArray<float> GetNiagaraParticleValues_DebugOnly(struct FString InEmitterName, struct FString InValueName); // Function Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd68cf0
	struct TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(struct FString InEmitterName); // Function Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly // (Final|Native|Public|BlueprintCallable) // @ game+0xd68ab0
	float GetMaxSimTime(); // Function Niagara.NiagaraComponent.GetMaxSimTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68a80
	bool GetForceSolo(); // Function Niagara.NiagaraComponent.GetForceSolo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68a50
	float GetDesiredAge(); // Function Niagara.NiagaraComponent.GetDesiredAge // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68a20
	struct UNiagaraDataInterface* GetDataInterface(struct FString Name); // Function Niagara.NiagaraComponent.GetDataInterface // (Final|Native|Public|BlueprintCallable) // @ game+0xd68970
	struct UNiagaraSystem* GetAsset(); // Function Niagara.NiagaraComponent.GetAsset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68950
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode(); // Function Niagara.NiagaraComponent.GetAgeUpdateMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0xd68920
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulationByTime // (Final|Native|Public|BlueprintCallable) // @ game+0xd68850
	void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds); // Function Niagara.NiagaraComponent.AdvanceSimulation // (Final|Native|Public|BlueprintCallable) // @ game+0xd68780
};

// Class Niagara.NiagaraComponentPool
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraComponentPool : UObject {
	struct TMap<struct UNiagaraSystem*, struct FNCPool> WorldParticleSystemPools; // 0x28(0x50)
	char pad_78[0x8]; // 0x78(0x08)
};

// Class Niagara.NiagaraRendererProperties
// Size: 0x80 (Inherited: 0x28)
struct UNiagaraRendererProperties : UNiagaraMergeable {
	struct FNiagaraPlatformSet Platforms; // 0x28(0x30)
	int32_t SortOrderHint; // 0x58(0x04)
	bool bIsEnabled; // 0x5c(0x01)
	bool bMotionBlurEnabled; // 0x5d(0x01)
	char pad_5E[0x22]; // 0x5e(0x22)
};

// Class Niagara.NiagaraComponentRendererProperties
// Size: 0x160 (Inherited: 0x80)
struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	struct USceneComponent* ComponentType; // 0x80(0x08)
	uint32_t ComponentCountLimit; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct FNiagaraVariableAttributeBinding EnabledBinding; // 0x90(0x58)
	bool bAssignComponentsOnParticleID; // 0xe8(0x01)
	bool bOnlyCreateComponentsOnParticleSpawn; // 0xe9(0x01)
	char pad_EA[0x6]; // 0xea(0x06)
	struct USceneComponent* TemplateComponent; // 0xf0(0x08)
	struct TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings; // 0xf8(0x10)
	char pad_108[0x58]; // 0x108(0x58)
};

// Class Niagara.NiagaraComponentSettings
// Size: 0x118 (Inherited: 0x28)
struct UNiagaraComponentSettings : UObject {
	struct TSet<struct FName> SuppressActivationList; // 0x28(0x50)
	struct TSet<struct FName> ForceAutoPooolingList; // 0x78(0x50)
	struct TSet<struct FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8(0x50)
};

// Class Niagara.NiagaraConvertInPlaceUtilityBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraConvertInPlaceUtilityBase : UObject {
};

// Class Niagara.NiagaraDataInterface2DArrayTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	struct UTexture2DArray* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceArray
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	char pad_38[0x8]; // 0x38(0x08)
	int32_t MaxElements; // 0x40(0x04)
	char pad_44[0xc]; // 0x44(0x0c)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	struct TArray<float> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat2
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector2D> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat3
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFloat4
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	struct TArray<struct FVector4> FloatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayColor
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	struct TArray<struct FLinearColor> ColorData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayQuat
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	struct TArray<struct FQuat> QuatData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraDataInterfaceArrayFunctionLibrary : UBlueprintFunctionLibrary {

	void SetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector4> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector4 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6ea30
	void SetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector2D> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector2D // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e910
	void SetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FVector> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayVector // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6eb50
	void SetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FQuat> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayQuat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e7f0
	void SetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<int32_t> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayInt32 // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e6d0
	void SetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<float> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayFloat // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e5b0
	void SetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<struct FLinearColor> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayColor // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e490
	void SetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName, struct TArray<bool> ArrayData); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.SetNiagaraArrayBool // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // @ game+0xd6e370
	struct TArray<struct FVector4> GetNiagaraArrayVector4(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector4 // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6daf0
	struct TArray<struct FVector2D> GetNiagaraArrayVector2D(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector2D // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d9e0
	struct TArray<struct FVector> GetNiagaraArrayVector(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayVector // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6dc00
	struct TArray<struct FQuat> GetNiagaraArrayQuat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayQuat // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d8d0
	struct TArray<int32_t> GetNiagaraArrayInt32(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayInt32 // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d7c0
	struct TArray<float> GetNiagaraArrayFloat(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayFloat // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d6b0
	struct TArray<struct FLinearColor> GetNiagaraArrayColor(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayColor // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d5a0
	struct TArray<bool> GetNiagaraArrayBool(struct UNiagaraComponent* NiagaraSystem, struct FName OverrideName); // Function Niagara.NiagaraDataInterfaceArrayFunctionLibrary.GetNiagaraArrayBool // (Final|Native|Static|Private|BlueprintCallable) // @ game+0xd6d490
};

// Class Niagara.NiagaraDataInterfaceArrayInt32
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	struct TArray<int32_t> IntData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceArrayBool
// Size: 0x60 (Inherited: 0x50)
struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	struct TArray<bool> BoolData; // 0x50(0x10)
};

// Class Niagara.NiagaraDataInterfaceAudioSubmix
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	struct USoundSubmix* Submix; // 0x38(0x08)
	int32_t Resolution; // 0x40(0x04)
	float ScopeInMilliseconds; // 0x44(0x04)
};

// Class Niagara.NiagaraDataInterfaceAudioPlayer
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	struct USoundBase* SoundToPlay; // 0x38(0x08)
	struct USoundAttenuation* Attenuation; // 0x40(0x08)
	struct USoundConcurrency* Concurrency; // 0x48(0x08)
	struct TArray<struct FName> ParameterNames; // 0x50(0x10)
	bool bLimitPlaysPerTick; // 0x60(0x01)
	char pad_61[0x3]; // 0x61(0x03)
	int32_t MaxPlaysPerTick; // 0x64(0x04)
	bool bStopWhenComponentIsDestroyed; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
};

// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// Size: 0x50 (Inherited: 0x40)
struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40(0x04)
	float MinimumFrequency; // 0x44(0x04)
	float MaximumFrequency; // 0x48(0x04)
	float NoiseFloorDb; // 0x4c(0x04)
};

// Class Niagara.NiagaraDataInterfaceCamera
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38(0x04)
	bool bRequireCurrentFrameData; // 0x3c(0x01)
	char pad_3D[0x3]; // 0x3d(0x03)
};

// Class Niagara.NiagaraDataInterfaceCollisionQuery
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCollisionQuery : UNiagaraDataInterface {
	char pad_38[0x10]; // 0x38(0x10)
};

// Class Niagara.NiagaraDataInterfaceCurveBase
// Size: 0x70 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	struct TArray<float> ShaderLUT; // 0x38(0x10)
	float LUTMinTime; // 0x48(0x04)
	float LUTMaxTime; // 0x4c(0x04)
	float LUTInvTimeRange; // 0x50(0x04)
	float LUTNumSamplesMinusOne; // 0x54(0x04)
	char bUseLUT : 1; // 0x58(0x01)
	char bExposeCurve : 1; // 0x58(0x01)
	char pad_58_2 : 6; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	struct FName ExposedName; // 0x5c(0x08)
	char pad_64[0x4]; // 0x64(0x04)
	struct UTexture2D* ExposedTexture; // 0x68(0x08)
};

// Class Niagara.NiagaraDataInterfaceColorCurve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve RedCurve; // 0x70(0x80)
	struct FRichCurve GreenCurve; // 0xf0(0x80)
	struct FRichCurve BlueCurve; // 0x170(0x80)
	struct FRichCurve AlphaCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceCurlNoise
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38(0x04)
	char pad_3C[0xc]; // 0x3c(0x0c)
};

// Class Niagara.NiagaraDataInterfaceCurve
// Size: 0xf0 (Inherited: 0x70)
struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve Curve; // 0x70(0x80)
};

// Class Niagara.NiagaraParticleCallbackHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraParticleCallbackHandler : UInterface {

	void ReceiveParticleData(struct TArray<struct FBasicParticleData> Data, struct UNiagaraSystem* NiagaraSystem); // Function Niagara.NiagaraParticleCallbackHandler.ReceiveParticleData // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xd6e270
};

// Class Niagara.NiagaraDataInterfaceExport
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	struct FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38(0x20)
	enum class ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58(0x01)
	char pad_59[0x3]; // 0x59(0x03)
	int32_t GPUAllocationFixedSize; // 0x5c(0x04)
	float GPUAllocationPerParticleSize; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
};

// Class Niagara.NiagaraDataInterfaceGBuffer
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceGBuffer : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceGrid2D
// Size: 0xf8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8(0x04)
	int32_t NumCellsY; // 0xdc(0x04)
	int32_t NumCellsMaxAxis; // 0xe0(0x04)
	int32_t NumAttributes; // 0xe4(0x04)
	bool SetGridFromMaxAxis; // 0xe8(0x01)
	char pad_E9[0x3]; // 0xe9(0x03)
	struct FVector2D WorldBBoxSize; // 0xec(0x08)
	char pad_F4[0x4]; // 0xf4(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// Size: 0x1c0 (Inherited: 0xf8)
struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8(0x20)
	enum class ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118(0x01)
	char bOverrideFormat : 1; // 0x119(0x01)
	char pad_119_1 : 7; // 0x119(0x01)
	char pad_11A[0x56]; // 0x11a(0x56)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170(0x50)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6dfc0
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6dd10
	bool FillTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D // (Native|Public|BlueprintCallable) // @ game+0xd6d370
	bool FillRawTexture2D(struct UNiagaraComponent* Component, struct UTextureRenderTarget2D* Dest, int32_t TilesX, int32_t TilesY); // Function Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6d000
};

// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Size: 0x168 (Inherited: 0xf8)
struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	struct FString EmitterName; // 0xf8(0x10)
	struct FString DIName; // 0x108(0x10)
	char pad_118[0x50]; // 0x118(0x50)
};

// Class Niagara.NiagaraDataInterfaceGrid3D
// Size: 0x100 (Inherited: 0xd8)
struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	struct FIntVector NumCells; // 0xd8(0x0c)
	float CellSize; // 0xe4(0x04)
	int32_t NumCellsMaxAxis; // 0xe8(0x04)
	enum class ESetResolutionMethod SetResolutionMethod; // 0xec(0x04)
	struct FVector WorldBBoxSize; // 0xf0(0x0c)
	char pad_FC[0x4]; // 0xfc(0x04)
};

// Class Niagara.NiagaraDataInterfaceGrid3DCollection
// Size: 0x180 (Inherited: 0x100)
struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108(0x20)
	enum class ENiagaraGpuBufferFormat BufferFormat; // 0x128(0x01)
	char pad_129[0x57]; // 0x129(0x57)

	void GetTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY, int32_t SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6e0f0
	void GetRawTextureSize(struct UNiagaraComponent* Component, int32_t SizeX, int32_t SizeY, int32_t SizeZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6de40
	bool FillVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t AttributeIndex); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture // (Native|Public|BlueprintCallable) // @ game+0xd6d370
	bool FillRawVolumeTexture(struct UNiagaraComponent* Component, struct UVolumeTexture* Dest, int32_t TilesX, int32_t TilesY, int32_t TileZ); // Function Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd6d170
};

// Class Niagara.NiagaraDataInterfaceLandscape
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	struct AActor* SourceLandscape; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// Size: 0x108 (Inherited: 0x100)
struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
};

// Class Niagara.NiagaraDataInterfaceOcclusion
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceOcclusion : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceParticleRead
// Size: 0xe8 (Inherited: 0xd8)
struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	struct FString EmitterName; // 0xd8(0x10)
};

// Class Niagara.NiagaraDataInterfacePlatformSet
// Size: 0x68 (Inherited: 0x38)
struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	struct FNiagaraPlatformSet Platforms; // 0x38(0x30)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2D
// Size: 0x158 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	struct FIntPoint Size; // 0xd8(0x08)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0(0x01)
	char bOverrideFormat : 1; // 0xe1(0x01)
	char pad_E1_1 : 7; // 0xe1(0x01)
	char pad_E2[0x6]; // 0xe2(0x06)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
// Size: 0x158 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xd8(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4(0x01)
	char bOverrideFormat : 1; // 0xe5(0x01)
	char pad_E5_1 : 7; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
// Size: 0x158 (Inherited: 0xd8)
struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	struct FIntVector Size; // 0xd8(0x0c)
	enum class ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4(0x01)
	char bOverrideFormat : 1; // 0xe5(0x01)
	char pad_E5_1 : 7; // 0xe5(0x01)
	char pad_E6[0x2]; // 0xe6(0x02)
	struct FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8(0x20)
	struct TMap<uint64_t, struct UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108(0x50)
};

// Class Niagara.NiagaraDataInterfaceSimpleCounter
// Size: 0x38 (Inherited: 0x38)
struct UNiagaraDataInterfaceSimpleCounter : UNiagaraDataInterface {
};

// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// Size: 0xc0 (Inherited: 0x38)
struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	enum class ENDISkeletalMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct AActor* Source; // 0x40(0x08)
	struct FNiagaraUserParameterBinding MeshUserParameter; // 0x48(0x20)
	struct USkeletalMeshComponent* SourceComponent; // 0x68(0x08)
	enum class ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
	struct TArray<struct FName> SamplingRegions; // 0x78(0x10)
	int32_t WholeMeshLOD; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
	struct TArray<struct FName> FilteredBones; // 0x90(0x10)
	struct TArray<struct FName> FilteredSockets; // 0xa0(0x10)
	struct FName ExcludeBoneName; // 0xb0(0x08)
	char bExcludeBone : 1; // 0xb8(0x01)
	char pad_B8_1 : 7; // 0xb8(0x01)
	bool bRequireCurrentFrameData; // 0xb9(0x01)
	char pad_BA[0x6]; // 0xba(0x06)
};

// Class Niagara.NiagaraDataInterfaceSpline
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	struct AActor* Source; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceStaticMesh
// Size: 0x88 (Inherited: 0x38)
struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	enum class ENDIStaticMesh_SourceMode SourceMode; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
	struct UStaticMesh* DefaultMesh; // 0x40(0x08)
	struct AActor* Source; // 0x48(0x08)
	struct UStaticMeshComponent* SourceComponent; // 0x50(0x08)
	struct FNDIStaticMeshSectionFilter SectionFilter; // 0x58(0x10)
	bool bUsePhysicsBodyVelocity; // 0x68(0x01)
	char pad_69[0x7]; // 0x69(0x07)
	struct TArray<struct FName> FilteredSockets; // 0x70(0x10)
	char pad_80[0x8]; // 0x80(0x08)
};

// Class Niagara.NiagaraDataInterfaceTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	struct UTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraDataInterfaceVector2DCurve
// Size: 0x170 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVector4Curve
// Size: 0x270 (Inherited: 0x70)
struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
	struct FRichCurve WCurve; // 0x1f0(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorCurve
// Size: 0x1f0 (Inherited: 0x70)
struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	struct FRichCurve XCurve; // 0x70(0x80)
	struct FRichCurve YCurve; // 0xf0(0x80)
	struct FRichCurve ZCurve; // 0x170(0x80)
};

// Class Niagara.NiagaraDataInterfaceVectorField
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	struct UVectorField* Field; // 0x38(0x08)
	bool bTileX; // 0x40(0x01)
	bool bTileY; // 0x41(0x01)
	bool bTileZ; // 0x42(0x01)
	char pad_43[0x5]; // 0x43(0x05)
};

// Class Niagara.NiagaraDataInterfaceVolumeTexture
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	struct UVolumeTexture* Texture; // 0x38(0x08)
};

// Class Niagara.NiagaraEditorDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEditorDataBase : UObject {
};

// Class Niagara.NiagaraSignificanceHandler
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandler : UObject {
};

// Class Niagara.NiagaraSignificanceHandlerDistance
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerDistance : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraSignificanceHandlerAge
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraSignificanceHandlerAge : UNiagaraSignificanceHandler {
};

// Class Niagara.NiagaraEffectType
// Size: 0x110 (Inherited: 0x28)
struct UNiagaraEffectType : UObject {
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28(0x04)
	enum class ENiagaraCullReaction CullReaction; // 0x2c(0x04)
	struct UNiagaraSignificanceHandler* SignificanceHandler; // 0x30(0x08)
	struct TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38(0x10)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48(0x10)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58(0x10)
	char pad_68[0xa8]; // 0x68(0xa8)
};

// Class Niagara.NiagaraEmitter
// Size: 0x2a0 (Inherited: 0x28)
struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28(0x01)
	bool bDeterminism; // 0x29(0x01)
	char pad_2A[0x2]; // 0x2a(0x02)
	int32_t RandomSeed; // 0x2c(0x04)
	enum class EParticleAllocationMode AllocationMode; // 0x30(0x01)
	char pad_31[0x3]; // 0x31(0x03)
	int32_t PreAllocationCount; // 0x34(0x04)
	struct FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38(0x28)
	struct FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60(0x28)
	enum class ENiagaraSimTarget SimTarget; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	struct FBox FixedBounds; // 0x8c(0x1c)
	int32_t MinDetailLevel; // 0xa8(0x04)
	int32_t MaxDetailLevel; // 0xac(0x04)
	struct FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb0(0x14)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FNiagaraPlatformSet Platforms; // 0xc8(0x30)
	struct FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf8(0x10)
	char bInterpolatedSpawning : 1; // 0x108(0x01)
	char bFixedBounds : 1; // 0x108(0x01)
	char bUseMinDetailLevel : 1; // 0x108(0x01)
	char bUseMaxDetailLevel : 1; // 0x108(0x01)
	char bOverrideGlobalSpawnCountScale : 1; // 0x108(0x01)
	char bRequiresPersistentIDs : 1; // 0x108(0x01)
	char bCombineEventSpawn : 1; // 0x108(0x01)
	char pad_108_7 : 1; // 0x108(0x01)
	char pad_109[0x3]; // 0x109(0x03)
	float MaxDeltaTimePerTick; // 0x10c(0x04)
	uint32_t DefaultShaderStageIndex; // 0x110(0x04)
	uint32_t MaxUpdateIterations; // 0x114(0x04)
	struct TSet<uint32_t> SpawnStages; // 0x118(0x50)
	char bSimulationStagesEnabled : 1; // 0x168(0x01)
	char bDeprecatedShaderStagesEnabled : 1; // 0x168(0x01)
	char bLimitDeltaTime : 1; // 0x168(0x01)
	char pad_168_3 : 5; // 0x168(0x01)
	char pad_169[0x7]; // 0x169(0x07)
	struct FString UniqueEmitterName; // 0x170(0x10)
	struct TArray<struct UNiagaraRendererProperties*> RendererProperties; // 0x180(0x10)
	struct TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x190(0x10)
	struct TArray<struct UNiagaraSimulationStageBase*> SimulationStages; // 0x1a0(0x10)
	struct UNiagaraScript* GPUComputeScript; // 0x1b0(0x08)
	struct TArray<struct FName> SharedEventGeneratorIds; // 0x1b8(0x10)
	char pad_1C8[0xd8]; // 0x1c8(0xd8)
};

// Class Niagara.NiagaraEventReceiverEmitterAction
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction : UObject {
};

// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// Size: 0x30 (Inherited: 0x28)
struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// Class Niagara.NiagaraFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraFunctionLibrary : UBlueprintFunctionLibrary {

	struct UNiagaraComponent* SpawnSystemAttached(struct UNiagaraSystem* SystemTemplate, struct USceneComponent* AttachToComponent, struct FName AttachPointName, struct FVector Location, struct FRotator Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAttached // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd76710
	struct UNiagaraComponent* SpawnSystemAtLocation(struct UObject* WorldContextObject, struct UNiagaraSystem* SystemTemplate, struct FVector Location, struct FRotator Rotation, struct FVector Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck); // Function Niagara.NiagaraFunctionLibrary.SpawnSystemAtLocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // @ game+0xd76430
	void SetVolumeTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UVolumeTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetVolumeTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd76310
	void SetTextureObject(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UTexture* Texture); // Function Niagara.NiagaraFunctionLibrary.SetTextureObject // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd75f30
	void SetSkeletalMeshDataInterfaceSamplingRegions(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct TArray<struct FName> SamplingRegions); // Function Niagara.NiagaraFunctionLibrary.SetSkeletalMeshDataInterfaceSamplingRegions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xd75e00
	void OverrideSystemUserVariableStaticMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMeshComponent* StaticMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd75850
	void OverrideSystemUserVariableStaticMesh(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct UStaticMesh* StaticMesh); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableStaticMesh // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd75730
	void OverrideSystemUserVariableSkeletalMeshComponent(struct UNiagaraComponent* NiagaraSystem, struct FString OverrideName, struct USkeletalMeshComponent* SkeletalMeshComponent); // Function Niagara.NiagaraFunctionLibrary.OverrideSystemUserVariableSkeletalMeshComponent // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd75610
	struct UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(struct UObject* WorldContextObject, struct UNiagaraParameterCollection* Collection); // Function Niagara.NiagaraFunctionLibrary.GetNiagaraParameterCollection // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xd75240
};

// Class Niagara.NiagaraLightRendererProperties
// Size: 0x2d8 (Inherited: 0x80)
struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x80(0x01)
	char bAffectsTranslucency : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	float RadiusScale; // 0x84(0x04)
	struct FVector ColorAdd; // 0x88(0x0c)
	char pad_94[0x4]; // 0x94(0x04)
	struct FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98(0x58)
	struct FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf0(0x58)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x148(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x1a0(0x58)
	struct FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8(0x58)
	struct FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250(0x58)
	char pad_2A8[0x30]; // 0x2a8(0x30)
};

// Class Niagara.NiagaraMeshRendererProperties
// Size: 0x678 (Inherited: 0x80)
struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	struct UStaticMesh* ParticleMesh; // 0x80(0x08)
	enum class ENiagaraSortMode SortMode; // 0x88(0x01)
	char pad_89[0x3]; // 0x89(0x03)
	char bOverrideMaterials : 1; // 0x8c(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0x8c(0x01)
	char pad_8C_2 : 6; // 0x8c(0x01)
	char pad_8D[0x3]; // 0x8d(0x03)
	struct TArray<struct FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90(0x10)
	struct FVector2D SubImageSize; // 0xa0(0x08)
	char bSubImageBlend : 1; // 0xa8(0x01)
	char pad_A8_1 : 7; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	enum class ENiagaraMeshFacingMode FacingMode; // 0xac(0x01)
	char pad_AD[0x3]; // 0xad(0x03)
	char bLockedAxisEnable : 1; // 0xb0(0x01)
	char pad_B0_1 : 7; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	struct FVector LockedAxis; // 0xb4(0x0c)
	enum class ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xc0(0x01)
	char pad_C1[0x3]; // 0xc1(0x03)
	struct FVector PivotOffset; // 0xc4(0x0c)
	enum class ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	char bEnableFrustumCulling : 1; // 0xd4(0x01)
	char bEnableCameraDistanceCulling : 1; // 0xd4(0x01)
	char pad_D4_2 : 6; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float MinCameraDistance; // 0xd8(0x04)
	float MaxCameraDistance; // 0xdc(0x04)
	uint32_t RendererVisibility; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x140(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x58)
	struct FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1f0(0x58)
	struct FNiagaraVariableAttributeBinding ScaleBinding; // 0x248(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2a0(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2f8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x350(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3a8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x400(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x458(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4b0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x508(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x560(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5b8(0x58)
	char pad_610[0x68]; // 0x610(0x68)
};

// Class Niagara.NiagaraMessageDataBase
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraMessageDataBase : UObject {
};

// Class Niagara.NiagaraParameterCollectionInstance
// Size: 0xc0 (Inherited: 0x28)
struct UNiagaraParameterCollectionInstance : UObject {
	struct UNiagaraParameterCollection* Collection; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> OverridenParameters; // 0x30(0x10)
	struct FNiagaraParameterStore ParameterStorage; // 0x40(0x78)
	char pad_B8[0x8]; // 0xb8(0x08)

	void SetVectorParameter(struct FString InVariableName, struct FVector InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd76220
	void SetVector4Parameter(struct FString InVariableName, struct FVector4 InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd76130
	void SetVector2DParameter(struct FString InVariableName, struct FVector2D InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd76050
	void SetQuatParameter(struct FString InVariableName, struct FQuat InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetQuatParameter // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0xd75d10
	void SetIntParameter(struct FString InVariableName, int32_t InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd75c30
	void SetFloatParameter(struct FString InVariableName, float InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd75b40
	void SetColorParameter(struct FString InVariableName, struct FLinearColor InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd75a50
	void SetBoolParameter(struct FString InVariableName, bool InValue); // Function Niagara.NiagaraParameterCollectionInstance.SetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd75970
	struct FVector GetVectorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVectorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd75550
	struct FVector4 GetVector4Parameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd75490
	struct FVector2D GetVector2DParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd753d0
	struct FQuat GetQuatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetQuatParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd75310
	int32_t GetIntParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetIntParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd75190
	float GetFloatParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetFloatParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd750e0
	struct FLinearColor GetColorParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetColorParameter // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0xd75020
	bool GetBoolParameter(struct FString InVariableName); // Function Niagara.NiagaraParameterCollectionInstance.GetBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0xd74f70
};

// Class Niagara.NiagaraParameterCollection
// Size: 0x60 (Inherited: 0x28)
struct UNiagaraParameterCollection : UObject {
	struct FName Namespace; // 0x28(0x08)
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30(0x10)
	struct UMaterialParameterCollection* SourceMaterialCollection; // 0x40(0x08)
	struct UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48(0x08)
	struct FGuid CompileId; // 0x50(0x10)
};

// Class Niagara.NiagaraPrecompileContainer
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraPrecompileContainer : UObject {
	struct TArray<struct UNiagaraScript*> Scripts; // 0x28(0x10)
	struct UNiagaraSystem* System; // 0x38(0x08)
};

// Class Niagara.NiagaraPreviewBase
// Size: 0x220 (Inherited: 0x220)
struct ANiagaraPreviewBase : AActor {

	void SetSystem(struct UNiagaraSystem* InSystem); // Function Niagara.NiagaraPreviewBase.SetSystem // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetLabelText(struct FText InXAxisText, struct FText InYAxisText); // Function Niagara.NiagaraPreviewBase.SetLabelText // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

// Class Niagara.NiagaraPreviewAxis
// Size: 0x28 (Inherited: 0x28)
struct UNiagaraPreviewAxis : UObject {

	int32_t Num(); // Function Niagara.NiagaraPreviewAxis.Num // (Native|Event|Public|BlueprintEvent) // @ game+0xd79c50
	void ApplyToPreview(struct UNiagaraComponent* PreviewComponent, int32_t PreviewIndex, bool bIsXAxis, struct FString OutLabelText); // Function Niagara.NiagaraPreviewAxis.ApplyToPreview // (Native|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xd79a00
};

// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// Size: 0x38 (Inherited: 0x28)
struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	struct FName Param; // 0x28(0x08)
	int32_t Count; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38(0x04)
	int32_t Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// Size: 0x40 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38(0x04)
	float Max; // 0x3c(0x04)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// Size: 0x48 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector2D Min; // 0x38(0x08)
	struct FVector2D Max; // 0x40(0x08)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// Size: 0x50 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	struct FVector Min; // 0x38(0x0c)
	struct FVector Max; // 0x44(0x0c)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// Size: 0x60 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	char pad_38[0x8]; // 0x38(0x08)
	struct FVector4 Min; // 0x40(0x10)
	struct FVector4 Max; // 0x50(0x10)
};

// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// Size: 0x58 (Inherited: 0x38)
struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	struct FLinearColor Min; // 0x38(0x10)
	struct FLinearColor Max; // 0x48(0x10)
};

// Class Niagara.NiagaraPreviewGrid
// Size: 0x270 (Inherited: 0x220)
struct ANiagaraPreviewGrid : AActor {
	struct UNiagaraSystem* System; // 0x220(0x08)
	enum class ENiagaraPreviewGridResetMode ResetMode; // 0x228(0x01)
	char pad_229[0x7]; // 0x229(0x07)
	struct UNiagaraPreviewAxis* PreviewAxisX; // 0x230(0x08)
	struct UNiagaraPreviewAxis* PreviewAxisY; // 0x238(0x08)
	struct ANiagaraPreviewBase* PreviewClass; // 0x240(0x08)
	float SpacingX; // 0x248(0x04)
	float SpacingY; // 0x24c(0x04)
	int32_t NumX; // 0x250(0x04)
	int32_t NumY; // 0x254(0x04)
	struct TArray<struct UChildActorComponent*> PreviewComponents; // 0x258(0x10)
	char pad_268[0x8]; // 0x268(0x08)

	void SetPaused(bool bPaused); // Function Niagara.NiagaraPreviewGrid.SetPaused // (Final|Native|Public|BlueprintCallable) // @ game+0xd79ca0
	void GetPreviews(struct TArray<struct UNiagaraComponent*> OutPreviews); // Function Niagara.NiagaraPreviewGrid.GetPreviews // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0xd79ba0
	void DeactivatePreviews(); // Function Niagara.NiagaraPreviewGrid.DeactivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xd79b80
	void ActivatePreviews(bool bReset); // Function Niagara.NiagaraPreviewGrid.ActivatePreviews // (Final|Native|Public|BlueprintCallable) // @ game+0xd79970
};

// Class Niagara.NiagaraRibbonRendererProperties
// Size: 0x7d8 (Inherited: 0x80)
struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x80(0x08)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88(0x20)
	enum class ENiagaraRibbonFacingMode FacingMode; // 0xa8(0x01)
	char pad_A9[0x3]; // 0xa9(0x03)
	struct FNiagaraRibbonUVSettings UV0Settings; // 0xac(0x24)
	struct FNiagaraRibbonUVSettings UV1Settings; // 0xd0(0x24)
	enum class ENiagaraRibbonDrawDirection DrawDirection; // 0xf4(0x01)
	char pad_F5[0x3]; // 0xf5(0x03)
	float CurveTension; // 0xf8(0x04)
	enum class ENiagaraRibbonTessellationMode TessellationMode; // 0xfc(0x01)
	char pad_FD[0x3]; // 0xfd(0x03)
	int32_t TessellationFactor; // 0x100(0x04)
	bool bUseConstantFactor; // 0x104(0x01)
	char pad_105[0x3]; // 0x105(0x03)
	float TessellationAngle; // 0x108(0x04)
	bool bScreenSpaceTessellation; // 0x10c(0x01)
	char pad_10D[0x3]; // 0x10d(0x03)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0x110(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x168(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x218(0x58)
	struct FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x270(0x58)
	struct FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2c8(0x58)
	struct FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x320(0x58)
	struct FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x378(0x58)
	struct FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3d0(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x428(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x480(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4d8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x530(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x588(0x58)
	struct FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x5e0(0x58)
	struct FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x638(0x58)
	struct FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x690(0x58)
	struct FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x6e8(0x58)
	char pad_740[0x98]; // 0x740(0x98)
};

// Class Niagara.NiagaraScript
// Size: 0x2c0 (Inherited: 0x28)
struct UNiagaraScript : UNiagaraScriptBase {
	enum class ENiagaraScriptUsage Usage; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t UsageIndex; // 0x2c(0x04)
	struct FGuid UsageId; // 0x30(0x10)
	struct FNiagaraParameterStore RapidIterationParameters; // 0x40(0x78)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8(0x98)
	struct TArray<struct FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150(0x10)
	struct FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160(0x48)
	char pad_1A8[0x10]; // 0x1a8(0x10)
	struct FNiagaraVMExecutableData CachedScriptVM; // 0x1b8(0xe0)
	struct TArray<struct UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x298(0x10)
	struct TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2a8(0x10)
	char pad_2B8[0x8]; // 0x2b8(0x08)

	void RaiseOnGPUCompilationComplete(); // Function Niagara.NiagaraScript.RaiseOnGPUCompilationComplete // (Final|Native|Public) // @ game+0xd79c80
};

// Class Niagara.NiagaraScriptSourceBase
// Size: 0x48 (Inherited: 0x28)
struct UNiagaraScriptSourceBase : UObject {
	char pad_28[0x20]; // 0x28(0x20)
};

// Class Niagara.NiagaraSettings
// Size: 0xc0 (Inherited: 0x38)
struct UNiagaraSettings : UDeveloperSettings {
	struct FSoftObjectPath DefaultEffectType; // 0x38(0x18)
	struct TArray<struct FText> QualityLevels; // 0x50(0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x60(0x50)
	enum class ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0(0x01)
	enum class ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1(0x01)
	char pad_B2[0x6]; // 0xb2(0x06)
	struct UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8(0x08)
};

// Class Niagara.NiagaraSimulationStageBase
// Size: 0x40 (Inherited: 0x28)
struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	struct UNiagaraScript* Script; // 0x28(0x08)
	struct FName SimulationStageName; // 0x30(0x08)
	char bEnabled : 1; // 0x38(0x01)
	char pad_38_1 : 7; // 0x38(0x01)
	char pad_39[0x7]; // 0x39(0x07)
};

// Class Niagara.NiagaraSimulationStageGeneric
// Size: 0x70 (Inherited: 0x40)
struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	enum class ENiagaraIterationSource IterationSource; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	int32_t Iterations; // 0x44(0x04)
	char bSpawnOnly : 1; // 0x48(0x01)
	char bDisablePartialParticleUpdate : 1; // 0x48(0x01)
	char pad_48_2 : 6; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50(0x20)
};

// Class Niagara.NiagaraSpriteRendererProperties
// Size: 0x7a0 (Inherited: 0x80)
struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	struct UMaterialInterface* Material; // 0x80(0x08)
	enum class ENiagaraRendererSourceDataMode SourceMode; // 0x88(0x01)
	char pad_89[0x7]; // 0x89(0x07)
	struct FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90(0x20)
	enum class ENiagaraSpriteAlignment Alignment; // 0xb0(0x01)
	enum class ENiagaraSpriteFacingMode FacingMode; // 0xb1(0x01)
	char pad_B2[0x2]; // 0xb2(0x02)
	struct FVector2D PivotInUVSpace; // 0xb4(0x08)
	enum class ENiagaraSortMode SortMode; // 0xbc(0x01)
	char pad_BD[0x3]; // 0xbd(0x03)
	struct FVector2D SubImageSize; // 0xc0(0x08)
	char bSubImageBlend : 1; // 0xc8(0x01)
	char bRemoveHMDRollInVR : 1; // 0xc8(0x01)
	char bSortOnlyWhenTranslucent : 1; // 0xc8(0x01)
	char bGpuLowLatencyTranslucency : 1; // 0xc8(0x01)
	char pad_C8_4 : 4; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float MinFacingCameraBlendDistance; // 0xcc(0x04)
	float MaxFacingCameraBlendDistance; // 0xd0(0x04)
	char bEnableCameraDistanceCulling : 1; // 0xd4(0x01)
	char pad_D4_1 : 7; // 0xd4(0x01)
	char pad_D5[0x3]; // 0xd5(0x03)
	float MinCameraDistance; // 0xd8(0x04)
	float MaxCameraDistance; // 0xdc(0x04)
	uint32_t RendererVisibility; // 0xe0(0x04)
	char pad_E4[0x4]; // 0xe4(0x04)
	struct FNiagaraVariableAttributeBinding PositionBinding; // 0xe8(0x58)
	struct FNiagaraVariableAttributeBinding ColorBinding; // 0x140(0x58)
	struct FNiagaraVariableAttributeBinding VelocityBinding; // 0x198(0x58)
	struct FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x248(0x58)
	struct FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a0(0x58)
	struct FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f8(0x58)
	struct FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x350(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a8(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x400(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458(0x58)
	struct FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b0(0x58)
	struct FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x508(0x58)
	struct FNiagaraVariableAttributeBinding UVScaleBinding; // 0x560(0x58)
	struct FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5b8(0x58)
	struct FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x610(0x58)
	struct FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x668(0x58)
	struct FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x6c0(0x58)
	struct TArray<struct FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x718(0x10)
	char pad_728[0x78]; // 0x728(0x78)
};

// Class Niagara.NiagaraSystem
// Size: 0x480 (Inherited: 0x30)
struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x30(0x01)
	bool bDumpDebugEmitterInfo; // 0x31(0x01)
	bool bRequireCurrentFrameData; // 0x32(0x01)
	char pad_33[0x1]; // 0x33(0x01)
	char bFixedBounds : 1; // 0x34(0x01)
	char pad_34_1 : 7; // 0x34(0x01)
	char pad_35[0x3]; // 0x35(0x03)
	struct UNiagaraEffectType* EffectType; // 0x38(0x08)
	bool bOverrideScalabilitySettings; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
	struct TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48(0x10)
	struct FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58(0x10)
	struct TArray<struct FNiagaraEmitterHandle> EmitterHandles; // 0x68(0x10)
	struct TArray<struct UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78(0x10)
	struct UNiagaraScript* SystemSpawnScript; // 0x88(0x08)
	struct UNiagaraScript* SystemUpdateScript; // 0x90(0x08)
	char pad_98[0x10]; // 0x98(0x10)
	struct FNiagaraSystemCompiledData SystemCompiledData; // 0xa8(0x218)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2c0(0xc8)
	struct FBox FixedBounds; // 0x388(0x1c)
	bool bAutoDeactivate; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	float WarmupTime; // 0x3a8(0x04)
	int32_t WarmupTickCount; // 0x3ac(0x04)
	float WarmupTickDelta; // 0x3b0(0x04)
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3b4(0x01)
	char pad_3B5[0x3]; // 0x3b5(0x03)
	struct TArray<struct FName> UserDINamesReadInSystemScripts; // 0x3b8(0x10)
	char pad_3C8[0xb8]; // 0x3c8(0xb8)
};

