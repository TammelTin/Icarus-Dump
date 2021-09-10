// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// Size: 0x118 (Inherited: 0xe8)
struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	struct FMovieSceneGeometryCollectionParams Params; // 0xe8(0x30)
};

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// Size: 0x90 (Inherited: 0x78)
struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	char pad_78[0x8]; // 0x78(0x08)
	struct TArray<struct UMovieSceneSection*> AnimationSections; // 0x80(0x10)
};

