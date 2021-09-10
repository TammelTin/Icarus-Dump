// Class OnlineSubsystemEOS.AchievementsUnlockProxy
// Size: 0x70 (Inherited: 0x30)
struct UAchievementsUnlockProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UAchievementsUnlockProxy* UnlockAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TArray<struct FString> AchievementIds); // Function OnlineSubsystemEOS.AchievementsUnlockProxy.UnlockAchievements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa30890
};

// Class OnlineSubsystemEOS.EOSNetConnection
// Size: 0x1b98 (Inherited: 0x1b90)
struct UEOSNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b90(0x01)
	char pad_1B91[0x7]; // 0x1b91(0x07)
};

// Class OnlineSubsystemEOS.EOSNetDriver
// Size: 0x7c0 (Inherited: 0x7b8)
struct UEOSNetDriver : UIpNetDriver {
	char pad_7B8[0x8]; // 0x7b8(0x08)
};

// Class OnlineSubsystemEOS.GetStatsCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UGetStatsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UGetStatsCallbackProxy* GetStats(struct FProductUserId ProductUserId, struct TArray<struct FString> StatsName); // Function OnlineSubsystemEOS.GetStatsCallbackProxy.GetStats // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa303f0
};

// Class OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy
// Size: 0x68 (Inherited: 0x30)
struct ULeaderboardQueryDefinitionProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x18]; // 0x50(0x18)

	struct ULeaderboardQueryDefinitionProxy* QueryLeaderboardDefinitions(); // Function OnlineSubsystemEOS.LeaderboardQueryDefinitionProxy.QueryLeaderboardDefinitions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa306d0
};

// Class OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct ULeaderboardQueryRecordsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct ULeaderboardQueryRecordsCallbackProxy* QueryLeaderboardRecords(struct FName LeaderboarId); // Function OnlineSubsystemEOS.LeaderboardQueryRecordsCallbackProxy.QueryLeaderboardRecords // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa30700
};

// Class OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct ULeaderboardQueryScoresCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct ULeaderboardQueryScoresCallbackProxy* QueryLeaderboardScore(struct TArray<struct FProductUserId> ProductUserIds, struct FName LeaderboarId); // Function OnlineSubsystemEOS.LeaderboardQueryScoresCallbackProxy.QueryLeaderboardScore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa30790
};

// Class OnlineSubsystemEOS.OnlineSubsystemEOSConfig
// Size: 0xd0 (Inherited: 0x38)
struct UOnlineSubsystemEOSConfig : UDeveloperSettings {
	struct FString ProductName; // 0x38(0x10)
	struct FString ProductVersion; // 0x48(0x10)
	struct FString ProductId; // 0x58(0x10)
	struct FString SandboxId; // 0x68(0x10)
	struct FString DeploymentId; // 0x78(0x10)
	struct FString SupportTicketingKey; // 0x88(0x10)
	struct FString SupportTicketingURL; // 0x98(0x10)
	struct FString ClientId; // 0xa8(0x10)
	struct FString ClientSecret; // 0xb8(0x10)
	enum class ELogLevel LogLevel; // 0xc8(0x01)
	char pad_C9[0x7]; // 0xc9(0x07)
};

// Class OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UOnlineSubsystemEOSFunctionLibrary : UBlueprintFunctionLibrary {

	struct FString ProductUserIdToString(struct FProductUserId ProductUserId); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa30600
	struct FProductUserId ProductUserIdFromString(struct FString AccountId); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.ProductUserIdFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa30550
	bool IsAuthorised(); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.IsAuthorised // (Final|Native|Static|Public|BlueprintCallable) // @ game+0xa30520
	struct FProductUserId GetProductUserId(); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetProductUserId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa303b0
	bool GetCachedEOSAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TArray<struct FPlayerAchievementData> OutAchievements); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievements // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa30220
	bool GetCachedEOSAchievement(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString AchievementId, struct FPlayerAchievementData OutAchievement); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetCachedEOSAchievement // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa30020
	struct TArray<struct FAchievementsDef> GetAchivementsDefinition(struct UObject* WorldContextObject); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAchivementsDefinition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa2fe70
	struct FAccountId GetAccountId(); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.GetAccountId // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa2fe30
	struct FString EpicAccountIdToString(struct FAccountId AccountId); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0xa2fd60
	struct FAccountId EpicAccountIdFromString(struct FString AccountId); // Function OnlineSubsystemEOS.OnlineSubsystemEOSFunctionLibrary.EpicAccountIdFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0xa2fcb0
};

// Class OnlineSubsystemEOS.UpdateStatsCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UUpdateStatsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UUpdateStatsCallbackProxy* UpdateStats(struct FProductUserId ProductUserId, struct TArray<struct FStatData> Stats); // Function OnlineSubsystemEOS.UpdateStatsCallbackProxy.UpdateStats // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0xa309f0
};

