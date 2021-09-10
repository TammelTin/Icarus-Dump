// BlueprintGeneratedClass BP_Flammable_Player.BP_Flammable_Player_C
// Size: 0x1b9 (Inherited: 0x11c)
struct UBP_Flammable_Player_C : UBP_Flammable_Actor_C {
	char pad_11C[0x4]; // 0x11c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x120(0x08)
	struct FFlammableData Out Data; // 0x128(0x78)
	struct FTimerHandle Spread FireHandle; // 0x1a0(0x08)
	struct TArray<struct FHitResult> TempHitArray; // 0x1a8(0x10)
	bool LitSomething; // 0x1b8(0x01)

	void ReceiveBeginPlay(); // Function BP_Flammable_Player.BP_Flammable_Player_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void OnFireCheck(); // Function BP_Flammable_Player.BP_Flammable_Player_C.OnFireCheck // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LightSomethingElseOnFire(); // Function BP_Flammable_Player.BP_Flammable_Player_C.LightSomethingElseOnFire // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Flammable_Player(int32_t EntryPoint); // Function BP_Flammable_Player.BP_Flammable_Player_C.ExecuteUbergraph_BP_Flammable_Player // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

