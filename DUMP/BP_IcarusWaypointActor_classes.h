// BlueprintGeneratedClass BP_IcarusWaypointActor.BP_IcarusWaypointActor_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_IcarusWaypointActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	float refreshRate; // 0x230(0x04)
	struct FVector2D MapLocationCache; // 0x234(0x08)
	char pad_23C[0x4]; // 0x23c(0x04)
	struct AActor* LinkedActor; // 0x240(0x08)
	int32_t waypointType; // 0x248(0x04)
	char pad_24C[0x4]; // 0x24c(0x04)
	struct ABP_IcarusPlayerState_C* OwningPlayerState; // 0x250(0x08)

	void CleanUpWaypointRefs(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.CleanUpWaypointRefs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ServerKillWaypoint(); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ServerKillWaypoint // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_IcarusWaypointActor(int32_t EntryPoint); // Function BP_IcarusWaypointActor.BP_IcarusWaypointActor_C.ExecuteUbergraph_BP_IcarusWaypointActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

