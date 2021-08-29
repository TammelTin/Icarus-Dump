// BlueprintGeneratedClass BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C
// Size: 0x148 (Inherited: 0x104)
struct UBP_UIProjectionComponent_Generic_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	bool IsAlive; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct ABP_IcarusPlayerCharacterSurvival_C* Player; // 0x118(0x08)
	bool StatAbilityEnable; // 0x120(0x01)
	char pad_121[0x3]; // 0x121(0x03)
	float DotToSee; // 0x124(0x04)
	float RangeToDotSee; // 0x128(0x04)
	float RangeToCloseCircleSee; // 0x12c(0x04)
	bool DotSeeEnable; // 0x130(0x01)
	bool CircleCloseSee; // 0x131(0x01)
	char pad_132[0x6]; // 0x132(0x06)
	struct AIcarusActor* CurrentItem; // 0x138(0x08)
	float RightOffset; // 0x140(0x04)
	float UpOffset; // 0x144(0x04)

	void GatherBounds(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.GatherBounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	struct FVector GetProjectionLocation(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.GetProjectionLocation // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void UpdateWidget(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.UpdateWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateEnabled(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.UpdateEnabled // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_IsAlive(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.OnRep_IsAlive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_UIProjectionComponent_Generic(int32_t EntryPoint); // Function BP_UIProjectionComponent_Generic.BP_UIProjectionComponent_Generic_C.ExecuteUbergraph_BP_UIProjectionComponent_Generic // (Final|UbergraphFunction) // @ game+0x1a05090
};

