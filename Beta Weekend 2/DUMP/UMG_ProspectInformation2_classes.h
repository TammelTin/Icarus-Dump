// WidgetBlueprintGeneratedClass UMG_ProspectInformation2.UMG_ProspectInformation2_C
// Size: 0x538 (Inherited: 0x260)
struct UUMG_ProspectInformation2_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* CostText_2; // 0x268(0x08)
	struct UTextBlock* Days; // 0x270(0x08)
	struct UHorizontalBox* DifficultyIconContainer; // 0x278(0x08)
	struct UTextBlock* DifficultyText; // 0x280(0x08)
	struct UTextBlock* FactionMissionDetails; // 0x288(0x08)
	struct UImage* GradientBack; // 0x290(0x08)
	struct UTextBlock* Hours; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_88; // 0x2a8(0x08)
	struct UImage* Image_143; // 0x2b0(0x08)
	struct UImage* Image_164; // 0x2b8(0x08)
	struct UTextBlock* Minutes; // 0x2c0(0x08)
	struct UTextBlock* ProspectDescription; // 0x2c8(0x08)
	struct UImage* ProspectImage; // 0x2d0(0x08)
	struct UTextBlock* ProspectName; // 0x2d8(0x08)
	struct URetainerBox* RetainerBox_1; // 0x2e0(0x08)
	struct UTextBlock* RewardText; // 0x2e8(0x08)
	struct UTextBlock* Seconds; // 0x2f0(0x08)
	struct UBorder* TimeBorder; // 0x2f8(0x08)
	int32_t EpochTime; // 0x300(0x04)
	char pad_304[0x4]; // 0x304(0x04)
	struct FSlateColor EasyColour; // 0x308(0x28)
	struct FSlateColor Normal; // 0x330(0x28)
	struct FSlateColor Hard; // 0x358(0x28)
	struct FSlateColor Extreme; // 0x380(0x28)
	struct FFProspectServerInfo Prospect Info; // 0x3a8(0x190)

	void SetTime(); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.SetTime // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowHostedProspect(struct FFProspectServerInfo Prospect Info); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.ShowHostedProspect // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Update(struct FFProspectServerInfo SessionInfo); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void CustomEvent_1(); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ProspectInformation2(int32_t EntryPoint); // Function UMG_ProspectInformation2.UMG_ProspectInformation2_C.ExecuteUbergraph_UMG_ProspectInformation2 // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

