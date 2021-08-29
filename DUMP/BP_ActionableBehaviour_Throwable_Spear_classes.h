// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C
// Size: 0x419 (Inherited: 0x410)
struct UBP_ActionableBehaviour_Throwable_Spear_C : UBP_ActionableBehaviour_Throwable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	bool IsSpearReady; // 0x418(0x01)

	void IsCharging(bool Charging); // Function BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void RequestThrow(); // Function BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C.RequestThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CanThrow(bool CanThrow); // Function BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Spear(int32_t EntryPoint); // Function BP_ActionableBehaviour_Throwable_Spear.BP_ActionableBehaviour_Throwable_Spear_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Spear // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

