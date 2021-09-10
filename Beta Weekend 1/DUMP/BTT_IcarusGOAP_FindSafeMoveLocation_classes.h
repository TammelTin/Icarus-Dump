// BlueprintGeneratedClass BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C
// Size: 0xd8 (Inherited: 0xa8)
struct UBTT_IcarusGOAP_FindSafeMoveLocation_C : UBTTask_BlueprintBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa8(0x08)
	struct FBlackboardKeySelector LocationKey; // 0xb0(0x28)

	void ReceiveExecute(struct AActor* OwnerActor); // Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.ReceiveExecute // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnQueryFinished(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.OnQueryFinished // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation(int32_t EntryPoint); // Function BTT_IcarusGOAP_FindSafeMoveLocation.BTT_IcarusGOAP_FindSafeMoveLocation_C.ExecuteUbergraph_BTT_IcarusGOAP_FindSafeMoveLocation // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

