// BlueprintGeneratedClass BP_CreatureAudioComponent.BP_CreatureAudioComponent_C
// Size: 0x2dd (Inherited: 0xb8)
struct UBP_CreatureAudioComponent_C : UCreatureAudioComponent {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xb8(0x08)
	struct AIcarusNPCGOAPCharacter* Creature; // 0xc0(0x08)
	enum class EPhysicalSurface CurrentSurface; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	float CurrentWaterDepth; // 0xcc(0x04)
	float CurrentDistance; // 0xd0(0x04)
	char pad_D4[0x4]; // 0xd4(0x04)
	struct UCurveFloat* DistanceCheckCurve; // 0xd8(0x08)
	struct UCurveFloat* SurfaceCheckCurve; // 0xe0(0x08)
	struct FName FMODParam_FootstepType; // 0xe8(0x08)
	float SurfaceCheckMaxDistance; // 0xf0(0x04)
	float FoliageCheckMaxDistance; // 0xf4(0x04)
	float FootstepMaxDistance; // 0xf8(0x04)
	char pad_FC[0x4]; // 0xfc(0x04)
	struct UCurveFloat* FoliageCheckCurve; // 0x100(0x08)
	bool InFoliage; // 0x108(0x01)
	char pad_109[0x7]; // 0x109(0x07)
	struct UFMODAudioComponent* WorldMovementComponent; // 0x110(0x08)
	struct UBP_GroundSurfaceChecker_C* SurfaceChecker; // 0x118(0x08)
	struct UFMODAudioComponent* RagdollAudio; // 0x120(0x08)
	struct FTimerHandle RagdollAudioUpdateTimerHandle; // 0x128(0x08)
	float RagdollAudioUpdateFrequency; // 0x130(0x04)
	float RagdollAudioStopVelocityThreshold; // 0x134(0x04)
	float RagdollAudioLastCollisionTime; // 0x138(0x04)
	float RagdollAudioNoCollisionTimeoutTime; // 0x13c(0x04)
	struct FAIAudioData AudioData; // 0x140(0x190)
	struct UCurveFloat* ShelterCheckCurve; // 0x2d0(0x08)
	float ShelterCheckMaxDistance; // 0x2d8(0x04)
	bool UsesShelter; // 0x2dc(0x01)

	void PlayWorldMovementSound(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.PlayWorldMovementSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void TraceForFoliage(bool InFoliage); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.TraceForFoliage // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void EventOnFootstepAnimNotify(enum class ECreatureFootstepType Type); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.EventOnFootstepAnimNotify // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void SurfaceUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.SurfaceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void DistanceUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.DistanceUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void FoliageUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.FoliageUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRagdollCollision(struct FHitResult Hit); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.OnRagdollCollision // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateRagdollAudio(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.UpdateRagdollAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void StopRagdollAudio(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.StopRagdollAudio // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ShelterUpdate(); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ShelterUpdate // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnCreatureDeath(struct UActorState* ActorState); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.OnCreatureDeath // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_CreatureAudioComponent(int32_t EntryPoint); // Function BP_CreatureAudioComponent.BP_CreatureAudioComponent_C.ExecuteUbergraph_BP_CreatureAudioComponent // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

