// BlueprintGeneratedClass BP_ButtonTrigger.BP_ButtonTrigger_C
// Size: 0x2c0 (Inherited: 0x220)
struct ABP_ButtonTrigger_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UTextRenderComponent* TextRender; // 0x228(0x08)
	struct UHighlightableComponent* Highlightable; // 0x230(0x08)
	struct UInteractableComponent* Interactable; // 0x238(0x08)
	struct UStaticMeshComponent* Cube; // 0x240(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x248(0x08)
	struct FVector InitialButtonLocation; // 0x250(0x0c)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FText ButtonName; // 0x260(0x18)
	struct FMulticastInlineDelegate OnButtonPressed; // 0x278(0x10)
	struct UMaterialInstanceDynamic* DynButtonMat; // 0x288(0x08)
	struct FLinearColor ButtonColour; // 0x290(0x10)
	bool IsButtonActive; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct FTimerHandle ReactivateTimer; // 0x2a8(0x08)
	bool SingleUse; // 0x2b0(0x01)
	char pad_2B1[0x7]; // 0x2b1(0x07)
	struct UBP_Interactable_ButtonTrigger_C* InteractBehaviour; // 0x2b8(0x08)

	void OnRep_IsButtonActive(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.OnRep_IsButtonActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetButtonActive(bool Active); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.SetButtonActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnInteract(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.OnInteract // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Multicast_OnPressed(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.Multicast_OnPressed // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReactivateButton(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.ReactivateButton // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnHold(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.OnHold // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ButtonTrigger(int32_t EntryPoint); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.ExecuteUbergraph_BP_ButtonTrigger // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void OnButtonPressed__DelegateSignature(); // Function BP_ButtonTrigger.BP_ButtonTrigger_C.OnButtonPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

