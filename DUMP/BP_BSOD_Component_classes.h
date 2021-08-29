// BlueprintGeneratedClass BP_BSOD_Component.BP_BSOD_Component_C
// Size: 0x129 (Inherited: 0xb0)
struct UBP_BSOD_Component_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct TMap<int32_t, struct UMaterialInterface*> PreviousMaterials; // 0xb8(0x50)
	struct UStaticMeshComponent* TerminalMesh; // 0x108(0x08)
	bool BSODActive; // 0x110(0x01)
	char pad_111[0x7]; // 0x111(0x07)
	struct TArray<struct UWidgetComponent*> ScreenWidgets; // 0x118(0x10)
	bool PowerOut; // 0x128(0x01)

	void OnRep_PowerOut(); // Function BP_BSOD_Component.BP_BSOD_Component_C.OnRep_PowerOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_BSODActive(); // Function BP_BSOD_Component.BP_BSOD_Component_C.OnRep_BSODActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RandomDelayed_PowerOutage(); // Function BP_BSOD_Component.BP_BSOD_Component_C.RandomDelayed_PowerOutage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RandomDelayed_ToggleBSOD_FX(bool BSOD); // Function BP_BSOD_Component.BP_BSOD_Component_C.RandomDelayed_ToggleBSOD_FX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_BSOD_Component(int32_t EntryPoint); // Function BP_BSOD_Component.BP_BSOD_Component_C.ExecuteUbergraph_BP_BSOD_Component // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

