// Class TemplateSequence.TemplateSequence
// Size: 0x108 (Inherited: 0x60)
struct UTemplateSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct TSoftClassPtr<UObject> BoundActorClass; // 0x68(0x28)
	struct TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90(0x28)
	struct TMap<struct FGuid, struct FName> BoundActorComponents; // 0xb8(0x50)
};

// Class TemplateSequence.CameraAnimationSequence
// Size: 0x108 (Inherited: 0x108)
struct UCameraAnimationSequence : UTemplateSequence {
};

// Class TemplateSequence.SequenceCameraShakeCameraStandIn
// Size: 0x70 (Inherited: 0x28)
struct USequenceCameraShakeCameraStandIn : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	float FieldOfView; // 0x30(0x04)
	char pad_34[0x3c]; // 0x34(0x3c)
};

// Class TemplateSequence.SequenceCameraShake
// Size: 0xd0 (Inherited: 0xa0)
struct USequenceCameraShake : UCameraShakeBase {
	struct UCameraAnimationSequence* Sequence; // 0x98(0x08)
	float PlayRate; // 0xa0(0x04)
	float Scale; // 0xa4(0x04)
	float BlendInTime; // 0xa8(0x04)
	float BlendOutTime; // 0xac(0x04)
	float RandomSegmentDuration; // 0xb0(0x04)
	bool bRandomSegment; // 0xb4(0x01)
	struct USequenceCameraShakeSequencePlayer* Player; // 0xb8(0x08)
	struct USequenceCameraShakeCameraStandIn* CameraStandIn; // 0xc0(0x08)
	char pad_CD[0x3]; // 0xcd(0x03)
};

// Class TemplateSequence.SequenceCameraShakeSequencePlayer
// Size: 0x5d8 (Inherited: 0x28)
struct USequenceCameraShakeSequencePlayer : UObject {
	char pad_28[0x458]; // 0x28(0x458)
	struct UObject* BoundObjectOverride; // 0x480(0x08)
	struct UMovieSceneSequence* Sequence; // 0x488(0x08)
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490(0xe8)
	char pad_578[0x60]; // 0x578(0x60)
};

// Class TemplateSequence.TemplateSequenceActor
// Size: 0x270 (Inherited: 0x220)
struct ATemplateSequenceActor : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228(0x14)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct UTemplateSequencePlayer* SequencePlayer; // 0x240(0x08)
	struct FSoftObjectPath TemplateSequence; // 0x248(0x18)
	struct FTemplateSequenceBindingOverrideData BindingOverride; // 0x260(0x0c)
	char pad_26C[0x4]; // 0x26c(0x04)

	void SetSequence(struct UTemplateSequence* InSequence); // Function TemplateSequence.TemplateSequenceActor.SetSequence // (Final|Native|Public|BlueprintCallable) // @ game+0x110eac0
	void SetBinding(struct AActor* Actor); // Function TemplateSequence.TemplateSequenceActor.SetBinding // (Final|Native|Public|BlueprintCallable) // @ game+0x110ea30
	struct UTemplateSequence* LoadSequence(); // Function TemplateSequence.TemplateSequenceActor.LoadSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x110ea00
	struct UTemplateSequencePlayer* GetSequencePlayer(); // Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x110e9d0
	struct UTemplateSequence* GetSequence(); // Function TemplateSequence.TemplateSequenceActor.GetSequence // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x110e9a0
};

// Class TemplateSequence.TemplateSequencePlayer
// Size: 0x688 (Inherited: 0x680)
struct UTemplateSequencePlayer : UMovieSceneSequencePlayer {
	char pad_680[0x8]; // 0x680(0x08)

	struct UTemplateSequencePlayer* CreateTemplateSequencePlayer(struct UObject* WorldContextObject, struct UTemplateSequence* TemplateSequence, struct FMovieSceneSequencePlaybackSettings Settings, struct ATemplateSequenceActor* OutActor); // Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x110e820
};

// Class TemplateSequence.TemplateSequenceSection
// Size: 0x168 (Inherited: 0x160)
struct UTemplateSequenceSection : UMovieSceneSubSection {
	char pad_160[0x8]; // 0x160(0x08)
};

// Class TemplateSequence.TemplateSequenceSystem
// Size: 0xb0 (Inherited: 0x40)
struct UTemplateSequenceSystem : UMovieSceneEntitySystem {
	char pad_40[0x70]; // 0x40(0x70)
};

// Class TemplateSequence.TemplateSequenceTrack
// Size: 0x88 (Inherited: 0x88)
struct UTemplateSequenceTrack : UMovieSceneSubTrack {
};

