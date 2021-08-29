// BlueprintGeneratedClass BP_InputCaptureComponent.BP_InputCaptureComponent_C
// Size: 0x140 (Inherited: 0xb0)
struct UBP_InputCaptureComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FMulticastInlineDelegate OnLookUp; // 0xb8(0x10)
	struct FMulticastInlineDelegate OnLookRight; // 0xc8(0x10)
	struct FMulticastInlineDelegate OnFire; // 0xd8(0x10)
	struct FMulticastInlineDelegate OnAltFire; // 0xe8(0x10)
	struct FMulticastInlineDelegate OnEndInputCapture; // 0xf8(0x10)
	struct FMulticastInlineDelegate OnBeginInputCapture; // 0x108(0x10)
	struct FMulticastInlineDelegate OnMoveForward; // 0x118(0x10)
	bool InputCaptureActive; // 0x128(0x01)
	char pad_129[0x7]; // 0x129(0x07)
	struct FMulticastInlineDelegate OnJump; // 0x130(0x10)

	bool ShouldBlockInput(); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ShouldBlockInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void EndInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.EndInputCapture // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BeginInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent, struct AActor* Instigator); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.BeginInputCapture // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerLookUp(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookUp // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerLookRight(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerLookRight // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerFire(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerFire // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerAltFire(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerAltFire // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerMoveForward(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerMoveForward // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerJump(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ServerJump // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_InputCaptureComponent(int32_t EntryPoint); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.ExecuteUbergraph_BP_InputCaptureComponent // (Final|UbergraphFunction) // @ game+0x1a05090
	void OnJump__DelegateSignature(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnJump__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnMoveForward__DelegateSignature(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnMoveForward__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBeginInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent, struct AActor* Instigator); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnBeginInputCapture__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnEndInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnEndInputCapture__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAltFire__DelegateSignature(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnAltFire__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFire__DelegateSignature(bool Pressed); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnFire__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLookRight__DelegateSignature(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookRight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLookUp__DelegateSignature(float AxisValue); // Function BP_InputCaptureComponent.BP_InputCaptureComponent_C.OnLookUp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

