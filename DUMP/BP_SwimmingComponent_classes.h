// BlueprintGeneratedClass BP_SwimmingComponent.BP_SwimmingComponent_C
// Size: 0x10c (Inherited: 0xe8)
struct UBP_SwimmingComponent_C : UFloatableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe8(0x08)
	bool Swimming; // 0xf0(0x01)
	bool CharacterIsDead?; // 0xf1(0x01)
	char pad_F2[0x2]; // 0xf2(0x02)
	float SurfacingVelocity; // 0xf4(0x04)
	bool SwimUp; // 0xf8(0x01)
	bool SlowImpact; // 0xf9(0x01)
	char pad_FA[0x2]; // 0xfa(0x02)
	int32_t SwimmingModifierUID; // 0xfc(0x04)
	float SwimHeight; // 0x100(0x04)
	float WetHeight; // 0x104(0x04)
	int32_t WetModifierUID; // 0x108(0x04)

	void UpdateSwimmingState(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.UpdateSwimmingState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Swimming(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.OnRep_Swimming // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void StopSwimming(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.StopSwimming // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateState(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.UpdateState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateOverlappedState(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.UpdateOverlappedState // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SwimmingComponent(int32_t EntryPoint); // Function BP_SwimmingComponent.BP_SwimmingComponent_C.ExecuteUbergraph_BP_SwimmingComponent // (Final|UbergraphFunction) // @ game+0x1a05090
};

