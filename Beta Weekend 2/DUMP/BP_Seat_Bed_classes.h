// BlueprintGeneratedClass BP_Seat_Bed.BP_Seat_Bed_C
// Size: 0x350 (Inherited: 0x345)
struct ABP_Seat_Bed_C : ABP_SeatBase_C {
	char pad_345[0x3]; // 0x345(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)

	bool FindExit(struct FVector OutExitLocation, struct FRotator OutExitRotation); // Function BP_Seat_Bed.BP_Seat_Bed_C.FindExit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Seat_Bed.BP_Seat_Bed_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OwningBedDestroyed(struct AActor* DestroyedActor); // Function BP_Seat_Bed.BP_Seat_Bed_C.OwningBedDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Seat_Bed(int32_t EntryPoint); // Function BP_Seat_Bed.BP_Seat_Bed_C.ExecuteUbergraph_BP_Seat_Bed // (Final|UbergraphFunction) // @ game+0x1a38c80
};

