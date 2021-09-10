// BlueprintGeneratedClass BP_FLODItemActor.BP_FLODItemActor_C
// Size: 0x3f0 (Inherited: 0x3d0)
struct ABP_FLODItemActor_C : AStaticItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct UFLODRewardComponent* IcarusFLODReward; // 0x3d8(0x08)
	struct UFLODActorComponent* IcarusFLODActor; // 0x3e0(0x08)
	struct UInteractableComponent* Interactable; // 0x3e8(0x08)

	void BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature(struct UFLODActorComponent* Component, struct FFLODActorRecordInstance Current, struct FFLODActorRecordInstance Previous); // Function BP_FLODItemActor.BP_FLODItemActor_C.BndEvt__IcarusFLODActor_K2Node_ComponentBoundEvent_0_OnActorRecordAssigned__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FLODItemActor(int32_t EntryPoint); // Function BP_FLODItemActor.BP_FLODItemActor_C.ExecuteUbergraph_BP_FLODItemActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

