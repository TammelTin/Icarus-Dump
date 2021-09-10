// BlueprintGeneratedClass BP_IcarusGameInstance.BP_IcarusGameInstance_C
// Size: 0x570 (Inherited: 0x548)
struct UBP_IcarusGameInstance_C : UIcarusGameInstance {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x548(0x08)
	struct FMulticastInlineDelegate RequestErrorEvent; // 0x550(0x10)
	struct ULevelStreamingDynamic* LoadingScreenLevel; // 0x560(0x08)
	struct UTextureRenderTarget2D* RT_LoadingScreen; // 0x568(0x08)

	void CreateLoadingScreenRT(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CreateLoadingScreenRT // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetSessionToJoin(bool ShowError, struct FErrorCodesEnum ErrorCode); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ResetSessionToJoin // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ResetMigrationInfo(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ResetMigrationInfo // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_9A11F2F6492B0A350CB2DAA14FB078E0(struct FErrorCodesEnum Result); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnFailure_9A11F2F6492B0A350CB2DAA14FB078E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_9A11F2F6492B0A350CB2DAA14FB078E0(struct FErrorCodesEnum Result); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSuccess_9A11F2F6492B0A350CB2DAA14FB078E0 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFailure_94DAD53A47658E8E30DD8080B78FE45F(struct FErrorCodesEnum Result); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnFailure_94DAD53A47658E8E30DD8080B78FE45F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSuccess_94DAD53A47658E8E30DD8080B78FE45F(struct FErrorCodesEnum Result); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSuccess_94DAD53A47658E8E30DD8080B78FE45F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void InputTypeApplied(enum class EInputTypeSetting Value); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.InputTypeApplied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnSessionInviteAcceptedEvent(int32_t ControllerId, struct FBlueprintSessionResult InviteResult); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.OnSessionInviteAcceptedEvent // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void CancelHostMigration(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.CancelHostMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveInit(); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ReceiveInit // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void HandleHostMigrationAttemptHost(struct FHostMigrationInfo BackupHostInfo); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.HandleHostMigrationAttemptHost // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void HandleHostMigrationAttemptJoin(struct FHostMigrationInfo BackupHostInfo); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.HandleHostMigrationAttemptJoin // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void PerformHostMigration(bool Host, int32_t ChrSlot); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.PerformHostMigration // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_IcarusGameInstance(int32_t EntryPoint); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.ExecuteUbergraph_BP_IcarusGameInstance // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void RequestErrorEvent__DelegateSignature(struct FErrorCodesEnum ErrorCode); // Function BP_IcarusGameInstance.BP_IcarusGameInstance_C.RequestErrorEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

