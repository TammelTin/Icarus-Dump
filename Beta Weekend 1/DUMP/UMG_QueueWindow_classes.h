// WidgetBlueprintGeneratedClass UMG_QueueWindow.UMG_QueueWindow_C
// Size: 0x2f0 (Inherited: 0x288)
struct UUMG_QueueWindow_C : UConfirmationPopupBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UUMG_IconTextButton_C* CancelButton; // 0x290(0x08)
	struct UTextBlock* Description; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_3; // 0x2b0(0x08)
	struct UImage* Image_97; // 0x2b8(0x08)
	struct UTextBlock* QueueNumber; // 0x2c0(0x08)
	struct UUMG_LoadingIcon_C* UMG_LoadingIcon; // 0x2c8(0x08)
	struct FMulticastInlineDelegate OnAnyItemSelected; // 0x2d0(0x10)
	struct FMulticastInlineDelegate Close; // 0x2e0(0x10)

	void Update(int32_t QueueSize, float TimeInSeconds); // Function UMG_QueueWindow.UMG_QueueWindow_C.Update // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnObjectSelectionComplete(); // Function UMG_QueueWindow.UMG_QueueWindow_C.OnObjectSelectionComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(); // Function UMG_QueueWindow.UMG_QueueWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_QueueWindow(int32_t EntryPoint); // Function UMG_QueueWindow.UMG_QueueWindow_C.ExecuteUbergraph_UMG_QueueWindow // (Final|UbergraphFunction) // @ game+0x1a05090
	void Close__DelegateSignature(); // Function UMG_QueueWindow.UMG_QueueWindow_C.Close__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAnyItemSelected__DelegateSignature(); // Function UMG_QueueWindow.UMG_QueueWindow_C.OnAnyItemSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

