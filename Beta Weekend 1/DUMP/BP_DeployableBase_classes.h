// BlueprintGeneratedClass BP_DeployableBase.BP_DeployableBase_C
// Size: 0x560 (Inherited: 0x3e0)
struct ABP_DeployableBase_C : ADeployable {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UAudioContextComponent* AudioContext; // 0x3e8(0x08)
	struct UBoxComponent* WeightColliderBox; // 0x3f0(0x08)
	struct USceneComponent* ProxyMeshes; // 0x3f8(0x08)
	struct UTextRenderComponent* Health; // 0x400(0x08)
	struct UTextRenderComponent* Shelter; // 0x408(0x08)
	struct UBP_ShelteredComponent_C* BP_ShelteredComponent; // 0x410(0x08)
	struct UStaticMeshComponent* DeployableSM; // 0x418(0x08)
	struct USkeletalMeshComponent* DeployableSK; // 0x420(0x08)
	struct TArray<struct ABP_IcarusSplineActor_C*> LinkedSplines; // 0x428(0x10)
	int32_t LastHealth; // 0x438(0x04)
	float LastShelter; // 0x43c(0x04)
	struct UFMODEvent* DamagedAudio; // 0x440(0x08)
	struct UFMODEvent* BrokenAudio; // 0x448(0x08)
	struct UDestructibleMesh* DestructibleMesh; // 0x450(0x08)
	char pad_458[0x8]; // 0x458(0x08)
	struct FTransform RelativeTransform; // 0x460(0x30)
	struct TMap<struct FItemsStaticRowHandle, struct FDeployableProxyMeshConditionArray> ProxyMeshMapping; // 0x490(0x50)
	bool OverflowBagHandled; // 0x4e0(0x01)
	char pad_4E1[0x7]; // 0x4e1(0x07)
	struct TArray<struct USceneComponent*> NetProxyMeshesToShow; // 0x4e8(0x10)
	struct TArray<struct USceneComponent*> NetProxyMeshesToHide; // 0x4f8(0x10)
	float AudioOcclusion; // 0x508(0x04)
	bool IsInteractedWith; // 0x50c(0x01)
	char pad_50D[0x3]; // 0x50d(0x03)
	struct TSet<struct AActor*> CurrentInteractors; // 0x510(0x50)

	void Deployable_StopInteract(struct AActor* Interactor); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_StopInteract // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_IsInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_IsInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void VaccumeItems(struct AActor* Instigator, struct FItemsStaticRowHandle ItemsStaticRowHandle, int32_t Count, struct FInventoryIDEnum InventoryID); // Function BP_DeployableBase.BP_DeployableBase_C.VaccumeItems // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetComponentAndChildrenMobility(struct USceneComponent* Component, enum class EComponentMobility Mobility); // Function BP_DeployableBase.BP_DeployableBase_C.SetComponentAndChildrenMobility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_NetProxyMeshesToHide(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_NetProxyMeshesToHide // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_NetProxyMeshesToShow(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_NetProxyMeshesToShow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddProxyMeshCondition(struct FItemsStaticRowHandle ItemStatic, struct USceneComponent* ComponentToShow, int32_t MinimumStackSize, bool RequiresASlotableSlot); // Function BP_DeployableBase.BP_DeployableBase_C.AddProxyMeshCondition // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProxyMeshRemoveCheck(struct UInventory* Inventory, int32_t Index, struct FItemData RemovedData); // Function BP_DeployableBase.BP_DeployableBase_C.ProxyMeshRemoveCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ProxyMeshAddCheck(struct UInventory* Inventory, int32_t Index, struct FItemData ItemData); // Function BP_DeployableBase.BP_DeployableBase_C.ProxyMeshAddCheck // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CleanupSplineConnections(); // Function BP_DeployableBase.BP_DeployableBase_C.CleanupSplineConnections // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FoundationAttachment(); // Function BP_DeployableBase.BP_DeployableBase_C.FoundationAttachment // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RelativeTransform(); // Function BP_DeployableBase.BP_DeployableBase_C.OnRep_RelativeTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CreateOverflowBag(bool IncludeSelf); // Function BP_DeployableBase.BP_DeployableBase_C.CreateOverflowBag // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetNewFoundationActor(struct AActor* NewFoundation); // Function BP_DeployableBase.BP_DeployableBase_C.SetNewFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AddSplineNetConnection(struct ABP_IcarusSplineActor_C* Spline, struct AResourceNetwork* Network, bool ConnectionEstablished); // Function BP_DeployableBase.BP_DeployableBase_C.AddSplineNetConnection // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsFunctional(bool bFunctional); // Function BP_DeployableBase.BP_DeployableBase_C.IsFunctional // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Deployable_Pickup(struct AActor* Instigator, bool PickedUp); // Function BP_DeployableBase.BP_DeployableBase_C.Deployable_Pickup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveDestroyed(); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnFoundationDestroyed(struct ABP_Building_Base_C* Building, enum class EBuildingDestroyReason DestroyReason); // Function BP_DeployableBase.BP_DeployableBase_C.OnFoundationDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void Event Actor Broken(); // Function BP_DeployableBase.BP_DeployableBase_C.Event Actor Broken // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Event Damaged(struct UActorState* ActorState, int32_t DamageTaken, struct FDamageEvent DamageEvent, struct AController* Instigator, struct AActor* DamageCauser); // Function BP_DeployableBase.BP_DeployableBase_C.Event Damaged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_DeployableBase.BP_DeployableBase_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void MULTI_BrokenEffects(); // Function BP_DeployableBase.BP_DeployableBase_C.MULTI_BrokenEffects // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshFoundationBinds(); // Function BP_DeployableBase.BP_DeployableBase_C.RefreshFoundationBinds // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FoundationReplaced(struct ABP_Building_Base_C* NewBuilding); // Function BP_DeployableBase.BP_DeployableBase_C.FoundationReplaced // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EventOnDestroyed(struct AActor* DestroyedActor); // Function BP_DeployableBase.BP_DeployableBase_C.EventOnDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRestoreFoundationFromDatabase(struct AIcarusActor* FoundationFromDatabase); // Function BP_DeployableBase.BP_DeployableBase_C.OnRestoreFoundationFromDatabase // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ItemAdded(struct UInventory* Inventory, int32_t Location); // Function BP_DeployableBase.BP_DeployableBase_C.ItemAdded // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void itemremovedverbose(struct UInventory* Inventory, int32_t Location, struct FItemData Item); // Function BP_DeployableBase.BP_DeployableBase_C.itemremovedverbose // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void itemremovedfuel(struct UInventory* Inventory, int32_t Location, struct FItemData Item); // Function BP_DeployableBase.BP_DeployableBase_C.itemremovedfuel // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ItemRemovedProcessor(struct UInventory* Inventory, int32_t Location, struct FItemData Item); // Function BP_DeployableBase.BP_DeployableBase_C.ItemRemovedProcessor // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IcarusBeginPlay(); // Function BP_DeployableBase.BP_DeployableBase_C.IcarusBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void RepairObject(); // Function BP_DeployableBase.BP_DeployableBase_C.RepairObject // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnBecomeInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnBecomeInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnNoLongerInteractedWith(); // Function BP_DeployableBase.BP_DeployableBase_C.OnNoLongerInteractedWith // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DeployableBase(int32_t EntryPoint); // Function BP_DeployableBase.BP_DeployableBase_C.ExecuteUbergraph_BP_DeployableBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

