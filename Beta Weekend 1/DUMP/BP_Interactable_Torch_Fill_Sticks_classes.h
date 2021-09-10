// BlueprintGeneratedClass BP_Interactable_Torch_Fill_Sticks.BP_Interactable_Torch_Fill_Sticks_C
// Size: 0x100 (Inherited: 0xe8)
struct UBP_Interactable_Torch_Fill_Sticks_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct AIcarusPlayerCharacter* Current_Player; // 0xf0(0x08)
	struct ABP_Torch_Wall_C* Wall_Torch; // 0xf8(0x08)

	bool CanInteract(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Torch_Fill_Sticks.BP_Interactable_Torch_Fill_Sticks_C.CanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Torch_Fill_Sticks.BP_Interactable_Torch_Fill_Sticks_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Interactable_Torch_Fill_Sticks.BP_Interactable_Torch_Fill_Sticks_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Torch_Fill_Sticks(int32_t EntryPoint); // Function BP_Interactable_Torch_Fill_Sticks.BP_Interactable_Torch_Fill_Sticks_C.ExecuteUbergraph_BP_Interactable_Torch_Fill_Sticks // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

