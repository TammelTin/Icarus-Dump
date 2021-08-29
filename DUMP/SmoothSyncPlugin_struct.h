// Enum SmoothSyncPlugin.RestState
enum class RestState : uint8 {
	AT_REST = 0,
	JUST_STARTED_MOVING = 1,
	MOVING = 2,
	RestState_MAX = 3
};

// Enum SmoothSyncPlugin.ExtrapolationMode
enum class ExtrapolationMode : uint8 {
	UNLIMITED = 0,
	LIMITED = 1,
	NONE = 2,
	ExtrapolationMode_MAX = 3
};

// Enum SmoothSyncPlugin.SyncMode
enum class SyncMode : uint8 {
	XYZ = 0,
	XY = 1,
	XZ = 2,
	YZ = 3,
	X = 4,
	Y = 5,
	Z = 6,
	NONE = 7,
	SyncMode_MAX = 8
};

