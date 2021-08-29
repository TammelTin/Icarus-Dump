// BlueprintGeneratedClass BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C
// Size: 0x28 (Inherited: 0x28)
struct UBP_PlayerCosmeticsFunctionLibrary_C : UBlueprintFunctionLibrary {

	void ClearCosmeticMaterialOverride(struct UPrimitiveComponent* InPrimitive, struct UObject* __WorldContext); // Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ClearCosmeticMaterialOverride // (Static|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void MakeCharacterCreationDataArray(struct FCharacterCosmetics CharacterCosmetics, struct UObject* __WorldContext, struct TArray<struct FCharacterCreationDataRowHandle> OutData); // Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.MakeCharacterCreationDataArray // (Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void GetMasterMaterial(struct UMaterialInterface* Material, struct UObject* __WorldContext, struct UMaterial* Parent); // Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.GetMasterMaterial // (Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a05090
	void ApplyCosmeticsToPrimitive(struct UPrimitiveComponent* PrimitiveComponent, struct FCharacterCosmetics CosmeticData, struct UObject* __WorldContext); // Function BP_PlayerCosmeticsFunctionLibrary.BP_PlayerCosmeticsFunctionLibrary_C.ApplyCosmeticsToPrimitive // (Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

