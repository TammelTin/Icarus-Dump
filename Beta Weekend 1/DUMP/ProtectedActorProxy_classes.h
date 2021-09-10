// BlueprintGeneratedClass ProtectedActorProxy.ProtectedActorProxy_C
// Size: 0x26c (Inherited: 0x220)
struct AProtectedActorProxy_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct ABP_IcarusNPCGOAPCharacter_C* Protector; // 0x230(0x08)
	struct AActor* Protectee; // 0x238(0x08)
	struct UActorState* ProtecteeActorState; // 0x240(0x08)
	struct TArray<struct AController*> RecentAttackers; // 0x248(0x10)
	struct TArray<float> RecentAttackTimes; // 0x258(0x10)
	float RecentAttackLifetime; // 0x268(0x04)

	void ProtectedActorProxy_ActorDamaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function ProtectedActorProxy.ProtectedActorProxy_C.ProtectedActorProxy_ActorDamaged // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProtectedActorProxy_ActorDied(struct UActorState* ActorState); // Function ProtectedActorProxy.ProtectedActorProxy_C.ProtectedActorProxy_ActorDied // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function ProtectedActorProxy.ProtectedActorProxy_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function ProtectedActorProxy.ProtectedActorProxy_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_ProtectedActorProxy(int32_t EntryPoint); // Function ProtectedActorProxy.ProtectedActorProxy_C.ExecuteUbergraph_ProtectedActorProxy // (Final|UbergraphFunction) // @ game+0x1a05090
};

