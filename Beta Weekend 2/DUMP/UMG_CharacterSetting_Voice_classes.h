// WidgetBlueprintGeneratedClass UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C
// Size: 0x318 (Inherited: 0x310)
struct UUMG_CharacterSetting_Voice_C : UUMG_CharacterSetting_TextBase_C {
	struct UFMODEvent* AuditionFMODEvent; // 0x310(0x08)

	void GenerateOptions(struct FCharacterVoicesRowHandle DefaultSelection); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GenerateOptions // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetVoiceParameter(); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.SetVoiceParameter // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayAuditionEvent(); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.PlayAuditionEvent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ChangeSelection(int32_t Index); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.ChangeSelection // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetSelectionDisplayName(struct FText DisplayName); // Function UMG_CharacterSetting_Voice.UMG_CharacterSetting_Voice_C.GetSelectionDisplayName // (Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

