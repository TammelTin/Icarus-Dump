// BlueprintGeneratedClass BP_DestructableHarvest.BP_DestructableHarvest_C
// Size: 0x25c (Inherited: 0x238)
struct ABP_DestructableHarvest_C : ADestructibleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x08)
	float OffsetEmitter; // 0x240(0x04)
	char pad_244[0x4]; // 0x244(0x04)
	struct UNiagaraSystem* NiagaraEmitter; // 0x248(0x08)
	float EmitterHeight; // 0x250(0x04)
	float HeightOffsetMultiplier; // 0x254(0x04)
	float DestructionImpulse; // 0x258(0x04)

	void ReceiveBeginPlay(); // Function BP_DestructableHarvest.BP_DestructableHarvest_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void DelayedDestroy(); // Function BP_DestructableHarvest.BP_DestructableHarvest_C.DelayedDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DestructableHarvest(int32_t EntryPoint); // Function BP_DestructableHarvest.BP_DestructableHarvest_C.ExecuteUbergraph_BP_DestructableHarvest // (Final|UbergraphFunction) // @ game+0x1a05090
};

