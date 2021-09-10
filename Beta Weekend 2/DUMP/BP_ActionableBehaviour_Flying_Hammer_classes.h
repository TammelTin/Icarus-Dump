// BlueprintGeneratedClass BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C
// Size: 0x300 (Inherited: 0x2d1)
struct UBP_ActionableBehaviour_Flying_Hammer_C : UBP_ActionableBehaviour_Base_C {
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	struct ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer; // 0x2e0(0x08)
	float ShootTime; // 0x2e8(0x04)
	bool Swinging; // 0x2ec(0x01)
	char pad_2ED[0x3]; // 0x2ed(0x03)
	float SwingPower; // 0x2f0(0x04)
	float Power; // 0x2f4(0x04)
	bool Flying; // 0x2f8(0x01)
	bool FlyingForward; // 0x2f9(0x01)
	bool Hovering; // 0x2fa(0x01)
	char pad_2FB[0x1]; // 0x2fb(0x01)
	int32_t FallDamageModifierUID; // 0x2fc(0x04)

	void UpdateFlyingForward(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.UpdateFlyingForward // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateFlying(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.UpdateFlying // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateSwinging(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.UpdateSwinging // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(struct AActor* OwningActor); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_UpdateSwinging(bool Swinging); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.Server_UpdateSwinging // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_UpdateHover(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.Server_UpdateHover // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PerformAction(struct AActor* InvokingActor, enum class EActionableEventType OnActionType, enum class EActionableTrigger ActionTrigger); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.PerformAction // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Server_StartLightning(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.Server_StartLightning // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Server_StopLightning(); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.Server_StopLightning // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_ActionableBehaviour_Flying_Hammer(int32_t EntryPoint); // Function BP_ActionableBehaviour_Flying_Hammer.BP_ActionableBehaviour_Flying_Hammer_C.ExecuteUbergraph_BP_ActionableBehaviour_Flying_Hammer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

