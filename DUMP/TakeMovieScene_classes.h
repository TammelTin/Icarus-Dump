// Class TakeMovieScene.MovieSceneTakeSection
// Size: 0x468 (Inherited: 0xe8)
struct UMovieSceneTakeSection : UMovieSceneSection {
	struct FMovieSceneIntegerChannel HoursCurve; // 0xe8(0x90)
	struct FMovieSceneIntegerChannel MinutesCurve; // 0x178(0x90)
	struct FMovieSceneIntegerChannel SecondsCurve; // 0x208(0x90)
	struct FMovieSceneIntegerChannel FramesCurve; // 0x298(0x90)
	struct FMovieSceneFloatChannel SubFramesCurve; // 0x328(0xa0)
	struct FMovieSceneStringChannel Slate; // 0x3c8(0xa0)
};

// Class TakeMovieScene.MovieSceneTakeSettings
// Size: 0x88 (Inherited: 0x28)
struct UMovieSceneTakeSettings : UObject {
	struct FString HoursName; // 0x28(0x10)
	struct FString MinutesName; // 0x38(0x10)
	struct FString SecondsName; // 0x48(0x10)
	struct FString FramesName; // 0x58(0x10)
	struct FString SubFramesName; // 0x68(0x10)
	struct FString SlateName; // 0x78(0x10)
};

// Class TakeMovieScene.MovieSceneTakeTrack
// Size: 0x88 (Inherited: 0x78)
struct UMovieSceneTakeTrack : UMovieSceneNameableTrack {
	struct TArray<struct UMovieSceneSection*> Sections; // 0x78(0x10)
};

