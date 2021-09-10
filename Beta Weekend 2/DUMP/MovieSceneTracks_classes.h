// Class MovieSceneTracks.MovieSceneParameterSection
// Size: 0x148 (Inherited: 0xe8)
struct UMovieSceneParameterSection : UMovieSceneSection {
	struct TArray<struct FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8(0x10)
	struct TArray<struct FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8(0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108(0x10)
	struct TArray<struct FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118(0x10)
	struct TArray<struct FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128(0x10)
	struct TArray<struct FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138(0x10)

	bool RemoveVectorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da370
	bool RemoveVector2DParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da2d0
	bool RemoveTransformParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da230
	bool RemoveScalarParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da190
	bool RemoveColorParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da0f0
	bool RemoveBoolParameter(struct FName InParameterName); // Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter // (Final|Native|Public|BlueprintCallable) // @ game+0x29da050
	void GetParameterNames(struct TSet<struct FName> ParameterNames); // Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x29d9f10
	void AddVectorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29d9df0
	void AddVector2DParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FVector2D InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29d9ce0
	void AddTransformParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FTransform InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x29d9b80
	void AddScalarParameterKey(struct FName InParameterName, struct FFrameNumber InTime, float InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29d9a60
	void AddColorParameterKey(struct FName InParameterName, struct FFrameNumber InTime, struct FLinearColor InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29d9940
	void AddBoolParameterKey(struct FName InParameterName, struct FFrameNumber InTime, bool InValue); // Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29d9830
};

// Class MovieSceneTracks.MovieScenePropertyTrack
// Size: 0xa8 (Inherited: 0x78)
struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	struct UMovieSceneSection* SectionToKey; // 0x78(0x08)
	struct FMovieScenePropertyBinding PropertyBinding; // 0x80(0x14)
	char pad_94[0x4]; // 0x94(0x04)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x98(0x10)
};

// Class MovieSceneTracks.FloatChannelEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UFloatChannelEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneTransformOrigin
// Size: 0x28 (Inherited: 0x28)
struct UMovieSceneTransformOrigin : UInterface {

	struct FTransform BP_GetTransformOrigin(); // Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin // (Event|Protected|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// Size: 0x110 (Inherited: 0xe8)
struct UMovieScene3DConstraintSection : UMovieSceneSection {
	struct FGuid ConstraintId; // 0xe8(0x10)
	struct FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8(0x18)

	void SetConstraintBindingID(struct FMovieSceneObjectBindingID InConstraintBindingID); // Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x29cf660
	struct FMovieSceneObjectBindingID GetConstraintBindingID(); // Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29cf520
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// Size: 0x130 (Inherited: 0x110)
struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	char pad_110[0x8]; // 0x110(0x08)
	struct FName AttachSocketName; // 0x118(0x08)
	struct FName AttachComponentName; // 0x120(0x08)
	enum class EAttachmentRule AttachmentLocationRule; // 0x128(0x01)
	enum class EAttachmentRule AttachmentRotationRule; // 0x129(0x01)
	enum class EAttachmentRule AttachmentScaleRule; // 0x12a(0x01)
	enum class EDetachmentRule DetachmentLocationRule; // 0x12b(0x01)
	enum class EDetachmentRule DetachmentRotationRule; // 0x12c(0x01)
	enum class EDetachmentRule DetachmentScaleRule; // 0x12d(0x01)
	char pad_12E[0x2]; // 0x12e(0x02)
};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	struct TArray<struct UMovieSceneSection*> ConstraintSections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieScene3DAttachTrack : UMovieScene3DConstraintTrack {
};

// Class MovieSceneTracks.MovieScene3DPathSection
// Size: 0x1b8 (Inherited: 0x110)
struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	struct FMovieSceneFloatChannel TimingCurve; // 0x110(0xa0)
	enum class MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0(0x01)
	enum class MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1(0x01)
	char pad_1B2[0x2]; // 0x1b2(0x02)
	char bFollow : 1; // 0x1b4(0x01)
	char bReverse : 1; // 0x1b4(0x01)
	char bForceUpright : 1; // 0x1b4(0x01)
	char pad_1B4_3 : 5; // 0x1b4(0x01)
	char pad_1B5[0x3]; // 0x1b5(0x03)
};

// Class MovieSceneTracks.MovieScene3DPathTrack
// Size: 0x90 (Inherited: 0x88)
struct UMovieScene3DPathTrack : UMovieScene3DConstraintTrack {
	char pad_88[0x8]; // 0x88(0x08)
};

// Class MovieSceneTracks.MovieScenePropertySystem
// Size: 0x50 (Inherited: 0x40)
struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	struct UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40(0x08)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class MovieSceneTracks.MovieScene3DTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieScene3DTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieScene3DTransformSection
// Size: 0x740 (Inherited: 0xe8)
struct UMovieScene3DTransformSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneTransformMask TransformMask; // 0xf0(0x04)
	char pad_F4[0x4]; // 0xf4(0x04)
	struct FMovieSceneFloatChannel Translation[0x3]; // 0xf8(0x1e0)
	struct FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8(0x1e0)
	struct FMovieSceneFloatChannel Scale[0x3]; // 0x4b8(0x1e0)
	struct FMovieSceneFloatChannel ManualWeight; // 0x698(0xa0)
	bool bUseQuaternionInterpolation; // 0x738(0x01)
	char pad_739[0x7]; // 0x739(0x07)
};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieScene3DTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// Size: 0x228 (Inherited: 0xe8)
struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	struct FMovieSceneActorReferenceData ActorReferenceData; // 0xe8(0xb0)
	struct FIntegralCurve ActorGuidIndexCurve; // 0x198(0x80)
	struct TArray<struct FString> ActorGuidStrings; // 0x218(0x10)
};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneActorReferenceTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneAudioSection
// Size: 0x338 (Inherited: 0xe8)
struct UMovieSceneAudioSection : UMovieSceneSection {
	struct USoundBase* Sound; // 0xe8(0x08)
	struct FFrameNumber StartFrameOffset; // 0xf0(0x04)
	float StartOffset; // 0xf4(0x04)
	float AudioStartTime; // 0xf8(0x04)
	float AudioDilationFactor; // 0xfc(0x04)
	float AudioVolume; // 0x100(0x04)
	char pad_104[0x4]; // 0x104(0x04)
	struct FMovieSceneFloatChannel SoundVolume; // 0x108(0xa0)
	struct FMovieSceneFloatChannel PitchMultiplier; // 0x1a8(0xa0)
	struct FMovieSceneActorReferenceData AttachActorData; // 0x248(0xb0)
	bool bLooping; // 0x2f8(0x01)
	bool bSuppressSubtitles; // 0x2f9(0x01)
	bool bOverrideAttenuation; // 0x2fa(0x01)
	char pad_2FB[0x5]; // 0x2fb(0x05)
	struct USoundAttenuation* AttenuationSettings; // 0x300(0x08)
	struct FDelegate OnQueueSubtitles; // 0x308(0x10)
	struct FMulticastInlineDelegate OnAudioFinished; // 0x318(0x10)
	struct FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x328(0x10)

