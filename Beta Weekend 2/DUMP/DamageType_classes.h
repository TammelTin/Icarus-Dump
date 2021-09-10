// WidgetBlueprintGeneratedClass DamageType.DamageType_C
// Size: 0x271 (Inherited: 0x260)
struct UDamageType_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* Text; // 0x268(0x08)
	enum class EIcarusDamageType DamageType; // 0x270(0x01)

	void SetDamageType(enum class EIcarusDamageType NewDamageType); // Function DamageType.DamageType_C.SetDamageType // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_DamageType(int32_t EntryPoint); // Function DamageType.DamageType_C.ExecuteUbergraph_DamageType // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

