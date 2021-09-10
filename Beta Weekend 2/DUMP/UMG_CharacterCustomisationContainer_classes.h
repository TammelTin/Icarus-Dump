// WidgetBlueprintGeneratedClass UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C
// Size: 0x390 (Inherited: 0x260)
struct UUMG_CharacterCustomisationContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* BackButton; // 0x268(0x08)
	struct UScaleBox* MainDisplayScaleBox; // 0x270(0x08)
	struct UUMG_CharacterCreation_C* UMG_CharacterCreation; // 0x278(0x08)
	struct ABP_PlayerPreviewManager_C* PreviewManager; // 0x280(0x08)
	struct TSoftObjectPtr<UWorld> DefaultDiorama; // 0x288(0x28)
	struct FCharacterCosmetics InitialCosmetics; // 0x2b0(0xc8)
	struct FText PlayerName; // 0x378(0x18)

	void OnCustomisationUpdated(struct FCharacterCosmetics CharacterData); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics Response); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnFail_97CCC08F4ACBB904FC9CD19A62C8CD71 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71(struct FResUpdateCosmetics Response); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnSuccess_97CCC08F4ACBB904FC9CD19A62C8CD71 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnCustomisationCompleted(bool Success, struct FOnlineProfileCharacter NewCharacterInfo); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCustomisationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCosmeticUpdateRequest(struct FReqUpdateCosmetics Request, int32_t Retries); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.OnCosmeticUpdateRequest // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.BndEvt__BackButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CharacterCustomisationContainer(int32_t EntryPoint); // Function UMG_CharacterCustomisationContainer.UMG_CharacterCustomisationContainer_C.ExecuteUbergraph_UMG_CharacterCustomisationContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

