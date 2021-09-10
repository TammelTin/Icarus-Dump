// BlueprintGeneratedClass BP_SpaceStationHUD.BP_SpaceStationHUD_C
// Size: 0x328 (Inherited: 0x310)
struct ABP_SpaceStationHUD_C : AHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x08)
	struct ABP_DropshipPreview_C* DropshipPreview; // 0x320(0x08)

	void ReceiveBeginPlay(); // Function BP_SpaceStationHUD.BP_SpaceStationHUD_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SpaceStationHUD(int32_t EntryPoint); // Function BP_SpaceStationHUD.BP_SpaceStationHUD_C.ExecuteUbergraph_BP_SpaceStationHUD // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

