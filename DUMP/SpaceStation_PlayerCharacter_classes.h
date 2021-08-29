// BlueprintGeneratedClass SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C
// Size: 0x358 (Inherited: 0x280)
struct ASpaceStation_PlayerCharacter_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USphereComponent* Sphere; // 0x288(0x08)
	struct USceneComponent* LegProbe; // 0x290(0x08)
	struct USpringArmComponent* SpringArm; // 0x298(0x08)
	struct UCameraComponent* Camera; // 0x2a0(0x08)
	struct UWidgetInteractionComponent* WidgetInteraction; // 0x2a8(0x08)
	struct UBP_InteractionComponent_C* BP_InteractionComponent; // 0x2b0(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x2b8(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0x2c0(0x08)
	struct UWidgetComponent* PlayerNameWidget; // 0x2c8(0x08)
	struct UCapsuleComponent* Capsule; // 0x2d0(0x08)
	struct UArrowComponent* Arrow1; // 0x2d8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2e0(0x08)
	struct UFloatingPawnMovement* FloatingPawnMovement; // 0x2e8(0x08)
	float TranslationSpeed; // 0x2f0(0x04)
	float RotationSpeed; // 0x2f4(0x04)
	struct FVector InputMovement; // 0x2f8(0x0c)
	struct FRotator InputRotation; // 0x304(0x0c)
	bool SprintPressed; // 0x310(0x01)
	char pad_311[0x3]; // 0x311(0x03)
	float SprintMultiplier; // 0x314(0x04)
	float RotationInterpRate; // 0x318(0x04)
	struct FRotator RotationToApply; // 0x31c(0x0c)
	struct UControlsHelperWidget_C* ControlsWidget; // 0x328(0x08)
	struct FRotator ReplicatedRotation; // 0x330(0x0c)
	struct FVector ReplicatedLocation; // 0x33c(0x0c)
	float NewVar_1; // 0x348(0x04)
	struct FVector ReplicatedVelocity; // 0x34c(0x0c)

	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_Sprint_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_H_K2Node_InputKeyEvent_4(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_H_K2Node_InputKeyEvent_3(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_H_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Interact_K2Node_InputActionEvent_1(struct FKey Key); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpActEvt_Interact_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_6(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_6 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_RollRight_K2Node_InputAxisEvent_7(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_RollRight_K2Node_InputAxisEvent_7 // (BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void NotifyLocationUpdated(struct FVector CurrentLocation); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.NotifyLocationUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void NotifyRotationUpdated(struct FRotator NewRotation); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.NotifyRotationUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void NotifyVelocityUpdated(struct FVector CurrentLocation); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.NotifyVelocityUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SpaceStation_PlayerCharacter(int32_t EntryPoint); // Function SpaceStation_PlayerCharacter.SpaceStation_PlayerCharacter_C.ExecuteUbergraph_SpaceStation_PlayerCharacter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