	void SetStartOffset(struct FFrameNumber InStartOffset); // Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // @ game+0x29cf7b0
	void SetSound(struct USoundBase* InSound); // Function MovieSceneTracks.MovieSceneAudioSection.SetSound // (Final|Native|Public|BlueprintCallable) // @ game+0x29cf720
	struct FFrameNumber GetStartOffset(); // Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // @ game+0x29cf580
	struct USoundBase* GetSound(); // Function MovieSceneTracks.MovieSceneAudioSection.GetSound // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29cf560
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> AudioSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneBaseValueEvaluatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneBaseValueEvaluatorSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneBoolTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneBoolTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneByteSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneByteSection : UMovieSceneSection {
	struct FMovieSceneByteChannel ByteCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneByteTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UEnum* Enum; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	struct FMovieSceneCameraAnimSectionData AnimData; // 0xe8(0x20)
	struct UCameraAnim* CameraAnim; // 0x108(0x08)
	float PlayRate; // 0x110(0x04)
	float PlayScale; // 0x114(0x04)
	float BlendInTime; // 0x118(0x04)
	float BlendOutTime; // 0x11c(0x04)
	bool bLooping; // 0x120(0x01)
	char pad_121[0x7]; // 0x121(0x07)
};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> CameraAnimSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// Size: 0x160 (Inherited: 0xe8)
struct UMovieSceneCameraCutSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	bool bLockPreviousCamera; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FGuid CameraGuid; // 0xf4(0x10)
	struct FMovieSceneObjectBindingID CameraBindingID; // 0x104(0x18)
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FTransform InitialCameraCutTransform; // 0x120(0x30)
	bool bHasInitialCameraCutTransform; // 0x150(0x01)
	char pad_151[0xf]; // 0x151(0x0f)

