// WidgetBlueprintGeneratedClass UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C
// Size: 0x28c (Inherited: 0x260)
struct UUMG_DeployableRotationIndicator_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* Grow; // 0x268(0x08)
	struct UWidgetAnimation* Rotate; // 0x270(0x08)
	struct UImage* Image_AngleSnap; // 0x278(0x08)
	struct UImage* Image_Rotator; // 0x280(0x08)
	float DrawSize; // 0x288(0x04)

	void Show(float DesiredSize, bool ShowAngleSnap); // Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Show // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Hide(); // Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Hide // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_DeployableRotationIndicator(int32_t EntryPoint); // Function UMG_DeployableRotationIndicator.UMG_DeployableRotationIndicator_C.ExecuteUbergraph_UMG_DeployableRotationIndicator // (Final|UbergraphFunction) // @ game+0x1a05090
};

