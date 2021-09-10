// Enum AdvancedSteamSessions.FBPWorkshopFileType
enum class FBPWorkshopFileType : uint8 {
	k_EWorkshopFileTypeCommunity = 0,
	k_EWorkshopFileTypeMicrotransaction = 1,
	k_EWorkshopFileTypeCollection = 2,
	k_EWorkshopFileTypeArt = 3,
	k_EWorkshopFileTypeVideo = 4,
	k_EWorkshopFileTypeScreenshot = 5,
	k_EWorkshopFileTypeGame = 6,
	k_EWorkshopFileTypeSoftware = 7,
	k_EWorkshopFileTypeConcept = 8,
	k_EWorkshopFileTypeWebGuide = 9,
	k_EWorkshopFileTypeIntegratedGuide = 10,
	k_EWorkshopFileTypeMerch = 11,
	k_EWorkshopFileTypeControllerBinding = 12,
	k_EWorkshopFileTypeSteamworksAccessInvite = 13,
	k_EWorkshopFileTypeSteamVideo = 14,
	k_EWorkshopFileTypeMax = 15,
	k_MAX = 16
};

// Enum AdvancedSteamSessions.FBPSteamResult
enum class FBPSteamResult : uint8 {
	K_EResultInvalid = 0,
	k_EResultOK = 1,
	k_EResultFail = 2,
	k_EResultNoConnection = 3,
	k_EResultInvalidPassword = 5,
	k_EResultLoggedInElsewhere = 6,
	k_EResultInvalidProtocolVer = 7,
	k_EResultInvalidParam = 8,
	k_EResultFileNotFound = 9,
	k_EResultBusy = 10,
	k_EResultInvalidState = 11,
	k_EResultInvalidName = 12,
	k_EResultInvalidEmail = 13,
	k_EResultDuplicateName = 14,
	k_EResultAccessDenied = 15,
	k_EResultTimeout = 16,
	k_EResultBanned = 17,
	k_EResultAccountNotFound = 18,
	k_EResultInvalidSteamID = 19,
	k_EResultServiceUnavailable = 20,
	k_EResultNotLoggedOn = 21,
	k_EResultPending = 22,
	k_EResultEncryptionFailure = 23,
	k_EResultInsufficientPrivilege = 24,
	k_EResultLimitExceeded = 25,
	k_EResultRevoked = 26,
	k_EResultExpired = 27,
	k_EResultAlreadyRedeemed = 28,
	k_EResultDuplicateRequest = 29,
	k_EResultAlreadyOwned = 30,
	k_EResultIPNotFound = 31,
	k_EResultPersistFailed = 32,
	k_EResultLockingFailed = 33,
	k_EResultLogonSessionReplaced = 34,
	k_EResultConnectFailed = 35,
	k_EResultHandshakeFailed = 36,
	k_EResultIOFailure = 37,
	k_EResultRemoteDisconnect = 38,
	k_EResultShoppingCartNotFound = 39,
	k_EResultBlocked = 40,
	k_EResultIgnored = 41,
	k_EResultNoMatch = 42,
	k_EResultAccountDisabled = 43,
	k_EResultServiceReadOnly = 44,
	k_EResultAccountNotFeatured = 45,
	k_EResultAdministratorOK = 46,
	k_EResultContentVersion = 47,
	k_EResultTryAnotherCM = 48,
	k_EResultPasswordRequiredToKickSession = 49,
	k_EResultAlreadyLoggedInElsewhere = 50,
	k_EResultSuspended = 51,
	k_EResultCancelled = 52,
	k_EResultDataCorruption = 53,
	k_EResultDiskFull = 54,
	k_EResultRemoteCallFailed = 55,
	k_EResultPasswordUnset = 56,
	k_EResultExternalAccountUnlinked = 57,
	k_EResultPSNTicketInvalid = 58,
	k_EResultExternalAccountAlreadyLinked = 59,
	k_EResultRemoteFileConflict = 60,
	k_EResultIllegalPassword = 61,
	k_EResultSameAsPreviousValue = 62,
	k_EResultAccountLogonDenied = 63,
	k_EResultCannotUseOldPassword = 64,
	k_EResultInvalidLoginAuthCode = 65,
	k_EResultAccountLogonDeniedNoMail = 66,
	k_EResultHardwareNotCapableOfIPT = 67,
	k_EResultIPTInitError = 68,
	k_EResultParentalControlRestricted = 69,
	k_EResultFacebookQueryError = 70,
	k_EResultExpiredLoginAuthCode = 71,
	k_EResultIPLoginRestrictionFailed = 72,
	k_EResultAccountLockedDown = 73,
	k_EResultAccountLogonDeniedVerifiedEmailRequired = 74,
	k_EResultNoMatchingURL = 75,
	k_EResultBadResponse = 76,
	k_EResultRequirePasswordReEntry = 77,
	k_EResultValueOutOfRange = 78,
	k_EResultUnexpectedError = 79,
	k_EResultDisabled = 80,
	k_EResultInvalidCEGSubmission = 81,
	k_EResultRestrictedDevice = 82,
	k_EResultRegionLocked = 83,
	k_EResultRateLimitExceeded = 84,
	k_EResultAccountLoginDeniedNeedTwoFactor = 85,
	k_EResultItemDeleted = 86,
	k_EResultAccountLoginDeniedThrottle = 87,
	k_EResultTwoFactorCodeMismatch = 88,
	k_EResultTwoFactorActivationCodeMismatch = 89,
	k_EResultAccountAssociatedToMultiplePartners = 90,
	k_EResultNotModified = 91,
	FBPSteamResult_MAX = 92
};

