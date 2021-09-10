// BlueprintGeneratedClass Hab_LightbulbSocket.Hab_LightbulbSocket_C
// Size: 0x2d1 (Inherited: 0x2a0)
struct AHab_LightbulbSocket_C : AIcarusActor {
	struct UStaticMeshComponent* StaticBulbMesh; // 0x2a0(0x08)
	struct UStaticMeshComponent* BaseMesh; // 0x2a8(0x08)
	struct USceneComponent* LightbulbSocket; // 0x2b0(0x08)
	struct UPointLightComponent* PointLight; // 0x2b8(0x08)
	float MaxLightIntensity; // 0x2c0(0x04)
	bool StartWithBulb; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	struct ABP_HabDeployable_Base_C* CurrentLightbulb; // 0x2c8(0x08)
	bool CagedInaccessible; // 0x2d0(0x01)

	void OverridePowerState(enum class EPowerStates PowerStateOverride); // Function Hab_LightbulbSocket.Hab_LightbulbSocket_C.OverridePowerState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UserConstructionScript(); // Function Hab_LightbulbSocket.Hab_LightbulbSocket_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

