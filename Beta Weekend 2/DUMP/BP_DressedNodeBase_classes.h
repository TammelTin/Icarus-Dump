// BlueprintGeneratedClass BP_DressedNodeBase.BP_DressedNodeBase_C
// Size: 0x3f0 (Inherited: 0x3ac)
struct ABP_DressedNodeBase_C : ABP_ResourceNodeBase_C {
	char pad_3AC[0x4]; // 0x3ac(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b0(0x08)
	struct TArray<struct FName> Sockets; // 0x3b8(0x10)
	float PopulatedPercentage; // 0x3c8(0x04)
	char pad_3CC[0x4]; // 0x3cc(0x04)
	struct UStaticMesh* DressingMesh; // 0x3d0(0x08)
	int32_t NumSocketsUsed; // 0x3d8(0x04)
	char pad_3DC[0x4]; // 0x3dc(0x04)
	struct TArray<struct UStaticMeshComponent*> DressingMeshes; // 0x3e0(0x10)

	void UpdateDressing(); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.UpdateDressing // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateNodeVisuals(bool Success); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.UpdateNodeVisuals // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void BndEvt__FLODComponent_K2Node_ComponentBoundEvent_0_OnActorRevealing__DelegateSignature(struct UFLODActorComponent* Component, struct AActor* Actor, struct FTransform Transform); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.BndEvt__FLODComponent_K2Node_ComponentBoundEvent_0_OnActorRevealing__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_DressedNodeBase(int32_t EntryPoint); // Function BP_DressedNodeBase.BP_DressedNodeBase_C.ExecuteUbergraph_BP_DressedNodeBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

