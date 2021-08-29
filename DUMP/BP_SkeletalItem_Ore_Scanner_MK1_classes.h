// BlueprintGeneratedClass BP_SkeletalItem_Ore_Scanner_MK1.BP_SkeletalItem_Ore_Scanner_MK1_C
// Size: 0x4c9 (Inherited: 0x49c)
struct ABP_SkeletalItem_Ore_Scanner_MK1_C : ABP_SkeletalItem_Ore_Scanner_C {
	char pad_49C[0x4]; // 0x49c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4a0(0x08)
	struct TArray<struct FItemTemplateRowHandle> OrganicsListMK1; // 0x4a8(0x10)
	struct TArray<struct FItemTemplateRowHandle> MetalsListMK1; // 0x4b8(0x10)
	bool ScanningOrganics; // 0x4c8(0x01)

	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Ore_Scanner_MK1.BP_SkeletalItem_Ore_Scanner_MK1_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void DoAnOreScannerAction(); // Function BP_SkeletalItem_Ore_Scanner_MK1.BP_SkeletalItem_Ore_Scanner_MK1_C.DoAnOreScannerAction // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_SkeletalItem_Ore_Scanner_MK1(int32_t EntryPoint); // Function BP_SkeletalItem_Ore_Scanner_MK1.BP_SkeletalItem_Ore_Scanner_MK1_C.ExecuteUbergraph_BP_SkeletalItem_Ore_Scanner_MK1 // (Final|UbergraphFunction) // @ game+0x1a05090
};

