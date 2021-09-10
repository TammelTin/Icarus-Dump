// BlueprintGeneratedClass BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C
// Size: 0x101 (Inherited: 0xe8)
struct UBP_Interactable_Harvest_Tree_Primitive_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* CurrentPlayer; // 0xf0(0x08)
	struct ABP_StaticItem_TreePrimitive_C* StaticItemTreePrimitive; // 0xf8(0x08)
	enum class EHandedness Handedness; // 0x100(0x01)

	void Interact Harvest(struct FHitResult Hit); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.Interact Harvest // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void MULTI_PlayPickupFX(struct AIcarusPlayerCharacter* Target); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.MULTI_PlayPickupFX // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Interactable_Harvest_Tree_Primitive(int32_t EntryPoint); // Function BP_Interactable_Harvest_Tree_Primitive.BP_Interactable_Harvest_Tree_Primitive_C.ExecuteUbergraph_BP_Interactable_Harvest_Tree_Primitive // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