	void SetCameraBindingID(struct FMovieSceneObjectBindingID InCameraBindingID); // Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x29cf5a0
	struct FMovieSceneObjectBindingID GetCameraBindingID(); // Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29cf4e0
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x78(0x01)
	char pad_79[0x7]; // 0x79(0x07)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraCutTrackInstance
// Size: 0xb8 (Inherited: 0x50)
struct UMovieSceneCameraCutTrackInstance : UMovieSceneTrackInstance {
	char pad_50[0x68]; // 0x50(0x68)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x20)
	struct UMatineeCameraShake* ShakeClass; // 0x108(0x08)
	float PlayScale; // 0x110(0x04)
	enum class ECameraShakePlaySpace PlaySpace; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	struct FRotator UserDefinedPlaySpace; // 0x118(0x0c)
	char pad_124[0x4]; // 0x124(0x04)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeSection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSectionData ShakeData; // 0xe8(0x20)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceShakeTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerSection
// Size: 0x170 (Inherited: 0xe8)
struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	struct FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8(0x88)
};

// Class MovieSceneTracks.MovieSceneCameraShakeSourceTriggerTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> CameraShakeSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// Size: 0x188 (Inherited: 0x160)
struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	struct FString ShotDisplayName; // 0x160(0x10)
	struct FText DisplayName; // 0x170(0x18)

	void SetShotDisplayName(struct FString InShotDisplayName); // Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName // (Final|Native|Public|BlueprintCallable) // @ game+0x29d4e30
	struct FString GetShotDisplayName(); // Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29d4c90
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// Size: 0x88 (Inherited: 0x88)
struct UMovieSceneCinematicShotTrack : UMovieSceneSubTrack {
};

// Class MovieSceneTracks.MovieSceneColorSection
// Size: 0x368 (Inherited: 0xe8)
struct UMovieSceneColorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel RedCurve; // 0xe8(0xa0)
	struct FMovieSceneFloatChannel GreenCurve; // 0x188(0xa0)
	struct FMovieSceneFloatChannel BlueCurve; // 0x228(0xa0)
	struct FMovieSceneFloatChannel AlphaCurve; // 0x2c8(0xa0)
};

// Class MovieSceneTracks.MovieSceneColorTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	bool bIsSlateColor; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentInvalidatorSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentInvalidatorSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneComponentAttachmentSystem
// Size: 0x1c0 (Inherited: 0x40)
struct UMovieSceneComponentAttachmentSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x180]; // 0x40(0x180)
};

// Class MovieSceneTracks.MovieSceneComponentMobilitySystem
// Size: 0x220 (Inherited: 0x40)
struct UMovieSceneComponentMobilitySystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1e0]; // 0x40(0x1e0)
};

// Class MovieSceneTracks.MovieScenePreAnimatedComponentTransformSystem
// Size: 0x1c0 (Inherited: 0x40)
struct UMovieScenePreAnimatedComponentTransformSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x180]; // 0x40(0x180)
};

// Class MovieSceneTracks.MovieSceneComponentTransformSystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneComponentTransformSystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEnumSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneEnumSection : UMovieSceneSection {
	struct FMovieSceneByteChannel EnumCurve; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneEnumTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UEnum* Enum; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneEulerTransformPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneEulerTransformPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieSceneEulerTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// Size: 0xe8 (Inherited: 0xe8)
struct UMovieSceneEventSectionBase : UMovieSceneSection {
};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneEvent Event; // 0xf0(0x28)
};

// Class MovieSceneTracks.MovieSceneEventSection
// Size: 0x1e8 (Inherited: 0xe8)
struct UMovieSceneEventSection : UMovieSceneSection {
	struct FNameCurve Events; // 0xe8(0x78)
	struct FMovieSceneEventSectionData EventData; // 0x160(0x88)
};

// Class MovieSceneTracks.MovieSceneEventSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneEventSystem : UMovieSceneEntitySystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.MovieScenePreSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePreSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostSpawnEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostSpawnEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieScenePostEvalEventSystem
// Size: 0x90 (Inherited: 0x90)
struct UMovieScenePostEvalEventSystem : UMovieSceneEventSystem {
};

