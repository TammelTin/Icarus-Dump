// BlueprintGeneratedClass BP_BoatSeat_Driver.BP_BoatSeat_Driver_C
// Size: 0x370 (Inherited: 0x368)
struct ABP_BoatSeat_Driver_C : ABP_VehicleSeat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.UpdateCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FRotator GetSeatedPlayerControlRotation(); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.GetSeatedPlayerControlRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void UpdateSeatedControllerRotation(); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.UpdateSeatedControllerRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCameraPerspective(); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.UpdateCameraPerspective // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct APawn* GetPossesTarget(); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.GetPossesTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void GetVehicleMovement(struct UWheeledVehicleMovementComponent* VehicleMovement); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.GetVehicleMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	bool IsDriverSeat(); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.IsDriverSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool LeaveSeat(bool bChangeSeat, bool bForce); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.LeaveSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_BoatSeat_Driver(int32_t EntryPoint); // Function BP_BoatSeat_Driver.BP_BoatSeat_Driver_C.ExecuteUbergraph_BP_BoatSeat_Driver // (Final|UbergraphFunction) // @ game+0x1a38c80
};

