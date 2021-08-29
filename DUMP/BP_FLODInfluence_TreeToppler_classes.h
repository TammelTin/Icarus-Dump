// BlueprintGeneratedClass BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C
// Size: 0x120 (Inherited: 0xc8)
struct UBP_FLODInfluence_TreeToppler_C : UFLODInfluenceComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc8(0x08)
	struct TMap<struct FFLODInstanceID, struct FTreeToppleInfo> PendingToppleInfo; // 0xd0(0x50)

	void ToppleTree(struct ATreeBase* Tree, struct FTreeToppleInfo ToppleInfo); // Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.ToppleTree // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePendingTopple(); // Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.UpdatePendingTopple // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddPendingTreeTopple(struct FFLODInstanceID Instance, struct FTreeToppleInfo ToppleInfo); // Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.AddPendingTreeTopple // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateActiveInfluences(); // Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.UpdateActiveInfluences // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FLODInfluence_TreeToppler(int32_t EntryPoint); // Function BP_FLODInfluence_TreeToppler.BP_FLODInfluence_TreeToppler_C.ExecuteUbergraph_BP_FLODInfluence_TreeToppler // (Final|UbergraphFunction) // @ game+0x1a05090
};

