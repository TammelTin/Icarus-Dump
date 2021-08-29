// WidgetBlueprintGeneratedClass UMG_FilterButton.UMG_FilterButton_C
// Size: 0x2e8 (Inherited: 0x260)
struct UUMG_FilterButton_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* FilterButton; // 0x268(0x08)
	struct UImage* IconImage; // 0x270(0x08)
	struct UImage* SelectedImage; // 0x278(0x08)
	enum class EPrimaryItemTypes FilterType; // 0x280(0x01)
	char pad_281[0x7]; // 0x281(0x07)
	struct FMulticastInlineDelegate Clicked; // 0x288(0x10)
	struct FSlateColor SelectedColour; // 0x298(0x28)
	struct FSlateColor DefaultColour; // 0x2c0(0x28)

	void UpdateSelected(bool Selected); // Function UMG_FilterButton.UMG_FilterButton_C.UpdateSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Initialise(struct FItemClassificationsIconsData ItemClassification); // Function UMG_FilterButton.UMG_FilterButton_C.Initialise // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function UMG_FilterButton.UMG_FilterButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature(); // Function UMG_FilterButton.UMG_FilterButton_C.BndEvt__FilterButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_FilterButton(int32_t EntryPoint); // Function UMG_FilterButton.UMG_FilterButton_C.ExecuteUbergraph_UMG_FilterButton // (Final|UbergraphFunction) // @ game+0x1a05090
	void Clicked__DelegateSignature(enum class EPrimaryItemTypes Type); // Function UMG_FilterButton.UMG_FilterButton_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

