// WidgetBlueprintGeneratedClass UMG_TalentView_Orbital.UMG_TalentView_Orbital_C
// Size: 0x2f0 (Inherited: 0x270)
struct UUMG_TalentView_Orbital_C : UTalentViewInterface {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270(0x08)
	struct UHorizontalBox* ArchetypeBox; // 0x278(0x08)
	struct UImage* Gradient; // 0x280(0x08)
	struct UWidgetSwitcher* GraphWidgetSwitcher; // 0x288(0x08)
	struct UImage* Icon; // 0x290(0x08)
	struct UImage* Icon_2; // 0x298(0x08)
	struct UImage* Icon_3; // 0x2a0(0x08)
	struct UImage* Icon_4; // 0x2a8(0x08)
	struct UImage* Noise; // 0x2b0(0x08)
	struct UImage* Pattern; // 0x2b8(0x08)
	struct UUMG_TreePoints_C* UMG_TreePoints; // 0x2c0(0x08)
	struct TArray<struct UUMG_TalentArchetype_Player_C*> Buttons; // 0x2c8(0x10)
	struct FText AvailableTalents; // 0x2d8(0x18)

	struct TArray<struct UTalentTreeWidget*> GetTalentTreeWidgets(); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.GetTalentTreeWidgets // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Setup(); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.Setup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnClick(struct FTalentArchetypesRowHandle Archetype); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.OnClick // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnModelViewChanged(struct UTalentModelInterface* InModel, struct UTalentViewInterface* InView); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.OnModelViewChanged // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_TalentView_Orbital(int32_t EntryPoint); // Function UMG_TalentView_Orbital.UMG_TalentView_Orbital_C.ExecuteUbergraph_UMG_TalentView_Orbital // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

