// BlueprintGeneratedClass BP_VehicularBase.BP_VehicularBase_C
// Size: 0x169 (Inherited: 0x140)
struct UBP_VehicularBase_C : UVehicularComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x140(0x08)
	struct ABP_VehicleBase_C* VehicleOwner; // 0x148(0x08)
	struct UCurveFloat* ChassisCollisionForceDistanceFilter; // 0x150(0x08)
	struct UCurveFloat* ChassisCollisionDamageFilter; // 0x158(0x08)
	struct UCurveFloat* WheelCollisionDamageFilter; // 0x160(0x08)
	bool DebugCollisions; // 0x168(0x01)

	void FindLinkedComponent(enum class EVehicleComponentType Type, struct UBP_VehicularBase_C* FoundComponent); // Function BP_VehicularBase.BP_VehicularBase_C.FindLinkedComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInteract(struct ABP_IcarusPlayerCharacterSurvival_C* Instigator); // Function BP_VehicularBase.BP_VehicularBase_C.OnInteract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsAlive(bool IsAlive); // Function BP_VehicularBase.BP_VehicularBase_C.IsAlive // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	bool IsFunctional(); // Function BP_VehicularBase.BP_VehicularBase_C.IsFunctional // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void OnFunctionalStateChange(); // Function BP_VehicularBase.BP_VehicularBase_C.OnFunctionalStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnWheelCollision(float ImpactForce, struct FHitResult Hit, bool ApplyDamageOnly); // Function BP_VehicularBase.BP_VehicularBase_C.OnWheelCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnChassisCollision(float ImpactForce, struct FHitResult Hit); // Function BP_VehicularBase.BP_VehicularBase_C.OnChassisCollision // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_VehicularBase.BP_VehicularBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnActorDeath(struct UActorState* ActorState); // Function BP_VehicularBase.BP_VehicularBase_C.OnActorDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_VehicularBase(int32_t EntryPoint); // Function BP_VehicularBase.BP_VehicularBase_C.ExecuteUbergraph_BP_VehicularBase // (Final|UbergraphFunction) // @ game+0x1a05090
};

