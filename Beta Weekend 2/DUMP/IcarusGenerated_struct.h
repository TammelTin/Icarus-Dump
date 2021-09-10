// Enum IcarusGenerated.EMetaInventoryID
enum class EMetaInventoryID : uint8 {
	MetaInventoryID_UndefinedID = 0,
	MetaInventoryID_Main = 1,
	MetaInventoryID_DropLoadout = 2,
	MetaInventoryID_MAX = 3
};

// Enum IcarusGenerated.EProspectLocation
enum class EProspectLocation : uint8 {
	Unknown = 0,
	Hab = 1,
	InProspect = 2,
	EProspectLocation_MAX = 3
};

// Enum IcarusGenerated.EProspectState
enum class EProspectState : uint8 {
	Unclaimed = 0,
	Claimed = 1,
	Active = 2,
	Ended = 3,
	MaxProspectStates = 4,
	EProspectState_MAX = 5
};

// Enum IcarusGenerated.EDropshipType
enum class EDropshipType : uint8 {
	DropshipType_UndefinedID = 0,
	DropshipType_Player = 1,
	DropshipType_Equipment = 2,
	DropshipType_MAX = 3
};

// Enum IcarusGenerated.ENotificationType
enum class ENotificationType : uint8 {
	Server = 0,
	General = 1,
	MissionSummary = 2,
	ItemRecovery = 3,
	MaxNotificationTypes = 4,
	ENotificationType_MAX = 5
};

// Enum IcarusGenerated.EUpdateProspectFailure
enum class EUpdateProspectFailure : uint8 {
	UpdateProspectFailure_UndefinedID = 0,
	UpdateProspectFailure_NotHost = 1,
	UpdateProspectFailure_Expired = 2,
	UpdateProspectFailure_NotNewer = 3,
	UpdateProspectFailure_Other = 4,
	UpdateProspectFailure_MAX = 5
};

// Enum IcarusGenerated.ECharacterAttribute
enum class ECharacterAttribute : uint8 {
	Health = 0,
	Stamina = 1,
	Strength = 2,
	Agility = 3,
	Perception = 4,
	MaxCharacterAttribute = 5,
	ECharacterAttribute_MAX = 6
};

// Enum IcarusGenerated.EDropshipPartType
enum class EDropshipPartType : uint8 {
	DropshipPartType_UndefinedID = 0,
	DropshipType_TOP = 1,
	DropshipType_MID = 2,
	DropshipType_BTM = 3,
	EDropshipPartType_MAX = 4
};

