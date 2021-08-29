// Enum OnlineSubsystemIcarus.ELobbyStatus
enum class ELobbyStatus : uint8 {
	Waiting = 0,
	Loading = 1,
	InGame = 2,
	ELobbyStatus_MAX = 3
};

// Enum OnlineSubsystemIcarus.EThresholdType
enum class EThresholdType : uint8 {
	Absoulute = 0,
	Relative = 1,
	Percent = 2,
	EThresholdType_MAX = 3
};

// Enum OnlineSubsystemIcarus.EOnlinePresenceStatusIcarus
enum class EOnlinePresenceStatusIcarus : uint8 {
	ICARUS_PS_Online = 0,
	ICARUS_PS_Offline = 1,
	ICARUS_PS_Away = 2,
	ICARUS_PS_ExtendedAway = 3,
	ICARUS_PS_DoNotDisturb = 4,
	ICARUS_PS_MAX = 5
};

// ScriptStruct OnlineSubsystemIcarus.MatchUpdate
// Size: 0x80 (Inherited: 0x00)
struct FMatchUpdate {
	struct FString MatchID; // 0x00(0x10)
	struct FMatchMakingRequest MatchReq; // 0x10(0x20)
	bool bMatchFound; // 0x30(0x01)
	enum class ELobbyStatus LobbyStatus; // 0x31(0x01)
	char pad_32[0x6]; // 0x32(0x06)
	struct TArray<struct FPlayerID> PlayerIDs; // 0x38(0x10)
	struct FConnectionString ConnectionString; // 0x48(0x38)
};

// ScriptStruct OnlineSubsystemIcarus.MatchMakingRequest
// Size: 0x20 (Inherited: 0x00)
struct FMatchMakingRequest {
	struct FString PlayerName; // 0x00(0x10)
	float Score; // 0x10(0x04)
	struct FName MatchCode; // 0x14(0x08)
	char pad_1C[0x4]; // 0x1c(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.IcarusChatMessage
// Size: 0x30 (Inherited: 0x00)
struct FIcarusChatMessage {
	struct FString UserID; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
	struct FString ChatMessage; // 0x20(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.StorageInfo
// Size: 0x30 (Inherited: 0x00)
struct FStorageInfo {
	struct FString Key; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	struct FName HashType; // 0x20(0x08)
	int32_t UncompressedLength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.CommonResponse
// Size: 0x18 (Inherited: 0x00)
struct FCommonResponse {
	bool Result; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.CommonStorageResponse
// Size: 0x28 (Inherited: 0x18)
struct FCommonStorageResponse : FCommonResponse {
	struct FString Key; // 0x18(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.ReqCommonStorage
// Size: 0x10 (Inherited: 0x00)
struct FReqCommonStorage {
	struct FString Key; // 0x00(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.UpdateLobbyStatus
// Size: 0x18 (Inherited: 0x00)
struct FUpdateLobbyStatus {
	struct FString MatchID; // 0x00(0x10)
	enum class ELobbyStatus LobbyStatus; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct OnlineSubsystemIcarus.UpdateConnectionString
// Size: 0x48 (Inherited: 0x00)
struct FUpdateConnectionString {
	struct FString MatchID; // 0x00(0x10)
	struct FConnectionString ConnectionString; // 0x10(0x38)
};

// ScriptStruct OnlineSubsystemIcarus.MatchMakingFilter
// Size: 0x58 (Inherited: 0x08)
struct FMatchMakingFilter : FTableRowBase {
	struct FString MatchName; // 0x08(0x10)
	struct FName MatchCode; // 0x18(0x08)
	struct FString Description; // 0x20(0x10)
	struct FThreshold Threshold; // 0x30(0x0c)
	int32_t MinPlayer; // 0x3c(0x04)
	int32_t MaxPlayer; // 0x40(0x04)
	bool bDropInAndOut; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	struct TArray<struct FString> Maps; // 0x48(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.Threshold
// Size: 0x0c (Inherited: 0x00)
struct FThreshold {
	enum class EThresholdType ThresholdType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float MinScore; // 0x04(0x04)
	float MaxScore; // 0x08(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.PresencePropertyKeyPair
// Size: 0x20 (Inherited: 0x00)
struct FPresencePropertyKeyPair {
	char pad_0[0x20]; // 0x00(0x20)
};

// ScriptStruct OnlineSubsystemIcarus.IcarusVersion
// Size: 0x38 (Inherited: 0x00)
struct FIcarusVersion {
	struct FName Name; // 0x00(0x08)
	struct FIcarusBuildVersion Version; // 0x08(0x20)
	struct FBackendSchemaVersion BackendSchema; // 0x28(0x0c)
	struct FIcarusDataVersion Data; // 0x34(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.IcarusDataVersion
// Size: 0x04 (Inherited: 0x00)
struct FIcarusDataVersion {
	int32_t Changelist; // 0x00(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.BackendSchemaVersion
// Size: 0x0c (Inherited: 0x00)
struct FBackendSchemaVersion {
	int32_t Major; // 0x00(0x04)
	int32_t Minor; // 0x04(0x04)
	int32_t Changelist; // 0x08(0x04)
};

// ScriptStruct OnlineSubsystemIcarus.IcarusBuildVersion
// Size: 0x20 (Inherited: 0x00)
struct FIcarusBuildVersion {
	int32_t Major; // 0x00(0x04)
	int32_t Minor; // 0x04(0x04)
	int32_t Patch; // 0x08(0x04)
	int32_t Changelist; // 0x0c(0x04)
	struct FString BuildType; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.ReqUserTicket
// Size: 0x20 (Inherited: 0x00)
struct FReqUserTicket {
	struct FString UserID; // 0x00(0x10)
	struct FString Ticket; // 0x10(0x10)
};

// ScriptStruct OnlineSubsystemIcarus.IcarusProfile
// Size: 0x20 (Inherited: 0x00)
struct FIcarusProfile {
	struct FString UserID; // 0x00(0x10)
	struct FString PlayerName; // 0x10(0x10)
};

