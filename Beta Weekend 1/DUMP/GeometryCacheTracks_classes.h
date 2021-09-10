// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// Size: 0x128 (Inherited: 0xe8)
struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	struct FMovieSceneGeometryCacheParams Params; // 0xe8(0x40)
};

// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x80(0x10)
};

