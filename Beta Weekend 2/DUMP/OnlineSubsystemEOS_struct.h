// Enum OnlineSubsystemEOS.ELogLevel
enum class ELogLevel : uint8 {
	LL_Off = 0,
	LL_Fatal = 1,
	LL_Error = 2,
	LL_Warning = 3,
	LL_Info = 4,
	LL_Verbose = 5,
	LL_VeryVerbose = 6,
	LL_MAX = 7
};

// Enum OnlineSubsystemEOS.ELeaderboardAggregation
enum class ELeaderboardAggregation : uint8 {
	EOS_LA_Min = 0,
	EOS_LA_Max = 1,
	EOS_LA_Sum = 2,
	EOS_LA_Latest = 3
};

// ScriptStruct OnlineSubsystemEOS.StatData
// Size: 0x18 (Inherited: 0x00)
struct FStatData {
	struct FString StatName; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardDef
// Size: 0x38 (Inherited: 0x00)
struct FLeaderboardDef {
	struct FString LeaderboardId; // 0x00(0x10)
	struct FString StatName; // 0x10(0x10)
	int64_t StartTime; // 0x20(0x08)
	int64_t EndTime; // 0x28(0x08)
	char pad_30[0x8]; // 0x30(0x08)
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardsRecordData
// Size: 0x20 (Inherited: 0x00)
struct FLeaderboardsRecordData {
	struct FProductUserId UserID; // 0x00(0x08)
	struct FString DisplayName; // 0x08(0x10)
	int32_t Rank; // 0x18(0x04)
	int32_t Score; // 0x1c(0x04)
};

// ScriptStruct OnlineSubsystemEOS.ProductUserId
// Size: 0x08 (Inherited: 0x00)
struct FProductUserId {
	char pad_0[0x8]; // 0x00(0x08)
};

// ScriptStruct OnlineSubsystemEOS.LeaderboardsScoreData
// Size: 0x10 (Inherited: 0x00)
struct FLeaderboardsScoreData {
	struct FProductUserId UserID; // 0x00(0x08)
	int32_t Score; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct OnlineSubsystemEOS.PlayerAchievementData
// Size: 0x78 (Inherited: 0x00)
struct FPlayerAchievementData {
	struct FString AchievementId; // 0x00(0x10)
	float Progress; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDateTime UnlockTime; // 0x18(0x08)
	struct TMap<struct FString, struct FStatProgress> Stats; // 0x20(0x50)
	bool bIsUnlocked; // 0x70(0x01)
	char pad_71[0x7]; // 0x71(0x07)
};

// ScriptStruct OnlineSubsystemEOS.StatProgress
// Size: 0x18 (Inherited: 0x00)
struct FStatProgress {
	struct FString StatName; // 0x00(0x10)
	int32_t CurValue; // 0x10(0x04)
	int32_t ThresholdValue; // 0x14(0x04)
};

// ScriptStruct OnlineSubsystemEOS.AchievementsDef
// Size: 0x98 (Inherited: 0x00)
struct FAchievementsDef {
	struct FString AchievementId; // 0x00(0x10)
	struct FString UnlockedDisplayName; // 0x10(0x10)
	struct FString UnlockedDescription; // 0x20(0x10)
	struct FString LockedDisplayName; // 0x30(0x10)
	struct FString LockedDescription; // 0x40(0x10)
	struct FString FlavorText; // 0x50(0x10)
	struct FString UnlockedIconURL; // 0x60(0x10)
	struct FString LockedIconURL; // 0x70(0x10)
	bool bIsHidden; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct TArray<struct FAchivementsStatInfo> StatInfo; // 0x88(0x10)
};

// ScriptStruct OnlineSubsystemEOS.AchivementsStatInfo
// Size: 0x18 (Inherited: 0x00)
struct FAchivementsStatInfo {
	struct FString StatName; // 0x00(0x10)
	int32_t ThresholdValue; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct OnlineSubsystemEOS.AuthToken
// Size: 0x88 (Inherited: 0x00)
struct FAuthToken {
	int32_t ApiVersion; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct FString App; // 0x08(0x10)
	struct FString ClientId; // 0x18(0x10)
	char pad_28[0x8]; // 0x28(0x08)
	struct FString AccessToken; // 0x30(0x10)
	char pad_40[0x8]; // 0x40(0x08)
	struct FString ExpiresAt; // 0x48(0x10)
	char pad_58[0x8]; // 0x58(0x08)
	struct FString RefreshToken; // 0x60(0x10)
	char pad_70[0x8]; // 0x70(0x08)
	struct FString RefreshExpiresAt; // 0x78(0x10)
};

// ScriptStruct OnlineSubsystemEOS.AccountId
// Size: 0x08 (Inherited: 0x00)
struct FAccountId {
	char pad_0[0x8]; // 0x00(0x08)
};

