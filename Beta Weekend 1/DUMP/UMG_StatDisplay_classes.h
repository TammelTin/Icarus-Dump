// WidgetBlueprintGeneratedClass UMG_StatDisplay.UMG_StatDisplay_C
// Size: 0x309 (Inherited: 0x260)
struct UUMG_StatDisplay_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UVerticalBox* BasicContainer; // 0x268(0x08)
	struct UUMG_StatTitle_C* ColdRes; // 0x270(0x08)
	struct UUMG_StatTitle_C* CollisionRes; // 0x278(0x08)
	struct UUMG_StatTitle_C* Critical; // 0x280(0x08)
	struct UUMG_StatTitle_C* ExposureRes; // 0x288(0x08)
	struct UUMG_StatTitle_C* Health; // 0x290(0x08)
	struct UUMG_StatTitle_C* HealthRegen; // 0x298(0x08)
	struct UUMG_StatTitle_C* HeatRes; // 0x2a0(0x08)
	struct UUMG_StatTitle_C* Melee; // 0x2a8(0x08)
	struct UUMG_StatTitle_C* MeleeRes; // 0x2b0(0x08)
	struct UUMG_StatTitle_C* MovementSpeed; // 0x2b8(0x08)
	struct UUMG_StatTitle_C* ProjectileRes; // 0x2c0(0x08)
	struct UUMG_StatTitle_C* Ranged; // 0x2c8(0x08)
	struct UVerticalBox* ResistanceContainer; // 0x2d0(0x08)
	struct UUMG_StatTitle_C* Stamina; // 0x2d8(0x08)
	struct UUMG_StatTitle_C* StaminaRegen; // 0x2e0(0x08)
	struct UUMG_StatTitle_C* Stealth; // 0x2e8(0x08)
	struct UVerticalBox* WeaponContainer; // 0x2f0(0x08)
	struct UUMG_StatTitle_C* WeightCapacity; // 0x2f8(0x08)
	struct UUMG_StatTitle_C* XPBonus; // 0x300(0x08)
	bool Initialised; // 0x308(0x01)

	void UpdateStats(); // Function UMG_StatDisplay.UMG_StatDisplay_C.UpdateStats // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG_StatDisplay.UMG_StatDisplay_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void StatContainerUpdated(); // Function UMG_StatDisplay.UMG_StatDisplay_C.StatContainerUpdated // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_StatDisplay(int32_t EntryPoint); // Function UMG_StatDisplay.UMG_StatDisplay_C.ExecuteUbergraph_UMG_StatDisplay // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

