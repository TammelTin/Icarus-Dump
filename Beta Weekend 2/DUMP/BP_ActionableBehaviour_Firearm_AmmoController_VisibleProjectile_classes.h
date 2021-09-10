// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
// Size: 0x950 (Inherited: 0x940)
struct UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C : UBP_ActionableBehaviour_Firearm_AmmoController_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x940(0x08)
	struct AIcarusItem* PreviewItem; // 0x948(0x08)

	void ConsumeAmmo(int32_t Amount); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ConsumeAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AttachPreviewItem(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.AttachPreviewItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetPreviewItem(struct AIcarusItem* NewPreviewItem); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.SetPreviewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePreviewItem(bool Show); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.UpdatePreviewItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CleanupPreviewItem(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.CleanupPreviewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	int32_t GetAmmoCapacity(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.GetAmmoCapacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetPreviewItemVisible(bool Visible); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.SetPreviewItemVisible // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnReloadStart(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnReloadStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnAmmoTypeChanged(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnAmmoTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnWeaponFired(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnWeaponFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnAmmoUnloaded(); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.OnAmmoUnloaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile // (Final|UbergraphFunction) // @ game+0x1a38c80
};

