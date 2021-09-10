// BlueprintGeneratedClass WT_ParticleEmitter.WT_ParticleEmitter_C
// Size: 0x269 (Inherited: 0x220)
struct AWT_ParticleEmitter_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UArrowComponent* Arrow; // 0x228(0x08)
	struct UBillboardComponent* Billboard_1; // 0x230(0x08)
	enum class E_ParticleType Emitter; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float FireFly Spawn Distance; // 0x23c(0x04)
	struct UNiagaraComponent* CurrentEffect; // 0x240(0x08)
	float Waterfall_Base  Spawn Distance; // 0x248(0x04)
	float Waterfall_stream  Spawn Distance; // 0x24c(0x04)
	struct UNiagaraComponent* NewVar_2; // 0x250(0x08)
	struct UNiagaraComponent* NewVar_3; // 0x258(0x08)
	struct UNiagaraComponent* NewVar_4; // 0x260(0x08)
	bool Preview; // 0x268(0x01)

	void ReceiveTick(float DeltaSeconds); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void Fireflys(); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.Fireflys // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Waterfall_Streamer(); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.Waterfall_Streamer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Waterfall_Base(); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.Waterfall_Base // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Setup(); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.Setup // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_WT_ParticleEmitter(int32_t EntryPoint); // Function WT_ParticleEmitter.WT_ParticleEmitter_C.ExecuteUbergraph_WT_ParticleEmitter // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

