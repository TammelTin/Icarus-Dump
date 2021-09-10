// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// Size: 0xb8 (Inherited: 0x38)
struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FLiveLinkSubjectPreset SubjectPreset; // 0x38(0x38)
	struct TArray<bool> ChannelMask; // 0x70(0x10)
	struct TArray<struct FLiveLinkSubSectionData> SubSectionsData; // 0x80(0x10)
	char pad_90[0x28]; // 0x90(0x28)
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// Size: 0x10 (Inherited: 0x00)
struct FLiveLinkSubSectionData {
	struct TArray<struct FLiveLinkPropertyData> Properties; // 0x00(0x10)
};

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// Size: 0x58 (Inherited: 0x00)
struct FLiveLinkPropertyData {
	struct FName PropertyName; // 0x00(0x08)
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel; // 0x08(0x10)
	struct TArray<struct FMovieSceneStringChannel> StringChannel; // 0x18(0x10)
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel; // 0x28(0x10)
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel; // 0x38(0x10)
	struct TArray<struct FMovieSceneByteChannel> ByteChannel; // 0x48(0x10)
};

