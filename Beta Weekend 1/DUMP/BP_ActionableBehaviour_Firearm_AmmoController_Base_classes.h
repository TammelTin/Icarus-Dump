// BlueprintGeneratedClass BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
// Size: 0x940 (Inherited: 0x898)
struct UBP_ActionableBehaviour_Firearm_AmmoController_Base_C : UBP_ActionableBehaviour_Firearm_Base_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct FTimerHandle ReloadTimer; // 0x8a0(0x08)
	int32_t LocalCurrentAmmo; // 0x8a8(0x04)
	bool Reloading; // 0x8ac(0x01)
	char pad_8AD[0x3]; // 0x8ad(0x03)
	struct FItemsStaticRowHandle LocalAmmoType; // 0x8b0(0x18)
	bool RadialOpen; // 0x8c8(0x01)
	char pad_8C9[0x7]; // 0x8c9(0x07)
	struct FMulticastInlineDelegate OnReloadPressed; // 0x8d0(0x10)
	struct FMulticastInlineDelegate NotifyReloadStart; // 0x8e0(0x10)
	struct FMulticastInlineDelegate NotifyReloadEnd; // 0x8f0(0x10)
	bool AbortReloadRequested; // 0x900(0x01)
	bool AwaitingAutoReload; // 0x901(0x01)
	char pad_902[0x6]; // 0x902(0x06)
	struct UContextMenuWidget* CurrentContextMenu; // 0x908(0x08)
	struct FName QuickbarInventoryActionId; // 0x910(0x08)
	struct FName BackpackInventoryActionId; // 0x918(0x08)
	struct FName ScaleReloadAnimMontageSectionName; // 0x920(0x08)
	struct FItemsStaticRowHandle LastLocalAmmoType; // 0x928(0x18)

	void FindAmmoTypeToSwapTo(bool FoundType, struct FItemsStaticRowHandle LastLocalAmmoType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindAmmoTypeToSwapTo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdatePersistentAudio(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdatePersistentAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct UInventory* GetInventoryFromName(struct FName InventoryName); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryFromName // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FName GetNameForInventory(struct UInventory* Inventory); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetNameForInventory // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ContextMenuAmmoSelected(struct FName ID, int32_t Payload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuAmmoSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ContextMenuUnloadSelected(struct FName ID, int32_t Payload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ContextMenuUnloadSelected // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Open Ammo Select Menu(bool AsRadial, bool Opened); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Open Ammo Select Menu // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsAwaitingAutoReload(bool waitingReload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsAwaitingAutoReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CanAbortReload(bool CanAbort); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanAbortReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void OnAbortReloadRequested(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAbortReloadRequested // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AutoReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AutoReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckAmmo(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CheckAmmo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCurrentAmmoType(struct FItemsStaticRowHandle FireMode); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmoType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindValidAmmoData(struct FItemsStaticRowHandle AmmoType, struct FItemsStaticRowHandle ProjectileItem, bool Found); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.FindValidAmmoData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HasAnyReserveAmmo(bool HasAnyReserve); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAnyReserveAmmo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetAssociatedInventory(struct UInventory* Inventory); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAssociatedInventory // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetSelectedAmmoType(struct FItemData AmmoItem, bool ValidAmmoItem); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetSelectedAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddAmmoToInventory(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AddAmmoToInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AssociatedItemUpdated(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.AssociatedItemUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DynamicDataUpdated(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.DynamicDataUpdated // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(struct AIcarusActor* ForOwner); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Setup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateLocalAmmo(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.UpdateLocalAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Reloading(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnRep_Reloading // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryReload(bool Force, bool ForceIfReloading); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetCurrentAmmo(int32_t CurrentAmmo); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.SetCurrentAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RemoveAmmoFromInventory(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.RemoveAmmoFromInventory // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerFinishReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ServerFinishReload // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	float GetReloadAnimPlayRate(struct UAnimMontage* Montage); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadAnimPlayRate // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	float GetReloadTimeMultiplier(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetReloadTimeMultiplier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetInventoryAmmoCount(struct FItemsStaticRowHandle AmmoType, int32_t Count); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetInventoryAmmoCount // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	int32_t GetAmmoCapacity(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetAmmoCapacity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetFiredProjectileInfo(bool HasBallisticData, struct FBallisticData BallisticData, int32_t ProjectileCount, struct FVector2D ProjectileAccuracy); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetFiredProjectileInfo // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FItemsStaticRowHandle GetCurrentAmmoType(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoType // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetCurrentAmmoCount(int32_t CurrentAmmoCount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.GetCurrentAmmoCount // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ConsumeAmmo(int32_t Amount); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ConsumeAmmo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsReloading(bool Reloading); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.IsReloading // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void CanReload(bool CanReload); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.CanReload // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void HasAmmo(bool HasAmmo); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HasAmmo // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PlayReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Local_PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Local_PlayReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnInventoryItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnInventoryItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnTraitAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnTraitAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a05090
	void OnReloadStart(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadStart // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnReloadEnd(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadEnd // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void HandleReloadAnimNotify(struct FString NotifyName); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.HandleReloadAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LoadAndPlayReloadAnims(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LoadAndPlayReloadAnims // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAmmoTypeChanged(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_UnloadAmmoType(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_UnloadAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_RequestNewAmmoType(struct FItemsStaticRowHandle NewAmmoType); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_RequestNewAmmoType // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MC_PlayReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.MC_PlayReload // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Client_ForceReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Client_ForceReload // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnWeaponFired(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnWeaponFired // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LateSetup(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.LateSetup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_TryReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryReload // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryAbortReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.TryAbortReload // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_TryAbortReload(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.Server_TryAbortReload // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnAmmoUnloaded(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnAmmoUnloaded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32_t EntryPoint); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void NotifyReloadEnd__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void NotifyReloadStart__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.NotifyReloadStart__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnReloadPressed__DelegateSignature(); // Function BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C.OnReloadPressed__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

