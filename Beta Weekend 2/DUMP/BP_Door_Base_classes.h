// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
// Size: 0x588 (Inherited: 0x550)
struct ABP_Door_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UBoxComponent* Box; // 0x558(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x560(0x08)
	enum class DoorState DoorState; // 0x568(0x01)
	char pad_569[0x7]; // 0x569(0x07)
	struct FMulticastInlineDelegate OpenStateChanged; // 0x570(0x10)
	struct FTimerHandle DelayedDirtyTimer; // 0x580(0x08)

	float GetOcclusionValue(); // Function BP_Door_Base.BP_Door_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a38c80
	void DirtyNavigation(); // Function BP_Door_Base.BP_Door_Base_C.DirtyNavigation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void SetOpenableStateOnFoundationActor(); // Function BP_Door_Base.BP_Door_Base_C.SetOpenableStateOnFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_DoorState(); // Function BP_Door_Base.BP_Door_Base_C.OnRep_DoorState // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Door_Base.BP_Door_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OpenCloseDoor(struct FHitResult HitResult); // Function BP_Door_Base.BP_Door_Base_C.OpenCloseDoor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_Door_Base.BP_Door_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Door_Base.BP_Door_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Door_Base(int32_t EntryPoint); // Function BP_Door_Base.BP_Door_Base_C.ExecuteUbergraph_BP_Door_Base // (Final|UbergraphFunction) // @ game+0x1a38c80
	void OpenStateChanged__DelegateSignature(bool Open); // Function BP_Door_Base.BP_Door_Base_C.OpenStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

