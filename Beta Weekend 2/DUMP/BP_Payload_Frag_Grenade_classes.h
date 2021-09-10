// BlueprintGeneratedClass BP_Payload_Frag_Grenade.BP_Payload_Frag_Grenade_C
// Size: 0x2e8 (Inherited: 0x2d4)
struct ABP_Payload_Frag_Grenade_C : ABP_Payload_C {
	char pad_2D4[0x4]; // 0x2d4(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2d8(0x08)
	float BurnRadius; // 0x2e0(0x04)
	float DamageMultiplier; // 0x2e4(0x04)

	void ReceiveBeginPlay(); // Function BP_Payload_Frag_Grenade.BP_Payload_Frag_Grenade_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Payload_Frag_Grenade(int32_t EntryPoint); // Function BP_Payload_Frag_Grenade.BP_Payload_Frag_Grenade_C.ExecuteUbergraph_BP_Payload_Frag_Grenade // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

