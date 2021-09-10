// WidgetBlueprintGeneratedClass UMG_ProspectRewards.UMG_ProspectRewards_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_ProspectRewards_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Access; // 0x268(0x08)
	struct UOverlay* MainOverlay; // 0x270(0x08)
	struct UTextBlock* NoRewards; // 0x278(0x08)
	struct UHorizontalBox* RewardsHBox; // 0x280(0x08)
	struct UTextBlock* RewardType; // 0x288(0x08)
	struct FAttachment Reward; // 0x290(0x28)
	struct FText RewardName; // 0x2b8(0x18)
	struct FFactionMissionsRowHandle Mission; // 0x2d0(0x18)

	void SetMission(struct FFactionMissionsRowHandle Mission); // Function UMG_ProspectRewards.UMG_ProspectRewards_C.SetMission // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ProspectRewards.UMG_ProspectRewards_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ProspectRewards(int32_t EntryPoint); // Function UMG_ProspectRewards.UMG_ProspectRewards_C.ExecuteUbergraph_UMG_ProspectRewards // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

