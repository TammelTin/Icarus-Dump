// BlueprintGeneratedClass BP_Interactable_Pickup_Fish.BP_Interactable_Pickup_Fish_C
// Size: 0x128 (Inherited: 0xe8)
struct UBP_Interactable_Pickup_Fish_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* Current_Player; // 0xf0(0x08)
	struct AIcarusItem* CurrentItem; // 0xf8(0x08)
	enum class EHandedness Handedness; // 0x100(0x01)
	char pad_101[0x7]; // 0x101(0x07)
	struct AActor* LastInstigator; // 0x108(0x08)
	struct FItemTemplateRowHandle Item; // 0x110(0x18)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Pickup_Fish.BP_Interactable_Pickup_Fish_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Pickup_Fish.BP_Interactable_Pickup_Fish_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Pickup_Fish(int32_t EntryPoint); // Function BP_Interactable_Pickup_Fish.BP_Interactable_Pickup_Fish_C.ExecuteUbergraph_BP_Interactable_Pickup_Fish // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

