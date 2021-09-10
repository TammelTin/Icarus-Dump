// BlueprintGeneratedClass BP_DropshipSeat.BP_DropshipSeat_C
// Size: 0x3a1 (Inherited: 0x345)
struct ABP_DropshipSeat_C : ABP_SeatBase_C {
	char pad_345[0x3]; // 0x345(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct USceneComponent* Exit_4; // 0x350(0x08)
	struct USceneComponent* Exit_3; // 0x358(0x08)
	struct USceneComponent* Exit_2; // 0x360(0x08)
	bool SeatLocked; // 0x368(0x01)
	bool ClientSync; // 0x369(0x01)
	char pad_36A[0x6]; // 0x36a(0x06)
	struct FTransform SyncedTransform; // 0x370(0x30)
	bool Shake; // 0x3a0(0x01)

	void OnRep_SyncedTransform(); // Function BP_DropshipSeat.BP_DropshipSeat_C.OnRep_SyncedTransform // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	bool EnterSeat(struct AIcarusPlayerCharacter* PlayerCharacter); // Function BP_DropshipSeat.BP_DropshipSeat_C.EnterSeat // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ServerInteract(); // Function BP_DropshipSeat.BP_DropshipSeat_C.ServerInteract // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DropshipSeat(int32_t EntryPoint); // Function BP_DropshipSeat.BP_DropshipSeat_C.ExecuteUbergraph_BP_DropshipSeat // (Final|UbergraphFunction) // @ game+0x1a05090
};

