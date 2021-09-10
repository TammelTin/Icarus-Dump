// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats.UMG_GOAPWorldStats_C
// Size: 0x358 (Inherited: 0x260)
struct UUMG_GOAPWorldStats_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_BabyDeer; // 0x268(0x08)
	struct UTextBlock* TextBlock_Bear; // 0x270(0x08)
	struct UTextBlock* TextBlock_Chamois_M; // 0x278(0x08)
	struct UTextBlock* TextBlock_DeerConfierLarge; // 0x280(0x08)
	struct UTextBlock* TextBlock_DeerConiferMedium; // 0x288(0x08)
	struct UTextBlock* TextBlock_DeerDesertLarge; // 0x290(0x08)
	struct UTextBlock* TextBlock_DeerDesertMedium; // 0x298(0x08)
	struct UTextBlock* TextBlock_Elephant; // 0x2a0(0x08)
	struct UTextBlock* TextBlock_Lion_F; // 0x2a8(0x08)
	struct UTextBlock* TextBlock_MammothArctic; // 0x2b0(0x08)
	struct UTextBlock* TextBlock_MammothDesert; // 0x2b8(0x08)
	struct UTextBlock* TextBlock_PolarBear; // 0x2c0(0x08)
	struct UTextBlock* TextBlock_Raccoon; // 0x2c8(0x08)
	struct UTextBlock* TextBlock_RedGoat; // 0x2d0(0x08)
	struct UTextBlock* TextBlock_Roat; // 0x2d8(0x08)
	struct UTextBlock* TextBlock_SnowWolf; // 0x2e0(0x08)
	struct UTextBlock* TextBlock_Wulv; // 0x2e8(0x08)
	struct UVerticalBox* VerticalBoxCreatures; // 0x2f0(0x08)
	struct TMap<struct ABP_IcarusNPCGOAPCharacter_C*, int32_t> CharacterClassesMap; // 0x2f8(0x50)
	struct TArray<struct ABP_IcarusNPCGOAPCharacter_C*> CharacterClasses; // 0x348(0x10)

	void AddClassRow(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.AddClassRow // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllActors(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllActors // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void Construct(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void GetAllBear(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllBear // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllDeerConiferMedium(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllDeerConiferMedium // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllBabyDeer(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllBabyDeer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllChamois_M(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllChamois_M // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllElephant(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllElephant // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllPolarBear(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllPolarBear // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllRaccoon(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllRaccoon // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllRedGoat(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllRedGoat // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllRoat(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllRoat // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllSnowWolf(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllSnowWolf // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllWulv(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllWulv // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllCreatures(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllCreatures // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllLionF(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllLionF // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllDeerConiferLarge(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllDeerConiferLarge // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllDeerDesertMedium(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllDeerDesertMedium // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllDeerDesertLarge(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllDeerDesertLarge // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllMammothArctic(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllMammothArctic // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetAllMammothDesert(); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.GetAllMammothDesert // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_GOAPWorldStats(int32_t EntryPoint); // Function UMG_GOAPWorldStats.UMG_GOAPWorldStats_C.ExecuteUbergraph_UMG_GOAPWorldStats // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

