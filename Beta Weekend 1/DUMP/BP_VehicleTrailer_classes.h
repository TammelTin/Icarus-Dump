// BlueprintGeneratedClass BP_VehicleTrailer.BP_VehicleTrailer_C
// Size: 0x418 (Inherited: 0x3f8)
struct ABP_VehicleTrailer_C : ABP_VehicleNW_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UPhysicsConstraintComponent* TowbarConstraint; // 0x400(0x08)
	bool TowbarEnabled; // 0x408(0x01)
	char pad_409[0x7]; // 0x409(0x07)
	struct FTimerHandle AttachTowbarCooldown; // 0x410(0x08)

	void SetupTowbarConstraintRole(); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.SetupTowbarConstraintRole // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetupTowbarConstraint(struct UPrimitiveComponent* AttachParent, struct UPrimitiveComponent* AttachChild); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.SetupTowbarConstraint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void AttachTowbarCooldownFinished(); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.AttachTowbarCooldownFinished // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void IsTowbarAttached(bool Attached, struct FVehicleConstraintAttachment Attachment); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.IsTowbarAttached // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void TryDetachTowbar(bool Detached); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.TryDetachTowbar // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void TryAttachTowbar(struct UPrimitiveComponent* AttachParent, bool Attached); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.TryAttachTowbar // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void OnTowbarHitchBeginOverlap_Event(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.OnTowbarHitchBeginOverlap_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_VehicleConstraintAttachments(); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.OnRep_VehicleConstraintAttachments // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_VehicleTrailer(int32_t EntryPoint); // Function BP_VehicleTrailer.BP_VehicleTrailer_C.ExecuteUbergraph_BP_VehicleTrailer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

