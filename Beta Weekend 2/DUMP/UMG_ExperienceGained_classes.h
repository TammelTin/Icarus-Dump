// WidgetBlueprintGeneratedClass UMG_ExperienceGained.UMG_ExperienceGained_C
// Size: 0x29c (Inherited: 0x260)
struct UUMG_ExperienceGained_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Text; // 0x268(0x08)
	struct FExperienceEventsRowHandle ExperienceEvent; // 0x270(0x18)
	struct FString Sign; // 0x288(0x10)
	int32_t GrantedXP; // 0x298(0x04)

	void Construct(); // Function UMG_ExperienceGained.UMG_ExperienceGained_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void Remove(); // Function UMG_ExperienceGained.UMG_ExperienceGained_C.Remove // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ExperienceGained(int32_t EntryPoint); // Function UMG_ExperienceGained.UMG_ExperienceGained_C.ExecuteUbergraph_UMG_ExperienceGained // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

