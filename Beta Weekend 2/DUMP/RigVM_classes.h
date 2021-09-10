// Class RigVM.RigVM
// Size: 0x2f8 (Inherited: 0x28)
struct URigVM : UObject {
	struct FRigVMMemoryContainer WorkMemoryStorage; // 0x28(0xa0)
	char pad_C8[0x8]; // 0xc8(0x08)
	struct FRigVMMemoryContainer LiteralMemoryStorage; // 0xd0(0xa0)
	char pad_170[0x8]; // 0x170(0x08)
	struct FRigVMByteCode ByteCodeStorage; // 0x178(0x30)
	char pad_1A8[0x8]; // 0x1a8(0x08)
	struct FRigVMInstructionArray Instructions; // 0x1b0(0x10)
	struct FRigVMExecuteContext Context; // 0x1c0(0x58)
	struct TArray<struct FName> FunctionNamesStorage; // 0x218(0x10)
	char pad_228[0x20]; // 0x228(0x20)
	struct TArray<struct FRigVMParameter> Parameters; // 0x248(0x10)
	struct TMap<struct FName, int32_t> ParametersNameMap; // 0x258(0x50)
	char pad_2A8[0x48]; // 0x2a8(0x48)
	struct URigVM* DeferredVMToCopy; // 0x2f0(0x08)

	void SetParameterValueVector2D(struct FName InParameterName, struct FVector2D InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3693620
	void SetParameterValueVector(struct FName InParameterName, struct FVector InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3693830
	void SetParameterValueTransform(struct FName InParameterName, struct FTransform InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36934a0
	void SetParameterValueString(struct FName InParameterName, struct FString InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3693370
	void SetParameterValueQuat(struct FName InParameterName, struct FQuat InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3693160
	void SetParameterValueName(struct FName InParameterName, struct FName InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692f50
	void SetParameterValueInt(struct FName InParameterName, int32_t InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692d40
	void SetParameterValueFloat(struct FName InParameterName, float InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692b30
	void SetParameterValueBool(struct FName InParameterName, bool InValue, int32_t InArrayIndex); // Function RigVM.RigVM.SetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692920
	struct FString GetRigVMFunctionName(int32_t InFunctionIndex); // Function RigVM.RigVM.GetRigVMFunctionName // (Final|Native|Public|Const) // @ game+0x3692840
	struct FVector2D GetParameterValueVector2D(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector2D // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3692630
	struct FVector GetParameterValueVector(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3692720
	struct FTransform GetParameterValueTransform(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x36924e0
	struct FString GetParameterValueString(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueString // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692390
	struct FQuat GetParameterValueQuat(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueQuat // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // @ game+0x3692280
	struct FName GetParameterValueName(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueName // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3692190
	int32_t GetParameterValueInt(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x36920a0
	float GetParameterValueFloat(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3691fb0
	bool GetParameterValueBool(struct FName InParameterName, int32_t InArrayIndex); // Function RigVM.RigVM.GetParameterValueBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3691ec0
	int32_t GetParameterArraySize(struct FName InParameterName); // Function RigVM.RigVM.GetParameterArraySize // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // @ game+0x3691d70
	bool Execute(struct FName InEntryName); // Function RigVM.RigVM.Execute // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3691cd0
	int32_t AddRigVMFunction(struct UScriptStruct* InRigVMStruct, struct FName InMethodName); // Function RigVM.RigVM.AddRigVMFunction // (Final|Native|Public|HasOutParms) // @ game+0x3691bf0
};

