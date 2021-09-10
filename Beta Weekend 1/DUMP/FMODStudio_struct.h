// Enum FMODStudio.EFMODEventProperty
enum class EFMODEventProperty : uint8 {
	ChannelPriority = 0,
	ScheduleDelay = 1,
	ScheduleLookahead = 2,
	MinimumDistance = 3,
	MaximumDistance = 4,
	Count = 5,
	EFMODEventProperty_MAX = 6
};

// Enum FMODStudio.EFMOD_STUDIO_STOP_MODE
enum class EFMOD_STUDIO_STOP_MODE : uint8 {
	ALLOWFADEOUT = 0,
	IMMEDIATE = 1,
	EFMOD_STUDIO_STOP_MODE_MAX = 2
};

// Enum FMODStudio.EFMODEventControlKey
enum class EFMODEventControlKey : uint8 {
	Stop = 0,
	Play = 1,
	EFMODEventControlKey_MAX = 2
};

// Enum FMODStudio.EFMODSpeakerMode
enum class EFMODSpeakerMode : uint8 {
	Stereo = 0,
	Surround_5_2 = 1,
	Surround_7_2 = 2,
	EFMODSpeakerMode_MAX = 3
};

// Enum FMODStudio.EFMODLogging
enum class EFMODLogging : uint8 {
	LEVEL_NONE = 0,
	LEVEL_ERROR = 1,
	LEVEL_WARNING = 2,
	LEVEL_LOG = 4,
	LEVEL_MAX = 5
};

// ScriptStruct FMODStudio.FMODAssetLookupRow
// Size: 0x28 (Inherited: 0x08)
struct FFMODAssetLookupRow : FTableRowBase {
	struct FString PackageName; // 0x08(0x10)
	struct FString AssetName; // 0x18(0x10)
};

// ScriptStruct FMODStudio.FMODOcclusionDetails
// Size: 0x03 (Inherited: 0x00)
struct FFMODOcclusionDetails {
	bool bEnableOcclusion; // 0x00(0x01)
	enum class ECollisionChannel OcclusionTraceChannel; // 0x01(0x01)
	bool bUseComplexCollisionForOcclusion; // 0x02(0x01)
};

// ScriptStruct FMODStudio.FMODAttenuationDetails
// Size: 0x0c (Inherited: 0x00)
struct FFMODAttenuationDetails {
	char bOverrideAttenuation : 1; // 0x00(0x01)
	char pad_0_1 : 7; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinimumDistance; // 0x04(0x04)
	float MaximumDistance; // 0x08(0x04)
};

// ScriptStruct FMODStudio.FMODLocalizedBankTable
// Size: 0x10 (Inherited: 0x08)
struct FFMODLocalizedBankTable : FTableRowBase {
	struct UDataTable* Banks; // 0x08(0x08)
};

// ScriptStruct FMODStudio.FMODLocalizedBankRow
// Size: 0x18 (Inherited: 0x08)
struct FFMODLocalizedBankRow : FTableRowBase {
	struct FString Path; // 0x08(0x10)
};

// ScriptStruct FMODStudio.FMODEventInstance
// Size: 0x08 (Inherited: 0x00)
struct FFMODEventInstance {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct FMODStudio.FMODEventControlChannel
// Size: 0x98 (Inherited: 0x98)
struct FFMODEventControlChannel : FMovieSceneByteChannel {
};

// ScriptStruct FMODStudio.FMODEventControlSectionTemplate
// Size: 0xb8 (Inherited: 0x20)
struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate {
	struct FFMODEventControlChannel ControlKeys; // 0x20(0x98)
};

// ScriptStruct FMODStudio.FMODEventParameterSectionTemplate
// Size: 0x80 (Inherited: 0x80)
struct FFMODEventParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
};

// ScriptStruct FMODStudio.FMODProjectLocale
// Size: 0x28 (Inherited: 0x00)
struct FFMODProjectLocale {
	struct FString LocaleName; // 0x00(0x10)
	struct FString LocaleCode; // 0x10(0x10)
	bool bDefault; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct FMODStudio.CustomPoolSizes
// Size: 0x14 (Inherited: 0x00)
struct FCustomPoolSizes {
	int32_t Desktop; // 0x00(0x04)
	int32_t Mobile; // 0x04(0x04)
	int32_t PS4; // 0x08(0x04)
	int32_t Switch; // 0x0c(0x04)
	int32_t XboxOne; // 0x10(0x04)
};

