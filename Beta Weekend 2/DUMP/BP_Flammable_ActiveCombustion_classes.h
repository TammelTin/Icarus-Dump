// BlueprintGeneratedClass BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C
// Size: 0x108 (Inherited: 0x100)
struct UBP_Flammable_ActiveCombustion_C : UFlammableActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x100(0x08)

	bool CanPropagateToTarget(struct FFlammableTargetIgnite Target); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.CanPropagateToTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void IsTargetDeployableFoundation(struct FFlammableTargetIgnite Target, bool IsDeployableFoundation); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.IsTargetDeployableFoundation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void IsTargetHeldByPlayer(struct FFlammableTargetIgnite Target, bool IsOwningPlayer); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.IsTargetHeldByPlayer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FBoxSphereBounds GetLocalBounds(); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.GetLocalBounds // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool CanPropagate(enum class EFlammablePropagationType PropagationType); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.CanPropagate // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Enter(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceState_Combusting_Enter // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceState_Combusting_Exit(struct UFlammableInstance* Instance, struct UFlammableState* State); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnFlammableInstanceState_Combusting_Exit // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnActiveStateChanged(bool IsActive); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.OnActiveStateChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Flammable_ActiveCombustion(int32_t EntryPoint); // Function BP_Flammable_ActiveCombustion.BP_Flammable_ActiveCombustion_C.ExecuteUbergraph_BP_Flammable_ActiveCombustion // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

