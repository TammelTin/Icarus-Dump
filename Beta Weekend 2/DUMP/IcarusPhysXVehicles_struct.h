// Enum IcarusPhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8 {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3
};

// Enum IcarusPhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8 {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6
};

// ScriptStruct IcarusPhysXVehicles.AnimNode_WheelHandler
// Size: 0xe0 (Inherited: 0xc8)
struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	char pad_C8[0x18]; // 0xc8(0x18)
};

// ScriptStruct IcarusPhysXVehicles.TireConfigMaterialFriction
// Size: 0x10 (Inherited: 0x00)
struct FTireConfigMaterialFriction {
	struct UPhysicalMaterial* PhysicalMaterial; // 0x00(0x08)
	float FrictionScale; // 0x08(0x04)
	char pad_C[0x4]; // 0x0c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleAnimInstanceProxy
// Size: 0x770 (Inherited: 0x760)
struct FVehicleAnimInstanceProxy : FAnimInstanceProxy {
	char pad_760[0x10]; // 0x760(0x10)
};

// ScriptStruct IcarusPhysXVehicles.VehicleInputRate
// Size: 0x08 (Inherited: 0x00)
struct FVehicleInputRate {
	float RiseRate; // 0x00(0x04)
	float FallRate; // 0x04(0x04)
};

// ScriptStruct IcarusPhysXVehicles.ReplicatedVehicleState
// Size: 0x14 (Inherited: 0x00)
struct FReplicatedVehicleState {
	float SteeringInput; // 0x00(0x04)
	float ThrottleInput; // 0x04(0x04)
	float BrakeInput; // 0x08(0x04)
	float HandbrakeInput; // 0x0c(0x04)
	int32_t CurrentGear; // 0x10(0x04)
};

// ScriptStruct IcarusPhysXVehicles.WheelSetup
// Size: 0x28 (Inherited: 0x00)
struct FWheelSetup {
	struct UVehicleWheel* WheelClass; // 0x00(0x08)
	struct FName BoneName; // 0x08(0x08)
	struct FVector AdditionalOffset; // 0x10(0x0c)
	bool bDisableSteering; // 0x1c(0x01)
	char pad_1D[0x3]; // 0x1d(0x03)
	struct UVehicleWheel* WheelTemplate; // 0x20(0x08)
};

// ScriptStruct IcarusPhysXVehicles.VehicleTransmissionData
// Size: 0x30 (Inherited: 0x00)
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x10(0x10)
	float ReverseGearRatio; // 0x20(0x04)
	float NeutralGearUpRatio; // 0x24(0x04)
	float ClutchStrength; // 0x28(0x04)
	char pad_2C[0x4]; // 0x2c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float DampingRateFullThrottle; // 0x90(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleDifferential4WData
// Size: 0x1c (Inherited: 0x00)
struct FVehicleDifferential4WData {
	enum class EVehicleDifferential4W DifferentialType; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float FrontRearSplit; // 0x04(0x04)
	float FrontLeftRightSplit; // 0x08(0x04)
	float RearLeftRightSplit; // 0x0c(0x04)
	float CentreBias; // 0x10(0x04)
	float FrontBias; // 0x14(0x04)
	float RearBias; // 0x18(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleNWTransmissionData
// Size: 0x40 (Inherited: 0x00)
struct FVehicleNWTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FVehicleNWGearData> ForwardGears; // 0x10(0x10)
	struct TArray<struct FVehicleNWGearData> BackwardGears; // 0x20(0x10)
	float ReverseGearRatio; // 0x30(0x04)
	float NeutralGearUpRatio; // 0x34(0x04)
	float NeutralGearDownRatio; // 0x38(0x04)
	float ClutchStrength; // 0x3c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleNWGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleNWGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleNWEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleNWEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float DampingRateFullThrottle; // 0x90(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleNWWheelDifferentialData
// Size: 0x01 (Inherited: 0x00)
struct FVehicleNWWheelDifferentialData {
	bool bDriven; // 0x00(0x01)
};

// ScriptStruct IcarusPhysXVehicles.VehicleTankTransmissionData
// Size: 0x40 (Inherited: 0x00)
struct FVehicleTankTransmissionData {
	bool bUseGearAutoBox; // 0x00(0x01)
	char pad_1[0x3]; // 0x01(0x03)
	float GearSwitchTime; // 0x04(0x04)
	float GearAutoBoxLatency; // 0x08(0x04)
	float FinalRatio; // 0x0c(0x04)
	struct TArray<struct FVehicleTankGearData> ForwardGears; // 0x10(0x10)
	struct TArray<struct FVehicleTankGearData> BackwardGears; // 0x20(0x10)
	float ReverseGearRatio; // 0x30(0x04)
	float NeutralGearUpRatio; // 0x34(0x04)
	float NeutralGearDownRatio; // 0x38(0x04)
	float ClutchStrength; // 0x3c(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleTankGearData
// Size: 0x0c (Inherited: 0x00)
struct FVehicleTankGearData {
	float Ratio; // 0x00(0x04)
	float DownRatio; // 0x04(0x04)
	float UpRatio; // 0x08(0x04)
};

// ScriptStruct IcarusPhysXVehicles.VehicleTankEngineData
// Size: 0xa0 (Inherited: 0x00)
struct FVehicleTankEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x00(0x88)
	float MaxRPM; // 0x88(0x04)
	float MOI; // 0x8c(0x04)
	float DampingRateFullThrottle; // 0x90(0x04)
	float DampingRateZeroThrottleClutchEngaged; // 0x94(0x04)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98(0x04)
	char pad_9C[0x4]; // 0x9c(0x04)
};

