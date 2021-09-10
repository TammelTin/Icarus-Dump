// BlueprintGeneratedClass BP_Vehicle_Rover.BP_Vehicle_Rover_C
// Size: 0x4a3 (Inherited: 0x3f8)
struct ABP_Vehicle_Rover_C : ABP_Vehicle4W_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3f8(0x08)
	struct UBP_BuoyancyComponent_C* BP_BuoyancyComponent; // 0x400(0x08)
	struct UParticleSystemComponent* ParticleSystem_Exhaust; // 0x408(0x08)
	struct URectLightComponent* RectLight_Tail_R; // 0x410(0x08)
	struct URectLightComponent* RectLight_Tail_L; // 0x418(0x08)
	struct USpotLightComponent* Headlight; // 0x420(0x08)
	struct UBoxComponent* Towbar; // 0x428(0x08)
	struct USkeletalMeshComponent* SK_SteeringWheel_Rig; // 0x430(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Foot3; // 0x438(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Foot2; // 0x440(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Foot1; // 0x448(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Foot; // 0x450(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Arm1; // 0x458(0x08)
	struct UStaticMeshComponent* SM_VEH_Servo_Arm; // 0x460(0x08)
	struct USkeletalMeshComponent* SK_ITM_Oxygen_Tank2; // 0x468(0x08)
	struct USkeletalMeshComponent* SK_ITM_Oxygen_Tank1; // 0x470(0x08)
	struct USkeletalMeshComponent* SK_ITM_Oxygen_Tank; // 0x478(0x08)
	struct UStaticMeshComponent* SM_VC_R_Door; // 0x480(0x08)
	struct UStaticMeshComponent* SM_VC_L_Door; // 0x488(0x08)
	struct UStaticMeshComponent* SM_ATV_Chassis_Front; // 0x490(0x08)
	struct UStaticMeshComponent* SM_ATV_Chassis_Rear; // 0x498(0x08)
	bool HeadlightActive; // 0x4a0(0x01)
	bool BrakelightActive; // 0x4a1(0x01)
	bool ExhaustActive; // 0x4a2(0x01)

	void OnRep_ExhaustActive(); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.OnRep_ExhaustActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_BrakelightActive(); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.OnRep_BrakelightActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateHeadlightMaterial(); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.UpdateHeadlightMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateBrakelightMaterial(); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.UpdateBrakelightMaterial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_HeadlightActive(); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.OnRep_HeadlightActive // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Vehicle_Rover(int32_t EntryPoint); // Function BP_Vehicle_Rover.BP_Vehicle_Rover_C.ExecuteUbergraph_BP_Vehicle_Rover // (Final|UbergraphFunction) // @ game+0x1a38c80
};

