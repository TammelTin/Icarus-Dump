// BlueprintGeneratedClass BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C
// Size: 0x118 (Inherited: 0x104)
struct UBP_UIProjectionComponent_GraveStone_C : UBP_UIProjectionComponent_C {
	char pad_104[0x4]; // 0x104(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x108(0x08)
	struct ABP_Gravestone_C* Gravestone; // 0x110(0x08)

	void ReceiveBeginPlay(); // Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PlayerStateUpdated(); // Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.PlayerStateUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_UIProjectionComponent_GraveStone(int32_t EntryPoint); // Function BP_UIProjectionComponent_GraveStone.BP_UIProjectionComponent_GraveStone_C.ExecuteUbergraph_BP_UIProjectionComponent_GraveStone // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

