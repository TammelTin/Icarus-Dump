// BlueprintGeneratedClass BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C
// Size: 0x989 (Inherited: 0x954)
struct UBP_ActionableBehaviour_FireArm_FireController_Charge_C : UBP_ActionableBehaviour_FireArm_FireController_Base_C {
	char pad_954[0x4]; // 0x954(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x958(0x08)
	float ChargePower; // 0x960(0x04)
	bool StaminaUsed; // 0x964(0x01)
	char pad_965[0x3]; // 0x965(0x03)
	float FullChargePowerTimeStamp; // 0x968(0x04)
	char pad_96C[0x4]; // 0x96c(0x04)
	struct UMatineeCameraShake* CameraShake; // 0x970(0x08)
	bool LocalChargeCancel; // 0x978(0x01)
	char pad_979[0x7]; // 0x979(0x07)
	struct FTimerHandle ChargeShakeTimer; // 0x980(0x08)
	bool IsDoingChargeShake; // 0x988(0x01)

	void HandleRep_WantsFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.HandleRep_WantsFire // (Protected|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FinishFiring(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.FinishFiring // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BeginFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.BeginFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsChargedForFiring(bool Charged); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsChargedForFiring // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void EndFire(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.EndFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CancelCharging(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CancelCharging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckCancelCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.CheckCancelCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickCameraEffects(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCameraEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetChargeTimeMultiplier(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetChargeTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TickCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.TickCharge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetLaunchForce(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void IsCharging(bool IsCharging); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdatePersistentAudioCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.UpdatePersistentAudioCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetCurrentChargePower(float ChargePower); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.GetCurrentChargePower // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnReloadPressed(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.OnReloadPressed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ChargeShakeBegin(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeBegin // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ChargeShakeEnd(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ChargeShakeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LateSetup(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_CancelCharge(); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.Server_CancelCharge // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge(int32_t EntryPoint); // Function BP_ActionableBehaviour_FireArm_FireController_Charge.BP_ActionableBehaviour_FireArm_FireController_Charge_C.ExecuteUbergraph_BP_ActionableBehaviour_FireArm_FireController_Charge // (Final|UbergraphFunction) // @ game+0x1a05090
};

