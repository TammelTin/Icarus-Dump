// BlueprintGeneratedClass BP_TreePrefab.BP_TreePrefab_C
// Size: 0x4b8 (Inherited: 0x350)
struct ABP_TreePrefab_C : ATreePrefab {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	bool DebugRuntimeInstance; // 0x358(0x01)
	bool DebugInstancePhysicsDynamic; // 0x359(0x01)
	char pad_35A[0x2]; // 0x35a(0x02)
	struct FName DebugInstanceTreeRootName; // 0x35c(0x08)
	char pad_364[0x4]; // 0x364(0x04)
	struct FTreeSetupProperties SetupProperties; // 0x368(0x130)
	struct TArray<struct UObject*> LoadedSubdivideMeshes; // 0x498(0x10)
	bool SubdivideMeshesLoaded; // 0x4a8(0x01)
	char pad_4A9[0x3]; // 0x4a9(0x03)
	struct FVector DebugInstanceFallDirection; // 0x4ac(0x0c)

	void CheckLoadedSubdivideMeshes(); // Function BP_TreePrefab.BP_TreePrefab_C.CheckLoadedSubdivideMeshes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetupPrimitiveDynamicMaterials(struct UPrimitiveComponent* Primitive, struct FVector PivotPosition); // Function BP_TreePrefab.BP_TreePrefab_C.SetupPrimitiveDynamicMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DebugInstanceTreeImp(struct FTreeRuntimeCreateArguments Args); // Function BP_TreePrefab.BP_TreePrefab_C.DebugInstanceTreeImp // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_TreePrefab.BP_TreePrefab_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_725FB44141605CD1726AD5A5598E8E8C(struct UObject* Loaded); // Function BP_TreePrefab.BP_TreePrefab_C.OnLoaded_725FB44141605CD1726AD5A5598E8E8C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_TreePrefab.BP_TreePrefab_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void PreloadSubdivideMeshes(); // Function BP_TreePrefab.BP_TreePrefab_C.PreloadSubdivideMeshes // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCreatedTreeRuntime(struct ATreeBase* TreeBase); // Function BP_TreePrefab.BP_TreePrefab_C.OnCreatedTreeRuntime // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_TreePrefab(int32_t EntryPoint); // Function BP_TreePrefab.BP_TreePrefab_C.ExecuteUbergraph_BP_TreePrefab // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

