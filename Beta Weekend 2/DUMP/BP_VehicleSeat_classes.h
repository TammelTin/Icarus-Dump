// BlueprintGeneratedClass BP_VehicleSeat.BP_VehicleSeat_C
// Size: 0x368 (Inherited: 0x345)
struct ABP_VehicleSeat_C : ABP_SeatBase_C {
	char pad_345[0x3]; // 0x345(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USceneComponent* Exit_4; // 0x350(0x08)
	struct USceneComponent* Exit_3; // 0x358(0x08)
	struct USceneComponent* Exit_2; // 0x360(0x08)

	void OnServerChangeSeat(int32_t SeatIndex); // Function BP_VehicleSeat.BP_VehicleSeat_C.OnServerChangeSeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InputChangeSeat(int32_t SeatIndex); // Function BP_VehicleSeat.BP_VehicleSeat_C.InputChangeSeat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_ChangeSeat1_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_VehicleSeat.BP_VehicleSeat_C.InpActEvt_ChangeSeat1_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_ChangeSeat2_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_VehicleSeat.BP_VehicleSeat_C.InpActEvt_ChangeSeat2_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_ChangeSeat3_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_VehicleSeat.BP_VehicleSeat_C.InpActEvt_ChangeSeat3_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_ChangeSeat4_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_VehicleSeat.BP_VehicleSeat_C.InpActEvt_ChangeSeat4_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_V_K2Node_InputKeyEvent_1(struct FKey Key); // Function BP_VehicleSeat.BP_VehicleSeat_C.InpActEvt_V_K2Node_InputKeyEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void OnRep_AttachedToVehicle(); // Function BP_VehicleSeat.BP_VehicleSeat_C.OnRep_AttachedToVehicle // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ServerChangeSeat(int32_t SeatIndex); // Function BP_VehicleSeat.BP_VehicleSeat_C.ServerChangeSeat // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OpenVehicleInventory(); // Function BP_VehicleSeat.BP_VehicleSeat_C.OpenVehicleInventory // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator EnterRotation); // Function BP_VehicleSeat.BP_VehicleSeat_C.AttachPlayerToSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector ExitLocation, struct FRotator ExitRotation, bool bChangeSeat); // Function BP_VehicleSeat.BP_VehicleSeat_C.DetachPlayerFromSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleSeat(int32_t EntryPoint); // Function BP_VehicleSeat.BP_VehicleSeat_C.ExecuteUbergraph_BP_VehicleSeat // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

