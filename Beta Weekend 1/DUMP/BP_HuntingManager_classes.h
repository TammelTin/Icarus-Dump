// BlueprintGeneratedClass BP_HuntingManager.BP_HuntingManager_C
// Size: 0xd0 (Inherited: 0xb0)
struct UBP_HuntingManager_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	struct FMulticastInlineDelegate FocusUpdated; // 0xb8(0x10)
	struct AActor* HuntingFocus; // 0xc8(0x08)

	void OnRep_HuntingFocus(); // Function BP_HuntingManager.BP_HuntingManager_C.OnRep_HuntingFocus // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetHuntingFocus(struct AActor* NewFocus); // Function BP_HuntingManager.BP_HuntingManager_C.SetHuntingFocus // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SERVER_RequestSplineLocations(struct AActor* Clue); // Function BP_HuntingManager.BP_HuntingManager_C.SERVER_RequestSplineLocations // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void CLIENT_SendSplineLocations(struct AActor* Clue, struct TArray<struct FVector> Locations); // Function BP_HuntingManager.BP_HuntingManager_C.CLIENT_SendSplineLocations // (Net|NetReliableHasOutParms|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HuntingManager(int32_t EntryPoint); // Function BP_HuntingManager.BP_HuntingManager_C.ExecuteUbergraph_BP_HuntingManager // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void FocusUpdated__DelegateSignature(struct AActor* Actor); // Function BP_HuntingManager.BP_HuntingManager_C.FocusUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

