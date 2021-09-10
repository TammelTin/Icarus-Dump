// BlueprintGeneratedClass BP_Door_Base.BP_Door_Base_C
// Size: 0x588 (Inherited: 0x560)
struct ABP_Door_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UAudioOcclusionComponent* AudioOcclusion1; // 0x568(0x08)
	enum class DoorState DoorState; // 0x570(0x01)
	char pad_571[0x7]; // 0x571(0x07)
	struct FMulticastInlineDelegate OpenStateChanged; // 0x578(0x10)

	float GetOcclusionValue(); // Function BP_Door_Base.BP_Door_Base_C.GetOcclusionValue // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0x1a05090
	void SetOpenableStateOnFoundationActor(); // Function BP_Door_Base.BP_Door_Base_C.SetOpenableStateOnFoundationActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_DoorState(); // Function BP_Door_Base.BP_Door_Base_C.OnRep_DoorState // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Deployable_Interact(struct AActor* Interactor); // Function BP_Door_Base.BP_Door_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OpenCloseDoor(struct FHitResult HitResult); // Function BP_Door_Base.BP_Door_Base_C.OpenCloseDoor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_Door_Base.BP_Door_Base_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_Door_Base.BP_Door_Base_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Door_Base(int32_t EntryPoint); // Function BP_Door_Base.BP_Door_Base_C.ExecuteUbergraph_BP_Door_Base // (Final|UbergraphFunction) // @ game+0x1a05090
	void OpenStateChanged__DelegateSignature(bool Open); // Function BP_Door_Base.BP_Door_Base_C.OpenStateChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

