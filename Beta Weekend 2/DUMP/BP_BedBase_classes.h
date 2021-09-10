// BlueprintGeneratedClass BP_BedBase.BP_BedBase_C
// Size: 0x578 (Inherited: 0x550)
struct ABP_BedBase_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UBP_UIProjectionComponent_C* BP_UIProjectionComponent; // 0x558(0x08)
	struct TArray<struct FString> AssignedPlayerUIDs; // 0x560(0x10)
	struct ABP_Seat_Bed_C* SeatRef; // 0x570(0x08)

	struct TArray<struct FString> GetPlayerUIDArray(); // Function BP_BedBase.BP_BedBase_C.GetPlayerUIDArray // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void GetWidgetClass(struct UUserWidget* Widget); // Function BP_BedBase.BP_BedBase_C.GetWidgetClass // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_BedBase.BP_BedBase_C.Deployable_Interact // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool IsSheltered(); // Function BP_BedBase.BP_BedBase_C.IsSheltered // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void EnterBed(struct AIcarusPlayerCharacter* Player); // Function BP_BedBase.BP_BedBase_C.EnterBed // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void CheckTimeSkip(); // Function BP_BedBase.BP_BedBase_C.CheckTimeSkip // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InitSeat(); // Function BP_BedBase.BP_BedBase_C.InitSeat // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateInWorldIcon(); // Function BP_BedBase.BP_BedBase_C.UpdateInWorldIcon // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	struct FVector FindExitSpot(); // Function BP_BedBase.BP_BedBase_C.FindExitSpot // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_AssignedPlayerUIDs(); // Function BP_BedBase.BP_BedBase_C.OnRep_AssignedPlayerUIDs // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	bool HasPlayerUID(struct FString PlayerUID); // Function BP_BedBase.BP_BedBase_C.HasPlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void SanitzeAllBedUIDs(); // Function BP_BedBase.BP_BedBase_C.SanitzeAllBedUIDs // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void RemovePlayerUID(struct FString PlayerUID); // Function BP_BedBase.BP_BedBase_C.RemovePlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void AddPlayerUID(struct FString PlayerUID); // Function BP_BedBase.BP_BedBase_C.AddPlayerUID // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_BedBase.BP_BedBase_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void SetPlayerUIDArray(struct TArray<struct FString> PlayerUIDArray); // Function BP_BedBase.BP_BedBase_C.SetPlayerUIDArray // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_BedBase(int32_t EntryPoint); // Function BP_BedBase.BP_BedBase_C.ExecuteUbergraph_BP_BedBase // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

