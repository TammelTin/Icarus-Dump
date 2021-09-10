// BlueprintGeneratedClass BP_SpectatorActor.BP_SpectatorActor_C
// Size: 0x258 (Inherited: 0x220)
struct ABP_SpectatorActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UCameraComponent* Camera; // 0x228(0x08)
	struct USpringArmComponent* SpringArm; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	struct AActor* PlayerToSpectate; // 0x240(0x08)
	int32_t CurrentPlayer; // 0x248(0x04)
	float MaxCameraDistance; // 0x24c(0x04)
	float MinCameraDistance; // 0x250(0x04)
	float HitCameraOffset; // 0x254(0x04)

	void UpdateSpringArm(struct FRotator ControlRotation); // Function BP_SpectatorActor.BP_SpectatorActor_C.UpdateSpringArm // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ChangePlayer(bool Previous); // Function BP_SpectatorActor.BP_SpectatorActor_C.ChangePlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetPlayer(int32_t Index, struct AActor* Item); // Function BP_SpectatorActor.BP_SpectatorActor_C.GetPlayer // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void NextPlayer(bool Previous); // Function BP_SpectatorActor.BP_SpectatorActor_C.NextPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetPlayer(struct AActor* Player); // Function BP_SpectatorActor.BP_SpectatorActor_C.SetPlayer // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_SpectatorActor.BP_SpectatorActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SpectatorActor.BP_SpectatorActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SpectatorActor(int32_t EntryPoint); // Function BP_SpectatorActor.BP_SpectatorActor_C.ExecuteUbergraph_BP_SpectatorActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

