// Class ArchVisCharacter.ArchVisCharacter
// Size: 0x520 (Inherited: 0x4c0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x4b8(0x10)
	struct FString LookUpAtRateAxisName; // 0x4c8(0x10)
	struct FString TurnAxisName; // 0x4d8(0x10)
	struct FString TurnAtRateAxisName; // 0x4e8(0x10)
	struct FString MoveForwardAxisName; // 0x4f8(0x10)
	struct FString MoveRightAxisName; // 0x508(0x10)
	float MouseSensitivityScale_Pitch; // 0x518(0x04)
	float MouseSensitivityScale_Yaw; // 0x51c(0x04)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size: 0xb50 (Inherited: 0xb00)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0xb00(0x0c)
	struct FRotator RotationalDeceleration; // 0xb0c(0x0c)
	struct FRotator MaxRotationalVelocity; // 0xb18(0x0c)
	float MinPitch; // 0xb24(0x04)
	float MaxPitch; // 0xb28(0x04)
	float WalkingFriction; // 0xb2c(0x04)
	float WalkingSpeed; // 0xb30(0x04)
	float WalkingAcceleration; // 0xb34(0x04)
	char pad_B38[0x18]; // 0xb38(0x18)
};

