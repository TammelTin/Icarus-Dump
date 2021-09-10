// BlueprintGeneratedClass BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C
// Size: 0x138 (Inherited: 0x104)
struct UBP_UIProjectionComponent_Player_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	bool IsAlive; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x118(0x08)
	bool SettingsEnable; // 0x120(0x01)
	bool StatAbilityEnable; // 0x121(0x01)
	char pad_122[0x2]; // 0x122(0x02)
	float DotToSee; // 0x124(0x04)
	float RangeToDotSee; // 0x128(0x04)
	float RangeToCloseCircleSee; // 0x12c(0x04)
	bool DotSeeEnable; // 0x130(0x01)
	bool CircleCloseSee; // 0x131(0x01)
	bool DownedPlayerEnable; // 0x132(0x01)
	char pad_133[0x1]; // 0x133(0x01)
	float RangeToSeeDowned; // 0x134(0x04)

	void UpdateWidget(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateEnabled(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_IsAlive(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.OnRep_IsAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetWidgetLocation(struct FVector Location); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.GetWidgetLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CustomEvent_1(struct UActorState* ActorState, float NewHealth); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnActorDeath_Event_1(struct UActorState* ActorState); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.OnActorDeath_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PlayerUIMarkerApplied(bool Value); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.PlayerUIMarkerApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StatsUpdated(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.StatsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Ticking update(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.Ticking update // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_UIProjectionComponent_Player(int32_t EntryPoint); // Function BP_UIProjectionComponent_Player.BP_UIProjectionComponent_Player_C.ExecuteUbergraph_BP_UIProjectionComponent_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