// Class MovieSceneTracks.MovieSceneEventTrack
// Size: 0x98 (Inherited: 0x78)
struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	char bFireEventsWhenForwards : 1; // 0x80(0x01)
	char bFireEventsWhenBackwards : 1; // 0x80(0x01)
	char pad_80_2 : 6; // 0x80(0x01)
	char pad_81[0x3]; // 0x81(0x03)
	enum class EFireEventsAtPosition EventPosition; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x88(0x10)
};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// Size: 0x178 (Inherited: 0xe8)
struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneEventChannel EventChannel; // 0xf0(0x88)
};

// Class MovieSceneTracks.MovieSceneFadeSection
// Size: 0x1a0 (Inherited: 0xe8)
struct UMovieSceneFadeSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xa0)
	struct FLinearColor FadeColor; // 0x188(0x10)
	char bFadeAudio : 1; // 0x198(0x01)
	char pad_198_1 : 7; // 0x198(0x01)
	char pad_199[0x7]; // 0x199(0x07)
};

// Class MovieSceneTracks.MovieSceneFloatTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieSceneFloatTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneFadeTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneFadeTrack : UMovieSceneFloatTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneFloatPropertySystem
// Size: 0x50 (Inherited: 0x50)
struct UMovieSceneFloatPropertySystem : UMovieScenePropertySystem {
};

// Class MovieSceneTracks.MovieSceneFloatSection
// Size: 0x190 (Inherited: 0xe8)
struct UMovieSceneFloatSection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	struct FMovieSceneFloatChannel FloatCurve; // 0xf0(0xa0)
};

// Class MovieSceneTracks.MovieSceneHierarchicalBiasSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneHierarchicalBiasSystem : UMovieSceneEntityInstantiatorSystem {
};

// Class MovieSceneTracks.MovieSceneIntegerSection
// Size: 0x178 (Inherited: 0xe8)
struct UMovieSceneIntegerSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel IntegerCurve; // 0xe8(0x90)
};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneIntegerTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneInterrogatedPropertyInstantiatorSystem
// Size: 0x1e8 (Inherited: 0x40)
struct UMovieSceneInterrogatedPropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x1a8]; // 0x40(0x1a8)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// Size: 0x108 (Inherited: 0xe8)
struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	char pad_E8[0x8]; // 0xe8(0x08)
	enum class ELevelVisibility Visibility; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct TArray<struct FName> LevelNames; // 0xf8(0x10)

	void SetVisibility(enum class ELevelVisibility InVisibility); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility // (Final|Native|Public|BlueprintCallable) // @ game+0x29d4f30
	void SetLevelNames(struct TArray<struct FName> InLevelNames); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x29d4d80
	enum class ELevelVisibility GetVisibility(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29d4d50
	struct TArray<struct FName> GetLevelNames(); // Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29d4c60
};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySystem
// Size: 0x1a8 (Inherited: 0x40)
struct UMovieSceneLevelVisibilitySystem : UMovieSceneEntitySystem {
	char pad_40[0x168]; // 0x40(0x168)
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	char pad_88[0x8]; // 0x88(0x08)
	struct UMaterialParameterCollection* MPC; // 0x90(0x08)
};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// Size: 0x98 (Inherited: 0x88)
struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	char pad_88[0x8]; // 0x88(0x08)
	int32_t MaterialIndex; // 0x90(0x04)
	char pad_94[0x4]; // 0x94(0x04)
};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// Size: 0x1a8 (Inherited: 0xe8)
struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel ObjectChannel; // 0xe8(0xc0)
};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct UObject* PropertyClass; // 0xb0(0x08)
};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> Sections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieSceneParticleSection
// Size: 0x180 (Inherited: 0xe8)
struct UMovieSceneParticleSection : UMovieSceneSection {
	struct FMovieSceneParticleChannel ParticleKeys; // 0xe8(0x98)
};

// Class MovieSceneTracks.MovieSceneParticleTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> ParticleSections; // 0x80(0x10)
};

// Class MovieSceneTracks.MovieScenePiecewiseFloatBlenderSystem
// Size: 0x120 (Inherited: 0x60)
struct UMovieScenePiecewiseFloatBlenderSystem : UMovieSceneBlenderSystem {
	char pad_60[0xc0]; // 0x60(0xc0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// Size: 0x1a8 (Inherited: 0xe8)
struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	struct FMovieSceneObjectPathChannel MaterialChannel; // 0xe8(0xc0)
};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	int32_t MaterialIndex; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class MovieSceneTracks.MovieScenePropertyInstantiatorSystem
// Size: 0x290 (Inherited: 0x40)
struct UMovieScenePropertyInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x250]; // 0x40(0x250)
};

