// WidgetBlueprintGeneratedClass BiomeRow.BiomeRow_C
// Size: 0x2a0 (Inherited: 0x260)
struct UBiomeRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText BiomeName; // 0x270(0x18)
	struct FBiomesRowHandle Biome; // 0x288(0x18)

	void SetBiome(struct FBiomesRowHandle New Biome); // Function BiomeRow.BiomeRow_C.SetBiome // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BiomeRow(int32_t EntryPoint); // Function BiomeRow.BiomeRow_C.ExecuteUbergraph_BiomeRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

