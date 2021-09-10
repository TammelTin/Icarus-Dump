// WidgetBlueprintGeneratedClass UMG_MainMap.UMG_MainMap_C
// Size: 0x2b1 (Inherited: 0x260)
struct UUMG_MainMap_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* MapDisabled; // 0x268(0x08)
	struct UVerticalBox* DisabledVbox; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_60; // 0x280(0x08)
	struct UHorizontalBox* Keyprompts; // 0x288(0x08)
	struct UBorder* MapDisabledBox; // 0x290(0x08)
	struct URetainerBox* RetainerBox_1; // 0x298(0x08)
	struct UUMG_RadarMainScreen_C* UMG_RadarMainScreen; // 0x2a0(0x08)
	struct UUMG_UserInterface_C* UserInterface; // 0x2a8(0x08)
	bool IsMapDisabled; // 0x2b0(0x01)

	void ConnectedPlayerInitialised(struct FConnectedPlayer ConnectedPlayer); // Function UMG_MainMap.UMG_MainMap_C.ConnectedPlayerInitialised // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_MainMap.UMG_MainMap_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void UpdateMapVisibility(); // Function UMG_MainMap.UMG_MainMap_C.UpdateMapVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_MainMap(int32_t EntryPoint); // Function UMG_MainMap.UMG_MainMap_C.ExecuteUbergraph_UMG_MainMap // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

