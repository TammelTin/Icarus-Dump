// UserDefinedStruct TreeSetupProperties.TreeSetupProperties
// Size: 0x12a (Inherited: 0x00)
struct FTreeSetupProperties {
	struct TMap<struct FBaseStatsEnum, int32_t> Stats_47_FF0C329548596122663D7F8C7C4B49FC; // 0x00(0x50)
	float CollisionDetachThreshold_19_984D367B487128FFA0DF6AA21FD46EE1; // 0x50(0x04)
	float CollisionDetachInvScaleMultiplier_20_84930E674CB8C94A4ECCB1ACC6B4EB82; // 0x54(0x04)
	float DamageActionBreakEffort_21_34EE34AF45B61CDDDF2822837AC3E864; // 0x58(0x04)
	float AngularDampingZ_22_1CDF18A54256FD0444B9FE957570A74B; // 0x5c(0x04)
	float MassRelativeCollisionDamageRatio_51_D953ABC84723C1590542569E0D57FC88; // 0x60(0x04)
	char pad_64[0x4]; // 0x64(0x04)
	struct UPhysicalMaterial* TreePrimitivePhysicsMaterial_23_EB9306AD4EFC5ECE3F1775A31CE86A61; // 0x68(0x08)
	struct FTreeAudioDataRowHandle AudioDataRow_24_9DB876A4407B971A19625C92CBEB2CC1; // 0x70(0x18)
	struct TMap<struct FName, struct FTreePrimitiveSubdivideMeshes> SubdivedMeshSets_32_07839A424550A7C858DF458571AD9E60; // 0x88(0x50)
	struct TMap<struct FString, struct FName> PrimitivesSubdivedMeshes_36_1103586647CFF7B12ADC5CB3A72DEB7C; // 0xd8(0x50)
	bool DebugCollisions_38_C3B4E6D142F40FBA014575A629CFC403; // 0x128(0x01)
	bool DebugMetadata_37_150B18504CF3821821D5CABB33CD7D14; // 0x129(0x01)
};

