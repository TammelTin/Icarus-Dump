// Class IcarusPhysXVehicles.WheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x138)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char pad_138[0x8]; // 0x138(0x08)
	char bDeprecatedSpringOffsetMode : 1; // 0x140(0x01)
	char bReverseAsBrake : 1; // 0x140(0x01)
	char bUseRVOAvoidance : 1; // 0x140(0x01)
	char bRawHandbrakeInput : 1; // 0x140(0x01)
	char bRawGearUpInput : 1; // 0x140(0x01)
	char bRawGearDownInput : 1; // 0x140(0x01)
	char pad_140_6 : 2; // 0x140(0x01)
	char pad_141[0x3]; // 0x141(0x03)
	char bWasAvoidanceUpdated : 1; // 0x144(0x01)
	char pad_144_1 : 7; // 0x144(0x01)
	char pad_145[0x3]; // 0x145(0x03)
	float Mass; // 0x148(0x04)
	char pad_14C[0x4]; // 0x14c(0x04)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x150(0x10)
	float DragCoefficient; // 0x160(0x04)
	float ChassisWidth; // 0x164(0x04)
	float ChassisHeight; // 0x168(0x04)
	float DragArea; // 0x16c(0x04)
	float EstimatedMaxEngineSpeed; // 0x170(0x04)
	float MaxEngineRPM; // 0x174(0x04)
	float DebugDragMagnitude; // 0x178(0x04)
	struct FVector InertiaTensorScale; // 0x17c(0x0c)
	float MinNormalizedTireLoad; // 0x188(0x04)
	float MinNormalizedTireLoadFiltered; // 0x18c(0x04)
	float MaxNormalizedTireLoad; // 0x190(0x04)
	float MaxNormalizedTireLoadFiltered; // 0x194(0x04)
	float ThresholdLongitudinalSpeed; // 0x198(0x04)
	int32_t LowForwardSpeedSubStepCount; // 0x19c(0x04)
	int32_t HighForwardSpeedSubStepCount; // 0x1a0(0x04)
	char pad_1A4[0x4]; // 0x1a4(0x04)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1a8(0x10)
	char pad_1B8[0x68]; // 0x1b8(0x68)
	float RVOAvoidanceRadius; // 0x220(0x04)
	float RVOAvoidanceHeight; // 0x224(0x04)
	float AvoidanceConsiderationRadius; // 0x228(0x04)
	float RVOSteeringStep; // 0x22c(0x04)
	float RVOThrottleStep; // 0x230(0x04)
	int32_t AvoidanceUID; // 0x234(0x04)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x238(0x04)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x23c(0x04)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x240(0x04)
	float AvoidanceWeight; // 0x244(0x04)
	struct FVector PendingLaunchVelocity; // 0x248(0x0c)
	bool bShowDebugOverride; // 0x254(0x01)
	bool bOverrideWakeUp; // 0x255(0x01)
	char pad_256[0x2]; // 0x256(0x02)
	struct FReplicatedVehicleState ReplicatedState; // 0x258(0x14)
	char pad_26C[0x4]; // 0x26c(0x04)
	float RawSteeringInput; // 0x270(0x04)
	float RawThrottleInput; // 0x274(0x04)
	float RawBrakeInput; // 0x278(0x04)
	float SteeringInput; // 0x27c(0x04)
	float ThrottleInput; // 0x280(0x04)
	float BrakeInput; // 0x284(0x04)
	float HandbrakeInput; // 0x288(0x04)
	float IdleBrakeInput; // 0x28c(0x04)
	float StopThreshold; // 0x290(0x04)
	float WrongDirectionThreshold; // 0x294(0x04)
	struct FVehicleInputRate ThrottleInputRate; // 0x298(0x08)
	struct FVehicleInputRate BrakeInputRate; // 0x2a0(0x08)
	struct FVehicleInputRate HandbrakeInputRate; // 0x2a8(0x08)
	struct FVehicleInputRate SteeringInputRate; // 0x2b0(0x08)
	char pad_2B8[0x28]; // 0x2b8(0x28)
	struct AController* OverrideController; // 0x2e0(0x08)

	void SetUseAutoGears(bool bUseAuto); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // @ game+0x94ec80
	void SetThrottleInput(float Throttle); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput // (Final|Native|Public|BlueprintCallable) // @ game+0x94ec00
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // @ game+0x94eb30
	void SetSteeringInput(float Steering); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput // (Final|Native|Public|BlueprintCallable) // @ game+0x94eab0
	void SetHandbrakeInput(bool bNewHandbrake); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0x94e830
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask GroupMask); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e7a0
	void SetGroupsToIgnore(int32_t GroupFlags); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore // (Final|Native|Public|BlueprintCallable) // @ game+0x94e710
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask GroupMask); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e680
	void SetGroupsToAvoid(int32_t GroupFlags); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid // (Final|Native|Public|BlueprintCallable) // @ game+0x94e5f0
	void SetGearUp(bool bNewGearUp); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGearUp // (Final|Native|Public|BlueprintCallable) // @ game+0x94e560
	void SetGearDown(bool bNewGearDown); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetGearDown // (Final|Native|Public|BlueprintCallable) // @ game+0x94e4d0
	void SetBrakeInput(float Brake); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput // (Final|Native|Public|BlueprintCallable) // @ game+0x94e2b0
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask GroupMask); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x94e190
	void SetAvoidanceGroup(int32_t GroupFlags); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup // (Final|Native|Public|BlueprintCallable) // @ game+0x94e100
	void SetAvoidanceEnabled(bool bEnable); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled // (Final|Native|Public|BlueprintCallable) // @ game+0x94e070
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x94de80
	bool GetUseAutoGears(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94ddd0
	int32_t GetTargetGear(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dda0
	struct FReplicatedVehicleState GetReplicatedVehicleState(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetReplicatedVehicleState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dca0
	float GetForwardSpeed(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dc10
	float GetEngineRotationSpeed(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dbe0
	float GetEngineMaxRotationSpeed(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dbb0
	int32_t GetCurrentGear(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94db80
};

// Class IcarusPhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size: 0x2e8 (Inherited: 0x2e8)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function IcarusPhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // @ game+0x94e9e0
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function IcarusPhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x94e400
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function IcarusPhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // @ game+0x94e330
};

// Class IcarusPhysXVehicles.TireConfig
// Size: 0x50 (Inherited: 0x30)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30(0x04)
	char pad_34[0x4]; // 0x34(0x04)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	char pad_48[0x8]; // 0x48(0x08)
};

// Class IcarusPhysXVehicles.VehicleAnimInstance
// Size: 0xa50 (Inherited: 0x2c0)
struct UVehicleAnimInstance : UAnimInstance {
	char pad_2C0[0x780]; // 0x2c0(0x780)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40(0x08)
	char pad_A48[0x8]; // 0xa48(0x08)

	struct AWheeledVehicle* GetVehicle(); // Function IcarusPhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x94de00
};

// Class IcarusPhysXVehicles.VehicleWheel
// Size: 0x240 (Inherited: 0x28)
struct UVehicleWheel : UObject {
	struct FVector Offset; // 0x28(0x0c)
	float ShapeRadius; // 0x34(0x04)
	float ShapeWidth; // 0x38(0x04)
	float Mass; // 0x3c(0x04)
	float MOIRatio; // 0x40(0x04)
	float DampingRate; // 0x44(0x04)
	float SteerAngle; // 0x48(0x04)
	bool bAffectedByHandbrake; // 0x4c(0x01)
	char pad_4D[0x3]; // 0x4d(0x03)
	struct UTireType* TireType; // 0x50(0x08)
	struct UTireConfig* TireConfig; // 0x58(0x08)
	float LatStiffMaxLoad; // 0x60(0x04)
	float LatStiffValue; // 0x64(0x04)
	float LongStiffValue; // 0x68(0x04)
	float SuspensionForceOffset; // 0x6c(0x04)
	float SuspensionMaxRaise; // 0x70(0x04)
	float SuspensionMaxDrop; // 0x74(0x04)
	float SuspensionNaturalFrequency; // 0x78(0x04)
	float SuspensionDampingRatio; // 0x7c(0x04)
	struct FBodyInstance Collision; // 0x80(0x158)
	enum class EWheelSweepType SweepType; // 0x1d8(0x01)
	char pad_1D9[0x3]; // 0x1d9(0x03)
	float MaxBrakeTorque; // 0x1dc(0x04)
	float MaxHandBrakeTorque; // 0x1e0(0x04)
	char pad_1E4[0x4]; // 0x1e4(0x04)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x1e8(0x08)
	int32_t WheelIndex; // 0x1f0(0x04)
	float LongSlip; // 0x1f4(0x04)
	float LatSlip; // 0x1f8(0x04)
	float NormalizedTireLoad; // 0x1fc(0x04)
	float TireLoad; // 0x200(0x04)
	float WheelTorque; // 0x204(0x04)
	float LongForce; // 0x208(0x04)
	float LatForce; // 0x20c(0x04)
	struct FVector Location; // 0x210(0x0c)
	struct FVector OldLocation; // 0x21c(0x0c)
	struct FVector Velocity; // 0x228(0x0c)
	char pad_234[0xc]; // 0x234(0x0c)

	bool IsInAir(); // Function IcarusPhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94de50
	float GetSuspensionOffset(); // Function IcarusPhysXVehicles.VehicleWheel.GetSuspensionOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dd70
	float GetSteerAngle(); // Function IcarusPhysXVehicles.VehicleWheel.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dd40
	float GetRotationAngle(); // Function IcarusPhysXVehicles.VehicleWheel.GetRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dd10
};

// Class IcarusPhysXVehicles.VehicleMovementWheelTracked
// Size: 0x250 (Inherited: 0x240)
struct UVehicleMovementWheelTracked : UVehicleWheel {
	struct FVector SuspensionDirection; // 0x240(0x0c)
	char pad_24C[0x4]; // 0x24c(0x04)
};

// Class IcarusPhysXVehicles.WheeledVehicle
// Size: 0x290 (Inherited: 0x280)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* VehicleMesh; // 0x280(0x08)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x288(0x08)

	struct UWheeledVehicleMovementComponent* GetVehicleMovement(); // Function IcarusPhysXVehicles.WheeledVehicle.GetVehicleMovement // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94de30
	struct USkeletalMeshComponent* GetMesh(); // Function IcarusPhysXVehicles.WheeledVehicle.GetMesh // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dc80
};

// Class IcarusPhysXVehicles.WheeledVehicleMovementComponent4W
// Size: 0x460 (Inherited: 0x2e8)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x2e8(0xa0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x388(0x1c)
	float AckermannAccuracy; // 0x3a4(0x04)
	struct FVehicleTransmissionData TransmissionSetup; // 0x3a8(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3d8(0x88)
};

// Class IcarusPhysXVehicles.WheeledVehicleMovementComponentNW
// Size: 0x460 (Inherited: 0x2e8)
struct UWheeledVehicleMovementComponentNW : UWheeledVehicleMovementComponent {
	struct FVehicleNWEngineData EngineSetup; // 0x2e8(0xa0)
	struct TArray<struct FVehicleNWWheelDifferentialData> DifferentialSetup; // 0x388(0x10)
	struct FVehicleNWTransmissionData TransmissionSetup; // 0x398(0x40)
	struct FRuntimeFloatCurve SteeringCurve; // 0x3d8(0x88)
};

// Class IcarusPhysXVehicles.WheeledVehicleMovementComponentTank
// Size: 0x410 (Inherited: 0x2e8)
struct UWheeledVehicleMovementComponentTank : UWheeledVehicleMovementComponent {
	struct FVehicleTankEngineData EngineSetup; // 0x2e8(0xa0)
	struct FVehicleTankTransmissionData TransmissionSetup; // 0x388(0x40)
	float RawBothTracksThrottleInput; // 0x3c8(0x04)
	float RawLeftTrackThrottleInput; // 0x3cc(0x04)
	float RawRightTrackThrottleInput; // 0x3d0(0x04)
	float BothTracksThrottleInput; // 0x3d4(0x04)
	float LeftTrackThrottleInput; // 0x3d8(0x04)
	float RightTrackThrottleInput; // 0x3dc(0x04)
	struct TArray<float> WheelSpeeds; // 0x3e0(0x10)
	struct TArray<float> WheelAngles; // 0x3f0(0x10)
	float LeftTrackSpeed; // 0x400(0x04)
	float RightTrackSpeed; // 0x404(0x04)
	char pad_408[0x8]; // 0x408(0x08)

	void SetRightTrackThrottleInput(float InThrottle); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponentTank.SetRightTrackThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x94e950
	void SetLeftTrackThrottleInput(float InThrottle); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponentTank.SetLeftTrackThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x94e8c0
	void SetBothTracksThrottleInput(float InThrottle); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponentTank.SetBothTracksThrottleInput // (Native|Public|BlueprintCallable) // @ game+0x94e220
	float GetRightTrackSpeed(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponentTank.GetRightTrackSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dcd0
	float GetLeftTrackSpeed(); // Function IcarusPhysXVehicles.WheeledVehicleMovementComponentTank.GetLeftTrackSpeed // (Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x94dc40
};

