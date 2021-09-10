// Class AdvancedSessions.AdvancedExternalUILibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedExternalUILibrary : UBlueprintFunctionLibrary {

	void ShowWebURLUI(struct FString URLToShow, enum class EBlueprintResultSwitch Result, struct TArray<struct FString> AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32_t OffsetX, int32_t OffsetY, int32_t SizeX, int32_t SizeY); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowWebURLUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87c200
	void ShowProfileUI(struct FBPUniqueNetId PlayerViewingProfile, struct FBPUniqueNetId PlayerToViewProfileOf, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowProfileUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87c030
	void ShowLeaderBoardUI(struct FString LeaderboardName, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowLeaderBoardUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87bf00
	void ShowInviteUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch Result, struct FName SessionName); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowInviteUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87bde0
	void ShowFriendsUI(struct APlayerController* PlayerController, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowFriendsUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87bd10
	void ShowAccountUpgradeUI(struct FBPUniqueNetId PlayerRequestingAccountUpgradeUI, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedExternalUILibrary.ShowAccountUpgradeUI // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87bbe0
	void CloseWebURLUI(); // Function AdvancedSessions.AdvancedExternalUILibrary.CloseWebURLUI // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x877190
};

// Class AdvancedSessions.AdvancedFriendsGameInstance
// Size: 0x228 (Inherited: 0x1a8)
struct UAdvancedFriendsGameInstance : UGameInstance {
	bool bCallFriendInterfaceEventsOnPlayerControllers; // 0x1a8(0x01)
	bool bCallIdentityInterfaceEventsOnPlayerControllers; // 0x1a9(0x01)
	bool bCallVoiceInterfaceEventsOnPlayerControllers; // 0x1aa(0x01)
	bool bEnableTalkingStatusDelegate; // 0x1ab(0x01)
	char pad_1AC[0x7c]; // 0x1ac(0x7c)

	void OnSessionInviteReceived(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInviting, struct FString AppId, struct FBlueprintSessionResult SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnSessionInviteAccepted(int32_t LocalPlayerNum, struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult SessionToJoin); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerTalkingStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerTalkingStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerLoginStatusChanged(int32_t PlayerNum, enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId NewPlayerUniqueNetID); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsGameInstance.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
};

// Class AdvancedSessions.AdvancedFriendsInterface
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsInterface : UInterface {

	void OnSessionInviteReceived(struct FBPUniqueNetId PersonInviting, struct FBlueprintSessionResult SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteReceived // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnSessionInviteAccepted(struct FBPUniqueNetId PersonInvited, struct FBlueprintSessionResult SearchResult); // Function AdvancedSessions.AdvancedFriendsInterface.OnSessionInviteAccepted // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerVoiceStateChanged(struct FBPUniqueNetId PlayerID, bool bIsTalking); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerVoiceStateChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerLoginStatusChanged(enum class EBPLoginStatus PreviousStatus, enum class EBPLoginStatus NewStatus, struct FBPUniqueNetId PlayerUniqueNetID); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginStatusChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnPlayerLoginChanged(int32_t PlayerNum); // Function AdvancedSessions.AdvancedFriendsInterface.OnPlayerLoginChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
};

// Class AdvancedSessions.AdvancedFriendsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedFriendsLibrary : UBlueprintFunctionLibrary {

	void SendSessionInviteToFriends(struct APlayerController* PlayerController, struct TArray<struct FBPUniqueNetId> Friends, enum class EBlueprintResultSwitch Result, struct FName SessionName); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriends // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87b740
	void SendSessionInviteToFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, enum class EBlueprintResultSwitch Result, struct FName SessionName); // Function AdvancedSessions.AdvancedFriendsLibrary.SendSessionInviteToFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87b590
	void IsAFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId, bool IsFriend); // Function AdvancedSessions.AdvancedFriendsLibrary.IsAFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87a920
	void GetStoredRecentPlayersList(struct FBPUniqueNetId UniqueNetId, struct TArray<struct FBPOnlineRecentPlayer> PlayersList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x879770
	void GetStoredFriendsList(struct APlayerController* PlayerController, struct TArray<struct FBPFriendInfo> FriendsList); // Function AdvancedSessions.AdvancedFriendsLibrary.GetStoredFriendsList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x879620
	void GetFriend(struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId, struct FBPFriendInfo Friend); // Function AdvancedSessions.AdvancedFriendsLibrary.GetFriend // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x877d00
};

// Class AdvancedSessions.AdvancedIdentityLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedIdentityLibrary : UBlueprintFunctionLibrary {

	void SetUserAccountAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString NewAttributeValue, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.SetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87ba20
	void GetUserID(struct FBPUserOnlineAccount AccountInfo, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87a740
	void GetUserAccountRealName(struct FBPUserOnlineAccount AccountInfo, struct FString UserName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountRealName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87a620
	void GetUserAccountDisplayName(struct FBPUserOnlineAccount AccountInfo, struct FString DisplayName); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87a500
	void GetUserAccountAuthAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString AuthAttribute, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAuthAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87a320
	void GetUserAccountAttribute(struct FBPUserOnlineAccount AccountInfo, struct FString AttributeName, struct FString AttributeValue, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAttribute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87a140
	void GetUserAccountAccessToken(struct FBPUserOnlineAccount AccountInfo, struct FString AccessToken); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccountAccessToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87a020
	void GetUserAccount(struct FBPUniqueNetId UniqueNetId, struct FBPUserOnlineAccount AccountInfo, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetUserAccount // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x879e80
	void GetPlayerNickname(struct FBPUniqueNetId UniqueNetId, struct FString PlayerNickname); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerNickname // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878410
	void GetPlayerAuthToken(struct APlayerController* PlayerController, struct FString AuthToken, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetPlayerAuthToken // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8781f0
	void GetLoginStatus(struct FBPUniqueNetId UniqueNetId, enum class EBPLoginStatus LoginStatus, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetLoginStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x877ef0
	void GetAllUserAccounts(struct TArray<struct FBPUserOnlineAccount> AccountInfos, enum class EBlueprintResultSwitch Result); // Function AdvancedSessions.AdvancedIdentityLibrary.GetAllUserAccounts // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x877670
};

// Class AdvancedSessions.AdvancedSessionsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSessionsLibrary : UBlueprintFunctionLibrary {

	void UniqueNetIdToString(struct FBPUniqueNetId UniqueNetId, struct FString String); // Function AdvancedSessions.AdvancedSessionsLibrary.UniqueNetIdToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87c590
	void SetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.SetPlayerName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x87b900
	struct FSessionsSearchSetting MakeLiteralSessionSearchProperty(struct FSessionPropertyKeyPair SessionSearchProperty, enum class EOnlineComparisonOpRedux ComparisonOp); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionSearchProperty // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b450
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyString(struct FName Key, struct FString Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b300
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyInt(struct FName Key, int32_t Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b210
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyFloat(struct FName Key, float Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyFloat // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b120
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyByte(struct FName Key, char Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyByte // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87b030
	struct FSessionPropertyKeyPair MakeLiteralSessionPropertyBool(struct FName Key, bool Value); // Function AdvancedSessions.AdvancedSessionsLibrary.MakeLiteralSessionPropertyBool // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87af40
	bool IsValidUniqueNetID(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87ae70
	bool IsValidSession(struct FBlueprintSessionResult SessionResult); // Function AdvancedSessions.AdvancedSessionsLibrary.IsValidSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x87ac50
	void IsPlayerInSession(struct UObject* WorldContextObject, struct FBPUniqueNetId PlayerToCheck, bool bIsInSession, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.IsPlayerInSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87aaa0
	bool HasOnlineSubsystem(struct FName SubSystemName); // Function AdvancedSessions.AdvancedSessionsLibrary.HasOnlineSubsystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x87a890
	void GetUniqueNetIDFromPlayerState(struct APlayerState* PlayerState, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetIDFromPlayerState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x879d80
	void GetUniqueNetID(struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueNetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x879c80
	void GetUniqueBuildID(struct FBlueprintSessionResult SessionResult, int32_t UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x879920
	void GetSessionState(struct UObject* WorldContextObject, enum class EBPOnlineSessionState SessionState, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x879500
	void GetSessionSettings(struct UObject* WorldContextObject, int32_t NumConnections, int32_t NumPrivateConnections, bool bIsLAN, bool bIsDedicated, bool bAllowInvites, bool bAllowJoinInProgress, bool bIsAnticheatEnabled, int32_t BuildUniqueID, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, enum class EBlueprintResultSwitch Result, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8790c0
	void GetSessionPropertyString(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, struct FString SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x878f00
	struct FName GetSessionPropertyKey(struct FSessionPropertyKeyPair SessionProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyKey // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x878e50
	void GetSessionPropertyInt(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, int32_t SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x878cb0
	void GetSessionPropertyFloat(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, float SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x878b00
	void GetSessionPropertyByte(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, char SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyByte // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x878960
	void GetSessionPropertyBool(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class ESessionSettingSearchResult SearchResult, bool SettingValue); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionPropertyBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8787c0
	void GetSessionID_AsString(struct FBlueprintSessionResult SessionResult, struct FString SessionId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878540
	void GetPlayerName(struct APlayerController* PlayerController, struct FString PlayerName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetPlayerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878330
	void GetNumberOfNetworkPlayers(struct UObject* WorldContextObject, int32_t NumNetPlayers); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNumberOfNetworkPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878120
	void GetNetPlayerIndex(struct APlayerController* PlayerController, int32_t NetPlayerIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.GetNetPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x878050
	void GetExtraSettings(struct FBlueprintSessionResult SessionResult, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings); // Function AdvancedSessions.AdvancedSessionsLibrary.GetExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x877960
	void GetCurrentUniqueBuildID(int32_t UniqueBuildId); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentUniqueBuildID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8778e0
	void GetCurrentSessionID_AsString(struct UObject* WorldContextObject, struct FString SessionId, struct FName SessionName); // Function AdvancedSessions.AdvancedSessionsLibrary.GetCurrentSessionID_AsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8777b0
	void FindSessionPropertyIndexByName(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingName, enum class EBlueprintResultSwitch Result, int32_t OutIndex); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyIndexByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8774d0
	void FindSessionPropertyByName(struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SettingsName, enum class EBlueprintResultSwitch Result, struct FSessionPropertyKeyPair OutProperty); // Function AdvancedSessions.AdvancedSessionsLibrary.FindSessionPropertyByName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x877310
	bool EqualEqual_UNetIDUnetID(struct FBPUniqueNetId A, struct FBPUniqueNetId B); // Function AdvancedSessions.AdvancedSessionsLibrary.EqualEqual_UNetIDUnetID // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8771b0
	void AddOrModifyExtraSettings(struct TArray<struct FSessionPropertyKeyPair> SettingsArray, struct TArray<struct FSessionPropertyKeyPair> NewOrChangedSettings, struct TArray<struct FSessionPropertyKeyPair> ModifiedSettingsArray); // Function AdvancedSessions.AdvancedSessionsLibrary.AddOrModifyExtraSettings // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x876fc0
};

// Class AdvancedSessions.AdvancedVoiceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedVoiceLibrary : UBlueprintFunctionLibrary {

	bool UnRegisterRemoteTalker(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8811e0
	void UnRegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x881170
	void UnRegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.UnRegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x881150
	bool UnMuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.UnMuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x880ff0
	void StopNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StopNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880f80
	void StartNetworkedVoice(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.StartNetworkedVoice // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880f10
	void RemoveAllRemoteTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RemoveAllRemoteTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880d90
	bool RegisterRemoteTalker(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x880cc0
	bool RegisterLocalTalker(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterLocalTalker // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880c40
	void RegisterAllLocalTalkers(); // Function AdvancedSessions.AdvancedVoiceLibrary.RegisterAllLocalTalkers // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880c20
	bool MuteRemoteTalker(char LocalUserNum, struct FBPUniqueNetId UniqueNetId, bool bIsSystemWide); // Function AdvancedSessions.AdvancedVoiceLibrary.MuteRemoteTalker // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x880ac0
	bool IsRemotePlayerTalking(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsRemotePlayerTalking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x880730
	bool IsPlayerMuted(char LocalUserNumChecking, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.AdvancedVoiceLibrary.IsPlayerMuted // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x880620
	bool IsLocalPlayerTalking(char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsLocalPlayerTalking // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8805a0
	void IsHeadsetPresent(bool bHasHeadset, char LocalPlayerNum); // Function AdvancedSessions.AdvancedVoiceLibrary.IsHeadsetPresent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8804d0
	void GetNumLocalTalkers(int32_t NumLocalTalkers); // Function AdvancedSessions.AdvancedVoiceLibrary.GetNumLocalTalkers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x8802f0
};

// Class AdvancedSessions.CancelFindSessionsCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct UCancelFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct UCancelFindSessionsCallbackProxy* CancelFindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.CancelFindSessionsCallbackProxy.CancelFindSessions // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x87f320
};

// Class AdvancedSessions.CreateSessionCallbackProxyAdvanced
// Size: 0xc0 (Inherited: 0x30)
struct UCreateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x70]; // 0x50(0x70)

	struct UCreateSessionCallbackProxyAdvanced* CreateAdvancedSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct APlayerController* PlayerController, struct FName SessionName, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bIsDedicatedServer, bool bUsePresence, bool bAllowJoinViaPresence, bool bAllowJoinViaPresenceFriendsOnly, bool bAntiCheatProtected, bool bUsesStats, bool bShouldAdvertise); // Function AdvancedSessions.CreateSessionCallbackProxyAdvanced.CreateAdvancedSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87f3f0
};

// Class AdvancedSessions.DestroySessionCallbackProxyAdvanced
// Size: 0x80 (Inherited: 0x30)
struct UDestroySessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UDestroySessionCallbackProxyAdvanced* DestroyAdvacedSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // Function AdvancedSessions.DestroySessionCallbackProxyAdvanced.DestroyAdvacedSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x87f8a0
};

// Class AdvancedSessions.EndSessionCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UEndSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UEndSessionCallbackProxy* EndSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName SessionName); // Function AdvancedSessions.EndSessionCallbackProxy.EndSession // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x87f9a0
};

// Class AdvancedSessions.FindFriendSessionCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct UFindFriendSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct UFindFriendSessionCallbackProxy* FindFriendSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId FriendUniqueNetId); // Function AdvancedSessions.FindFriendSessionCallbackProxy.FindFriendSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87fc70
};

// Class AdvancedSessions.FindSessionsCallbackProxyAdvanced
// Size: 0xd0 (Inherited: 0x30)
struct UFindSessionsCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x80]; // 0x50(0x80)

	struct UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN, enum class EBPServerPresenceSearchType ServerTypeToSearch, struct TArray<struct FSessionsSearchSetting> Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, int32_t MinSlotsAvailable); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FindSessionsAdvanced // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87fdd0
	void FilterSessionResults(struct TArray<struct FBlueprintSessionResult> SessionResults, struct TArray<struct FSessionsSearchSetting> Filters, struct TArray<struct FBlueprintSessionResult> FilteredResults); // Function AdvancedSessions.FindSessionsCallbackProxyAdvanced.FilterSessionResults // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x87faa0
};

// Class AdvancedSessions.GetFriendsCallbackProxy
// Size: 0x70 (Inherited: 0x30)
struct UGetFriendsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x20]; // 0x50(0x20)

	struct UGetFriendsCallbackProxy* GetAndStoreFriendsList(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.GetFriendsCallbackProxy.GetAndStoreFriendsList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880110
};

// Class AdvancedSessions.GetRecentPlayersCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct UGetRecentPlayersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct UGetRecentPlayersCallbackProxy* GetAndStoreRecentPlayersList(struct UObject* WorldContextObject, struct FBPUniqueNetId UniqueNetId); // Function AdvancedSessions.GetRecentPlayersCallbackProxy.GetAndStoreRecentPlayersList // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8801e0
};

// Class AdvancedSessions.GetUserPrivilegeCallbackProxy
// Size: 0x80 (Inherited: 0x30)
struct UGetUserPrivilegeCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x30]; // 0x50(0x30)

	struct UGetUserPrivilegeCallbackProxy* GetUserPrivilege(struct UObject* WorldContextObject, enum class EBPUserPrivileges PrivilegeToCheck, struct FBPUniqueNetId PlayerUniqueNetID); // Function AdvancedSessions.GetUserPrivilegeCallbackProxy.GetUserPrivilege // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x880370
};

// Class AdvancedSessions.LoginUserCallbackProxy
// Size: 0x98 (Inherited: 0x30)
struct ULoginUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x48]; // 0x50(0x48)

	struct ULoginUserCallbackProxy* LoginUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString UserID, struct FString UserToken); // Function AdvancedSessions.LoginUserCallbackProxy.LoginUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x880800
};

// Class AdvancedSessions.LogoutUserCallbackProxy
// Size: 0x78 (Inherited: 0x30)
struct ULogoutUserCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x28]; // 0x50(0x28)

	struct ULogoutUserCallbackProxy* LogoutUser(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function AdvancedSessions.LogoutUserCallbackProxy.LogoutUser // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8809f0
};

// Class AdvancedSessions.SendFriendInviteCallbackProxy
// Size: 0x90 (Inherited: 0x30)
struct USendFriendInviteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x40]; // 0x50(0x40)

	struct USendFriendInviteCallbackProxy* SendFriendInvite(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBPUniqueNetId UniqueNetIDInvited); // Function AdvancedSessions.SendFriendInviteCallbackProxy.SendFriendInvite // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x880db0
};

// Class AdvancedSessions.UpdateSessionCallbackProxyAdvanced
// Size: 0xa0 (Inherited: 0x30)
struct UUpdateSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct UUpdateSessionCallbackProxyAdvanced* UpdateSession(struct UObject* WorldContextObject, struct TArray<struct FSessionPropertyKeyPair> ExtraSettings, struct FName SessionName, int32_t PublicConnections, int32_t PrivateConnections, bool bUseLAN, bool bAllowInvites, bool bAllowJoinInProgress, bool bRefreshOnlineData, bool bIsDedicatedServer); // Function AdvancedSessions.UpdateSessionCallbackProxyAdvanced.UpdateSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8812b0
};

