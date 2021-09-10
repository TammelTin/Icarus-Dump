// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C
// Size: 0x984 (Inherited: 0x2c0)
struct UBP_ActionableBehaviour_Firearm_C : UActionableBehaviour {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct AIcarusActor* OwningActor; // 0x2c8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2d0(0x08)
	int32_t LocalCurrentAmmo; // 0x2d8(0x04)
	char pad_2DC[0x4]; // 0x2dc(0x04)
	struct FFirearmData FirearmData; // 0x2e0(0x598)
	bool CanFireSemiAuto; // 0x878(0x01)
	bool Reloading; // 0x879(0x01)
	char pad_87A[0x6]; // 0x87a(0x06)
	struct FTimerHandle ReloadTimer; // 0x880(0x08)
	bool Firing; // 0x888(0x01)
	char pad_889[0x7]; // 0x889(0x07)
	struct FTimerHandle FireCheckHandle; // 0x890(0x08)
	float FireTime; // 0x898(0x04)
	float AimAlpha; // 0x89c(0x04)
	bool RadialOpen; // 0x8a0(0x01)
	char pad_8A1[0x3]; // 0x8a1(0x03)
	int32_t ReloadAmount; // 0x8a4(0x04)
	float ChargePower; // 0x8a8(0x04)
	float LastChargePower; // 0x8ac(0x04)
	float FullChargePowerTimeStamp; // 0x8b0(0x04)
	bool LocalChargeCancel; // 0x8b4(0x01)
	char pad_8B5[0x3]; // 0x8b5(0x03)
	struct UMatineeCameraShake* CameraShake; // 0x8b8(0x08)
	struct TArray<struct UObject*> LoadedAssets; // 0x8c0(0x10)
	bool AssetsLoaded; // 0x8d0(0x01)
	char pad_8D1[0x3]; // 0x8d1(0x03)
	struct FItemsStaticRowHandle LocalAmmoType; // 0x8d4(0x18)
	char pad_8EC[0x4]; // 0x8ec(0x04)
	struct AIcarusItem* PreviewItem; // 0x8f0(0x08)
	bool FireAnimPlaying; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
	struct FMulticastInlineDelegate ProjectileFired; // 0x900(0x10)
	struct TMap<struct UFMODAudioComponent*, struct FFirearmSoundData> PersistentAudioComponents; // 0x910(0x50)
	bool StaminaUsed; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	struct FName QuickbarInventoryActionId; // 0x964(0x08)
	struct FName BackpackInventoryActionId; // 0x96c(0x08)
	char pad_974[0x4]; // 0x974(0x04)
	struct UContextMenuWidget* CurrentContextMenu; // 0x978(0x08)
	int32_t HoldModifierUID; // 0x980(0x04)

