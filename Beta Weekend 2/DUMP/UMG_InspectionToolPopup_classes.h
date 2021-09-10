// WidgetBlueprintGeneratedClass UMG_InspectionToolPopup.UMG_InspectionToolPopup_C
// Size: 0x370 (Inherited: 0x260)
struct UUMG_InspectionToolPopup_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* FadeOut; // 0x268(0x08)
	struct UBorder* Border; // 0x270(0x08)
	struct UTextBlock* StatList; // 0x278(0x08)
	struct UTextBlock* StatsTitle; // 0x280(0x08)
	struct UWidgetSwitcher* Switcher; // 0x288(0x08)
	struct UTextBlock* TagList; // 0x290(0x08)
	struct UTextBlock* TagsTitle; // 0x298(0x08)
	struct UTextBlock* TextBlock_Bone; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Component; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_Dist; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_HitActor; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_HitActor_2; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_ImpactPoint; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_PhysMat; // 0x2d0(0x08)
	struct UPrimitiveComponent* HitComponent; // 0x2d8(0x08)
	bool HoldWidget; // 0x2e0(0x01)
	enum class EDevToolMode Mode; // 0x2e1(0x01)
	char pad_2E2[0x2]; // 0x2e2(0x02)
	struct FHitResult HitResult; // 0x2e4(0x8c)

	struct FText GetMat(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetMat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetTags(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetTags // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetStats(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetStats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetDist(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetDist // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetBone(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetBone // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetComponent(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetComponent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetHitActor(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetHitActor // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetPhysMat(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetPhysMat // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	struct FText GetImpactPoint(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.GetImpactPoint // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void Initialise(bool HoldWidget, enum class EDevToolMode Mode, struct FHitResult HitResult); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void PlayFadeOut(); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.PlayFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_InspectionToolPopup(int32_t EntryPoint); // Function UMG_InspectionToolPopup.UMG_InspectionToolPopup_C.ExecuteUbergraph_UMG_InspectionToolPopup // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

