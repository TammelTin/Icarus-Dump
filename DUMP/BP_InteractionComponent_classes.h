// BlueprintGeneratedClass BP_InteractionComponent.BP_InteractionComponent_C
// Size: 0xd0 (Inherited: 0xb0)
struct UBP_InteractionComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct ABP_InteractionScene_C* CurrentInteraction; // 0xb8(0x08)
	float InteractionLength; // 0xc0(0x04)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct ABP_InteractionScene_C* InteractionCache; // 0xc8(0x08)

	void OnRep_CurrentInteraction(); // Function BP_InteractionComponent.BP_InteractionComponent_C.OnRep_CurrentInteraction // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SERVER_Interact(struct ABP_InteractionScene_C* InteractionScene); // Function BP_InteractionComponent.BP_InteractionComponent_C.SERVER_Interact // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_InteractionComponent(int32_t EntryPoint); // Function BP_InteractionComponent.BP_InteractionComponent_C.ExecuteUbergraph_BP_InteractionComponent // (Final|UbergraphFunction) // @ game+0x1a05090
};

