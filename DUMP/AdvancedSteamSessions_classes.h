// Class AdvancedSteamSessions.AdvancedSteamFriendsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSteamFriendsLibrary : UBlueprintFunctionLibrary {

	bool RequestSteamFriendInfo(struct FBPUniqueNetId UniqueNetId, bool bRequireNameOnly); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.RequestSteamFriendInfo // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ebf60
	bool OpenSteamUserOverlay(struct FBPUniqueNetId UniqueNetId, enum class ESteamUserOverlayType DialogType); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.OpenSteamUserOverlay // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ebe20
	struct FString GetSteamPersonaName(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamPersonaName // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8eb9a0
	void GetSteamGroups(struct TArray<struct FBPSteamGroupInfo> SteamGroups); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamGroups // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8eb8a0
	void GetSteamFriendGamePlayed(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintResultSwitch Result, int32_t AppId); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendGamePlayed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8eb5c0
	struct UTexture2D* GetSteamFriendAvatar(struct FBPUniqueNetId UniqueNetId, enum class EBlueprintAsyncResultSwitch Result, enum class SteamAvatarSize AvatarSize); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetSteamFriendAvatar // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8eb420
	struct FBPUniqueNetId GetLocalSteamIDFromSteam(); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetLocalSteamIDFromSteam // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8eb330
	int32_t GetFriendSteamLevel(struct FBPUniqueNetId UniqueNetId); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.GetFriendSteamLevel // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8eb240
	struct FBPUniqueNetId CreateSteamIDFromString(struct FString SteamID64); // Function AdvancedSteamSessions.AdvancedSteamFriendsLibrary.CreateSteamIDFromString // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x8eb120
};

// Class AdvancedSteamSessions.AdvancedSteamWorkshopLibrary
// Size: 0x28 (Inherited: 0x28)
struct UAdvancedSteamWorkshopLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FBPSteamWorkshopID> GetSubscribedWorkshopItems(int32_t NumberOfItems); // Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetSubscribedWorkshopItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8ebae0
	void GetNumSubscribedWorkshopItems(int32_t NumberOfItems); // Function AdvancedSteamSessions.AdvancedSteamWorkshopLibrary.GetNumSubscribedWorkshopItems // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8eb3a0
};

// Class AdvancedSteamSessions.JoinSessionCallbackProxyAdvanced
// Size: 0x188 (Inherited: 0x30)
struct UJoinSessionCallbackProxyAdvanced : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x138]; // 0x50(0x138)

	struct UJoinSessionCallbackProxyAdvanced* JoinAdvancedSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult, struct FName SessionName); // Function AdvancedSteamSessions.JoinSessionCallbackProxyAdvanced.JoinAdvancedSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x8ebc80
};

// Class AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// Size: 0xa0 (Inherited: 0x30)
struct USteamRequestGroupOfficersCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x50]; // 0x50(0x50)

	struct USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(struct UObject* WorldContextObject, struct FBPUniqueNetId GroupUniqueNetID); // Function AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy.GetSteamGroupOfficerList // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8eb760
};

// Class AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// Size: 0x88 (Inherited: 0x30)
struct USteamWSRequestUGCDetailsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	char pad_50[0x38]; // 0x50(0x38)

	struct USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(struct UObject* WorldContextObject, struct FBPSteamWorkshopID WorkShopID); // Function AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy.GetWorkshopItemDetails // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x8ebbb0
};

