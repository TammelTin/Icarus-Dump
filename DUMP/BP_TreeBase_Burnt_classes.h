// BlueprintGeneratedClass BP_TreeBase_Burnt.BP_TreeBase_Burnt_C
// Size: 0x7f9 (Inherited: 0x7ec)
struct ABP_TreeBase_Burnt_C : ABP_TreeBase_C {
	char pad_7EC[0x4]; // 0x7ec(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7f0(0x08)
	bool DoIt; // 0x7f8(0x01)

	void OnAppliedCollisionDamage(float CollisionDamage, struct FHitResult Hit); // Function BP_TreeBase_Burnt.BP_TreeBase_Burnt_C.OnAppliedCollisionDamage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UserConstructionScript(); // Function BP_TreeBase_Burnt.BP_TreeBase_Burnt_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTrasferredFromOther(struct ABP_TreeBase_C* SourceTree, struct UTreePrimitiveComponent* SourcePrimitive); // Function BP_TreeBase_Burnt.BP_TreeBase_Burnt_C.OnTrasferredFromOther // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTransferTreePrimitiveHierarchy(struct UTreePrimitiveComponent* TreePrimitive, struct FTreePrimitiveDetachContext DetachContext, struct ATreeBase* NewTree); // Function BP_TreeBase_Burnt.BP_TreeBase_Burnt_C.OnTransferTreePrimitiveHierarchy // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_TreeBase_Burnt(int32_t EntryPoint); // Function BP_TreeBase_Burnt.BP_TreeBase_Burnt_C.ExecuteUbergraph_BP_TreeBase_Burnt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

