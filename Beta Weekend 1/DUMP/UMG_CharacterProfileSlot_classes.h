// WidgetBlueprintGeneratedClass UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C
// Size: 0x5f0 (Inherited: 0x260)
struct UUMG_CharacterProfileSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* RevealDetails; // 0x268(0x08)
	struct UWidgetAnimation* HoverAnimation; // 0x270(0x08)
	struct UButton* ButtonBase; // 0x278(0x08)
	struct UImage* CharacterImage; // 0x280(0x08)
	struct UTextBlock* CharacterLevel; // 0x288(0x08)
	struct UTextBlock* CharacterName; // 0x290(0x08)
	struct UImage* cornerimage; // 0x298(0x08)
	struct UImage* cornerimage_2; // 0x2a0(0x08)
	struct UImage* cornerimage_3; // 0x2a8(0x08)
	struct UImage* cornerimage_4; // 0x2b0(0x08)
	struct UOverlay* Corners; // 0x2b8(0x08)
	struct UCanvasPanel* DetailsAnchor; // 0x2c0(0x08)
	struct UTextBlock* DropStatus; // 0x2c8(0x08)
	struct UTextBlock* Level; // 0x2d0(0x08)
	struct UBorder* SelectedBorder; // 0x2d8(0x08)
	struct FMulticastInlineDelegate ButtonClicked; // 0x2e0(0x10)
	struct FMulticastInlineDelegate DeleteCharacter; // 0x2f0(0x10)
	struct FOnlineProfileCharacter Character; // 0x300(0x130)
	struct FOnlineProspectInfo CurrentActiveProspect; // 0x430(0x150)
	bool Hovered; // 0x580(0x01)
	char pad_581[0x7]; // 0x581(0x07)
	struct FSlateColor TextColour_Default; // 0x588(0x28)
	struct FSlateColor TextColour_Hovered; // 0x5b0(0x28)
	bool Is Selected; // 0x5d8(0x01)
	char pad_5D9[0x7]; // 0x5d9(0x07)
	struct UMaterialInstanceDynamic* IconMaterial; // 0x5e0(0x08)
	struct UTextureRenderTarget2D* IconRenderTarget; // 0x5e8(0x08)

	void GenerateIcon(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.GenerateIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetSelectedState(bool IsSelected); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.SetSelectedState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HoveredStyle(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.HoveredStyle // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CalculatePlayerLevelFromExp(int32_t Experience, int32_t Level); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.CalculatePlayerLevelFromExp // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialize(struct FOnlineProfileCharacter Character, struct FOnlineProspectInfo CurrentActiveProspect); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.Initialize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_D3F7A27C4450071DE625D8BD99C672D4(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.Finished_D3F7A27C4450071DE625D8BD99C672D4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.BndEvt__Button_118_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature(); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.BndEvt__ButtonBase_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_CharacterProfileSlot(int32_t EntryPoint); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.ExecuteUbergraph_UMG_CharacterProfileSlot // (Final|UbergraphFunction) // @ game+0x1a05090
	void DeleteCharacter__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Delete); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.DeleteCharacter__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ButtonClicked__DelegateSignature(struct UUMG_CharacterProfileSlot_C* Input); // Function UMG_CharacterProfileSlot.UMG_CharacterProfileSlot_C.ButtonClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

