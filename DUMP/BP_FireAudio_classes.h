// BlueprintGeneratedClass BP_FireAudio.BP_FireAudio_C
// Size: 0x241 (Inherited: 0x220)
struct ABP_FireAudio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UAudioContextComponent* AudioContext; // 0x228(0x08)
	struct UMultiPointAudioEmitter* MultiPointAudioEmitter; // 0x230(0x08)
	struct UFMODEvent* FMODEvent; // 0x238(0x08)
	bool Debug; // 0x240(0x01)

	void ReceiveBeginPlay(); // Function BP_FireAudio.BP_FireAudio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void AddFlammableInstance(struct UFlammableInstance* Instance); // Function BP_FireAudio.BP_FireAudio_C.AddFlammableInstance // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddNode(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FireAudio.BP_FireAudio_C.AddNode // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFireInstanceDestroyed(); // Function BP_FireAudio.BP_FireAudio_C.OnFireInstanceDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableTransferredAway(struct UFlammableInstance* Instance); // Function BP_FireAudio.BP_FireAudio_C.OnFlammableTransferredAway // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableExtinguished(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_FireAudio.BP_FireAudio_C.OnFlammableExtinguished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveNode(struct UFlammableInstance* Instance); // Function BP_FireAudio.BP_FireAudio_C.RemoveNode // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DelayedDestroy(); // Function BP_FireAudio.BP_FireAudio_C.DelayedDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FireAudio(int32_t EntryPoint); // Function BP_FireAudio.BP_FireAudio_C.ExecuteUbergraph_BP_FireAudio // (Final|UbergraphFunction) // @ game+0x1a05090
};

