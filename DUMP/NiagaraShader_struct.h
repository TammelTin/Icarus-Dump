// Enum NiagaraShader.FNiagaraCompileEventSeverity
enum class FNiagaraCompileEventSeverity : uint8 {
	Log = 0,
	Warning = 1,
	Error = 2,
	FNiagaraCompileEventSeverity_MAX = 3
};

// ScriptStruct NiagaraShader.SimulationStageMetaData
// Size: 0x30 (Inherited: 0x00)
struct FSimulationStageMetaData {
	struct FName SimulationStageName; // 0x00(0x08)
	struct FName IterationSource; // 0x08(0x08)
	char bSpawnOnly : 1; // 0x10(0x01)
	char bWritesParticles : 1; // 0x10(0x01)
	char bPartialParticleUpdate : 1; // 0x10(0x01)
	char pad_10_3 : 5; // 0x10(0x01)
	char pad_11[0x7]; // 0x11(0x07)
	struct TArray<struct FName> OutputDestinations; // 0x18(0x10)
	int32_t MinStage; // 0x28(0x04)
	int32_t MaxStage; // 0x2c(0x04)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGPUParamInfo
// Size: 0x30 (Inherited: 0x00)
struct FNiagaraDataInterfaceGPUParamInfo {
	struct FString DataInterfaceHLSLSymbol; // 0x00(0x10)
	struct FString DIClassName; // 0x10(0x10)
	struct TArray<struct FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20(0x10)
};

// ScriptStruct NiagaraShader.NiagaraDataInterfaceGeneratedFunction
// Size: 0x28 (Inherited: 0x00)
struct FNiagaraDataInterfaceGeneratedFunction {
	char pad_0[0x28]; // 0x00(0x28)
};

// ScriptStruct NiagaraShader.NiagaraCompileEvent
// Size: 0x48 (Inherited: 0x00)
struct FNiagaraCompileEvent {
	enum class FNiagaraCompileEventSeverity Severity; // 0x00(0x01)
	char pad_1[0x7]; // 0x01(0x07)
	struct FString Message; // 0x08(0x10)
	struct FGuid NodeGuid; // 0x18(0x10)
	struct FGuid PinGuid; // 0x28(0x10)
	struct TArray<struct FGuid> StackGuids; // 0x38(0x10)
};