// ScriptStruct IcarusGenerated.ResAddPlayerToProspect
// Size: 0x01 (Inherited: 0x00)
struct FResAddPlayerToProspect {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResBackToHab
// Size: 0x01 (Inherited: 0x00)
struct FResBackToHab {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResPurchaseWorkshopPack
// Size: 0x30 (Inherited: 0x00)
struct FResPurchaseWorkshopPack {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInventoryDelta InventoryDelta; // 0x08(0x18)
	struct TArray<struct FMetaResource> MetaResourceDelta; // 0x20(0x10)
};

// ScriptStruct IcarusGenerated.MetaResource
// Size: 0x18 (Inherited: 0x00)
struct FMetaResource {
	struct FString MetaRow; // 0x00(0x10)
	int32_t Count; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.InventoryDelta
// Size: 0x18 (Inherited: 0x00)
struct FInventoryDelta {
	enum class EMetaInventoryID ID; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMetaItemDelta> Delta; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.MetaItemDelta
// Size: 0x50 (Inherited: 0x00)
struct FMetaItemDelta {
	struct FString ItemUID; // 0x00(0x10)
	struct FMetaItem MetaItem; // 0x10(0x40)
};

// ScriptStruct IcarusGenerated.MetaItem
// Size: 0x40 (Inherited: 0x00)
struct FMetaItem {
	struct FString ItemStaticRow; // 0x00(0x10)
	struct TArray<struct FDynamicProperty> Properties; // 0x10(0x10)
	struct TArray<struct FStat> Stats; // 0x20(0x10)
	struct FString ID; // 0x30(0x10)
};

// ScriptStruct IcarusGenerated.Stat
// Size: 0x08 (Inherited: 0x00)
struct FStat {
	int32_t Type; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.DynamicProperty
// Size: 0x08 (Inherited: 0x00)
struct FDynamicProperty {
	int32_t Type; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.ResCanJoinProspect
// Size: 0x01 (Inherited: 0x00)
struct FResCanJoinProspect {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResCheckProspectExpired
// Size: 0x02 (Inherited: 0x00)
struct FResCheckProspectExpired {
	bool Success; // 0x00(0x01)
	bool Expired; // 0x01(0x01)
};

// ScriptStruct IcarusGenerated.ResClaimNotificationAttachments
// Size: 0x48 (Inherited: 0x00)
struct FResClaimNotificationAttachments {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInventoryDelta InventoryDelta; // 0x08(0x18)
	struct TArray<struct FMetaResource> MetaResourceDelta; // 0x20(0x10)
	int32_t Credits; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct FString NotificationUID; // 0x38(0x10)
};

// ScriptStruct IcarusGenerated.ResClaimProspect
// Size: 0x88 (Inherited: 0x00)
struct FResClaimProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FProspectInfo Prospect; // 0x08(0x80)
};

// ScriptStruct IcarusGenerated.ProspectInfo
// Size: 0x80 (Inherited: 0x00)
struct FProspectInfo {
	struct FString ProspectUID; // 0x00(0x10)
	struct FString ClaimedAccountID; // 0x10(0x10)
	int32_t ClaimedAccountCharacter; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FString ProspectDTKey; // 0x28(0x10)
	struct FString FactionMissionDTKey; // 0x38(0x10)
	struct FString LobbyName; // 0x48(0x10)
	int64_t ExpireTime; // 0x58(0x08)
	enum class EProspectState ProspectState; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
	struct TArray<struct FAssociatedMemberInfo> AssociatedMembers; // 0x68(0x10)
	int32_t Cost; // 0x78(0x04)
	int32_t Reward; // 0x7c(0x04)
};

// ScriptStruct IcarusGenerated.AssociatedMemberInfo
// Size: 0x38 (Inherited: 0x00)
struct FAssociatedMemberInfo {
	struct FString AccountName; // 0x00(0x10)
	struct FString CharacterName; // 0x10(0x10)
	struct FString AccountUID; // 0x20(0x10)
	int32_t Experience; // 0x30(0x04)
	enum class EProspectLocation Status; // 0x34(0x01)
	bool Settled; // 0x35(0x01)
	char pad_36[0x2]; // 0x36(0x02)
};

// ScriptStruct IcarusGenerated.ResCreateCharacter
// Size: 0x138 (Inherited: 0x00)
struct FResCreateCharacter {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProfileCharacter CreatedCharacter; // 0x08(0x130)
};

// ScriptStruct IcarusGenerated.OnlineProfileCharacter
// Size: 0x130 (Inherited: 0x00)
struct FOnlineProfileCharacter {
	struct FString CharacterName; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	int32_t XP; // 0x14(0x04)
	int32_t XP_Debt; // 0x18(0x04)
	bool IsDead; // 0x1c(0x01)
	bool IsAbandoned; // 0x1d(0x01)
	char pad_1E[0x2]; // 0x1e(0x02)
	struct FString LastProspectId; // 0x20(0x10)
	enum class EProspectLocation Location; // 0x30(0x01)
	char pad_31[0x7]; // 0x31(0x07)
	struct TArray<int32_t> UnlockedFlags; // 0x38(0x10)
	struct TArray<struct FMetaResource> MetaResources; // 0x48(0x10)
	struct FCharacterCosmetics Cosmetic; // 0x58(0xc8)
	struct TArray<struct FBackendTalent> Talents; // 0x120(0x10)
};

// ScriptStruct IcarusGenerated.BackendTalent
// Size: 0x18 (Inherited: 0x00)
struct FBackendTalent {
	struct FString RowName; // 0x00(0x10)
	int32_t Rank; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.CharacterCosmetics
// Size: 0xc8 (Inherited: 0x00)
struct FCharacterCosmetics {
	struct FString Customization_Head; // 0x00(0x10)
	struct FString Customization_Hair; // 0x10(0x10)
	struct FString Customization_HairColor; // 0x20(0x10)
	struct FString Customization_Body; // 0x30(0x10)
	struct FString Customization_BodyColor; // 0x40(0x10)
	struct FString Customization_SkinTone; // 0x50(0x10)
	struct FString Customization_HeadTattoo; // 0x60(0x10)
	struct FString Customization_HeadScar; // 0x70(0x10)
	struct FString Customization_HeadFacialHair; // 0x80(0x10)
	struct FString Customization_CapLogo; // 0x90(0x10)
	bool IsMale; // 0xa0(0x01)
	char pad_A1[0x7]; // 0xa1(0x07)
	struct FString Customization_Voice; // 0xa8(0x10)
	struct FString Customization_EyeColor; // 0xb8(0x10)
};

// ScriptStruct IcarusGenerated.ResCreateDropship
// Size: 0x100 (Inherited: 0x00)
struct FResCreateDropship {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDropshipDelta DropshipDelta; // 0x08(0xe0)
	struct FInventoryDelta InventoryDelta; // 0xe8(0x18)
};

// ScriptStruct IcarusGenerated.DropshipDelta
// Size: 0xe0 (Inherited: 0x00)
struct FDropshipDelta {
	struct FDropship Dropship; // 0x00(0xe0)
};

// ScriptStruct IcarusGenerated.Dropship
// Size: 0xe0 (Inherited: 0x00)
struct FDropship {
	struct FString Name; // 0x00(0x10)
	enum class EDropshipType Type; // 0x10(0x01)
	char pad_11[0x3]; // 0x11(0x03)
	int32_t DropshipID; // 0x14(0x04)
	bool InUse; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FMetaItem TOP_Part; // 0x20(0x40)
	struct FMetaItem MID_Part; // 0x60(0x40)
	struct FMetaItem BTM_Part; // 0xa0(0x40)
};

// ScriptStruct IcarusGenerated.ResCreateProspect
// Size: 0x158 (Inherited: 0x00)
struct FResCreateProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProspectInfo Prospect; // 0x08(0x150)
};

// ScriptStruct IcarusGenerated.OnlineProspectInfo
// Size: 0x150 (Inherited: 0x00)
struct FOnlineProspectInfo {
	struct FString ProspectID; // 0x00(0x10)
	struct FProspectInfo ProspectInfo; // 0x10(0x80)
	struct FPlayerID Creator; // 0x90(0x30)
	int32_t EndTime; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FString CreatedTime; // 0xc8(0x10)
	struct TArray<struct FPlayerID> PlayerIDs; // 0xd8(0x10)
	struct FString MapName; // 0xe8(0x10)
	bool IsLoaded; // 0xf8(0x01)
	char pad_F9[0x7]; // 0xf9(0x07)
	struct FConnectionString ConnectionString; // 0x100(0x38)
	int32_t ConnectedPlayersCount; // 0x138(0x04)
	char pad_13C[0x4]; // 0x13c(0x04)
	struct TArray<struct FCharacterSetup> CharacterLoadouts; // 0x140(0x10)
};

// ScriptStruct IcarusGenerated.CharacterSetup
// Size: 0x18 (Inherited: 0x00)
struct FCharacterSetup {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	int32_t DropLoadout; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ConnectionString
// Size: 0x38 (Inherited: 0x00)
struct FConnectionString {
	struct FString ExternalIP; // 0x00(0x10)
	struct FString InternalIP; // 0x10(0x10)
	struct FString P2PAddress; // 0x20(0x10)
	int32_t Port; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
};

// ScriptStruct IcarusGenerated.PlayerID
// Size: 0x30 (Inherited: 0x00)
struct FPlayerID {
	struct FString PlayerName; // 0x00(0x10)
	float Score; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString UserID; // 0x18(0x10)
	int32_t ChrSlot; // 0x28(0x04)
	bool bHost; // 0x2c(0x01)
	char pad_2D[0x3]; // 0x2d(0x03)
};

// ScriptStruct IcarusGenerated.ResDeleteCharacter
// Size: 0x01 (Inherited: 0x00)
struct FResDeleteCharacter {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResDeleteDropship
// Size: 0x20 (Inherited: 0x00)
struct FResDeleteDropship {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DropshipRemovedID; // 0x04(0x04)
	struct FInventoryDelta InventoryDelta; // 0x08(0x18)
};

// ScriptStruct IcarusGenerated.ResDeleteNotification
// Size: 0x18 (Inherited: 0x00)
struct FResDeleteNotification {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString NotificationUID; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetAllProspects
// Size: 0x18 (Inherited: 0x00)
struct FResGetAllProspects {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FOnlineCharacterProspectInfo> CharacterProspectInfo; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.OnlineCharacterProspectInfo
// Size: 0x280 (Inherited: 0x00)
struct FOnlineCharacterProspectInfo {
	struct FOnlineProspectInfo OnlineProspectInfo; // 0x00(0x150)
	struct FOnlineProfileCharacter OnlineProfileCharacter; // 0x150(0x130)
};

// ScriptStruct IcarusGenerated.ResGetAvailableProspects
// Size: 0x18 (Inherited: 0x00)
struct FResGetAvailableProspects {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FProspectInfo> Prospects; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetChallenges
// Size: 0x18 (Inherited: 0x00)
struct FResGetChallenges {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FActiveChallenge> Challenges; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ActiveChallenge
// Size: 0x28 (Inherited: 0x00)
struct FActiveChallenge {
	struct FString ChallengeUID; // 0x00(0x10)
	struct FString Challenge; // 0x10(0x10)
	int32_t Progress; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct IcarusGenerated.ResGetCharacterLoadout
// Size: 0x140 (Inherited: 0x00)
struct FResGetCharacterLoadout {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FCharacterLoadout Loadout; // 0x08(0x138)
};

// ScriptStruct IcarusGenerated.CharacterLoadout
// Size: 0x138 (Inherited: 0x00)
struct FCharacterLoadout {
	struct FMetaItem EnviroSuit; // 0x00(0x40)
	struct FDropship Dropship; // 0x40(0xe0)
	struct TArray<struct FMetaItem> MetaItems; // 0x120(0x10)
	bool Valid; // 0x130(0x01)
	char pad_131[0x7]; // 0x131(0x07)
};

// ScriptStruct IcarusGenerated.ResGetCharacterProfile
// Size: 0x138 (Inherited: 0x00)
struct FResGetCharacterProfile {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProfileCharacter Character; // 0x08(0x130)
};

// ScriptStruct IcarusGenerated.ResGetCharacters
// Size: 0x18 (Inherited: 0x00)
struct FResGetCharacters {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FOnlineProfileCharacter> Characters; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetCredits
// Size: 0x08 (Inherited: 0x00)
struct FResGetCredits {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Amount; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.ResGetDropships
// Size: 0x18 (Inherited: 0x00)
struct FResGetDropships {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FDropship> Dropships; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetLastProspect
// Size: 0x90 (Inherited: 0x00)
struct FResGetLastProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FProspectInfo ProspectInformation; // 0x08(0x80)
	int32_t FactionMissionStatus; // 0x88(0x04)
	char pad_8C[0x4]; // 0x8c(0x04)
};

// ScriptStruct IcarusGenerated.ResLoadoutInventory
// Size: 0x18 (Inherited: 0x00)
struct FResLoadoutInventory {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMetaItem> Inventory; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetMetaInventory
// Size: 0x20 (Inherited: 0x00)
struct FResGetMetaInventory {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInventoryDelta InventoryDelta; // 0x08(0x18)
};

// ScriptStruct IcarusGenerated.ResGetMetaResources
// Size: 0x18 (Inherited: 0x00)
struct FResGetMetaResources {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FMetaResource> MetaResources; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResGetNotifications
// Size: 0x18 (Inherited: 0x00)
struct FResGetNotifications {
	bool Success; // 0x00(0x01)
	bool CompleteList; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct FNotification> NotificationDelta; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.Notification
// Size: 0x78 (Inherited: 0x00)
struct FNotification {
	struct FString NotificationUID; // 0x00(0x10)
	enum class ENotificationType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FString Title; // 0x18(0x10)
	struct FString Message; // 0x28(0x10)
	struct FString ProspectUID; // 0x38(0x10)
	struct FAttachment Attachments; // 0x48(0x28)
	bool Read; // 0x70(0x01)
	bool SentToPlayer; // 0x71(0x01)
	char pad_72[0x6]; // 0x72(0x06)
};

// ScriptStruct IcarusGenerated.Attachment
// Size: 0x28 (Inherited: 0x00)
struct FAttachment {
	struct TArray<struct FMetaItem> Items; // 0x00(0x10)
	struct TArray<struct FMetaResource> Exotics; // 0x10(0x10)
	int32_t Credits; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct IcarusGenerated.ResPreparedLoadout
// Size: 0x50 (Inherited: 0x00)
struct FResPreparedLoadout {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DropshipID; // 0x04(0x04)
	struct FMetaItem EnviroSuit; // 0x08(0x40)
	bool Locked; // 0x48(0x01)
	char pad_49[0x7]; // 0x49(0x07)
};

// ScriptStruct IcarusGenerated.ResGetProspect
// Size: 0x158 (Inherited: 0x00)
struct FResGetProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProspectInfo Prospect; // 0x08(0x150)
};

// ScriptStruct IcarusGenerated.ResGetProspectReport
// Size: 0xb0 (Inherited: 0x00)
struct FResGetProspectReport {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FProspectInfo ProspectInfo; // 0x08(0x80)
	struct FAttachment CurrentRewards; // 0x88(0x28)
};

// ScriptStruct IcarusGenerated.ResGetProspectSummary
// Size: 0xf8 (Inherited: 0x00)
struct FResGetProspectSummary {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FProspectCompleteInformation ProspectInformation; // 0x08(0xf0)
};

// ScriptStruct IcarusGenerated.ProspectCompleteInformation
// Size: 0xf0 (Inherited: 0x00)
struct FProspectCompleteInformation {
	struct FProspectInfo ProspectInfo; // 0x00(0x80)
	bool FactionMissionSuccessful; // 0x80(0x01)
	char pad_81[0x7]; // 0x81(0x07)
	struct FAttachment ProspectRewards; // 0x88(0x28)
	int64_t Duration; // 0xb0(0x08)
	struct FAttachment FactionMissionRewards; // 0xb8(0x28)
	struct TArray<struct FTrackedStat> TrackedStats; // 0xe0(0x10)
};

// ScriptStruct IcarusGenerated.TrackedStat
// Size: 0x18 (Inherited: 0x00)
struct FTrackedStat {
	struct FString StatDTKey; // 0x00(0x10)
	int32_t Value; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ResGetUserProfile
// Size: 0x28 (Inherited: 0x00)
struct FResGetUserProfile {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProfileUser IcarusProfile; // 0x08(0x20)
};

// ScriptStruct IcarusGenerated.OnlineProfileUser
// Size: 0x20 (Inherited: 0x00)
struct FOnlineProfileUser {
	struct FString UserID; // 0x00(0x10)
	struct TArray<struct FMetaResource> MetaResources; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ResGetWorkshopPacks
// Size: 0x18 (Inherited: 0x00)
struct FResGetWorkshopPacks {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FWorkshopPack> WorkshopPacks; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.WorkshopPack
// Size: 0x50 (Inherited: 0x00)
struct FWorkshopPack {
	struct FString Name; // 0x00(0x10)
	struct TArray<struct FString> Categories; // 0x10(0x10)
	struct TArray<struct FString> Tags; // 0x20(0x10)
	struct TArray<struct FString> WorkshopItemsRow; // 0x30(0x10)
	struct TArray<struct FMetaResource> MetaCost; // 0x40(0x10)
};

// ScriptStruct IcarusGenerated.ResHostCandidate
// Size: 0x38 (Inherited: 0x00)
struct FResHostCandidate {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
	struct FString ProspectID; // 0x18(0x10)
	struct FString UserID; // 0x28(0x10)
};

// ScriptStruct IcarusGenerated.ResJoinProspect
// Size: 0x158 (Inherited: 0x00)
struct FResJoinProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProspectInfo Prospect; // 0x08(0x150)
};

// ScriptStruct IcarusGenerated.ResLeaveProspect
// Size: 0x40 (Inherited: 0x00)
struct FResLeaveProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
	struct FString ProspectID; // 0x18(0x10)
	struct FString UserID; // 0x28(0x10)
	int32_t ChrSlot; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct IcarusGenerated.ResLobbyMessage
// Size: 0x18 (Inherited: 0x00)
struct FResLobbyMessage {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResModifyDropship
// Size: 0x100 (Inherited: 0x00)
struct FResModifyDropship {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FDropshipDelta DropshipDelta; // 0x08(0xe0)
	struct FInventoryDelta InventoryDelta; // 0xe8(0x18)
};

// ScriptStruct IcarusGenerated.ResMoveMetaInventoryItem
// Size: 0x18 (Inherited: 0x00)
struct FResMoveMetaInventoryItem {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FInventoryDelta> Delta; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResPackageLoadout
// Size: 0x108 (Inherited: 0x00)
struct FResPackageLoadout {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t LoadoutIndex; // 0x04(0x04)
	struct FInventoryDelta InventoryDelta; // 0x08(0x18)
	struct FDropshipDelta DropshipDelta; // 0x20(0xe0)
	bool Locked; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
};

// ScriptStruct IcarusGenerated.ResReadNotification
// Size: 0x18 (Inherited: 0x00)
struct FResReadNotification {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString NotificationUID; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResRemoveEnvirosuit
// Size: 0x60 (Inherited: 0x00)
struct FResRemoveEnvirosuit {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMetaItem EnviroSuit; // 0x08(0x40)
	struct FInventoryDelta InventoryDelta; // 0x48(0x18)
};

// ScriptStruct IcarusGenerated.ResRemoveMetaInventoryItem
// Size: 0x20 (Inherited: 0x00)
struct FResRemoveMetaInventoryItem {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FInventoryDelta Delta; // 0x08(0x18)
};

// ScriptStruct IcarusGenerated.ResRemoveSelectedDropship
// Size: 0x08 (Inherited: 0x00)
struct FResRemoveSelectedDropship {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DropshipID; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.ResResetCharacter
// Size: 0x138 (Inherited: 0x00)
struct FResResetCharacter {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProfileCharacter Character; // 0x08(0x130)
};

// ScriptStruct IcarusGenerated.ResResetCharacterProspectState
// Size: 0x01 (Inherited: 0x00)
struct FResResetCharacterProspectState {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResResumeProspect
// Size: 0x198 (Inherited: 0x00)
struct FResResumeProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProspectInfo Prospect; // 0x08(0x150)
	struct FProspectBlob ProspectBlob; // 0x158(0x40)
};

// ScriptStruct IcarusGenerated.ProspectBlob
// Size: 0x40 (Inherited: 0x00)
struct FProspectBlob {
	struct FString Key; // 0x00(0x10)
	struct FString Hash; // 0x10(0x10)
	int32_t TotalLength; // 0x20(0x04)
	int32_t DataLength; // 0x24(0x04)
	int32_t UncompressedLength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct FString BinaryBlob; // 0x30(0x10)
};

// ScriptStruct IcarusGenerated.ResSelectDropship
// Size: 0x08 (Inherited: 0x00)
struct FResSelectDropship {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t DropshipID; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.ResSelectEnvirosuit
// Size: 0x60 (Inherited: 0x00)
struct FResSelectEnvirosuit {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FMetaItem EnviroSuit; // 0x08(0x40)
	struct FInventoryDelta InventoryDelta; // 0x48(0x18)
};

// ScriptStruct IcarusGenerated.ResSetResourceSplit
// Size: 0x01 (Inherited: 0x00)
struct FResSetResourceSplit {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResSettleProspect
// Size: 0x88 (Inherited: 0x00)
struct FResSettleProspect {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FProspectInfo ProspectInfo; // 0x08(0x80)
};

// ScriptStruct IcarusGenerated.ResSyncTalents
// Size: 0x18 (Inherited: 0x00)
struct FResSyncTalents {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FBackendTalent> Talents; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResUnlockCharacterFlags
// Size: 0x01 (Inherited: 0x00)
struct FResUnlockCharacterFlags {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResUnpackageLoadout
// Size: 0x02 (Inherited: 0x00)
struct FResUnpackageLoadout {
	bool Success; // 0x00(0x01)
	bool Locked; // 0x01(0x01)
};

// ScriptStruct IcarusGenerated.ResUpdateChallengeProgress
// Size: 0x01 (Inherited: 0x00)
struct FResUpdateChallengeProgress {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResUpdateCharacterLoadout
// Size: 0x18 (Inherited: 0x00)
struct FResUpdateCharacterLoadout {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Reason; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResUpdateCharacterProgress
// Size: 0x01 (Inherited: 0x00)
struct FResUpdateCharacterProgress {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResUpdateCosmetics
// Size: 0x138 (Inherited: 0x00)
struct FResUpdateCosmetics {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FOnlineProfileCharacter Character; // 0x08(0x130)
};

// ScriptStruct IcarusGenerated.ResUpdateFactionMissionProgress
// Size: 0x01 (Inherited: 0x00)
struct FResUpdateFactionMissionProgress {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResUpdateProspect
// Size: 0x02 (Inherited: 0x00)
struct FResUpdateProspect {
	bool Success; // 0x00(0x01)
	enum class EUpdateProspectFailure FailureReason; // 0x01(0x01)
};

// ScriptStruct IcarusGenerated.ResUpdateTrackedStats
// Size: 0x01 (Inherited: 0x00)
struct FResUpdateTrackedStats {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ActiveFactionMission
// Size: 0x18 (Inherited: 0x00)
struct FActiveFactionMission {
	struct FString FactionMission; // 0x00(0x10)
	int32_t Progress; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.CharacterAttributeProgress
// Size: 0x08 (Inherited: 0x00)
struct FCharacterAttributeProgress {
	enum class ECharacterAttribute Attribute; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t Level; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.CharacterSplit
// Size: 0x18 (Inherited: 0x00)
struct FCharacterSplit {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	int32_t Percentage; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.DropshipModification
// Size: 0x28 (Inherited: 0x00)
struct FDropshipModification {
	struct FString Name; // 0x00(0x10)
	enum class EDropshipType Type; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FDropshipPartModification> Parts; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.DropshipPartModification
// Size: 0x18 (Inherited: 0x00)
struct FDropshipPartModification {
	enum class EDropshipPartType Type; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString ItemId; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ItemStaticRow
// Size: 0x08 (Inherited: 0x00)
struct FItemStaticRow {
	int32_t Type; // 0x00(0x04)
	int32_t Value; // 0x04(0x04)
};

// ScriptStruct IcarusGenerated.MaintenanceStatus
// Size: 0x20 (Inherited: 0x00)
struct FMaintenanceStatus {
	bool IsMaintenance; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t StartTime; // 0x04(0x04)
	int32_t EndTime; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FString Message; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqAddMetaInventoryItem
// Size: 0x58 (Inherited: 0x00)
struct FReqAddMetaInventoryItem {
	struct FString UserID; // 0x00(0x10)
	enum class EMetaInventoryID SrcMetaInventoryID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct FMetaItem Item; // 0x18(0x40)
};

// ScriptStruct IcarusGenerated.ReqAddMetaResource
// Size: 0x30 (Inherited: 0x00)
struct FReqAddMetaResource {
	struct FString UserID; // 0x00(0x10)
	struct FMetaResource MetaResource; // 0x10(0x18)
	int32_t Count; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct IcarusGenerated.ReqAddPlayerToProspect
// Size: 0x28 (Inherited: 0x00)
struct FReqAddPlayerToProspect {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqBackToHab
// Size: 0x48 (Inherited: 0x00)
struct FReqBackToHab {
	struct FString ProspectID; // 0x00(0x10)
	struct FString UserID; // 0x10(0x10)
	int32_t ChrSlot; // 0x20(0x04)
	bool LeftWithShip; // 0x24(0x01)
	char pad_25[0x3]; // 0x25(0x03)
	struct TArray<struct FMetaItem> MetaItems; // 0x28(0x10)
	struct TArray<struct FMetaResource> MetaResources; // 0x38(0x10)
};

// ScriptStruct IcarusGenerated.ReqCanJoinProspect
// Size: 0x28 (Inherited: 0x00)
struct FReqCanJoinProspect {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqCheckProspectExpired
// Size: 0x10 (Inherited: 0x00)
struct FReqCheckProspectExpired {
	struct FString ProspectUID; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqClaimNotificationAttachments
// Size: 0x20 (Inherited: 0x00)
struct FReqClaimNotificationAttachments {
	struct FString UserID; // 0x00(0x10)
	struct FString NotificationUID; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqClaimProspect
// Size: 0xa8 (Inherited: 0x00)
struct FReqClaimProspect {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString LobbyName; // 0x18(0x10)
	struct FProspectInfo Prospect; // 0x28(0x80)
};

// ScriptStruct IcarusGenerated.ReqCreateCharacter
// Size: 0xd8 (Inherited: 0x00)
struct FReqCreateCharacter {
	struct FString CharacterName; // 0x00(0x10)
	struct FCharacterCosmetics CharacterCosmeticsData; // 0x10(0xc8)
};

// ScriptStruct IcarusGenerated.ReqCreateDropship
// Size: 0x38 (Inherited: 0x00)
struct FReqCreateDropship {
	struct FString UserID; // 0x00(0x10)
	struct FDropshipModification Dropship; // 0x10(0x28)
};

// ScriptStruct IcarusGenerated.ReqCreateProspect
// Size: 0x80 (Inherited: 0x00)
struct FReqCreateProspect {
	struct FString ProspectUID; // 0x00(0x10)
	struct FString MapName; // 0x10(0x10)
	int32_t EndTime; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
	struct FConnectionString ConnectionString; // 0x28(0x38)
	struct TArray<struct FPlayerID> PlayerIDs; // 0x60(0x10)
	struct TArray<struct FCharacterSetup> PlayerLoadouts; // 0x70(0x10)
};

// ScriptStruct IcarusGenerated.ReqDeleteCharacter
// Size: 0x04 (Inherited: 0x00)
struct FReqDeleteCharacter {
	int32_t ChrSlot; // 0x00(0x04)
};

// ScriptStruct IcarusGenerated.ReqDeleteDropship
// Size: 0x18 (Inherited: 0x00)
struct FReqDeleteDropship {
	struct FString UserID; // 0x00(0x10)
	int32_t DropshipID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqDeleteNotification
// Size: 0x20 (Inherited: 0x00)
struct FReqDeleteNotification {
	struct FString UserID; // 0x00(0x10)
	struct FString NotificationUID; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetAllProspects
// Size: 0x10 (Inherited: 0x00)
struct FReqGetAllProspects {
	struct TArray<int32_t> ChrSlots; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetAvailableProspects
// Size: 0x18 (Inherited: 0x00)
struct FReqGetAvailableProspects {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetChallenges
// Size: 0x10 (Inherited: 0x00)
struct FReqGetChallenges {
	struct FString UserID; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetCharacterLoadout
// Size: 0x18 (Inherited: 0x00)
struct FReqGetCharacterLoadout {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetCharacterProfile
// Size: 0x18 (Inherited: 0x00)
struct FReqGetCharacterProfile {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetCharacters
// Size: 0x01 (Inherited: 0x00)
struct FReqGetCharacters {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ReqGetCredits
// Size: 0x10 (Inherited: 0x00)
struct FReqGetCredits {
	struct FString UserID; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetDropships
// Size: 0x10 (Inherited: 0x00)
struct FReqGetDropships {
	struct FString UserID; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetFactionMissionProgress
// Size: 0x18 (Inherited: 0x00)
struct FReqGetFactionMissionProgress {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetLastProspect
// Size: 0x18 (Inherited: 0x00)
struct FReqGetLastProspect {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetMetaInventory
// Size: 0x18 (Inherited: 0x00)
struct FReqGetMetaInventory {
	struct FString UserID; // 0x00(0x10)
	enum class EMetaInventoryID MetaInventoryID; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct IcarusGenerated.ReqGetMetaResources
// Size: 0x10 (Inherited: 0x00)
struct FReqGetMetaResources {
	struct FString UserID; // 0x00(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetNotifications
// Size: 0x18 (Inherited: 0x00)
struct FReqGetNotifications {
	struct FString UserID; // 0x00(0x10)
	bool CompleteList; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
};

// ScriptStruct IcarusGenerated.ReqGetProspect
// Size: 0x28 (Inherited: 0x00)
struct FReqGetProspect {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetProspectReport
// Size: 0x28 (Inherited: 0x00)
struct FReqGetProspectReport {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetProspectSummary
// Size: 0x28 (Inherited: 0x00)
struct FReqGetProspectSummary {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqGetTrackedStats
// Size: 0x18 (Inherited: 0x00)
struct FReqGetTrackedStats {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqGetUserProfile
// Size: 0x01 (Inherited: 0x00)
struct FReqGetUserProfile {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ReqGetWorkshopPacks
// Size: 0x01 (Inherited: 0x00)
struct FReqGetWorkshopPacks {
	char pad_0[0x1]; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ReqHostCandidate
// Size: 0x20 (Inherited: 0x00)
struct FReqHostCandidate {
	struct FString ProspectID; // 0x00(0x10)
	struct FString CandidateUserID; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqJoinProspect
// Size: 0x18 (Inherited: 0x00)
struct FReqJoinProspect {
	struct FString ProspectID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqLeaveProspect
// Size: 0x18 (Inherited: 0x00)
struct FReqLeaveProspect {
	struct FString ProspectID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqLoadoutInventory
// Size: 0x18 (Inherited: 0x00)
struct FReqLoadoutInventory {
	struct FString UserID; // 0x00(0x10)
	int32_t CharacterSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqLobbyMessage
// Size: 0x40 (Inherited: 0x00)
struct FReqLobbyMessage {
	struct FString UserID; // 0x00(0x10)
	struct FString AuthType; // 0x10(0x10)
	struct FString AuthToken; // 0x20(0x10)
	struct FString AppId; // 0x30(0x10)
};

// ScriptStruct IcarusGenerated.ReqModifyDropship
// Size: 0x40 (Inherited: 0x00)
struct FReqModifyDropship {
	struct FString UserID; // 0x00(0x10)
	int32_t DropshipID; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FDropshipModification Dropship; // 0x18(0x28)
};

// ScriptStruct IcarusGenerated.ReqMoveMetaInventoryItem
// Size: 0x40 (Inherited: 0x00)
struct FReqMoveMetaInventoryItem {
	struct FString UserID; // 0x00(0x10)
	int32_t CharacterSlot; // 0x10(0x04)
	enum class EMetaInventoryID SrcMetaInventoryID; // 0x14(0x01)
	enum class EMetaInventoryID DstMetaInventoryID; // 0x15(0x01)
	char pad_16[0x2]; // 0x16(0x02)
	struct FString ScrItemId; // 0x18(0x10)
	struct FString DstItemId; // 0x28(0x10)
	int32_t Count; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
};

// ScriptStruct IcarusGenerated.ReqPackageLoadout
// Size: 0x18 (Inherited: 0x00)
struct FReqPackageLoadout {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqPreparedLoadout
// Size: 0x18 (Inherited: 0x00)
struct FReqPreparedLoadout {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqPurchaseWorkshopPack
// Size: 0x20 (Inherited: 0x00)
struct FReqPurchaseWorkshopPack {
	struct FString UserID; // 0x00(0x10)
	struct FString WorkshopPackName; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqReadNotification
// Size: 0x20 (Inherited: 0x00)
struct FReqReadNotification {
	struct FString UserID; // 0x00(0x10)
	struct FString NotificationUID; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqRemoveEnvirosuit
// Size: 0x18 (Inherited: 0x00)
struct FReqRemoveEnvirosuit {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqRemoveMetaInventoryItem
// Size: 0x20 (Inherited: 0x00)
struct FReqRemoveMetaInventoryItem {
	struct FString UserID; // 0x00(0x10)
	struct FString MetaItemId; // 0x10(0x10)
};

// ScriptStruct IcarusGenerated.ReqRemoveSelectedDropship
// Size: 0x18 (Inherited: 0x00)
struct FReqRemoveSelectedDropship {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqResetCharacter
// Size: 0x18 (Inherited: 0x00)
struct FReqResetCharacter {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqResetCharacterProspectState
// Size: 0x18 (Inherited: 0x00)
struct FReqResetCharacterProspectState {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqResumeProspect
// Size: 0x58 (Inherited: 0x00)
struct FReqResumeProspect {
	struct FString ProspectID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FConnectionString ConnectionString; // 0x18(0x38)
	bool AttemptHostMigration; // 0x50(0x01)
	char pad_51[0x7]; // 0x51(0x07)
};

// ScriptStruct IcarusGenerated.ReqSelectDropship
// Size: 0x18 (Inherited: 0x00)
struct FReqSelectDropship {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	int32_t DropshipID; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqSelectEnvirosuit
// Size: 0x28 (Inherited: 0x00)
struct FReqSelectEnvirosuit {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ItemId; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqSetResourceSplit
// Size: 0x38 (Inherited: 0x00)
struct FReqSetResourceSplit {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
	struct TArray<struct FCharacterSplit> Split; // 0x28(0x10)
};

// ScriptStruct IcarusGenerated.ReqSettleProspect
// Size: 0x28 (Inherited: 0x00)
struct FReqSettleProspect {
	struct FString UserID; // 0x00(0x10)
	struct FString ProspectUID; // 0x10(0x10)
	bool Settle; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct IcarusGenerated.ReqSyncTalents
// Size: 0x28 (Inherited: 0x00)
struct FReqSyncTalents {
	struct FString UserID; // 0x00(0x10)
	int32_t CharacterSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct TArray<struct FBackendTalent> Talents; // 0x18(0x10)
};

// ScriptStruct IcarusGenerated.ReqUnlockCharacterFlags
// Size: 0x18 (Inherited: 0x00)
struct FReqUnlockCharacterFlags {
	int32_t ChrSlot; // 0x00(0x04)
	char pad_4[0x4]; // 0x04(0x04)
	struct TArray<int32_t> UnlockedFlags; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ReqUnpackageLoadout
// Size: 0x18 (Inherited: 0x00)
struct FReqUnpackageLoadout {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct IcarusGenerated.ReqUpdateChallengeProgress
// Size: 0x28 (Inherited: 0x00)
struct FReqUpdateChallengeProgress {
	struct FString UserID; // 0x00(0x10)
	struct FString ChallengeUID; // 0x10(0x10)
	int32_t Progress; // 0x20(0x04)
	char pad_24[0x4]; // 0x24(0x04)
};

// ScriptStruct IcarusGenerated.ReqUpdateCharacterLoadout
// Size: 0x150 (Inherited: 0x00)
struct FReqUpdateCharacterLoadout {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FCharacterLoadout Loadout; // 0x18(0x138)
};

// ScriptStruct IcarusGenerated.ReqUpdateCharacterProgress
// Size: 0x48 (Inherited: 0x00)
struct FReqUpdateCharacterProgress {
	struct FString ProspectID; // 0x00(0x10)
	struct FString UserID; // 0x10(0x10)
	int32_t ChrSlot; // 0x20(0x04)
	int32_t XP; // 0x24(0x04)
	int32_t XP_Debt; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
	struct TArray<int32_t> UnlockedFlags; // 0x30(0x10)
	bool IsDead; // 0x40(0x01)
	char pad_41[0x7]; // 0x41(0x07)
};

// ScriptStruct IcarusGenerated.ReqUpdateCosmetics
// Size: 0xe0 (Inherited: 0x00)
struct FReqUpdateCosmetics {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FCharacterCosmetics CharacterCosmeticsData; // 0x18(0xc8)
};

// ScriptStruct IcarusGenerated.ReqUpdateFactionMissionProgress
// Size: 0x40 (Inherited: 0x00)
struct FReqUpdateFactionMissionProgress {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
	struct FActiveFactionMission MissionProgress; // 0x28(0x18)
};

// ScriptStruct IcarusGenerated.ReqUpdateProspect
// Size: 0x68 (Inherited: 0x00)
struct FReqUpdateProspect {
	struct FString ProspectID; // 0x00(0x10)
	int64_t UpdateTime; // 0x10(0x08)
	bool HasProspectBlob; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct FProspectBlob ProspectBlob; // 0x20(0x40)
	bool IsLeavingGame; // 0x60(0x01)
	char pad_61[0x7]; // 0x61(0x07)
};

// ScriptStruct IcarusGenerated.ReqUpdateTrackedStats
// Size: 0x38 (Inherited: 0x00)
struct FReqUpdateTrackedStats {
	struct FString UserID; // 0x00(0x10)
	int32_t ChrSlot; // 0x10(0x04)
	char pad_14[0x4]; // 0x14(0x04)
	struct FString ProspectUID; // 0x18(0x10)
	struct TArray<struct FTrackedStat> TrackedStats; // 0x28(0x10)
};

// ScriptStruct IcarusGenerated.ResAddMetaInventoryItem
// Size: 0x01 (Inherited: 0x00)
struct FResAddMetaInventoryItem {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResAddMetaResource
// Size: 0x01 (Inherited: 0x00)
struct FResAddMetaResource {
	bool Success; // 0x00(0x01)
};

// ScriptStruct IcarusGenerated.ResGetFactionMissionProgress
// Size: 0x20 (Inherited: 0x00)
struct FResGetFactionMissionProgress {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FActiveFactionMission MissionProgress; // 0x08(0x18)
};

// ScriptStruct IcarusGenerated.ResGetTrackedStats
// Size: 0x18 (Inherited: 0x00)
struct FResGetTrackedStats {
	bool Success; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct TArray<struct FTrackedStat> TrackedStats; // 0x08(0x10)
};

// ScriptStruct IcarusGenerated.ResLobbyStats
// Size: 0x30 (Inherited: 0x00)
struct FResLobbyStats {
	bool Success; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	int32_t QueueSize; // 0x04(0x04)
	float MessagesReadyRate; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
	struct FMaintenanceStatus Maintenance; // 0x10(0x20)
};

// ScriptStruct IcarusGenerated.Vector3
// Size: 0x0c (Inherited: 0x00)
struct FVector3 {
	int32_t X; // 0x00(0x04)
	int32_t Y; // 0x04(0x04)
	int32_t Z; // 0x08(0x04)
};

