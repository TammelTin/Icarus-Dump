// Class IcarusUtilities.RowLibrary
// Size: 0x28 (Inherited: 0x28)
struct URowLibrary : UBlueprintFunctionLibrary {

	bool IsRowHandleValid(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360c090
	bool IsRowHandleNone(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.IsRowHandleNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360bff0
	bool IsRowEnumValid(struct FRowEnum Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumValid // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360bf50
	bool IsRowEnumNone(struct FRowEnum Enum); // Function IcarusUtilities.RowLibrary.IsRowEnumNone // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360beb0
	int32_t GetRowIndex(struct FRowHandle Row); // Function IcarusUtilities.RowLibrary.GetRowIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x360be10
	struct FRowMetadata GetMetadata(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetMetadata // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360bc70
	struct FFeatureLevelsRowHandle GetFeatureLevel(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360bbb0
	struct FName GetDataTableName(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360bb00
	struct UIcarusDataTable* GetDataTableForEdit(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTableForEdit // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360ba50
	struct UIcarusDataTable* GetDataTable(struct FRowHandle RowHandle); // Function IcarusUtilities.RowLibrary.GetDataTable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360b9a0
	bool EqualEqual_FRowHandleFRowHandle(struct FRowHandle RowHandleA, struct FRowHandle RowHandleB); // Function IcarusUtilities.RowLibrary.EqualEqual_FRowHandleFRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360b890
};

// Class IcarusUtilities.IcarusDataTable
// Size: 0xb8 (Inherited: 0xb0)
struct UIcarusDataTable : UDataTable {
	struct UIcarusMetaTable* MetaTable; // 0xb0(0x08)
};

// Class IcarusUtilities.FeatureLevelsLibrary
// Size: 0x28 (Inherited: 0x28)
struct UFeatureLevelsLibrary : URowLibrary {

	struct FFeatureLevelsRowHandle StructToRowHandle(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609cf0
	struct FName StructToName(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609c50
	int32_t StructToInt(struct FFeatureLevelsEnum EnumValue); // Function IcarusUtilities.FeatureLevelsLibrary.StructToInt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609bb0
	struct FFeatureLevelsEnum RowHandleToStruct(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.RowHandleToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609af0
	void RemoveRowFromFeatureLevelsTable(struct FName Name); // Function IcarusUtilities.FeatureLevelsLibrary.RemoveRowFromFeatureLevelsTable // (Final|Native|Static|Public|BlueprintCallable) // @ game+0x3609a70
	void RefreshConstants(); // Function IcarusUtilities.FeatureLevelsLibrary.RefreshConstants // (Final|Native|Static|Public) // @ game+0x3609a50
	int32_t NumRows(); // Function IcarusUtilities.FeatureLevelsLibrary.NumRows // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609a20
	bool NotEqual_EnumName(struct FFeatureLevelsEnum A, struct FName B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609930
	bool NotEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.NotEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609840
	struct FFeatureLevelsEnum NameToStruct(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36097b0
	int32_t NameToInt(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.NameToInt // (Final|Native|Static|Public) // @ game+0x3609720
	struct FFeatureLevelsRowHandle MakeLiteralFeatureLevels(struct FFeatureLevelsRowHandle RowHandle); // Function IcarusUtilities.FeatureLevelsLibrary.MakeLiteralFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609650
	struct FFeatureLevelsRowHandle MakeFeatureLevelsFromIndex(int32_t Index); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsFromIndex // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36095c0
	struct FFeatureLevelsEnum MakeFeatureLevelsEnum(struct FFeatureLevelsEnum Enum); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevelsEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609540
	struct FFeatureLevelsRowHandle MakeFeatureLevels(struct FName RowName); // Function IcarusUtilities.FeatureLevelsLibrary.MakeFeatureLevels // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x36094a0
	bool IsValidName(struct FName NameValue); // Function IcarusUtilities.FeatureLevelsLibrary.IsValidName // (Final|Native|Static|Public) // @ game+0x3609410
	struct FFeatureLevelsEnum IntToStruct(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToStruct // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3609380
	struct FName IntToName(int32_t IntValue); // Function IcarusUtilities.FeatureLevelsLibrary.IntToName // (Final|Native|Static|Public) // @ game+0x36092f0
	void GetFeatureLevelsStruct(struct FFeatureLevelsRowHandle RowHandle, struct FFeatureLevelData FeatureLevels, enum class EValid Paths); // Function IcarusUtilities.FeatureLevelsLibrary.GetFeatureLevelsStruct // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x36090d0
	bool EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle(struct FFeatureLevelsRowHandle RowHandleA, struct FFeatureLevelsRowHandle RowHandleB); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_FFeatureLevelsRowHandleFFeatureLevelsRowHandle // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3608f90
	bool EqualEqual_EnumEnum(struct FFeatureLevelsEnum A, struct FFeatureLevelsEnum B); // Function IcarusUtilities.FeatureLevelsLibrary.EqualEqual_EnumEnum // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x3608ea0
	struct FFeatureLevelsRowHandle CastToFeatureLevelsRowHandle(struct FRowHandle RowHandle, enum class EValid Paths); // Function IcarusUtilities.FeatureLevelsLibrary.CastToFeatureLevelsRowHandle // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3608d80
	void BreakFeatureLevelsEnum(struct FFeatureLevelsEnum Enum, struct FName Name, int32_t Index); // Function IcarusUtilities.FeatureLevelsLibrary.BreakFeatureLevelsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x3608c20
	void AddRowToFeatureLevelsTable(struct FName Name, struct FFeatureLevelData Data, struct FFeatureLevelsRowHandle NewRow); // Function IcarusUtilities.FeatureLevelsLibrary.AddRowToFeatureLevelsTable // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x3608930
};

// Class IcarusUtilities.FeatureLevelsTable
// Size: 0xb8 (Inherited: 0xb8)
struct UFeatureLevelsTable : UIcarusDataTable {
};

// Class IcarusUtilities.IcarusContainerLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusContainerLibrary : UBlueprintFunctionLibrary {
};

// Class IcarusUtilities.IcarusFeatureLevelFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusFeatureLevelFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsFeatureLevelEnabled(struct FFeatureLevelsRowHandle InFeatureLevel); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.IsFeatureLevelEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360a410
	struct FFeatureLevelsRowHandle GetCurrentFeatureLevel(); // Function IcarusUtilities.IcarusFeatureLevelFunctionLibrary.GetCurrentFeatureLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360a3d0
};

// Class IcarusUtilities.IcarusMetaTable
// Size: 0xb0 (Inherited: 0xb0)
struct UIcarusMetaTable : UDataTable {
};

// Class IcarusUtilities.IcarusStringFunctionLibrary
// Size: 0x28 (Inherited: 0x28)
struct UIcarusStringFunctionLibrary : UBlueprintFunctionLibrary {

	struct TArray<struct FString> ParseIntoLines(struct FString MultiLineInput); // Function IcarusUtilities.IcarusStringFunctionLibrary.ParseIntoLines // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360ac70
	bool LexicalLess_Text(struct FText TextA, struct FText TextB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Text // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360ab00
	bool LexicalLess_String(struct FString StringA, struct FString StringB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_String // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // @ game+0x360aa10
	bool LexicalLess_Name(struct FName NameA, struct FName NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.LexicalLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360a930
	bool FastLess_Name(struct FName NameA, struct FName NameB); // Function IcarusUtilities.IcarusStringFunctionLibrary.FastLess_Name // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // @ game+0x360a850
};

// Class IcarusUtilities.LessInterface
// Size: 0x28 (Inherited: 0x28)
struct ULessInterface : UInterface {

	bool LessThan(struct UObject* Other); // Function IcarusUtilities.LessInterface.LessThan // (Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0x360b150
};

