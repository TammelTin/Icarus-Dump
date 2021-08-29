// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// Size: 0xf8 (Inherited: 0xe8)
struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe8(0x08)
	bool bLoop; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
};

// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// Size: 0xb0 (Inherited: 0xa8)
struct UMovieSceneMediaPlayerPropertyTrack : UMovieScenePropertyTrack {
	char pad_A8[0x8]; // 0xa8(0x08)
};

// Class MediaCompositing.MovieSceneMediaSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneMediaSection : UMovieSceneSection {
	struct UMediaSource* MediaSource; // 0xe8(0x08)
	bool bLooping; // 0xf0(0x01)
	char pad_F1[0x3]; // 0xf1(0x03)
	struct FFrameNumber StartFrameOffset; // 0xf4(0x04)
	struct UMediaTexture* MediaTexture; // 0xf8(0x08)
	struct UMediaSoundComponent* MediaSoundComponent; // 0x100(0x08)
	bool bUseExternalMediaPlayer; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UMediaPlayer* ExternalMediaPlayer; // 0x110(0x08)
};

// Class MediaCompositing.MovieSceneMediaTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> MediaSections; // 0x80(0x10)
};

