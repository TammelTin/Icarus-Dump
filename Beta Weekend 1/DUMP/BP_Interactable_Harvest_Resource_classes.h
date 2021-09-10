// BlueprintGeneratedClass BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C
// Size: 0x101 (Inherited: 0xe8)
struct UBP_Interactable_Harvest_Resource_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* CurrentPlayer; // 0xf0(0x08)
	struct ABP_ResourceNodeBase_C* ResourceNodeBase; // 0xf8(0x08)
	enum class EHandedness Handedness; // 0x100(0x01)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PlayPickupFX(struct AIcarusPlayerCharacter* Target); // Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.PlayPickupFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Harvest_Resource(int32_t EntryPoint); // Function BP_Interactable_Harvest_Resource.BP_Interactable_Harvest_Resource_C.ExecuteUbergraph_BP_Interactable_Harvest_Resource // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

