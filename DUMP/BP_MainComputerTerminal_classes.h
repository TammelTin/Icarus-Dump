// BlueprintGeneratedClass BP_MainComputerTerminal.BP_MainComputerTerminal_C
// Size: 0x32a (Inherited: 0x2a0)
struct ABP_MainComputerTerminal_C : AIcarusActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2a0(0x08)
	struct UAudioComponent* WarningAudio; // 0x2a8(0x08)
	struct UTextRenderComponent* TextRender1; // 0x2b0(0x08)
	struct UTextRenderComponent* TextRender; // 0x2b8(0x08)
	struct UStaticMeshComponent* StaticMeshSlot; // 0x2c0(0x08)
	struct UChildActorComponent* ResetAlarmsButton; // 0x2c8(0x08)
	struct UChildActorComponent* RebootButton; // 0x2d0(0x08)
	struct UStaticMeshComponent* ButtonBGMesh; // 0x2d8(0x08)
	struct UWidgetComponent* DisplayWidget; // 0x2e0(0x08)
	struct FMulticastInlineDelegate SystemRebootStarted; // 0x2e8(0x10)
	struct FMulticastInlineDelegate SystemRebootComplete; // 0x2f8(0x10)
	struct FMulticastInlineDelegate UpdatedWarnings; // 0x308(0x10)
	struct ABP_HabManager_C* HabManager; // 0x318(0x08)
	struct UW_MainComputerTerminal_C* MainComputerWidget; // 0x320(0x08)
	bool ChirpAlarm; // 0x328(0x01)
	bool RebootedThisSession; // 0x329(0x01)

	void OnRep_ChirpAlarm(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.OnRep_ChirpAlarm // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Nothing(struct UBP_HabComponent_C* ComponentUpdated, enum class EHabObjectStatus NewStatus); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.Nothing // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Reboot(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.Reboot // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_MainComputerTerminal(int32_t EntryPoint); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.ExecuteUbergraph_BP_MainComputerTerminal // (Final|UbergraphFunction) // @ game+0x1a05090
	void UpdatedWarnings__DelegateSignature(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.UpdatedWarnings__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SystemRebootComplete__DelegateSignature(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.SystemRebootComplete__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SystemRebootStarted__DelegateSignature(); // Function BP_MainComputerTerminal.BP_MainComputerTerminal_C.SystemRebootStarted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

