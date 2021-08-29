// WidgetBlueprintGeneratedClass UMG_DropshipSelector.UMG_DropshipSelector_C
// Size: 0x2d0 (Inherited: 0x260)
struct UUMG_DropshipSelector_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UUMG_BasicButton_2_C* CreateDropshipButton; // 0x268(0x08)
	struct UComboBoxString* DropshipComboBox; // 0x270(0x08)
	struct UHorizontalBox* DropshipContainer; // 0x278(0x08)
	struct UBorder* Empty; // 0x280(0x08)
	struct UOverlay* EmptyOverlay; // 0x288(0x08)
	struct UImage* SelectedShip; // 0x290(0x08)
	struct FMulticastInlineDelegate DropshipSelected; // 0x298(0x10)
	struct TArray<struct UUMG_DropshipEntry_C*> Toggles; // 0x2a8(0x10)
	int32_t MaxDropshipCount; // 0x2b8(0x04)
	char pad_2BC[0x4]; // 0x2bc(0x04)
	struct TArray<struct FString> Dropships; // 0x2c0(0x10)

	void FindDropshipIndex(struct FString Name, int32_t DropshipIndex); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.FindDropshipIndex // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DropshipSelectedHandler(int32_t Index); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.DropshipSelectedHandler // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update(); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.BndEvt__DropshipComboBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_DropshipSelector(int32_t EntryPoint); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.ExecuteUbergraph_UMG_DropshipSelector // (Final|UbergraphFunction) // @ game+0x1a05090
	void DropshipSelected__DelegateSignature(struct FDropship Dropship); // Function UMG_DropshipSelector.UMG_DropshipSelector_C.DropshipSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

