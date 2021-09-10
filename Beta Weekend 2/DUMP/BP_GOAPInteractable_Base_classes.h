// BlueprintGeneratedClass BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C
// Size: 0x2d8 (Inherited: 0x2a0)
struct ABP_GOAPInteractable_Base_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UBillboardComponent* Billboard; // 0x2a8(0x08)
	struct USphereComponent* Sphere; // 0x2b0(0x08)
	struct UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource; // 0x2b8(0x08)
	struct UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef; // 0x2d0(0x08)

	void OnInteractionComplete(struct AIcarusNPCGOAPController* Controller); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnInteractionComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void CheckDebugEnabled(); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.CheckDebugEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_GOAPInteractable_Base(int32_t EntryPoint); // Function BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C.ExecuteUbergraph_BP_GOAPInteractable_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

