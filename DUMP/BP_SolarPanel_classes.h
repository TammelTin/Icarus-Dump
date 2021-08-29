// BlueprintGeneratedClass BP_SolarPanel.BP_SolarPanel_C
// Size: 0x638 (Inherited: 0x560)
struct ABP_SolarPanel_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UStaticMeshComponent* Power_Level; // 0x568(0x08)
	struct UStaticMeshComponent* TraceParent; // 0x570(0x08)
	struct UArrowComponent* Arrow16; // 0x578(0x08)
	struct UArrowComponent* Arrow15; // 0x580(0x08)
	struct UArrowComponent* Arrow14; // 0x588(0x08)
	struct UArrowComponent* Arrow13; // 0x590(0x08)
	struct UArrowComponent* Arrow12; // 0x598(0x08)
	struct UArrowComponent* Arrow11; // 0x5a0(0x08)
	struct UArrowComponent* Arrow10; // 0x5a8(0x08)
	struct UArrowComponent* Arrow9; // 0x5b0(0x08)
	struct UArrowComponent* Arrow8; // 0x5b8(0x08)
	struct UArrowComponent* Arrow7; // 0x5c0(0x08)
	struct UArrowComponent* Arrow6; // 0x5c8(0x08)
	struct UArrowComponent* Arrow5; // 0x5d0(0x08)
	struct UTextRenderComponent* TextRender; // 0x5d8(0x08)
	struct UArrowComponent* Arrow4; // 0x5e0(0x08)
	struct UArrowComponent* Arrow3; // 0x5e8(0x08)
	struct UArrowComponent* Arrow2; // 0x5f0(0x08)
	struct UArrowComponent* Arrow1; // 0x5f8(0x08)
	struct UArrowComponent* Arrow0; // 0x600(0x08)
	struct ABP_AtmosphereController_C* AtmoController; // 0x608(0x08)
	bool IsDayTime; // 0x610(0x01)
	char pad_611[0x3]; // 0x611(0x03)
	float TraceDist; // 0x614(0x04)
	int32_t ClearTraces; // 0x618(0x04)
	int32_t CurrentPowerPct; // 0x61c(0x04)
	int32_t MaxTraces; // 0x620(0x04)
	char pad_624[0x4]; // 0x624(0x04)
	struct TArray<struct USceneComponent*> Arrows; // 0x628(0x10)

	void UpdateText(); // Function BP_SolarPanel.BP_SolarPanel_C.UpdateText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateActivity(); // Function BP_SolarPanel.BP_SolarPanel_C.UpdateActivity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool Trace(struct FVector Start, struct FVector End); // Function BP_SolarPanel.BP_SolarPanel_C.Trace // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void GetTime(); // Function BP_SolarPanel.BP_SolarPanel_C.GetTime // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Init(); // Function BP_SolarPanel.BP_SolarPanel_C.Init // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_SolarPanel.BP_SolarPanel_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void CheckForObstruction(); // Function BP_SolarPanel.BP_SolarPanel_C.CheckForObstruction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_SolarPanel.BP_SolarPanel_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SolarPanel(int32_t EntryPoint); // Function BP_SolarPanel.BP_SolarPanel_C.ExecuteUbergraph_BP_SolarPanel // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

