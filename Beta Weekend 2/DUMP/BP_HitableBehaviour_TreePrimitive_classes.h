// BlueprintGeneratedClass BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C
// Size: 0xd8 (Inherited: 0xd0)
struct UBP_HitableBehaviour_TreePrimitive_C : UHitableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd0(0x08)

	bool ConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // Function BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C.ConsumeHit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CanConsumeHit(struct UActorState* ActorStateIn, struct FIcarusDamagePacket DamagePacket); // Function BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C.CanConsumeHit // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_HitableBehaviour_TreePrimitive(int32_t EntryPoint); // Function BP_HitableBehaviour_TreePrimitive.BP_HitableBehaviour_TreePrimitive_C.ExecuteUbergraph_BP_HitableBehaviour_TreePrimitive // (Final|UbergraphFunction) // @ game+0x1a38c80
};

