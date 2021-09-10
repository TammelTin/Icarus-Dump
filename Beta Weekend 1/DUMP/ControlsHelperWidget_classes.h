// WidgetBlueprintGeneratedClass ControlsHelperWidget.ControlsHelperWidget_C
// Size: 0x278 (Inherited: 0x260)
struct UControlsHelperWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_CurrentSpeed; // 0x268(0x08)
	struct ASpaceStation_PlayerCharacter_C* Character; // 0x270(0x08)

	void Construct(); // Function ControlsHelperWidget.ControlsHelperWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ControlsHelperWidget.ControlsHelperWidget_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_ControlsHelperWidget(int32_t EntryPoint); // Function ControlsHelperWidget.ControlsHelperWidget_C.ExecuteUbergraph_ControlsHelperWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

