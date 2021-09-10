// BlueprintGeneratedClass BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C
// Size: 0x419 (Inherited: 0x410)
struct UBP_ActionableBehaviour_Throwable_Grenade_C : UBP_ActionableBehaviour_Throwable_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x410(0x08)
	bool IsPinPulled; // 0x418(0x01)

	void IsCharging(bool Charging); // Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void RequestThrow(); // Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.RequestThrow // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CanThrow(bool CanThrow); // Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.CanThrow // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade(int32_t EntryPoint); // Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

