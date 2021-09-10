// BlueprintGeneratedClass BP_HabComponent.BP_HabComponent_C
// Size: 0x179 (Inherited: 0xb0)
struct UBP_HabComponent_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	enum class EHabObjectStatus ObjectState; // 0xb8(0x01)
	char pad_B9[0x7]; // 0xb9(0x07)
	struct TMap<enum class EHabObjectStatus, struct FHabMessageColorStruct> ComputerTerminalMessages; // 0xc0(0x50)
	struct FMulticastInlineDelegate ObjectStateUpdated; // 0x110(0x10)
	struct ABP_HabManager_C* HabManager; // 0x120(0x08)
	float DegradeChance; // 0x128(0x04)
	char pad_12C[0x4]; // 0x12c(0x04)
	struct FMulticastInlineDelegate OnInitialise; // 0x130(0x10)
	struct FMulticastInlineDelegate OnPowerChanged; // 0x140(0x10)
	enum class EPowerStates PowerState; // 0x150(0x01)
	char pad_151[0x7]; // 0x151(0x07)
	struct TArray<struct AActor*> PoweredActors; // 0x158(0x10)
	struct ABP_HabDeployable_Base_C* CurrentSocketedDeployable; // 0x168(0x08)
	int32_t Ammo; // 0x170(0x04)
	int32_t MaxAmmo; // 0x174(0x04)
	bool InitializeInSparkingState; // 0x178(0x01)

	void DebugDrawLinesToPoweredActors(); // Function BP_HabComponent.BP_HabComponent_C.DebugDrawLinesToPoweredActors // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCurrentStates(enum class EPowerStates PowerState, enum class EHabObjectStatus ObjectState); // Function BP_HabComponent.BP_HabComponent_C.GetCurrentStates // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SetPowerOnDependants(); // Function BP_HabComponent.BP_HabComponent_C.SetPowerOnDependants // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_PowerState(); // Function BP_HabComponent.BP_HabComponent_C.OnRep_PowerState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Degrade or Set Good(bool Degraded); // Function BP_HabComponent.BP_HabComponent_C.Degrade or Set Good // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_ObjectState(); // Function BP_HabComponent.BP_HabComponent_C.OnRep_ObjectState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetCurrentTerminalMessage(struct FText Message, struct FText Prefix, struct FLinearColor Color, enum class EHabObjectStatus ObjectState, bool Success); // Function BP_HabComponent.BP_HabComponent_C.GetCurrentTerminalMessage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_HabComponent.BP_HabComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Initialise(); // Function BP_HabComponent.BP_HabComponent_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetDeployableActorReference(struct ABP_HabDeployable_Base_C* HabDeployable); // Function BP_HabComponent.BP_HabComponent_C.SetDeployableActorReference // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_HabComponent(int32_t EntryPoint); // Function BP_HabComponent.BP_HabComponent_C.ExecuteUbergraph_BP_HabComponent // (Final|UbergraphFunction) // @ game+0x1a38c80
	void OnPowerChanged__DelegateSignature(enum class EPowerStates NewPowerState); // Function BP_HabComponent.BP_HabComponent_C.OnPowerChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnInitialise__DelegateSignature(); // Function BP_HabComponent.BP_HabComponent_C.OnInitialise__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ObjectStateUpdated__DelegateSignature(struct UBP_HabComponent_C* ComponentUpdated, enum class EHabObjectStatus NewStatus); // Function BP_HabComponent.BP_HabComponent_C.ObjectStateUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

