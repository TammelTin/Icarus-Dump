// Enum MagicLeapARPin.EMagicLeapARPinType
enum class EMagicLeapARPinType : uint8 {
	SingleUserSingleSession = 0,
	SingleUserMultiSession = 1,
	MultiUserMultiSession = 2,
	EMagicLeapARPinType_MAX = 3
};

// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class EMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration = 0,
	Always = 1,
	Never = 2,
	EMagicLeapAutoPinType_MAX = 3
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class EMagicLeapPassableWorldError : uint8 {
	None = 0,
	LowMapQuality = 1,
	UnableToLocalize = 2,
	Unavailable = 3,
	PrivilegeDenied = 4,
	InvalidParam = 5,
	UnspecifiedFailure = 6,
	PrivilegeRequestPending = 7,
	StartupPending = 8,
	SharedWorldNotEnabled = 9,
	NotImplemented = 10,
	PinNotFound = 11,
	EMagicLeapPassableWorldError_MAX = 12
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinState
// Size: 0x14 (Inherited: 0x00)
struct FMagicLeapARPinState {
	float Confidence; // 0x00(0x04)
	float ValidRadius; // 0x04(0x04)
	float RotationError; // 0x08(0x04)
	float TranslationError; // 0x0c(0x04)
	enum class EMagicLeapARPinType PinType; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinQuery
// Size: 0x68 (Inherited: 0x00)
struct FMagicLeapARPinQuery {
	struct TSet<enum class EMagicLeapARPinType> Types; // 0x00(0x50)
	int32_t MaxResults; // 0x50(0x04)
	struct FVector TargetPoint; // 0x54(0x0c)
	float Radius; // 0x60(0x04)
	bool bSorted; // 0x64(0x01)
	char pad_65[0x3]; // 0x65(0x03)
};

// ScriptStruct MagicLeapARPin.MagicLeapARPinObjectIdList
// Size: 0x50 (Inherited: 0x00)
struct FMagicLeapARPinObjectIdList {
	struct TSet<struct FString> ObjectIdList; // 0x00(0x50)
};

