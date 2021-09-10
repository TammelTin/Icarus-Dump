// BlueprintGeneratedClass BP_FireInstanceShadow.BP_FireInstanceShadow_C
// Size: 0x318 (Inherited: 0x300)
struct ABP_FireInstanceShadow_C : AFireInstanceShadow {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct ABP_FireAudio_C* Audio; // 0x308(0x08)
	struct ABP_FireInstance_RVTCapture_C* RVTCaptureActor; // 0x310(0x08)

	void BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature(); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.BndEvt__PropagatedMesh_K2Node_ComponentBoundEvent_1_OnConcaveHullMeshGenerated__DelegateSignature // (BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnFlammableInstanceAdded(struct UFlammableInstance* Instance); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnFlammableInstanceAdded // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnTransferredTo(struct AFireInstanceBase* Dest, struct UFlammableInstance* Instance); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.OnTransferredTo // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveTick(float DeltaSeconds); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_FireInstanceShadow(int32_t EntryPoint); // Function BP_FireInstanceShadow.BP_FireInstanceShadow_C.ExecuteUbergraph_BP_FireInstanceShadow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