// Enum AdvancedSteamSessions.ESteamUserOverlayType
enum class ESteamUserOverlayType : uint8 {
	steamid = 0,
	chat = 1,
	jointrade = 2,
	stats = 3,
	achievements = 4,
	friendadd = 5,
	friendremove = 6,
	friendrequestaccept = 7,
	friendrequestignore = 8,
	ESteamUserOverlayType_MAX = 9
};

// Enum AdvancedSteamSessions.SteamAvatarSize
enum class SteamAvatarSize : uint8 {
	SteamAvatar_INVALID = 0,
	SteamAvatar_Small = 1,
	SteamAvatar_Medium = 2,
	SteamAvatar_Large = 3,
	SteamAvatar_MAX = 4
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupOfficer
// Size: 0x28 (Inherited: 0x00)
struct FBPSteamGroupOfficer {
	struct FBPUniqueNetId OfficerUniqueNetID; // 0x00(0x20)
	bool bIsOwner; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopItemDetails
// Size: 0x60 (Inherited: 0x00)
struct FBPSteamWorkshopItemDetails {
	enum class FBPSteamResult ResultOfRequest; // 0x00(0x01)
	enum class FBPWorkshopFileType FileType; // 0x01(0x01)
	char pad_2[0x2]; // 0x02(0x02)
	int32_t CreatorAppID; // 0x04(0x04)
	int32_t ConsumerAppID; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Title; // 0x10(0x10)
	struct FString Description; // 0x20(0x10)
	struct FString ItemUrl; // 0x30(0x10)
	int32_t VotesUp; // 0x40(0x04)
	int32_t VotesDown; // 0x44(0x04)
	float CalculatedScore; // 0x48(0x04)
	bool bBanned; // 0x4c(0x01)
	bool bAcceptedForUse; // 0x4d(0x01)
	bool bTagsTruncated; // 0x4e(0x01)
	char pad_4F[0x1]; // 0x4f(0x01)
	struct FString CreatorSteamID; // 0x50(0x10)
};

// ScriptStruct AdvancedSteamSessions.BPSteamGroupInfo
// Size: 0x50 (Inherited: 0x00)
struct FBPSteamGroupInfo {
	struct FBPUniqueNetId GroupID; // 0x00(0x20)
	struct FString GroupName; // 0x20(0x10)
	struct FString GroupTag; // 0x30(0x10)
	int32_t numOnline; // 0x40(0x04)
	int32_t numInGame; // 0x44(0x04)
	int32_t numChatting; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

// ScriptStruct AdvancedSteamSessions.BPSteamWorkshopID
// Size: 0x08 (Inherited: 0x00)
struct FBPSteamWorkshopID {
	char pad_0[0x8]; // 0x00(0x08)
};

