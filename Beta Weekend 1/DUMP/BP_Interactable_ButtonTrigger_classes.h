// BlueprintGeneratedClass BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C
// Size: 0x111 (Inherited: 0xe8)
struct UBP_Interactable_ButtonTrigger_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct FMulticastInlineDelegate OnButtonInteract; // 0xf0(0x10)
	struct FMulticastInlineDelegate OnButtonHold; // 0x100(0x10)
	bool IsButtonInteractable; // 0x110(0x01)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_ButtonTrigger(int32_t EntryPoint); // Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.ExecuteUbergraph_BP_Interactable_ButtonTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void OnButtonHold__DelegateSignature(); // Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.OnButtonHold__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnButtonInteract__DelegateSignature(); // Function BP_Interactable_ButtonTrigger.BP_Interactable_ButtonTrigger_C.OnButtonInteract__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

