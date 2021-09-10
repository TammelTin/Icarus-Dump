// BlueprintGeneratedClass BP_FLODTreeComponent.BP_FLODTreeComponent_C
// Size: 0x138 (Inherited: 0x128)
struct UBP_FLODTreeComponent_C : UFLODActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x128(0x08)
	struct ATreeBase* OwnerTree; // 0x130(0x08)

	bool RevealImpl(struct FTransform Transform); // Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.RevealImpl // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ConcealingImpl(); // Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ConcealingImpl // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FLODTreeComponent(int32_t EntryPoint); // Function BP_FLODTreeComponent.BP_FLODTreeComponent_C.ExecuteUbergraph_BP_FLODTreeComponent // (Final|UbergraphFunction) // @ game+0x1a38c80
};

