// WidgetBlueprintGeneratedClass UMG_ExperienceNotifier.UMG_ExperienceNotifier_C
// Size: 0x278 (Inherited: 0x260)
struct UUMG_ExperienceNotifier_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* Events; // 0x268(0x08)
	struct UScrollBox* Scroll; // 0x270(0x08)

	void Construct(); // Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnExperienceEvent(struct FExperienceEventsRowHandle ExperienceEvent, int32_t ExperienceGained); // Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.OnExperienceEvent // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_ExperienceNotifier(int32_t EntryPoint); // Function UMG_ExperienceNotifier.UMG_ExperienceNotifier_C.ExecuteUbergraph_UMG_ExperienceNotifier // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

