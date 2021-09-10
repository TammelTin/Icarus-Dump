// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// Size: 0x228 (Inherited: 0xe8)
struct UMovieSceneLiveLinkSection : UMovieSceneSection {
	struct FLiveLinkSubjectPreset SubjectPreset; // 0xe8(0x38)
	struct TArray<bool> ChannelMask; // 0x120(0x10)
	struct TArray<struct UMovieSceneLiveLinkSubSection*> SubSections; // 0x130(0x10)
	char pad_140[0x10]; // 0x140(0x10)
	struct FName SubjectName; // 0x150(0x08)
	struct FLiveLinkFrameData TemplateToPush; // 0x158(0x90)
	struct FLiveLinkRefSkeleton RefSkeleton; // 0x1e8(0x20)
	struct TArray<struct FName> CurveNames; // 0x208(0x10)
	struct TArray<struct FMovieSceneFloatChannel> PropertyFloatChannels; // 0x218(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// Size: 0x50 (Inherited: 0x28)
struct UMovieSceneLiveLinkSubSection : UObject {
	struct FLiveLinkSubSectionData SubSectionData; // 0x28(0x10)
	struct ULiveLinkRole* SubjectRole; // 0x38(0x08)
	char pad_40[0x10]; // 0x40(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionAnimation : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionBasicRole : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// Size: 0x60 (Inherited: 0x50)
struct UMovieSceneLiveLinkSubSectionProperties : UMovieSceneLiveLinkSubSection {
	char pad_50[0x10]; // 0x50(0x10)
};

// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// Size: 0xb8 (Inherited: 0xa8)
struct UMovieSceneLiveLinkTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
	struct ULiveLinkRole* TrackRole; // 0xb0(0x08)
};

