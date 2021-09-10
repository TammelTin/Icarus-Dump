// BlueprintGeneratedClass BP_VehicleSeat_Passenger.BP_VehicleSeat_Passenger_C
// Size: 0x371 (Inherited: 0x368)
struct ABP_VehicleSeat_Passenger_C : ABP_VehicleSeat_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x368(0x08)
	bool PlayerHasInput; // 0x370(0x01)

	void AttachPlayerToSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FRotator EnterRotation); // Function BP_VehicleSeat_Passenger.BP_VehicleSeat_Passenger_C.AttachPlayerToSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void DetachPlayerFromSeat(struct AIcarusPlayerCharacter* PlayerCharacter, struct FVector ExitLocation, struct FRotator ExitRotation, bool bChangeSeat); // Function BP_VehicleSeat_Passenger.BP_VehicleSeat_Passenger_C.DetachPlayerFromSeat // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_VehicleSeat_Passenger(int32_t EntryPoint); // Function BP_VehicleSeat_Passenger.BP_VehicleSeat_Passenger_C.ExecuteUbergraph_BP_VehicleSeat_Passenger // (Final|UbergraphFunction) // @ game+0x1a38c80
};

