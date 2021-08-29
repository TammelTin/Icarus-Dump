// Class ChaosCloth.ChaosClothConfig
// Size: 0xb0 (Inherited: 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	float UniformMass; // 0x2c(0x04)
	float TotalMass; // 0x30(0x04)
	float Density; // 0x34(0x04)
	float MinPerParticleMass; // 0x38(0x04)
	float EdgeStiffness; // 0x3c(0x04)
	float BendingStiffness; // 0x40(0x04)
	bool bUseBendingElements; // 0x44(0x01)
	char pad_45[0x3]; // 0x45(0x03)
	float AreaStiffness; // 0x48(0x04)
	float VolumeStiffness; // 0x4c(0x04)
	float StrainLimitingStiffness; // 0x50(0x04)
	float LimitScale; // 0x54(0x04)
	enum class EChaosClothTetherMode TetherMode; // 0x58(0x01)
	bool bUseGeodesicDistance; // 0x59(0x01)
	char pad_5A[0x2]; // 0x5a(0x02)
	float ShapeTargetStiffness; // 0x5c(0x04)
	float CollisionThickness; // 0x60(0x04)
	float FrictionCoefficient; // 0x64(0x04)
	bool bUseSelfCollisions; // 0x68(0x01)
	char pad_69[0x3]; // 0x69(0x03)
	float SelfCollisionThickness; // 0x6c(0x04)
	bool bUseLegacyBackstop; // 0x70(0x01)
	char pad_71[0x3]; // 0x71(0x03)
	float DampingCoefficient; // 0x74(0x04)
	bool bUsePointBasedWindModel; // 0x78(0x01)
	char pad_79[0x3]; // 0x79(0x03)
	float DragCoefficient; // 0x7c(0x04)
	float LiftCoefficient; // 0x80(0x04)
	bool bUseGravityOverride; // 0x84(0x01)
	char pad_85[0x3]; // 0x85(0x03)
	float GravityScale; // 0x88(0x04)
	struct FVector Gravity; // 0x8c(0x0c)
	float AnimDriveSpringStiffness; // 0x98(0x04)
	struct FVector LinearVelocityScale; // 0x9c(0x0c)
	float AngularVelocityScale; // 0xa8(0x04)
	bool bUseTetrahedralConstraints; // 0xac(0x01)
	bool bUseThinShellVolumeConstraints; // 0xad(0x01)
	bool bUseContinuousCollisionDetection; // 0xae(0x01)
	char pad_AF[0x1]; // 0xaf(0x01)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size: 0x58 (Inherited: 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x04)
	int32_t SubdivisionCount; // 0x2c(0x04)
	float SelfCollisionThickness; // 0x30(0x04)
	float CollisionThickness; // 0x34(0x04)
	bool bUseDampingOverride; // 0x38(0x01)
	char pad_39[0x3]; // 0x39(0x03)
	float Damping; // 0x3c(0x04)
	bool bUseGravityOverride; // 0x40(0x01)
	char pad_41[0x3]; // 0x41(0x03)
	float GravityScale; // 0x44(0x04)
	struct FVector Gravity; // 0x48(0x0c)
	bool bUseLocalSpaceSimulation; // 0x54(0x01)
	bool bUseXPBDConstraints; // 0x55(0x01)
	char pad_56[0x2]; // 0x56(0x02)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size: 0x28 (Inherited: 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size: 0x58 (Inherited: 0x30)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	char pad_30[0x28]; // 0x30(0x28)
};