// Class MovieSceneTracks.MovieSceneQuaternionInterpolationRotationSystem
// Size: 0x40 (Inherited: 0x40)
struct UMovieSceneQuaternionInterpolationRotationSystem : UMovieSceneEntitySystem {
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// Size: 0x270 (Inherited: 0xe8)
struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	struct FMovieSceneSkeletalAnimationParams Params; // 0xe8(0xd8)
	struct UAnimSequence* AnimSequence; // 0x1c0(0x08)
	struct UAnimSequenceBase* Animation; // 0x1c8(0x08)
	float StartOffset; // 0x1d0(0x04)
	float EndOffset; // 0x1d4(0x04)
	float PlayRate; // 0x1d8(0x04)
	char bReverse : 1; // 0x1dc(0x01)
	char pad_1DC_1 : 7; // 0x1dc(0x01)
	char pad_1DD[0x3]; // 0x1dd(0x03)
	struct FName SlotName; // 0x1e0(0x08)
	struct FVector StartLocationOffset; // 0x1e8(0x0c)
	struct FRotator StartRotationOffset; // 0x1f4(0x0c)
	bool bMatchWithPrevious; // 0x200(0x01)
	char pad_201[0x3]; // 0x201(0x03)
	struct FName MatchedBoneName; // 0x204(0x08)
	struct FVector MatchedLocationOffset; // 0x20c(0x0c)
	struct FRotator MatchedRotationOffset; // 0x218(0x0c)
	bool bMatchTranslation; // 0x224(0x01)
	bool bMatchIncludeZHeight; // 0x225(0x01)
	bool bMatchRotationYaw; // 0x226(0x01)
	bool bMatchRotationPitch; // 0x227(0x01)
	bool bMatchRotationRoll; // 0x228(0x01)
	char pad_229[0x47]; // 0x229(0x47)
};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// Size: 0xd0 (Inherited: 0x78)
struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x80(0x10)
	bool bUseLegacySectionIndexBlend; // 0x90(0x01)
	char pad_91[0x7]; // 0x91(0x07)
	struct FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98(0x30)
	bool bBlendFirstChildOfRoot; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class MovieSceneTracks.MovieSceneSlomoSection
// Size: 0x188 (Inherited: 0xe8)
struct UMovieSceneSlomoSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel FloatCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneSlomoTrack : UMovieSceneFloatTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneStringSection
// Size: 0x188 (Inherited: 0xe8)
struct UMovieSceneStringSection : UMovieSceneSection {
	struct FMovieSceneStringChannel StringCurve; // 0xe8(0xa0)
};

// Class MovieSceneTracks.MovieSceneStringTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneStringTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MovieSceneTracks.MovieSceneTransformOriginSystem
// Size: 0x78 (Inherited: 0x40)
struct UMovieSceneTransformOriginSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

// Class MovieSceneTracks.MovieSceneTransformTrack
// Size: 0xa8 (Inherited: 0xa8)
struct UMovieSceneTransformTrack : UMovieScenePropertyTrack {
};

// Class MovieSceneTracks.MovieSceneVectorSection
// Size: 0x370 (Inherited: 0xe8)
struct UMovieSceneVectorSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel Curves[0x4]; // 0xe8(0x280)
	int32_t ChannelsUsed; // 0x368(0x04)
	char pad_36C[0x4]; // 0x36c(0x04)
};

// Class MovieSceneTracks.MovieSceneVectorTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	int32_t NumChannelsUsed; // 0xb0(0x04)
	char pad_B4[0x4]; // 0xb4(0x04)
};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// Size: 0xb0 (Inherited: 0xb0)
struct UMovieSceneVisibilityTrack : UMovieSceneBoolTrack {
};

// Class MovieSceneTracks.MovieSceneHierarchicalEasingInstantiatorSystem
// Size: 0x90 (Inherited: 0x40)
struct UMovieSceneHierarchicalEasingInstantiatorSystem : UMovieSceneEntityInstantiatorSystem {
	char pad_40[0x50]; // 0x40(0x50)
};

// Class MovieSceneTracks.WeightAndEasingEvaluatorSystem
// Size: 0x78 (Inherited: 0x40)
struct UWeightAndEasingEvaluatorSystem : UMovieSceneEntitySystem {
	char pad_40[0x38]; // 0x40(0x38)
};

