// WidgetBlueprintGeneratedClass UMG_DropshipSlot.UMG_DropshipSlot_C
// Size: 0x359 (Inherited: 0x260)
struct UUMG_DropshipSlot_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_CloseButton_2_C* ClearButton; // 0x268(0x08)
	struct UBorder* Empty; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UTextBlock* SlotPosition; // 0x280(0x08)
	struct FItemData CurrentItem; // 0x288(0x80)
	struct FGameplayTagQuery Query; // 0x308(0x48)
	struct UUMG_DropshipEditor_Dropship_C* EditorDropship; // 0x350(0x08)
	enum class EDropshipPartType Part; // 0x358(0x01)

	void Initialise(struct UUMG_DropshipEditor_Dropship_C* Parent); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateState(); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update(struct FItemData Item); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_95C42B9A4E4569F2B77ACA92D0F18F50(struct UObject* Loaded); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.OnLoaded_95C42B9A4E4569F2B77ACA92D0F18F50 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LoadIcon(struct TSoftObjectPtr<UTexture2D> Texture); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.LoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.BndEvt__UMG_CloseButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_DropshipSlot(int32_t EntryPoint); // Function UMG_DropshipSlot.UMG_DropshipSlot_C.ExecuteUbergraph_UMG_DropshipSlot // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