	struct FRotator ApplySpread(struct FRotator BaseAim); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ApplySpread // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveHoldModifier(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.RemoveHoldModifier // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddHoldModifier(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.AddHoldModifier // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayUseWhenBrokenSound(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayUseWhenBrokenSound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UInventory* GetInventoryFromName(struct FName InventoryName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetInventoryFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FName GetNameForInventory(struct UInventory* Inventory); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetNameForInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ContextMenuAmmoSelected(struct FName ActionId, int32_t Payload); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ContextMenuAmmoSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ContextMenuUnloadSelected(struct FName ActionId, int32_t Payload); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ContextMenuUnloadSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OpenAmmoContextMenu(bool AsRadial, bool Opened); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OpenAmmoContextMenu // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Get Number Of Projeciles To Fire(int32_t Number of Projectiles); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Get Number Of Projeciles To Fire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetADSTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetADSTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetChargeTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetChargeTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetReloadTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetReloadTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	int32_t GetStat(struct FStatsEnum Stat); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetStat // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	int32_t GetStatAdjustedDurability(int32_t DurabilityLost); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetStatAdjustedDurability // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetAmmoCapacity(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetAmmoCapacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool IsToggleADS(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.IsToggleADS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void AIStimulus(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.AIStimulus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopPersistentAudio(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.StopPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateAudioPerspective(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdateAudioPerspective // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePersistentAudioReloading(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdatePersistentAudioReloading // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePersistentAudioCharge(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdatePersistentAudioCharge // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StartPersistentAudio(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.StartPersistentAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayFirearmSound(struct FFirearmSoundData FirearmSoundData); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayFirearmSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayNoFireAudio(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayNoFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayFireAudio(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayFireAudio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckExistingAmmoType(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CheckExistingAmmoType // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FRotator GetFireRotation(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetFireRotation // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetAnimPlayRate(struct UAnimMontage* Anim, bool Reload); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CleanupPreviewItem(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CleanupPreviewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DynamicDataUpdated(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.DynamicDataUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AttachPreviewItem(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.AttachPreviewItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetPreviewItem(struct AIcarusItem* NewPreviewItem); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetPreviewItem // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePreviewItem(bool Show); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdatePreviewItem // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FiredReload(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.FiredReload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePostProcess(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdatePostProcess // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetLaunchForce(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetLaunchForce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CancelCharging(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CancelCharging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsCharging(bool Charging); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.IsCharging // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TickCharge(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.TickCharge // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CaclulateReloadAmount(int32_t ReloadAmount); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CaclulateReloadAmount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddAmmoToInventory(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.AddAmmoToInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSelectedAmmoType(struct FItemData AmmoItem, bool ValidAmmoItem); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetSelectedAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetAssociatedInventory(struct UInventory* Inventory); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetAssociatedInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AssociatedItemUpdated(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.AssociatedItemUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckReload(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CheckReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCurrentAmmoType(struct FItemsStaticRowHandle FireMode); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetCurrentAmmoType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FItemsStaticRowHandle GetCurrentAmmoType(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetCurrentAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CheckCurrentProjectile(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CheckCurrentProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCurrentFireMode(enum class EFireMode FireMode); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetCurrentFireMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	enum class EFireMode GetCurrentFireMode(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetCurrentFireMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetCurrentAmmo(int32_t CurrentAmmo); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetCurrentAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetCurrentAmmo(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetCurrentAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SetupFirearmData(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetupFirearmData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetupPlayer(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetupPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetupOwner(struct AIcarusActor* Owner); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SetupOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsADS(bool ADS); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.IsADS // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdatePostProcessing(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdatePostProcessing // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveAmmoFromInventory(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.RemoveAmmoFromInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReloadAmmo(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ReloadAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateLocalAmmo(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdateLocalAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetReload(bool Completed); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ResetReload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayReloadVisuals(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayReloadVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Reloading(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnRep_Reloading // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveAmmoFromFirearm(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.RemoveAmmoFromFirearm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayFireVisuals(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayFireVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckFireAutomatic(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CheckFireAutomatic // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckFire(bool FiringReleased); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CheckFire // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LocalOrServer(bool Local, bool Server); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.LocalOrServer // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Firing(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnRep_Firing // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryReload(bool Force, bool ForceIfReloading); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.TryReload // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindValidAmmoData(struct FItemsStaticRowHandle AmmoType, struct FItemsStaticRowHandle ProjectileItem, bool Found); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.FindValidAmmoData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FireProjectile(struct FTransform SpawnTransform, bool ConsumeAmmo); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.FireProjectile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CanFire(bool CanFire); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.CanFire // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ClientTryFire(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ClientTryFire // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetFirerate(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetFirerate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ResetSemiAuto(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ResetSemiAuto // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateADS(bool NewADS); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.UpdateADS // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetInventoryAmmoCount(int32_t TotalAmmo); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.GetInventoryAmmoCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(struct AIcarusActor* Owner); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProcessInput(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ProcessInput // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_2B8B2B624CE5F97DAE6892B7BB36C5DD(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_2B8B2B624CE5F97DAE6892B7BB36C5DD // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6DCFAB9D43B094CB3CF9C7816E1FA122(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_6DCFAB9D43B094CB3CF9C7816E1FA122 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_F09D9ADE44F875B5BE81EF89D157E20B(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_F09D9ADE44F875B5BE81EF89D157E20B // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6DCFAB9D43B094CB3CF9C781ADBDE313(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_6DCFAB9D43B094CB3CF9C781ADBDE313 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6DCFAB9D43B094CB3CF9C7818D49C043(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_6DCFAB9D43B094CB3CF9C7818D49C043 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyEnd_DCCE210F42A6F31E62C64DB21D2A8273 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyBegin_DCCE210F42A6F31E62C64DB21D2A8273 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInterrupted_DCCE210F42A6F31E62C64DB21D2A8273 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnBlendOut_DCCE210F42A6F31E62C64DB21D2A8273 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_DCCE210F42A6F31E62C64DB21D2A8273(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnCompleted_DCCE210F42A6F31E62C64DB21D2A8273 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyEnd_8C8C44024A5631C2A5012C85CDB54F1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyBegin_8C8C44024A5631C2A5012C85CDB54F1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInterrupted_8C8C44024A5631C2A5012C85CDB54F1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnBlendOut_8C8C44024A5631C2A5012C85CDB54F1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_8C8C44024A5631C2A5012C85CDB54F1C(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnCompleted_8C8C44024A5631C2A5012C85CDB54F1C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6DCFAB9D43B094CB3CF9C781FA2FC40D(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_6DCFAB9D43B094CB3CF9C781FA2FC40D // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyEnd_6BBBC036452FB2EC7092AF8B3265C6A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyBegin_6BBBC036452FB2EC7092AF8B3265C6A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInterrupted_6BBBC036452FB2EC7092AF8B3265C6A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnBlendOut_6BBBC036452FB2EC7092AF8B3265C6A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_6BBBC036452FB2EC7092AF8B3265C6A9(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnCompleted_6BBBC036452FB2EC7092AF8B3265C6A9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6DCFAB9D43B094CB3CF9C7811370CA6E(struct UObject* Loaded); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnLoaded_6DCFAB9D43B094CB3CF9C7811370CA6E // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyEnd_D352811F43772AF9DF8FC3A758F63965 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyBegin_D352811F43772AF9DF8FC3A758F63965 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInterrupted_D352811F43772AF9DF8FC3A758F63965 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnBlendOut_D352811F43772AF9DF8FC3A758F63965 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_D352811F43772AF9DF8FC3A758F63965(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnCompleted_D352811F43772AF9DF8FC3A758F63965 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyEnd_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyEnd_F1A7CE62495190E6CE5CD09C5C08D4CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNotifyBegin_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnNotifyBegin_F1A7CE62495190E6CE5CD09C5C08D4CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInterrupted_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInterrupted_F1A7CE62495190E6CE5CD09C5C08D4CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBlendOut_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnBlendOut_F1A7CE62495190E6CE5CD09C5C08D4CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnCompleted_F1A7CE62495190E6CE5CD09C5C08D4CF(struct FName NotifyName); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnCompleted_F1A7CE62495190E6CE5CD09C5C08D4CF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Multicast_PostFireProjectile(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Multicast_PostFireProjectile // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OwnerFireEffects(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OwnerFireEffects // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_RequestFireProjectile(struct FTransform SpawnTransform, bool ConsumeAmmo); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Server_RequestFireProjectile // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_RequestNewAmmoType(struct FItemsStaticRowHandle NewAmmoType); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Server_RequestNewAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void ReloadTimerComplete(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ReloadTimerComplete // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void SERVER_SemiAuto(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.SERVER_SemiAuto // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTICAST_SemiAuto(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.MULTICAST_SemiAuto // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayReloadVisualsNew(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.PlayReloadVisualsNew // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnInventoryItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Client_ForceReload(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Client_ForceReload // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ChangeFireMode(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ChangeFireMode // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ChangeFireMode_Server(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ChangeFireMode_Server // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Server_UnloadAmmoType(); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.Server_UnloadAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnActionInsufficientDurability(enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.OnActionInsufficientDurability // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ProjectileFired__DelegateSignature(float Power); // Function BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C.ProjectileFired__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

