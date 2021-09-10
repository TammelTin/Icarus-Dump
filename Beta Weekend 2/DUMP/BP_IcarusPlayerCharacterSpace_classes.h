// BlueprintGeneratedClass BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C
// Size: 0xc18 (Inherited: 0x9f0)
struct ABP_IcarusPlayerCharacterSpace_C : AIcarusPlayerCharacterSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9f0(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraintR; // 0x9f8(0x08)
	struct UPhysicsConstraintComponent* PhysicsConstraintL; // 0xa00(0x08)
	struct UPostProcessComponent* HighlightablePostProcess; // 0xa08(0x08)
	struct UWidgetComponent* PlayerNameWidget; // 0xa10(0x08)
	struct UCameraComponent* Camera; // 0xa18(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0xa20(0x08)
	struct UPhysicalAnimationComponent* PhysicalAnimation; // 0xa28(0x08)
	bool DebuggingMovement; // 0xa30(0x01)
	char pad_A31[0x3]; // 0xa31(0x03)
	float RotationSpeed; // 0xa34(0x04)
	bool SprintPressed; // 0xa38(0x01)
	char pad_A39[0x3]; // 0xa39(0x03)
	struct FVector ReplicatedLocation; // 0xa3c(0x0c)
	struct FVector ReplicatedVelocity; // 0xa48(0x0c)
	char pad_A54[0x4]; // 0xa54(0x04)
	struct UPrimitiveComponent* Current Hit Component; // 0xa58(0x08)
	bool NearSurface; // 0xa60(0x01)
	char pad_A61[0x7]; // 0xa61(0x07)
	struct FTimerHandle InteractionTimer; // 0xa68(0x08)
	struct FItemData RightHandItem_Data; // 0xa70(0x80)
	struct AIcarusItem* FocusedItem; // 0xaf0(0x08)
	struct U3RD_CHA_RIG_Space_AnimBP_C* AnimInstanceBP; // 0xaf8(0x08)
	float ControllerRoll; // 0xb00(0x04)
	float RollAccelerationWhenGripped; // 0xb04(0x04)
	float RollAccelerationWhenFloating; // 0xb08(0x04)
	float RollDecelerationWhenFloating; // 0xb0c(0x04)
	int32_t TouchCheckCount; // 0xb10(0x04)
	float TouchTurnRatio; // 0xb14(0x04)
	float TouchForwardConeRatio; // 0xb18(0x04)
	float TouchTraceLength; // 0xb1c(0x04)
	float SquareArmRange; // 0xb20(0x04)
	float GripMagnetismStrength; // 0xb24(0x04)
	float ThrowTime; // 0xb28(0x04)
	float ThrowSpeed; // 0xb2c(0x04)
	float GrippingMoveSpeed; // 0xb30(0x04)
	float GrippingSprintSpeed; // 0xb34(0x04)
	struct UCurveFloat* GripOrientationStrengthCurve; // 0xb38(0x08)
	bool LookLocked; // 0xb40(0x01)
	char pad_B41[0x3]; // 0xb41(0x03)
	float Acceleration; // 0xb44(0x04)
	float FloatingAcceleration; // 0xb48(0x04)
	float Deceleration; // 0xb4c(0x04)
	float FloatingDeceleration; // 0xb50(0x04)
	float FloatingSpeed; // 0xb54(0x04)
	float Use6DOFMovement; // 0xb58(0x04)
	struct FVector OffsetVelocity; // 0xb5c(0x0c)
	bool Grounded; // 0xb68(0x01)
	char pad_B69[0x3]; // 0xb69(0x03)
	float GroundedMoveSpeed; // 0xb6c(0x04)
	float GroundedSprintSpeed; // 0xb70(0x04)
	struct FVector GroundUpAxis; // 0xb74(0x0c)
	float GroundUpStrength; // 0xb80(0x04)
	struct FRotator TargetRotation; // 0xb84(0x0c)
	bool DebuggingPrediction; // 0xb90(0x01)
	char pad_B91[0x7]; // 0xb91(0x07)
	struct FItemData InventoryItem; // 0xb98(0x80)

	bool IsHabCharacter(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsHabCharacter // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct USkeletalMeshComponent* GetFirstPersonMesh(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetFirstPersonMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateCharacterVisuals(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateCharacterVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool OnUnFocusItem(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnUnFocusItem // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool OnFocusItem(struct FItemData InventoryItem); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnFocusItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateMeshVisibility(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateMeshVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnEquipmentUpdated(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnEquipmentUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FHabMovementStateStruct MakeMovementStateFromCurrentData(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MakeMovementStateFromCurrentData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PredictMovementForFrames(int32_t FramesToPredict, struct FHabMovementStateStruct InitialState, struct TArray<struct FHabMovementStateStruct> OutMovementStateArray, struct TArray<struct FHabHandStateStruct> OutLeftHandArray, struct TArray<struct FHabHandStateStruct> OutRightHandArray); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PredictMovementForFrames // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CheckIfTouchingSurface(struct FHabHandStateStruct LeftHandState, struct FHabHandStateStruct RightHandState, float Use6DOFMovement); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.CheckIfTouchingSurface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void MoveCharacterWithPhysics(bool IgnoreLocalUp); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MoveCharacterWithPhysics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PredictMovementState(struct FHabMovementStateStruct LastMovementState, struct FHabHandStateStruct LastLeftHand, struct FHabHandStateStruct LastRightHand, struct FHabMovementStateStruct NewMovementState, struct FHabHandStateStruct NewLeftHand, struct FHabHandStateStruct NewRightHand); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PredictMovementState // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateHeadRotation(float DeltaSeconds); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateHeadRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsHandReaching(bool ForLeftHand, bool Return Value); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsHandReaching // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	enum class ESpaceHandGripMode GetHandMode(bool ForLeftHand); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetHandMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct FHabHandStateStruct GetHandState(bool ForLeftHand); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetHandState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void UpdateCapsuleRotation(float DeltaTime); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateCapsuleRotation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void IsUsing6DOFMovement(bool Use6DOFMovement); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsUsing6DOFMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void Get6DOFMovement(float Use6DOFMovement); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.Get6DOFMovement // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void Set6DOFMovementRatio(float Use6DOFMovement); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.Set6DOFMovementRatio // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool TraceGround(struct FHitResult OutHit, struct FVector Location); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.TraceGround // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AutoOrientUsingConstraint(bool ForLeftHand); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.AutoOrientUsingConstraint // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool ConsumeFocusedItem(int32_t Amount); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ConsumeFocusedItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetMaxSpeed(struct FHabMovementStateStruct MovementState); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetMaxSpeed // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void AddReactionImpulseToGrippedComponent(bool ForLeftHand, struct FVector Impulse); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.AddReactionImpulseToGrippedComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetConstraintActive(bool ForLeftHand, bool NewActive); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.SetConstraintActive // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsAnyRotationInput(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsAnyRotationInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsAnyMovementInput(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsAnyMovementInput // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void CalculatePhysics(bool IgnoreLocalUp, struct FHabMovementStateStruct LastMovementState, struct FVector OutDeltaVelocity); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.CalculatePhysics // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateGripAutoOrientLocation(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateGripAutoOrientLocation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateGripAutoOrientRoll(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateGripAutoOrientRoll // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool FindGripTargets(float SearchRadius, struct FVector ActorLocation, bool debugging, struct TArray<struct UPrimitiveComponent*> OutComponents); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.FindGripTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddGripTargetMagnetism(bool ForLeftHand, bool StillHasValidGripTargets, struct FVector MagnetismVector, bool MagnetismActive); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.AddGripTargetMagnetism // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector MakeTargetLocation(bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MakeTargetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetBestHandStateFromGripTargets(struct TArray<struct UPrimitiveComponent*> Array, bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity, bool FoundHandState, struct FHabHandStateStruct HandState); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetBestHandStateFromGripTargets // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool CheckArmAngle(bool ForLeftHand, struct FVector Location, struct FTransform ActorTransform); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.CheckArmAngle // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void GetBestHandStateGromTouch(struct TArray<struct FHabHandStateStruct> Array, bool ForLeftHand, struct FTransform ActorTransform, struct FVector Velocity, bool FoundHandState, struct FHabHandStateStruct HandState); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetBestHandStateGromTouch // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float PerformRollSmoothing(float TargetRollValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PerformRollSmoothing // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateHandDistance(bool Index); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UpdateHandDistance // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FindSurfaceTouches(struct FTransform ActorTransform, bool debugging, int32_t CheckCount, struct TArray<struct FHabHandStateStruct> HandStates); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.FindSurfaceTouches // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FilterGripTargets(struct TArray<struct AActor*> Array, struct TArray<struct UPrimitiveComponent*> FilteredArray); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.FilterGripTargets // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct USkeletalMeshComponent* GetVisibleCharacterMesh(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetVisibleCharacterMesh // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetMeshMontagePlayRate(struct USkeletalMeshComponent* Mesh, float PlayRate); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.SetMeshMontagePlayRate // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_FocusedItem(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnRep_FocusedItem // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool DropItem(struct FItemData InventoryItem); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.DropItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool PickupItem(struct AIcarusItem* Item); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PickupItem // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool OnInteractableLineTraceHit(struct FHitResult HitResult); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnInteractableLineTraceHit // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsHandStateValid(bool ForLeftHand, struct FHabHandStateStruct HandState, struct FTransform ActorTransform); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsHandStateValid // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsTouchingSurface(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.IsTouchingSurface // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void GetBestHandMode(struct FHabHandStateStruct LeftHandState, struct FHabHandStateStruct RightHandState, enum class ESpaceHandGripMode HandMode, bool Reaching); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.GetBestHandMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void SetAnimHandMode(bool ForLeftHand, enum class ESpaceHandGripMode NewHandMode, bool Reaching); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.SetAnimHandMode // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetAnimHandHit(bool ForLeftHand, struct FHabHandStateStruct NewHandState); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.SetAnimHandHit // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckHandGrip(bool ForLeftHand, struct FHabHandStateStruct CurrentHandState, struct TArray<struct UPrimitiveComponent*> GripTargets, struct TArray<struct FHabHandStateStruct> TouchHandStates, struct FTransform ActorTransform, struct FVector Velocity, float CurrentTime, struct FHabHandStateStruct OutHandState); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.CheckHandGrip // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitialiseInventories(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InitialiseInventories // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Interact_K2Node_InputActionEvent_9(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Interact_K2Node_InputActionEvent_9 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Interact_K2Node_InputActionEvent_8(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Interact_K2Node_InputActionEvent_8 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Fire_K2Node_InputActionEvent_7(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_7 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Fire_K2Node_InputActionEvent_6(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Fire_K2Node_InputActionEvent_6 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_AltFire_K2Node_InputActionEvent_5(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_5 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_AltFire_K2Node_InputActionEvent_4(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_AltFire_K2Node_InputActionEvent_4 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Sprint_K2Node_InputActionEvent_3(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Sprint_K2Node_InputActionEvent_3 // (BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Sprint_K2Node_InputActionEvent_2(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Sprint_K2Node_InputActionEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void OnNotifyEnd_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnNotifyEnd_A0EE5E9E4EEAC509BB86ABBACC336206 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnNotifyBegin_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnNotifyBegin_A0EE5E9E4EEAC509BB86ABBACC336206 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnInterrupted_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnInterrupted_A0EE5E9E4EEAC509BB86ABBACC336206 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnBlendOut_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnBlendOut_A0EE5E9E4EEAC509BB86ABBACC336206 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCompleted_A0EE5E9E4EEAC509BB86ABBACC336206(struct FName NotifyName); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.OnCompleted_A0EE5E9E4EEAC509BB86ABBACC336206 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpActEvt_Jump_K2Node_InputActionEvent_1(struct FKey Key); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpActEvt_Jump_K2Node_InputActionEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void MovementPrediction(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MovementPrediction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InteractHeld(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InteractHeld // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ServerPlayerAction(enum class EActionableEventType ActionType, enum class EActionableTrigger Trigger); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ServerPlayerAction // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StartThrow(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.StartThrow // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_MoveUp_K2Node_InputAxisEvent_3 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_5(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_5 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_6(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_6 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_RollRight_K2Node_InputAxisEvent_7(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_RollRight_K2Node_InputAxisEvent_7 // (BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void NotifyLocationUpdated(struct FVector CurrentLocation); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.NotifyLocationUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NotifyRotationUpdated(struct FRotator NewRotation); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.NotifyRotationUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NotifyVelocityUpdated(struct FVector CurrentLocation); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.NotifyVelocityUpdated // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MovementReplicationTick(float Delta); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MovementReplicationTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void MovementPhysicsTick(float DeltaSeconds); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.MovementPhysicsTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PlayMontage(struct UAnimMontage* Montage, struct UAnimMontage* FP_Montage, bool LockMotion, struct FName StartingSection, struct FName FP_StartingSection, float PlaySpeed); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PlayMontage // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetMontagePlayRate(float PlayRate); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.SetMontagePlayRate // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_1 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void PreCharacterDestruction(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.PreCharacterDestruction // (BlueprintEvent) // @ game+0x1a38c80
	void FOVApplied(float Value); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.FOVApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EquipmentItemChanged(struct UInventory* Inventory, int32_t Location); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.EquipmentItemChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EquipmentUpdated(); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.EquipmentUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceivePossessed(struct AController* NewController); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusPlayerCharacterSpace(int32_t EntryPoint); // Function BP_IcarusPlayerCharacterSpace.BP_IcarusPlayerCharacterSpace_C.ExecuteUbergraph_BP_IcarusPlayerCharacterSpace // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

