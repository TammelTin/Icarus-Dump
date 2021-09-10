// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosDebugDrawComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size: 0xb8 (Inherited: 0xb0)
struct UChaosEventListenerComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size: 0x270 (Inherited: 0xb8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	char pad_B8[0x110]; // 0xb8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	char pad_268[0x8]; // 0x268(0x08)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size: 0x28 (Inherited: 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3719310
};

// Class ChaosSolverEngine.ChaosSolver
// Size: 0x28 (Inherited: 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size: 0x318 (Inherited: 0x220)
struct AChaosSolverActor : AActor {
	struct FChaosSolverConfiguration Properties; // 0x220(0x68)
	float TimeStepMultiplier; // 0x288(0x04)
	int32_t CollisionIterations; // 0x28c(0x04)
	int32_t PushOutIterations; // 0x290(0x04)
	int32_t PushOutPairIterations; // 0x294(0x04)
	float ClusterConnectionFactor; // 0x298(0x04)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x29c(0x01)
	bool DoGenerateCollisionData; // 0x29d(0x01)
	char pad_29E[0x2]; // 0x29e(0x02)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2a0(0x10)
	bool DoGenerateBreakingData; // 0x2b0(0x01)
	char pad_2B1[0x3]; // 0x2b1(0x03)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2b4(0x10)
	bool DoGenerateTrailingData; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2c8(0x10)
	float MassScale; // 0x2d8(0x04)
	bool bGenerateContactGraph; // 0x2dc(0x01)
	bool bHasFloor; // 0x2dd(0x01)
	char pad_2DE[0x2]; // 0x2de(0x02)
	float FloorHeight; // 0x2e0(0x04)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2e4(0x03)
	char pad_2E7[0x1]; // 0x2e7(0x01)
	struct UBillboardComponent* SpriteComponent; // 0x2e8(0x08)
	char pad_2F0[0x18]; // 0x2f0(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x308(0x08)
	char pad_310[0x8]; // 0x310(0x08)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // @ game+0xe2b6b0
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // @ game+0x3719410
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size: 0x58 (Inherited: 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	char pad_38[0x8]; // 0x38(0x08)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

