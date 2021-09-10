// BlueprintGeneratedClass BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C
// Size: 0x438 (Inherited: 0x42d)
struct ABP_DropShip_RespawnPod_C : ABP_DropShip_C {
	char pad_42D[0x3]; // 0x42d(0x03)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x430(0x08)

	void CheckClientPartsReady(bool PartsReady); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.CheckClientPartsReady // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TriggerShipEvent(struct FDropShipActionsEnum Action, bool Success); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.TriggerShipEvent // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void EnableCollisionOnParts(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.EnableCollisionOnParts // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void BuildDefaultShip(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.BuildDefaultShip // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ShipReadyToBuild(); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.ShipReadyToBuild // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_DropShip_RespawnPod(int32_t EntryPoint); // Function BP_DropShip_RespawnPod.BP_DropShip_RespawnPod_C.ExecuteUbergraph_BP_DropShip_RespawnPod // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

