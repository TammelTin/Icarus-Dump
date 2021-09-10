// Enum IcarusUtilities.EValid
enum class EValid : uint8 {
	Valid = 0,
	NotValid = 1,
	EValid_MAX = 2
};

// ScriptStruct IcarusUtilities.RowHandle
// Size: 0x18 (Inherited: 0x01)
struct FRowHandle : FRowHandleInternal {
	struct TWeakObjectPtr<struct UIcarusDataTable> DataTablePtr; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
	struct FName DataTableName; // 0x10(0x08)
};

// ScriptStruct IcarusUtilities.IcarusTableRowBase
// Size: 0x18 (Inherited: 0x08)
struct FIcarusTableRowBase : FTableRowBase {
	struct TArray<struct UObject*> CachedHardReferences; // 0x08(0x10)
};

// ScriptStruct IcarusUtilities.RowEnum
// Size: 0x10 (Inherited: 0x10)
struct FRowEnum : FIntEnum {
};

// ScriptStruct IcarusUtilities.FeatureLevelsRowHandle
// Size: 0x18 (Inherited: 0x18)
struct FFeatureLevelsRowHandle : FRowHandle {
};

// ScriptStruct IcarusUtilities.MultiRowHandle
// Size: 0x10 (Inherited: 0x00)
struct FMultiRowHandle {
	char pad_0[0x8]; // 0x00(0x08)
	struct FName RowName; // 0x08(0x08)
};

// ScriptStruct IcarusUtilities.FeatureLevelsEnum
// Size: 0x10 (Inherited: 0x10)
struct FFeatureLevelsEnum : FRowEnum {
};

// ScriptStruct IcarusUtilities.FeatureLevelData
// Size: 0x70 (Inherited: 0x18)
struct FFeatureLevelData : FIcarusTableRowBase {
	struct FText DisplayName; // 0x18(0x18)
	struct FText ShortName; // 0x30(0x18)
	struct FString Description; // 0x48(0x10)
	struct FLinearColor Color; // 0x58(0x10)
	bool bEnableForCook; // 0x68(0x01)
	bool bEnableForShip; // 0x69(0x01)
	bool bEnableForPreview; // 0x6a(0x01)
	char pad_6B[0x5]; // 0x6b(0x05)
};

// ScriptStruct IcarusUtilities.RowMetadata
// Size: 0x80 (Inherited: 0x08)
struct FRowMetadata : FTableRowBase {
	struct FFeatureLevelsRowHandle RequiredFeatureLevel; // 0x08(0x18)
	struct FString Notes; // 0x20(0x10)
	struct TMap<struct FName, struct FString> ExtraMetadata; // 0x30(0x50)
};

