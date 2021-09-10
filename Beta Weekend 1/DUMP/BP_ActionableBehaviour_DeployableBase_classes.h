// BlueprintGeneratedClass BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C
// Size: 0x7e4 (Inherited: 0x418)
struct UBP_ActionableBehaviour_DeployableBase_C : UBP_ActionableBehaviour_SimplePlace_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x418(0x08)
	struct ABP_DeployablePreview_C* PreviewActor; // 0x420(0x08)
	bool CurrentPlacementValid; // 0x428(0x01)
	char pad_429[0x7]; // 0x429(0x07)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x430(0x08)
	struct FDeployableData DeployableData; // 0x438(0x130)
	struct UDeployableComponent* DeployableComponent; // 0x568(0x08)
	struct FTransform CachedPreviewTransform; // 0x570(0x30)
	float UpwardsFacingLimit; // 0x5a0(0x04)
	bool IsRotating; // 0x5a4(0x01)
	char pad_5A5[0xb]; // 0x5a5(0x0b)
	struct FTransform PlayerPlacementTransform; // 0x5b0(0x30)
	struct FRotator DesiredLocalDeployableRotation; // 0x5e0(0x0c)
	char pad_5EC[0x4]; // 0x5ec(0x04)
	struct FTransform DeployablePlacementTransform; // 0x5f0(0x30)
	struct AActor* FoundationActor; // 0x620(0x08)
	bool SnapRotationToBuildingGrid; // 0x628(0x01)
	char pad_629[0x3]; // 0x629(0x03)
	float AngleSnapAmount; // 0x62c(0x04)
	struct AActor* ClassToSnapTo; // 0x630(0x08)
	bool ActorSnapValid; // 0x638(0x01)
	char pad_639[0x7]; // 0x639(0x07)
	struct AActor* SnapActor; // 0x640(0x08)
	struct FItemData ItemData; // 0x648(0x80)
	struct FName SnapSocket; // 0x6c8(0x08)
	bool DebugDeployment; // 0x6d0(0x01)
	char pad_6D1[0x7]; // 0x6d1(0x07)
	struct FItemData SpawnedItem; // 0x6d8(0x80)
	struct FHitResult LastDeployAttemptTrace; // 0x758(0x8c)

	void GetPreviewMeshPlacement(struct FVector AttemptedPlacePosition, struct FVector PlacePositionNormal, struct AActor* HitFloorActor, struct FTransform OutPreviewTransform, struct FName OutSnapSocket, struct AActor* OutSnapActor, bool OutActorSnapValid); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetPreviewMeshPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryDeploy(struct FHitResult InHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.TryDeploy // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShouldActionCameraTrace(enum class EActionableEventType ActionableType, enum class EActionableTrigger ActionableTrigger, bool ShouldTrace); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.ShouldActionCameraTrace // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool GetPreviewActorOverlappingComponents(struct TArray<struct UPrimitiveComponent*> OutComponents); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetPreviewActorOverlappingComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void DEBUG_DisplayDeploymentFailureMessage(struct FString Message, float Duration); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.DEBUG_DisplayDeploymentFailureMessage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindValidSocketOnActors(struct TArray<struct AActor*> Actors, struct FVector TraceLocation, struct TArray<struct FName> SocketsAndTags, bool Found, struct FTransform SocketTransform, struct AActor* SnapActor, struct FName SnapSocket); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.FindValidSocketOnActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetFoundationActorDepth(struct AActor* Foundation, int32_t ActorDepth); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetFoundationActorDepth // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayDeployedSound(struct ADeployable* Deployable); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.PlayDeployedSound // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetPreviewStaticMeshAsset(struct TSoftObjectPtr<UStaticMesh> StaticMeshAsset); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetPreviewStaticMeshAsset // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool IsDestroyed(struct AActor* Actor); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.IsDestroyed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool DoTrace(struct FHitResult OutHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.DoTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct TArray<enum class EObjectTypeQuery> GetObjectTraceChannels(); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetObjectTraceChannels // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a05090
	void GetTraceIgnoreActors(struct TArray<struct AActor*> OutIgnoreActors); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetTraceIgnoreActors // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	bool PerformLineTrace(struct FVector TraceStart, struct FVector TraceEnd, bool TraceComplex, struct TArray<struct AActor*> IgnoreActors, struct FHitResult OutHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.PerformLineTrace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void FindClosestSocketPointOnActor(struct AActor* InActor, struct TArray<struct FName> SocketsAndTags, struct FVector Origin, struct UActorComponent* OutComponent, struct FTransform OutTransform, struct FName OutSocket, bool FoundPoint); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.FindClosestSocketPointOnActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateMeshVisibility(); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.UpdateMeshVisibility // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTraceDistance(float TraceDistance); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.GetTraceDistance // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void Update Mesh Preview Placement(struct FHitResult Hit, bool DidHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.Update Mesh Preview Placement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateMeshPreview(struct FHitResult Hit, bool DidHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.UpdateMeshPreview // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnDeploy(struct ADeployable* SpawnedDeployable); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.OnDeploy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CheckValidPlacement(struct FHitResult InHit, bool IsValidPlacement); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.CheckValidPlacement // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update Preview Material(bool ValidPlacement); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.Update Preview Material // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_F2A5421C4D141CEB2D751992D50E6C36(struct UObject* Loaded); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.OnLoaded_F2A5421C4D141CEB2D751992D50E6C36 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnActionCameraTraceHit(struct FHitResult Hit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.OnActionCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TickCameraTraceHit(struct FHitResult Hit, bool DidHit); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.TickCameraTraceHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Server_ValidateAndDeploy(struct FHitResult InHit, struct FTransform DeployTransform, struct AActor* FoundationActor, struct FItemData ItemData); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.Server_ValidateAndDeploy // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_BeginRotationMode(struct FHitResult Hit, struct FTransform Transform); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.Server_BeginRotationMode // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Multi_BeginRotationMode(struct FTransform DeployableTransform, struct FRotator RelativeRotation, struct FTransform PlayerTransform, struct AActor* FoundationActor); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.Multi_BeginRotationMode // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ActionableBehaviour_DeployableBase(int32_t EntryPoint); // Function BP_ActionableBehaviour_DeployableBase.BP_ActionableBehaviour_DeployableBase_C.ExecuteUbergraph_BP_ActionableBehaviour_DeployableBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

