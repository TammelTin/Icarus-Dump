// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C
// Size: 0x8a7 (Inherited: 0x898)
struct UBP_ActionableBehaviour_Firearm_AimController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	float AimAlpha; // 0x8a0(0x04)
	bool UseExtraVignetteStrength; // 0x8a4(0x01)
	bool AllowAimWhileReloading; // 0x8a5(0x01)
	bool AimPressed; // 0x8a6(0x01)

	void SetExtraVignetteStrengthEnabled(bool Enabled); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetExtraVignetteStrengthEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickCameraEffects(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAim(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.UpdateAim // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetADSTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.GetADSTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CanAim(bool CanAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.CanAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ToggleAim(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ToggleAim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetAim(bool NewAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.SetAim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsAiming(bool IsAiming); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsAiming // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IsToggleAim(bool IsToggleAim); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.IsToggleAim // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void NotifyReloadStart(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void NotifyReloadEnd(); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.NotifyReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AimController_Base.BP_ActionableBehaviour_Firearm_AimController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AimController_Base // (Final|UbergraphFunction) // @ game+0x1a05090
};

