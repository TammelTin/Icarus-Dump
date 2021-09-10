// BlueprintGeneratedClass BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C
// Size: 0x370 (Inherited: 0x368)
struct ABP_VehicleSeat_Driver_C : ABP_VehicleSeat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)

	struct APawn* GetPossesTarget(); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.GetPossesTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void GetVehicleMovement(struct UWheeledVehicleMovementComponent* VehicleMovement); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.GetVehicleMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool IsDriverSeat(); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.IsDriverSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool LeaveSeat(bool bChangeSeat, bool bForce); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.LeaveSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Handbrake_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpActEvt_Handbrake_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Handbrake_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpActEvt_Handbrake_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_ToggleRotationMode_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpActEvt_ToggleRotationMode_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_X_K2Node_InputKeyEvent_2(struct FKey Key); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpActEvt_X_K2Node_InputKeyEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_L_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpActEvt_L_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void DisconnectTowbar(); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.DisconnectTowbar // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator EnterRotation); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.AttachPlayerToSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector ExitLocation, struct FRotator ExitRotation, bool bChangeSeat); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.DetachPlayerFromSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void Server_ToggleHeadlight(bool Active); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.Server_ToggleHeadlight // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleSeat_Driver(int32_t EntryPoint); // Function BP_VehicleSeat_Driver.BP_VehicleSeat_Driver_C.ExecuteUbergraph_BP_VehicleSeat_Driver // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

