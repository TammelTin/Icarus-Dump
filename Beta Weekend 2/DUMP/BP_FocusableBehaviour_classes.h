// BlueprintGeneratedClass BP_FocusableBehaviour.BP_FocusableBehaviour_C
// Size: 0x110 (Inherited: 0xd8)
struct UBP_FocusableBehaviour_C : UFocusableComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd8(0x08)
	struct TArray<struct UObject*> StoredFocusableAnims; // 0xe0(0x10)
	bool Attached; // 0xf0(0x01)
	char pad_F1[0x7]; // 0xf1(0x07)
	struct USkeletalMeshComponent* FPShadowMesh; // 0xf8(0x08)
	bool IsThirdPerson; // 0x100(0x01)
	bool IsPlayingFocusAnimation; // 0x101(0x01)
	char pad_102[0x6]; // 0x102(0x06)
	struct AIcarusPlayerCharacter* OwningPlayer; // 0x108(0x08)

	void OwningPlayerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OwningPlayerEndPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	float GetEquipSpeedModifier(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.GetEquipSpeedModifier // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FItemAnimationData GetAnimationData(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.GetAnimationData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FItemAttachmentData GetAttachmentData(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.GetAttachmentData // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void UpdatePanini(struct AIcarusItem* Item); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.UpdatePanini // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Show Mesh(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.Show Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ValidateAttachMesh(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.ValidateAttachMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnAnim_Focused(struct AActor* Invoking Actor); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnAnim_Focused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnAnim_Unfocused(struct AActor* Invoking Actor); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnAnim_Unfocused // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TryAttachToOwner(struct AIcarusItem* ItemActor, struct AActor* Invoking Actor); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.TryAttachToOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_2B8B2B624CE5F97DAE6892B77E5FE36F(struct UObject* Loaded); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnLoaded_2B8B2B624CE5F97DAE6892B77E5FE36F // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnLoaded_B75FF5954D2D861DA51E0E923DB50BFF(struct UObject* Loaded); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnLoaded_B75FF5954D2D861DA51E0E923DB50BFF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnNotifyEnd_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnNotifyEnd_AC757DAE416C84ADD41FA08FC6C50D49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnNotifyBegin_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnNotifyBegin_AC757DAE416C84ADD41FA08FC6C50D49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnInterrupted_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnInterrupted_AC757DAE416C84ADD41FA08FC6C50D49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnBlendOut_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnBlendOut_AC757DAE416C84ADD41FA08FC6C50D49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCompleted_AC757DAE416C84ADD41FA08FC6C50D49(struct FName NotifyName); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnCompleted_AC757DAE416C84ADD41FA08FC6C50D49 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnAnimNotify(struct FAnimNotifyEvent Notify, struct AActor* AnimInstancePawn); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnAnimNotify // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0x1a38c80
	void OnFocused(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnFocused // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnUnfocused(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnUnfocused // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnDataSet(); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.OnDataSet // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.ReceiveEndPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FocusableBehaviour(int32_t EntryPoint); // Function BP_FocusableBehaviour.BP_FocusableBehaviour_C.ExecuteUbergraph_BP_FocusableBehaviour // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

