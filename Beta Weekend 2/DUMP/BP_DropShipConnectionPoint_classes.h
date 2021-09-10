// BlueprintGeneratedClass BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C
// Size: 0x3f0 (Inherited: 0x3e0)
struct ABP_DropShipConnectionPoint_C : AIcarusRocketPartConnector {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3e0(0x08)
	struct UStaticMeshComponent* Sphere; // 0x3e8(0x08)

	void ReceiveBeginPlay(); // Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnConnectionUpdated(); // Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.OnConnectionUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_DropShipConnectionPoint(int32_t EntryPoint); // Function BP_DropShipConnectionPoint.BP_DropShipConnectionPoint_C.ExecuteUbergraph_BP_DropShipConnectionPoint // (Final|UbergraphFunction) // @ game+0x1a38c80
};

