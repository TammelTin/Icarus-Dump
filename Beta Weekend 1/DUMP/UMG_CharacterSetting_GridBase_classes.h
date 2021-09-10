// WidgetBlueprintGeneratedClass UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C
// Size: 0x2f0 (Inherited: 0x2d0)
struct UUMG_CharacterSetting_GridBase_C : UUMG_CharacterSetting_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct UUniformGridPanel* OptionsGrid; // 0x2d8(0x08)
	struct UTextBlock* Text_SettingName; // 0x2e0(0x08)
	float GridItemWidth; // 0x2e8(0x04)
	int32_t NumColumns; // 0x2ec(0x04)

	void ClearOptions(bool ClearIndex); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.ClearOptions // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetToggleButtonAtIndex(int32_t OptionIndex, struct UUMG_ToggleButton_ColorSelect_C* Button, bool Success); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.GetToggleButtonAtIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddOption(struct FRowHandle Option, int32_t Index); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.AddOption // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnGridSelectionUpdated(struct UUMG_ToggleButtonBase_C* ToggleButton); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.OnGridSelectionUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UUMG_ToggleButton_ColorSelect_C* AddNewGridItem(struct FCharacterCreationDataRowHandle CharacterCustomisationRow, float WidthOverride, int32_t RowLength); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.AddNewGridItem // (Protected|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CharacterSetting_GridBase(int32_t EntryPoint); // Function UMG_CharacterSetting_GridBase.UMG_CharacterSetting_GridBase_C.ExecuteUbergraph_UMG_CharacterSetting_GridBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

