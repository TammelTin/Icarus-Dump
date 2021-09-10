// WidgetBlueprintGeneratedClass UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C
// Size: 0x2a8 (Inherited: 0x280)
struct UUMG_TalentTooltip_Player_C : UTalentTooltipWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UTextBlock* Description; // 0x288(0x08)
	struct UVerticalBox* DescriptionBox; // 0x290(0x08)
	struct UImage* Image_200; // 0x298(0x08)
	struct UTextBlock* TalentName; // 0x2a0(0x08)

	void OnTalentSet(); // Function UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C.OnTalentSet // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Set State(struct FTalentModelData Data); // Function UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C.Set State // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TalentTooltip_Player(int32_t EntryPoint); // Function UMG_TalentTooltip_Player.UMG_TalentTooltip_Player_C.ExecuteUbergraph_UMG_TalentTooltip_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

