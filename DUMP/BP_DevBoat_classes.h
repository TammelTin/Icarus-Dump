// BlueprintGeneratedClass BP_DevBoat.BP_DevBoat_C
// Size: 0x2d8 (Inherited: 0x280)
struct ABP_DevBoat_C : APawn {
	struct UFloatingPawnMovement* FloatingPawnMovement; // 0x280(0x08)
	struct UCameraComponent* Camera; // 0x288(0x08)
	struct USpringArmComponent* SpringArm; // 0x290(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x298(0x08)
	struct UChildActorComponent* PassengerSeat4; // 0x2a0(0x08)
	struct UChildActorComponent* PassengerSeat3; // 0x2a8(0x08)
	struct UChildActorComponent* PassengerSeat2; // 0x2b0(0x08)
	struct UChildActorComponent* DriverSeat; // 0x2b8(0x08)
	struct UChildActorComponent* PassengerSeat1; // 0x2c0(0x08)
	struct UStaticMeshComponent* PlayerCollision; // 0x2c8(0x08)
	struct UStaticMeshComponent* Mesh; // 0x2d0(0x08)

	void UpdateCamera(struct FVector InLocation, struct FRotator InRotation, float InFOV, bool ForceUpdate, struct FVector OutLocation, struct FRotator OutRotation, float OutFOV, bool Return); // Function BP_DevBoat.BP_DevBoat_C.UpdateCamera // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

