// BlueprintGeneratedClass BP_HitVisualActor.BP_HitVisualActor_C
// Size: 0x250 (Inherited: 0x220)
struct ABP_HitVisualActor_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UNiagaraComponent* NiagaraSystem; // 0x228(0x08)
	struct UParticleSystemComponent* ParticleSystem; // 0x230(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x238(0x08)
	enum class EPhysicalSurface SourceSurfaceType; // 0x240(0x01)
	enum class EPhysicalSurface HitSurfaceType; // 0x241(0x01)
	char pad_242[0x6]; // 0x242(0x06)
	struct AActor* HitActor; // 0x248(0x08)

	void OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9(struct UObject* Loaded); // Function BP_HitVisualActor.BP_HitVisualActor_C.OnLoaded_49B5FA3C4DB143648AEFC3B09787C0D9 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_HitVisualActor.BP_HitVisualActor_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_HitVisualActor(int32_t EntryPoint); // Function BP_HitVisualActor.BP_HitVisualActor_C.ExecuteUbergraph_BP_HitVisualActor // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

