// WidgetBlueprintGeneratedClass ProspectRow.ProspectRow_C
// Size: 0x2b8 (Inherited: 0x260)
struct UProspectRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText NameText; // 0x270(0x18)
	struct FAISetupRowHandle AISetup; // 0x288(0x18)
	struct FProspectListRowHandle Prospect; // 0x2a0(0x18)

	void SetProspectRow(struct FProspectListRowHandle ProspectRowHandle); // Function ProspectRow.ProspectRow_C.SetProspectRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_ProspectRow(int32_t EntryPoint); // Function ProspectRow.ProspectRow_C.ExecuteUbergraph_ProspectRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

