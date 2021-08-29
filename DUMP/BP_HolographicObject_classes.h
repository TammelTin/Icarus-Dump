// BlueprintGeneratedClass BP_HolographicObject.BP_HolographicObject_C
// Size: 0x352 (Inherited: 0x2a0)
struct ABP_HolographicObject_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x2a8(0x08)
	struct USkeletalMeshComponent* SkeletalMesh; // 0x2b0(0x08)
	struct USceneComponent* Scene; // 0x2b8(0x08)
	struct FItemData Item; // 0x2c0(0x80)
	struct UInventoryComponent* ItemInventory; // 0x340(0x08)
	struct UMaterialInterface* NewMaterial; // 0x348(0x08)
	enum class ProcessorPreview State; // 0x350(0x01)
	bool SkeletalSet; // 0x351(0x01)

	void GetItem(struct FItemData NewParam); // Function BP_HolographicObject.BP_HolographicObject_C.GetItem // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateVisibility(bool Visible); // Function BP_HolographicObject.BP_HolographicObject_C.UpdateVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Create(); // Function BP_HolographicObject.BP_HolographicObject_C.Create // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetState(enum class ProcessorPreview Preview); // Function BP_HolographicObject.BP_HolographicObject_C.SetState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_7DE56D4A41E366966B10B1A45EFDB124(struct UObject* Loaded); // Function BP_HolographicObject.BP_HolographicObject_C.OnLoaded_7DE56D4A41E366966B10B1A45EFDB124 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LoadItemMesh(struct TSoftObjectPtr<UObject> MeshToLoad); // Function BP_HolographicObject.BP_HolographicObject_C.LoadItemMesh // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HolographicObject.BP_HolographicObject_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HolographicObject(int32_t EntryPoint); // Function BP_HolographicObject.BP_HolographicObject_C.ExecuteUbergraph_BP_HolographicObject // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

