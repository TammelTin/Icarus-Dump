// BlueprintGeneratedClass BP_InspectionToolGeneric.BP_InspectionToolGeneric_C
// Size: 0x2e0 (Inherited: 0x220)
struct ABP_InspectionToolGeneric_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UStaticMeshComponent* Sphere; // 0x228(0x08)
	struct UWidgetComponent* Widget; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	bool HoldTrace; // 0x240(0x01)
	char pad_241[0x3]; // 0x241(0x03)
	struct FHitResult HitResult; // 0x244(0x8c)
	enum class EDevToolMode Mode; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct UUMG_InspectionToolPopup_C* CachedWidget; // 0x2d8(0x08)

	void ReceiveBeginPlay(); // Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void Kill(); // Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.Kill // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void DisplayWidget(); // Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.DisplayWidget // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_InspectionToolGeneric(int32_t EntryPoint); // Function BP_InspectionToolGeneric.BP_InspectionToolGeneric_C.ExecuteUbergraph_BP_InspectionToolGeneric // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

