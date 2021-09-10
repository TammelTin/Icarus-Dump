// BlueprintGeneratedClass BP_HuntingClueSpawner.BP_HuntingClueSpawner_C
// Size: 0x108 (Inherited: 0xb0)
struct UBP_HuntingClueSpawner_C : UActorComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb0(0x08)
	float ClueLifetime; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
	struct ABP_HuntingClue_C* PreviousClue; // 0xc0(0x08)
	struct TArray<struct ABP_HuntingClue_C*> Clues; // 0xc8(0x10)
	struct FVector PreviousAITarget; // 0xd8(0x0c)
	struct FHuntingSetupRowHandle HuntingSetup; // 0xe4(0x18)
	float CurrentTotalDistance; // 0xfc(0x04)
	struct UObject* HuntingClueClass; // 0x100(0x08)

	void GetAI(struct ACharacter* AI); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.GetAI // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetHuntingSetup(struct FHuntingSetup HuntingSetup); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.GetHuntingSetup // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void SpawnClue(); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.SpawnClue // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_BAD3525E4631346FCBB636A938F20AE6(struct UObject* Loaded); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.OnLoaded_BAD3525E4631346FCBB636A938F20AE6 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HuntingClueSpawner(int32_t EntryPoint); // Function BP_HuntingClueSpawner.BP_HuntingClueSpawner_C.ExecuteUbergraph_BP_HuntingClueSpawner // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

