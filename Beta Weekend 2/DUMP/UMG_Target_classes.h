// WidgetBlueprintGeneratedClass UMG_Target.UMG_Target_C
// Size: 0x27c (Inherited: 0x260)
struct UUMG_Target_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Image_24; // 0x268(0x08)
	struct UUMG_Crosshair_C* UMG_Crosshair; // 0x270(0x08)
	float CurrentAlpha; // 0x278(0x04)

	void UpdateTarget(float Alpha); // Function UMG_Target.UMG_Target_C.UpdateTarget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_Target.UMG_Target_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_Target(int32_t EntryPoint); // Function UMG_Target.UMG_Target_C.ExecuteUbergraph_UMG_Target // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

