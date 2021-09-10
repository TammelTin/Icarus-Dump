// BlueprintGeneratedClass BP_HabManager.BP_HabManager_C
// Size: 0x2a0 (Inherited: 0x220)
struct ABP_HabManager_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UBillboardComponent* EditorBillboard; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float RebootTimeline_NewTrack_0_FF0285414AA0CDA37D860D9F5D650871; // 0x238(0x04)
	enum class ETimelineDirection RebootTimeline__Direction_FF0285414AA0CDA37D860D9F5D650871; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* RebootTimeline; // 0x240(0x08)
	struct TArray<struct UBP_HabComponent_C*> RegisteredComponents; // 0x248(0x10)
	struct FMulticastInlineDelegate OnComponentUpdated; // 0x258(0x10)
	struct TArray<struct FHabMessageColorStruct> AdditionalMessages; // 0x268(0x10)
	bool RebootingMainComputer; // 0x278(0x01)
	char pad_279[0x7]; // 0x279(0x07)
	struct APostProcess_Hab_C* HabPostProcess; // 0x280(0x08)
	float GammaW_Default; // 0x288(0x04)
	float GammaW_PowerOut; // 0x28c(0x04)
	bool AtLeast1WarningPresent; // 0x290(0x01)
	bool AlarmsSilencedThisMapSession; // 0x291(0x01)
	char pad_292[0x6]; // 0x292(0x06)
	struct ABP_MainComputerTerminal_C* MainComputerTerminal; // 0x298(0x08)

	struct ABP_MainComputerTerminal_C* GetMainComputerTerminal(); // Function BP_HabManager.BP_HabManager_C.GetMainComputerTerminal // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void AddRemoveFriendlyTerminalMessage(struct FHabMessageColorStruct MessageData, bool Add); // Function BP_HabManager.BP_HabManager_C.AddRemoveFriendlyTerminalMessage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TogglePowerOnBlueScreenableTerminals(bool PowerOut); // Function BP_HabManager.BP_HabManager_C.TogglePowerOnBlueScreenableTerminals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ToggleAllTerminalsBlueScreen(bool BSOD); // Function BP_HabManager.BP_HabManager_C.ToggleAllTerminalsBlueScreen // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ResetAllAlarms(); // Function BP_HabManager.BP_HabManager_C.ResetAllAlarms // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Server_UpdateStationAlarms(); // Function BP_HabManager.BP_HabManager_C.Server_UpdateStationAlarms // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_RebootingMainComputer(); // Function BP_HabManager.BP_HabManager_C.OnRep_RebootingMainComputer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InitaliseStateAndPowerComponents(); // Function BP_HabManager.BP_HabManager_C.InitaliseStateAndPowerComponents // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ComponentUpdated(struct UBP_HabComponent_C* ComponentUpdated, enum class EHabObjectStatus NewStatus); // Function BP_HabManager.BP_HabManager_C.ComponentUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UnregisterComponent(struct UBP_HabComponent_C* ComponentToUnregister); // Function BP_HabManager.BP_HabManager_C.UnregisterComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RegisterComponent(struct UBP_HabComponent_C* ComponentToRegister); // Function BP_HabManager.BP_HabManager_C.RegisterComponent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RebootTimeline__FinishedFunc(); // Function BP_HabManager.BP_HabManager_C.RebootTimeline__FinishedFunc // (BlueprintEvent) // @ game+0x1a05090
	void RebootTimeline__UpdateFunc(); // Function BP_HabManager.BP_HabManager_C.RebootTimeline__UpdateFunc // (BlueprintEvent) // @ game+0x1a05090
	void RebootFX(); // Function BP_HabManager.BP_HabManager_C.RebootFX // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HabManager.BP_HabManager_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HabManager(int32_t EntryPoint); // Function BP_HabManager.BP_HabManager_C.ExecuteUbergraph_BP_HabManager // (Final|UbergraphFunction) // @ game+0x1a05090
	void OnComponentUpdated__DelegateSignature(struct UBP_HabComponent_C* ComponentUpdated, enum class EHabObjectStatus NewStatus); // Function BP_HabManager.BP_HabManager_C.OnComponentUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

