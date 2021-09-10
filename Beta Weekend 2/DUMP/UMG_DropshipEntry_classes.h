// WidgetBlueprintGeneratedClass UMG_DropshipEntry.UMG_DropshipEntry_C
// Size: 0x3a9 (Inherited: 0x260)
struct UUMG_DropshipEntry_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_DropshipPartSmall_C* Bot; // 0x268(0x08)
	struct UVerticalBox* Content; // 0x270(0x08)
	struct UTextBlock* DropshipName; // 0x278(0x08)
	struct UButton* ImageButton; // 0x280(0x08)
	struct UBorder* InUse; // 0x288(0x08)
	struct UUMG_DropshipPartSmall_C* Mid; // 0x290(0x08)
	struct UBorder* NameBorder; // 0x298(0x08)
	struct UUMG_DropshipPartSmall_C* Top; // 0x2a0(0x08)
	struct UUMG_ButtonIcon_C* UMG_ButtonIcon; // 0x2a8(0x08)
	struct FMulticastInlineDelegate DropshipSelected; // 0x2b0(0x10)
	int32_t Index; // 0x2c0(0x04)
	char pad_2C4[0x4]; // 0x2c4(0x04)
	struct FDropship Dropship; // 0x2c8(0xe0)
	bool IsSelected; // 0x3a8(0x01)

	void SetSelected(bool Selected); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetDropship(struct FDropship Dropship, bool Valid); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.SetDropship // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.BndEvt__UMG_ButtonIcon_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DropshipEntry(int32_t EntryPoint); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.ExecuteUbergraph_UMG_DropshipEntry // (Final|UbergraphFunction) // @ game+0x1a38c80
	void DropshipSelected__DelegateSignature(int32_t Index); // Function UMG_DropshipEntry.UMG_DropshipEntry_C.DropshipSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

