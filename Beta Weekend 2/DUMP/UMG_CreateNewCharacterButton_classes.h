// WidgetBlueprintGeneratedClass UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C
// Size: 0x328 (Inherited: 0x260)
struct UUMG_CreateNewCharacterButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x268(0x08)
	struct UButton* ButtonBase; // 0x270(0x08)
	struct UTextBlock* CharacterLevel; // 0x278(0x08)
	struct UTextBlock* CharacterName; // 0x280(0x08)
	struct UImage* cornerimage; // 0x288(0x08)
	struct UImage* cornerimage_2; // 0x290(0x08)
	struct UImage* cornerimage_3; // 0x298(0x08)
	struct UImage* cornerimage_4; // 0x2a0(0x08)
	struct UOverlay* Corners; // 0x2a8(0x08)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2b0(0x10)
	struct FMulticastInlineDelegate DeleteCharacter; // 0x2c0(0x10)
	bool Hovered; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FSlateColor TextColour_Base; // 0x2d8(0x28)
	struct FSlateColor TextColour_Hovered; // 0x300(0x28)

	void HoveredStyle(); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.HoveredStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Initialize(struct FString Name, int32_t Level, struct FString Drop Progress); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_CreateNewCharacterButton(int32_t EntryPoint); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ExecuteUbergraph_UMG_CreateNewCharacterButton // (Final|UbergraphFunction) // @ game+0x1a38c80
	void DeleteCharacter__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Delete); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.DeleteCharacter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ButtonClicked__DelegateSignature(struct UUMG_CreateNewCharacterButton_C* Input); // Function UMG_CreateNewCharacterButton.UMG_CreateNewCharacterButton_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

