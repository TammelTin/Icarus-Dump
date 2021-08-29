// BlueprintGeneratedClass BP_TreePrimitive.BP_TreePrimitive_C
// Size: 0x558 (Inherited: 0x510)
struct UBP_TreePrimitive_C : UTreePrimitiveComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x510(0x08)
	struct ABP_TreeBase_C* TreeOwner; // 0x518(0x08)
	struct FItemRewardsRowHandle ReplacementRewardsRowHandle; // 0x520(0x18)
	bool SubdivideCopyMeshTransform; // 0x538(0x01)
	bool SubdivideImmediately; // 0x539(0x01)
	bool IsSoftBranch; // 0x53a(0x01)
	char pad_53B[0x1]; // 0x53b(0x01)
	float PrimitiveWidth; // 0x53c(0x04)
	float SoftBranchMassThreshold; // 0x540(0x04)
	bool IsNavigationRelevant; // 0x544(0x01)
	char pad_545[0x3]; // 0x545(0x03)
	struct TArray<struct UDecalComponent*> DecalComponents; // 0x548(0x10)

	bool ShouldTreePrimivieAffectNavigation(); // Function BP_TreePrimitive.BP_TreePrimitive_C.ShouldTreePrimivieAffectNavigation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void UpdateSoftBranchState(bool CanBeSoft); // Function BP_TreePrimitive.BP_TreePrimitive_C.UpdateSoftBranchState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool CanSupportTreeHierarchy(); // Function BP_TreePrimitive.BP_TreePrimitive_C.CanSupportTreeHierarchy // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void AddItemToPlayerInventory(struct FTreePrimitiveReplacementDescription ReplacementDescription, struct AIcarusPlayerCharacter* PlayerCharacter, bool Success); // Function BP_TreePrimitive.BP_TreePrimitive_C.AddItemToPlayerInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SpawnReplacementItemActor(struct FTreePrimitiveReplacementDescription ReplacementDescription, struct AIcarusItem* SpawnedItemActor, bool Success); // Function BP_TreePrimitive.BP_TreePrimitive_C.SpawnReplacementItemActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetReplacementDescriptionForContext(enum class ETreePrimitiveDetachContext DetachContext, struct FTreePrimitiveReplacementDescription ReplacementDescription); // Function BP_TreePrimitive.BP_TreePrimitive_C.GetReplacementDescriptionForContext // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddReplacementDescription(enum class ETreePrimitiveDetachContext DetachContext, enum class ETreePrimitiveItemReplaceMethod Method); // Function BP_TreePrimitive.BP_TreePrimitive_C.AddReplacementDescription // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool ReplaceTreePrimitiveWithItem(struct FTreePrimitiveDetachContext DetachContext, struct AIcarusItem* OutItemActor); // Function BP_TreePrimitive.BP_TreePrimitive_C.ReplaceTreePrimitiveWithItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnComponentOverlap_Branch(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentOverlap_Branch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnComponentHit_Branch(struct UPrimitiveComponent* Primitive, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentHit_Branch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnComponentHit_Trunk(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BP_TreePrimitive.BP_TreePrimitive_C.OnComponentHit_Trunk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(struct UStaticMeshComponent* MeshComponent); // Function BP_TreePrimitive.BP_TreePrimitive_C.Construct // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Transfer(struct UTreePrimitiveComponent* Source); // Function BP_TreePrimitive.BP_TreePrimitive_C.Transfer // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void InitializePostConstruction(); // Function BP_TreePrimitive.BP_TreePrimitive_C.InitializePostConstruction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_TreePrimitive(int32_t EntryPoint); // Function BP_TreePrimitive.BP_TreePrimitive_C.ExecuteUbergraph_BP_TreePrimitive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

