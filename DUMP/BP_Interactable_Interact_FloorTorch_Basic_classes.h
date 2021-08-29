// BlueprintGeneratedClass BP_Interactable_Interact_FloorTorch_Basic.BP_Interactable_Interact_FloorTorch_Basic_C
// Size: 0xf8 (Inherited: 0xe8)
struct UBP_Interactable_Interact_FloorTorch_Basic_C : UInteractableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	struct ABP_Torch_Floor_C* FloorTorch; // 0xf0(0x08)

	void ReceiveBeginPlay(); // Function BP_Interactable_Interact_FloorTorch_Basic.BP_Interactable_Interact_FloorTorch_Basic_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Interact(struct AActor* Instigator, struct FHitResult HitResult); // Function BP_Interactable_Interact_FloorTorch_Basic.BP_Interactable_Interact_FloorTorch_Basic_C.Interact // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Interactable_Interact_FloorTorch_Basic(int32_t EntryPoint); // Function BP_Interactable_Interact_FloorTorch_Basic.BP_Interactable_Interact_FloorTorch_Basic_C.ExecuteUbergraph_BP_Interactable_Interact_FloorTorch_Basic // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

