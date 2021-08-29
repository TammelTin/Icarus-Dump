// Class ActorSequence.ActorSequence
// Size: 0x88 (Inherited: 0x60)
struct UActorSequence : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x60(0x08)
	struct FActorSequenceObjectReferenceMap ObjectReferences; // 0x68(0x20)
};

// Class ActorSequence.ActorSequenceComponent
// Size: 0xd8 (Inherited: 0xb0)
struct UActorSequenceComponent : UActorComponent {
	struct FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0(0x14)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct UActorSequence* Sequence; // 0xc8(0x08)
	struct UActorSequencePlayer* SequencePlayer; // 0xd0(0x08)
};

// Class ActorSequence.ActorSequencePlayer
// Size: 0x680 (Inherited: 0x680)
struct UActorSequencePlayer : UMovieSceneSequencePlayer {
};

