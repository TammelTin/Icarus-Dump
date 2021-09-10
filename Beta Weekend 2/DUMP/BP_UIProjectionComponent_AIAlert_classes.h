// BlueprintGeneratedClass BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C
// Size: 0x140 (Inherited: 0x104)
struct UBP_UIProjectionComponent_AIAlert_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	int32_t AlertValue; // 0x110(0x04)
	bool PerceptionEnabled; // 0x114(0x01)
	char pad_115[0x3]; // 0x115(0x03)
	float HealthValue; // 0x118(0x04)
	float AlertTickRate; // 0x11c(0x04)
	bool CanSeeHealthBar; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	int32_t Level; // 0x124(0x04)
	struct FAICreatureTypeRowHandle CreatureType; // 0x128(0x18)

	void UpdateLevel(int32_t Level); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.UpdateLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_PerceptionEnabled(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_PerceptionEnabled // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Level(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_Level // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_CreatureType(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_CreatureType // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_HealthValue(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_HealthValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_AlertValue(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnRep_AlertValue // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateHealthState(struct UActorState* ActorState, float NewHealth); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.UpdateHealthState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdatePerceptionState(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.UpdatePerceptionState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetWidgetLocation(struct FVector Location); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnStatContainerUpdated(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.OnStatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void AlertTick(); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.AlertTick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_UIProjectionComponent_AIAlert(int32_t EntryPoint); // Function BP_UIProjectionComponent_AIAlert.BP_UIProjectionComponent_AIAlert_C.ExecuteUbergraph_BP_UIProjectionComponent_AIAlert // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

