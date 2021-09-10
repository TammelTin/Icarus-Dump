// BlueprintGeneratedClass BP_CinematicPawn.BP_CinematicPawn_C
// Size: 0x32c (Inherited: 0x2e0)
struct ABP_CinematicPawn_C : AIcarusSpectatorPawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)
	struct USceneComponent* CameraLocation; // 0x2e8(0x08)
	struct USpringArmComponent* SpringArm; // 0x2f0(0x08)
	struct UChildActorComponent* ChildActor; // 0x2f8(0x08)
	float SpeedMultiplier; // 0x300(0x04)
	float DepthOfFieldSpeed; // 0x304(0x04)
	bool FastMoving; // 0x308(0x01)
	char pad_309[0x3]; // 0x309(0x03)
	float CurrentFOV; // 0x30c(0x04)
	float DefaultFOVSpeed; // 0x310(0x04)
	bool IncreaseFOV; // 0x314(0x01)
	bool DecreaseFOV; // 0x315(0x01)
	bool LocalSpectator; // 0x316(0x01)
	char pad_317[0x1]; // 0x317(0x01)
	struct FMulticastInlineDelegate ToggleHelpScreen; // 0x318(0x10)
	float MoveUpAxis; // 0x328(0x04)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_CinematicPawn.BP_CinematicPawn_C.UpdateCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ChangePreset(int32_t Index); // Function BP_CinematicPawn.BP_CinematicPawn_C.ChangePreset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetFOV(); // Function BP_CinematicPawn.BP_CinematicPawn_C.ResetFOV // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickVisuals(); // Function BP_CinematicPawn.BP_CinematicPawn_C.TickVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateFlySpeed(); // Function BP_CinematicPawn.BP_CinematicPawn_C.UpdateFlySpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DecreaseSpeed(); // Function BP_CinematicPawn.BP_CinematicPawn_C.DecreaseSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IncreaseSpeed(); // Function BP_CinematicPawn.BP_CinematicPawn_C.IncreaseSpeed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar1_K2Node_InputActionEvent_13(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar1_K2Node_InputActionEvent_13 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar2_K2Node_InputActionEvent_12(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar2_K2Node_InputActionEvent_12 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar3_K2Node_InputActionEvent_11(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar3_K2Node_InputActionEvent_11 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar4_K2Node_InputActionEvent_10(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar4_K2Node_InputActionEvent_10 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar5_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar5_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar6_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar6_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar7_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar7_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Hotbar0_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Hotbar0_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_FreeLook_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_FreeLook_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_HotbarBack_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_HotbarBack_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_Sprint_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_6(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_6 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadFive_K2Node_InputKeyEvent_5(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFive_K2Node_InputKeyEvent_5 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_4(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_4 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadSix_K2Node_InputKeyEvent_3(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadSix_K2Node_InputKeyEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadFour_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadFour_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_NumPadOne_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_NumPadOne_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpActEvt_HotbarForward_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpActEvt_HotbarForward_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a05090
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_CinematicPawn.BP_CinematicPawn_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SERVER_MovePawn(struct FVector_NetQuantize Location); // Function BP_CinematicPawn.BP_CinematicPawn_C.SERVER_MovePawn // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveDestroyed(); // Function BP_CinematicPawn.BP_CinematicPawn_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_CinematicPawn(int32_t EntryPoint); // Function BP_CinematicPawn.BP_CinematicPawn_C.ExecuteUbergraph_BP_CinematicPawn // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ToggleHelpScreen__DelegateSignature(); // Function BP_CinematicPawn.BP_CinematicPawn_C.ToggleHelpScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

