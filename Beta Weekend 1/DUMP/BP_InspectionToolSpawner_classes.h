// BlueprintGeneratedClass BP_InspectionToolSpawner.BP_InspectionToolSpawner_C
// Size: 0x280 (Inherited: 0x220)
struct ABP_InspectionToolSpawner_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct UWidgetComponent* Widget; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	float Distance; // 0x240(0x04)
	struct FVector ImpactPoint; // 0x244(0x0c)
	struct UPhysicalMaterial* PhysicalMaterial; // 0x250(0x08)
	struct AActor* HitActor; // 0x258(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x260(0x08)
	struct FName BoneName; // 0x268(0x08)
	bool HoldTrace; // 0x270(0x01)
	char pad_271[0x7]; // 0x271(0x07)
	struct UUMG_InspectionToolPopup_C* UMGWidgetRef; // 0x278(0x08)

	void DisplayWidget(); // Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.DisplayWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void KillActor(float InLifespan); // Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.KillActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_InspectionToolSpawner(int32_t EntryPoint); // Function BP_InspectionToolSpawner.BP_InspectionToolSpawner_C.ExecuteUbergraph_BP_InspectionToolSpawner // (Final|UbergraphFunction) // @ game+0x1a05090
};

