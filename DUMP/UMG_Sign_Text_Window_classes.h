// WidgetBlueprintGeneratedClass UMG_Sign_Text_Window.UMG_Sign_Text_Window_C
// Size: 0x2a4 (Inherited: 0x280)
struct UUMG_Sign_Text_Window_C : UUMG_IcarusLinkedActorPanel_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct UEditableTextBox* EditableTextBox; // 0x288(0x08)
	struct FString TempString; // 0x290(0x10)
	int32_t MaxCharacters; // 0x2a0(0x04)

	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_Sign_Text_Window.UMG_Sign_Text_Window_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_Sign_Text_Window.UMG_Sign_Text_Window_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // Function UMG_Sign_Text_Window.UMG_Sign_Text_Window_C.BndEvt__EditableTextBox_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_Sign_Text_Window(int32_t EntryPoint); // Function UMG_Sign_Text_Window.UMG_Sign_Text_Window_C.ExecuteUbergraph_UMG_Sign_Text_Window // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

