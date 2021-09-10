// BlueprintGeneratedClass BP_Operable.BP_Operable_C
// Size: 0x300 (Inherited: 0x2c8)
struct ABP_Operable_C : ABP_WorldObject_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UBP_InputCaptureComponent_C* BP_InputCaptureComponent; // 0x2d0(0x08)
	struct FMulticastInlineDelegate OnBeginInteract; // 0x2d8(0x10)
	struct FText InstructionsText; // 0x2e8(0x18)

	void EndInputCapture(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_Operable.BP_Operable_C.EndInputCapture // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void WorldObject_Interact(struct AActor* Instigator); // Function BP_Operable.BP_Operable_C.WorldObject_Interact // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LookX(float Scale); // Function BP_Operable.BP_Operable_C.LookX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LookY(float Scale); // Function BP_Operable.BP_Operable_C.LookY // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PrimaryFire(bool Press); // Function BP_Operable.BP_Operable_C.PrimaryFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AltFire(bool Press); // Function BP_Operable.BP_Operable_C.AltFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Jump(); // Function BP_Operable.BP_Operable_C.Jump // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature(struct UBP_InputCaptureComponent_C* CaptureComponent); // Function BP_Operable.BP_Operable_C.BndEvt__BP_InputCaptureComponent_K2Node_ComponentBoundEvent_1_OnEndInputCapture__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Operable(int32_t EntryPoint); // Function BP_Operable.BP_Operable_C.ExecuteUbergraph_BP_Operable // (Final|UbergraphFunction) // @ game+0x1a38c80
	void OnBeginInteract__DelegateSignature(); // Function BP_Operable.BP_Operable_C.OnBeginInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

