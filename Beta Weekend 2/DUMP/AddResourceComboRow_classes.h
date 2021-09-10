// WidgetBlueprintGeneratedClass AddResourceComboRow.AddResourceComboRow_C
// Size: 0x298 (Inherited: 0x260)
struct UAddResourceComboRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* RowIcon; // 0x268(0x08)
	struct UTextBlock* RowText; // 0x270(0x08)
	struct FText DisplayName; // 0x278(0x18)
	struct FName RowName; // 0x290(0x08)

	bool LessThan(struct UObject* Other); // Function AddResourceComboRow.AddResourceComboRow_C.LessThan // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x1a38c80
	void Set Row(struct FName RowName); // Function AddResourceComboRow.AddResourceComboRow_C.Set Row // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_AddResourceComboRow(int32_t EntryPoint); // Function AddResourceComboRow.AddResourceComboRow_C.ExecuteUbergraph_AddResourceComboRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

