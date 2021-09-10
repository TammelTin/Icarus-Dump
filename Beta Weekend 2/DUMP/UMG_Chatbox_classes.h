// WidgetBlueprintGeneratedClass UMG_Chatbox.UMG_Chatbox_C
// Size: 0x2b0 (Inherited: 0x260)
struct UUMG_Chatbox_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeInChat; // 0x268(0x08)
	struct UWidgetAnimation* FadeOutChat; // 0x270(0x08)
	struct UVerticalBox* ChatMessages; // 0x278(0x08)
	struct USizeBox* HintBox; // 0x280(0x08)
	struct UScrollBox* MessageScrollbox; // 0x288(0x08)
	struct UEditableText* TextBox; // 0x290(0x08)
	bool Initalised; // 0x298(0x01)
	bool Typing; // 0x299(0x01)
	char pad_29A[0x2]; // 0x29a(0x02)
	int32_t MaxMessageCharacterLength; // 0x29c(0x04)
	struct FTimerHandle FadeOutTimer; // 0x2a0(0x08)
	enum class ChatBoxFadeState State; // 0x2a8(0x01)
	char pad_2A9[0x3]; // 0x2a9(0x03)
	float FadeOutDelay; // 0x2ac(0x04)

	void AddServerMessage(struct FString Message); // Function UMG_Chatbox.UMG_Chatbox_C.AddServerMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClampMessageLength(struct FText InMessage, struct FText OutMessage, bool WasClamped); // Function UMG_Chatbox.UMG_Chatbox_C.ClampMessageLength // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FocusEntry(); // Function UMG_Chatbox.UMG_Chatbox_C.FocusEntry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ScrollToBottom(); // Function UMG_Chatbox.UMG_Chatbox_C.ScrollToBottom // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddLocalMessage(struct FString Message); // Function UMG_Chatbox.UMG_Chatbox_C.AddLocalMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddChatMessage(struct FTChatMessage Message); // Function UMG_Chatbox.UMG_Chatbox_C.AddChatMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_13A3F937400836F18C3C2AA44C299F32(); // Function UMG_Chatbox.UMG_Chatbox_C.Finished_13A3F937400836F18C3C2AA44C299F32 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Finished_6346353C4787712A7E87BDAF80B3DCC4(); // Function UMG_Chatbox.UMG_Chatbox_C.Finished_6346353C4787712A7E87BDAF80B3DCC4 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_Chatbox.UMG_Chatbox_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // Function UMG_Chatbox.UMG_Chatbox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG_Chatbox.UMG_Chatbox_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ShowChat(); // Function UMG_Chatbox.UMG_Chatbox_C.ShowChat // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShowChatTyping(); // Function UMG_Chatbox.UMG_Chatbox_C.ShowChatTyping // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EndTyping(); // Function UMG_Chatbox.UMG_Chatbox_C.EndTyping // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_Chatbox.UMG_Chatbox_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void BeginFadeOutTimer(); // Function UMG_Chatbox.UMG_Chatbox_C.BeginFadeOutTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFadeOutAnim(); // Function UMG_Chatbox.UMG_Chatbox_C.PlayFadeOutAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PlayFadeInAnim(); // Function UMG_Chatbox.UMG_Chatbox_C.PlayFadeInAnim // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function UMG_Chatbox.UMG_Chatbox_C.BndEvt__TextBox_K2Node_ComponentBoundEvent_1_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void CheckChatBoxVisible(); // Function UMG_Chatbox.UMG_Chatbox_C.CheckChatBoxVisible // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CommitText(); // Function UMG_Chatbox.UMG_Chatbox_C.CommitText // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ClearAndUnfocusTextBox(); // Function UMG_Chatbox.UMG_Chatbox_C.ClearAndUnfocusTextBox // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Chatbox(int32_t EntryPoint); // Function UMG_Chatbox.UMG_Chatbox_C.ExecuteUbergraph_UMG_Chatbox // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

