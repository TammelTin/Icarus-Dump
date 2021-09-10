// BlueprintGeneratedClass BP_CinematicChair.BP_CinematicChair_C
// Size: 0x388 (Inherited: 0x345)
struct ABP_CinematicChair_C : ABP_SeatBase_C {
	char pad_345[0x3]; // 0x345(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UPostProcessComponent* PostProcess; // 0x350(0x08)
	struct UBoxComponent* Box; // 0x358(0x08)
	struct USceneComponent* Scene; // 0x360(0x08)
	struct AIcarusPlayerCharacter* PreviousPlayer; // 0x368(0x08)
	struct AIcarusPlayerController* OwningController; // 0x370(0x08)
	bool MarkForDestroy; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct UW_SpectatorUI_C* SpectatorUI; // 0x380(0x08)

	struct FRotator GetSeatedPlayerControlRotation(); // Function BP_CinematicChair.BP_CinematicChair_C.GetSeatedPlayerControlRotation // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	struct APawn* GetPossesTarget(); // Function BP_CinematicChair.BP_CinematicChair_C.GetPossesTarget // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool IsDriverSeat(); // Function BP_CinematicChair.BP_CinematicChair_C.IsDriverSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	bool LeaveSeat(bool bChangeSeat, bool bForce); // Function BP_CinematicChair.BP_CinematicChair_C.LeaveSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_CinematicChair.BP_CinematicChair_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnAttachedPlayerDestroyed(struct AActor* DestroyedAttachedPlayer); // Function BP_CinematicChair.BP_CinematicChair_C.OnAttachedPlayerDestroyed // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveDestroyed(); // Function BP_CinematicChair.BP_CinematicChair_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SettingsUpdated(struct FPostProcessSettings Settings); // Function BP_CinematicChair.BP_CinematicChair_C.SettingsUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookUp_K2Node_InputAxisEvent_4(float AxisValue); // Function BP_CinematicChair.BP_CinematicChair_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_4 // (BlueprintEvent) // @ game+0x1a38c80
	void InpAxisEvt_LookRight_K2Node_InputAxisEvent_2(float AxisValue); // Function BP_CinematicChair.BP_CinematicChair_C.InpAxisEvt_LookRight_K2Node_InputAxisEvent_2 // (BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_CinematicChair(int32_t EntryPoint); // Function BP_CinematicChair.BP_CinematicChair_C.ExecuteUbergraph_BP_CinematicChair // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

