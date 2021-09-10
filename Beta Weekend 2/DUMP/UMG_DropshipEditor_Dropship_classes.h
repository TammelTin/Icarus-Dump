// WidgetBlueprintGeneratedClass UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C
// Size: 0x3cd (Inherited: 0x260)
struct UUMG_DropshipEditor_Dropship_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_DropshipSlot_C* Base; // 0x268(0x08)
	struct UUMG_BasicButton_2_C* DeleteButton; // 0x270(0x08)
	struct UImage* Image; // 0x278(0x08)
	struct UImage* Image_2; // 0x280(0x08)
	struct UImage* Image_3; // 0x288(0x08)
	struct UImage* Image_4; // 0x290(0x08)
	struct UImage* Image_85; // 0x298(0x08)
	struct UImage* Image_146; // 0x2a0(0x08)
	struct UImage* Image_220; // 0x2a8(0x08)
	struct UBorder* LoadoutText; // 0x2b0(0x08)
	struct UTextBlock* LoadoutWarning; // 0x2b8(0x08)
	struct UUMG_DropshipSlot_C* Mid; // 0x2c0(0x08)
	struct UVerticalBox* Pointers; // 0x2c8(0x08)
	struct UEditableText* ShipNameTextBox; // 0x2d0(0x08)
	struct UUMG_DropshipSlot_C* Top; // 0x2d8(0x08)
	struct UUMG_BasicButton_2_C* UMG_BasicButton_3; // 0x2e0(0x08)
	struct FDropship Dropship; // 0x2e8(0xe0)
	int32_t Dropship Index; // 0x3c8(0x04)
	bool LoadoutSelected; // 0x3cc(0x01)

	void RemovePart(enum class EDropshipPartType Type); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.RemovePart // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ModifyDropship(struct UInventory* Inventory, int32_t Slot, enum class EDropshipPartType Type); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ModifyDropship // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Refresh(); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.Refresh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateDropship(struct FDropship Dropship); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.UpdateDropship // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(struct UUMG_ButtonBase_C* Button); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.BndEvt__UMG_BasicButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DropshipEditor_Dropship(int32_t EntryPoint); // Function UMG_DropshipEditor_Dropship.UMG_DropshipEditor_Dropship_C.ExecuteUbergraph_UMG_DropshipEditor_Dropship // (Final|UbergraphFunction) // @ game+0x1a38c80
};

