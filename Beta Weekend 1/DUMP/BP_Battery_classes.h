// BlueprintGeneratedClass BP_Battery.BP_Battery_C
// Size: 0x584 (Inherited: 0x560)
struct ABP_Battery_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UChildActorComponent* Ouput; // 0x568(0x08)
	struct UChildActorComponent* Input; // 0x570(0x08)
	struct UTextRenderComponent* TextRender_1; // 0x578(0x08)
	int32_t LocalStored; // 0x580(0x04)

	void ReceiveTick(float DeltaSeconds); // Function BP_Battery.BP_Battery_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Battery(int32_t EntryPoint); // Function BP_Battery.BP_Battery_C.ExecuteUbergraph_BP_Battery // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

