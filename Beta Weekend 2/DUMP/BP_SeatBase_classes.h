// BlueprintGeneratedClass BP_SeatBase.BP_SeatBase_C
// Size: 0x345 (Inherited: 0x2d0)
struct ABP_SeatBase_C : ASeatBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d0(0x08)
	struct USceneComponent* ExitLocators; // 0x2d8(0x08)
	struct UStaticMeshComponent* SeatMesh; // 0x2e0(0x08)
	struct UIcarusCameraSpringArm* IcarusCameraSpringArm; // 0x2e8(0x08)
	struct UCameraComponent* Camera; // 0x2f0(0x08)
	struct UHighlightableComponent* Highlightable; // 0x2f8(0x08)
	struct UInteractableComponent* Interactable; // 0x300(0x08)
	struct UAnimInstance* SeatedAnimClass_TP; // 0x308(0x08)
	struct AActor* TPViewTarget; // 0x310(0x08)
	struct UAnimInstance* SeatedAnimClass_FP; // 0x318(0x08)
	struct FVector FPMeshOffset; // 0x320(0x0c)
	struct FVector FPCameraOffset; // 0x32c(0x0c)
	struct FRotator SeatRotationFrame; // 0x338(0x0c)
	bool KeepRelativeControllerRotation; // 0x344(0x01)

	void UpdateSeatedControllerRotation(); // Function BP_SeatBase.BP_SeatBase_C.UpdateSeatedControllerRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FRotator GetSeatedPlayerControlRotation(); // Function BP_SeatBase.BP_SeatBase_C.GetSeatedPlayerControlRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void IsLocalPlayerSeated(bool IsLocallyControlled); // Function BP_SeatBase.BP_SeatBase_C.IsLocalPlayerSeated // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdateCameraPerspective(); // Function BP_SeatBase.BP_SeatBase_C.UpdateCameraPerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateViewTarget(float BlendTime); // Function BP_SeatBase.BP_SeatBase_C.UpdateViewTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool FindExit(struct FVector OutExitLocation, struct FRotator OutExitRotation); // Function BP_SeatBase.BP_SeatBase_C.FindExit // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_SeatBase.BP_SeatBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Interact_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_SeatBase.BP_SeatBase_C.InpActEvt_Interact_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator EnterRotation); // Function BP_SeatBase.BP_SeatBase_C.AttachPlayerToSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector ExitLocation, struct FRotator ExitRotation, bool bChangeSeat); // Function BP_SeatBase.BP_SeatBase_C.DetachPlayerFromSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ServerInteract(); // Function BP_SeatBase.BP_SeatBase_C.ServerInteract // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_SeatBase.BP_SeatBase_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1a38c80
	void OnAttachedPlayerDestroyed(struct AActor* DestroyedAttachedPlayer); // Function BP_SeatBase.BP_SeatBase_C.OnAttachedPlayerDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_SeatBase.BP_SeatBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SeatBase.BP_SeatBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_SeatBase.BP_SeatBase_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SeatBase(int32_t EntryPoint); // Function BP_SeatBase.BP_SeatBase_C.ExecuteUbergraph_BP_SeatBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

