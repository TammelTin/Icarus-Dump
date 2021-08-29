// BlueprintGeneratedClass BP_BerryBush.BP_BerryBush_C
// Size: 0x458 (Inherited: 0x3e8)
struct ABP_BerryBush_C : ABP_DressedNodeBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e8(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x3f0(0x08)
	struct USceneComponent* PerceptionTarget; // 0x3f8(0x08)
	struct UBP_GOAPInteractableComponent_C* BP_GOAPInteractableComponent; // 0x400(0x08)
	struct TMap<struct UAnimInstance*, struct UAnimMontage*> PendingAnimations; // 0x408(0x50)

	void PlayHarvestFX(struct FVector Location, struct AIcarusPlayerCharacter* Instigator); // Function BP_BerryBush.BP_BerryBush_C.PlayHarvestFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnResourceCountChanged(); // Function BP_BerryBush.BP_BerryBush_C.OnResourceCountChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateNodeVisuals(bool Success); // Function BP_BerryBush.BP_BerryBush_C.UpdateNodeVisuals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_C61AA06843904A6595D627BFC74135C5(struct UObject* Loaded); // Function BP_BerryBush.BP_BerryBush_C.OnLoaded_C61AA06843904A6595D627BFC74135C5 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_35D8DF264EE323267AA6EA8C06002441(struct UObject* Loaded); // Function BP_BerryBush.BP_BerryBush_C.OnLoaded_35D8DF264EE323267AA6EA8C06002441 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName); // Function BP_BerryBush.BP_BerryBush_C.OnNotifyEnd_15B36D3C434B95EB3872FB8EDAED70B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName); // Function BP_BerryBush.BP_BerryBush_C.OnNotifyBegin_15B36D3C434B95EB3872FB8EDAED70B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName); // Function BP_BerryBush.BP_BerryBush_C.OnInterrupted_15B36D3C434B95EB3872FB8EDAED70B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName); // Function BP_BerryBush.BP_BerryBush_C.OnBlendOut_15B36D3C434B95EB3872FB8EDAED70B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_15B36D3C434B95EB3872FB8EDAED70B9(struct FName NotifyName); // Function BP_BerryBush.BP_BerryBush_C.OnCompleted_15B36D3C434B95EB3872FB8EDAED70B9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnMontageComplete(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_BerryBush.BP_BerryBush_C.OnMontageComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTI_PlayMontage(struct ABP_IcarusNPCGOAPCharacter_C* Character, struct TSoftObjectPtr<UAnimMontage> Montage, struct FName MontageSection); // Function BP_BerryBush.BP_BerryBush_C.MULTI_PlayMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_BerryBush.BP_BerryBush_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void MULTI_AbortMontage(struct AIcarusNPCGOAPCharacter* Character, struct TSoftObjectPtr<UAnimMontage> Montage); // Function BP_BerryBush.BP_BerryBush_C.MULTI_AbortMontage // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_2_GOAPInteractionCompleteSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_BerryBush.BP_BerryBush_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_2_GOAPInteractionCompleteSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_BerryBush.BP_BerryBush_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(struct UIcarusGOAPInteractableComponent* Component); // Function BP_BerryBush.BP_BerryBush_C.BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BerryBush(int32_t EntryPoint); // Function BP_BerryBush.BP_BerryBush_C.ExecuteUbergraph_BP_BerryBush // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

