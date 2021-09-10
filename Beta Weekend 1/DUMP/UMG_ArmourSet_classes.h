// WidgetBlueprintGeneratedClass UMG_ArmourSet.UMG_ArmourSet_C
// Size: 0x2a0 (Inherited: 0x260)
struct UUMG_ArmourSet_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* BonusName; // 0x268(0x08)
	struct UVerticalBox* Container; // 0x270(0x08)
	struct UVerticalBox* Stats; // 0x278(0x08)
	struct FArmourSetBonusRowHandle SetBonus; // 0x280(0x18)
	bool Active; // 0x298(0x01)
	char pad_299[0x3]; // 0x299(0x03)
	int32_t ActivePieces; // 0x29c(0x04)

	void Construct(); // Function UMG_ArmourSet.UMG_ArmourSet_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ArmourSet(int32_t EntryPoint); // Function UMG_ArmourSet.UMG_ArmourSet_C.ExecuteUbergraph_UMG_ArmourSet // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

