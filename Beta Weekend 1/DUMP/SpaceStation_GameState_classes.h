// BlueprintGeneratedClass SpaceStation_GameState.SpaceStation_GameState_C
// Size: 0x4a0 (Inherited: 0x2c0)
struct ASpaceStation_GameState_C : AIcarusGameStateSpace {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x2c8(0x08)
	struct FMulticastInlineDelegate ShowLoadingScreen; // 0x2d0(0x10)
	struct FMulticastInlineDelegate SharePercentagesChanged; // 0x2e0(0x10)
	struct FMulticastInlineDelegate ReadyStateChanged; // 0x2f0(0x10)
	struct FFProspectServerInfo Contract; // 0x300(0x190)
	struct FMulticastInlineDelegate ContractUpdated; // 0x490(0x10)

	void OnRep_Contract(); // Function SpaceStation_GameState.SpaceStation_GameState_C.OnRep_Contract // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetContract(struct FFProspectServerInfo New Contract); // Function SpaceStation_GameState.SpaceStation_GameState_C.SetContract // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MULTICAST_ShowLoadingScreen(); // Function SpaceStation_GameState.SpaceStation_GameState_C.MULTICAST_ShowLoadingScreen // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnServer_UnreadyAllPlayers(); // Function SpaceStation_GameState.SpaceStation_GameState_C.OnServer_UnreadyAllPlayers // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_SpaceStation_GameState(int32_t EntryPoint); // Function SpaceStation_GameState.SpaceStation_GameState_C.ExecuteUbergraph_SpaceStation_GameState // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ContractUpdated__DelegateSignature(); // Function SpaceStation_GameState.SpaceStation_GameState_C.ContractUpdated__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReadyStateChanged__DelegateSignature(); // Function SpaceStation_GameState.SpaceStation_GameState_C.ReadyStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SharePercentagesChanged__DelegateSignature(); // Function SpaceStation_GameState.SpaceStation_GameState_C.SharePercentagesChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ShowLoadingScreen__DelegateSignature(bool Show); // Function SpaceStation_GameState.SpaceStation_GameState_C.ShowLoadingScreen__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

