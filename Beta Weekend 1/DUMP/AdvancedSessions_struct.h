// Enum AdvancedSessions.EBPOnlinePresenceState
enum class EBPOnlinePresenceState : uint8 {
	Online = 0,
	Offline = 1,
	Away = 2,
	ExtendedAway = 3,
	DoNotDisturb = 4,
	Chat = 5,
	EBPOnlinePresenceState_MAX = 6
};

// Enum AdvancedSessions.EBPUserPrivileges
enum class EBPUserPrivileges : uint8 {
	CanPlay = 0,
	CanPlayOnline = 1,
	CanCommunicateOnline = 2,
	CanUseUserGeneratedContent = 3,
	EBPUserPrivileges_MAX = 4
};

// Enum AdvancedSessions.EOnlineComparisonOpRedux
enum class EOnlineComparisonOpRedux : uint8 {
	Equals = 0,
	NotEquals = 1,
	GreaterThan = 2,
	GreaterThanEquals = 3,
	LessThan = 4,
	LessThanEquals = 5,
	EOnlineComparisonOpRedux_MAX = 6
};

// Enum AdvancedSessions.EBPOnlineSessionState
enum class EBPOnlineSessionState : uint8 {
	NoSession = 0,
	Creating = 1,
	Pending = 2,
	Starting = 3,
	InProgress = 4,
	Ending = 5,
	Ended = 6,
	Destroying = 7,
	EBPOnlineSessionState_MAX = 8
};

// Enum AdvancedSessions.EBPServerPresenceSearchType
enum class EBPServerPresenceSearchType : uint8 {
	AllServers = 0,
	ClientServersOnly = 1,
	DedicatedServersOnly = 2,
	EBPServerPresenceSearchType_MAX = 3
};

// Enum AdvancedSessions.EBlueprintAsyncResultSwitch
enum class EBlueprintAsyncResultSwitch : uint8 {
	OnSuccess = 0,
	AsyncLoading = 1,
	OnFailure = 2,
	EBlueprintAsyncResultSwitch_MAX = 3
};

// Enum AdvancedSessions.EBlueprintResultSwitch
enum class EBlueprintResultSwitch : uint8 {
	OnSuccess = 0,
	OnFailure = 1,
	EBlueprintResultSwitch_MAX = 2
};

// Enum AdvancedSessions.ESessionSettingSearchResult
enum class ESessionSettingSearchResult : uint8 {
	Found = 0,
	NotFound = 1,
	WrongType = 2,
	ESessionSettingSearchResult_MAX = 3
};

// Enum AdvancedSessions.EBPLoginStatus
enum class EBPLoginStatus : uint8 {
	NotLoggedIn = 0,
	UsingLocalProfile = 1,
	LoggedIn = 2,
	EBPLoginStatus_MAX = 3
};

// ScriptStruct AdvancedSessions.BPFriendInfo
// Size: 0x68 (Inherited: 0x00)
struct FBPFriendInfo {
	struct FString DisplayName; // 0x00(0x10)
	struct FString RealName; // 0x10(0x10)
	enum class EBPOnlinePresenceState OnlineState; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
	struct FBPUniqueNetId UniqueNetId; // 0x28(0x20)
	bool bIsPlayingSameGame; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
	struct FBPFriendPresenceInfo PresenceInfo; // 0x50(0x18)
};

// ScriptStruct AdvancedSessions.BPFriendPresenceInfo
// Size: 0x18 (Inherited: 0x00)
struct FBPFriendPresenceInfo {
	bool bIsOnline; // 0x00(0x01)
	bool bIsPlaying; // 0x01(0x01)
	bool bIsPlayingThisGame; // 0x02(0x01)
	bool bIsJoinable; // 0x03(0x01)
	bool bHasVoiceSupport; // 0x04(0x01)
	enum class EBPOnlinePresenceState PresenceState; // 0x05(0x01)
	char pad_6[0x2]; // 0x06(0x02)
	struct FString StatusString; // 0x08(0x10)
};

// ScriptStruct AdvancedSessions.BPUniqueNetId
// Size: 0x20 (Inherited: 0x00)
struct FBPUniqueNetId {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AdvancedSessions.BPOnlineUser
// Size: 0x40 (Inherited: 0x00)
struct FBPOnlineUser {
	struct FBPUniqueNetId UniqueNetId; // 0x00(0x20)
	struct FString DisplayName; // 0x20(0x10)
	struct FString RealName; // 0x30(0x10)
};

// ScriptStruct AdvancedSessions.BPOnlineRecentPlayer
// Size: 0x50 (Inherited: 0x40)
struct FBPOnlineRecentPlayer : FBPOnlineUser {
	struct FString LastSeen; // 0x40(0x10)
};

// ScriptStruct AdvancedSessions.SessionsSearchSetting
// Size: 0x28 (Inherited: 0x00)
struct FSessionsSearchSetting {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct AdvancedSessions.SessionPropertyKeyPair
// Size: 0x20 (Inherited: 0x00)
struct FSessionPropertyKeyPair {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct AdvancedSessions.BPUserOnlineAccount
// Size: 0x10 (Inherited: 0x00)
struct FBPUserOnlineAccount {
	char pad_0[0x10]; // 0x00(0x10)
};

