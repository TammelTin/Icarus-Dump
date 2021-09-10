// BlueprintGeneratedClass BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C
// Size: 0xe0 (Inherited: 0xc8)
struct UBP_FLODInfluence_Lightning_C : UFLODInfluenceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct TArray<struct FFLODInstanceID> ActiveInfluenceInstances; // 0xd0(0x10)

	void RemoveLightningInfluencedInstance(struct FFLODInstanceID Instance); // Function BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C.RemoveLightningInfluencedInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddLightningInfluencedInstance(struct FFLODInstanceID Instance); // Function BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C.AddLightningInfluencedInstance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetLightningStrikeTarget(struct TArray<struct AActor*> TargetActors, float Radius, struct FFLODInstanceID FoundInstance, bool Found); // Function BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C.GetLightningStrikeTarget // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateActiveInfluences(); // Function BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C.UpdateActiveInfluences // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FLODInfluence_Lightning(int32_t EntryPoint); // Function BP_FLODInfluence_Lightning.BP_FLODInfluence_Lightning_C.ExecuteUbergraph_BP_FLODInfluence_Lightning // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

