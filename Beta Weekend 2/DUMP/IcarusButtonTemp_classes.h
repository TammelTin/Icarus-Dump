// WidgetBlueprintGeneratedClass IcarusButtonTemp.IcarusButtonTemp_C
// Size: 0x2a0 (Inherited: 0x260)
struct UIcarusButtonTemp_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UButton* Button; // 0x268(0x08)
	struct UTextBlock* TextBlock_61; // 0x270(0x08)
	struct FText Text; // 0x278(0x18)
	struct FMulticastInlineDelegate OnClicked; // 0x290(0x10)

	struct FSlateColor GetTextColor(); // Function IcarusButtonTemp.IcarusButtonTemp_C.GetTextColor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function IcarusButtonTemp.IcarusButtonTemp_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature(); // Function IcarusButtonTemp.IcarusButtonTemp_C.BndEvt__Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_IcarusButtonTemp(int32_t EntryPoint); // Function IcarusButtonTemp.IcarusButtonTemp_C.ExecuteUbergraph_IcarusButtonTemp // (Final|UbergraphFunction) // @ game+0x1a38c80
	void OnClicked__DelegateSignature(); // Function IcarusButtonTemp.IcarusButtonTemp_C.OnClicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

