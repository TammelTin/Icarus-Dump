// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
// Size: 0x584 (Inherited: 0x550)
struct ABP_Sign_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x550(0x08)
	struct UWidgetComponent* Widget_SignDisplay; // 0x558(0x08)
	struct UCameraComponent* Camera; // 0x560(0x08)
	struct FText Text; // 0x568(0x18)
	int32_t MaxCharacters; // 0x580(0x04)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Sign_Base.BP_Sign_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnRep_Text(); // Function BP_Sign_Base.BP_Sign_Base_C.OnRep_Text // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void UpdateTextRender(struct FText Text); // Function BP_Sign_Base.BP_Sign_Base_C.UpdateTextRender // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Sign_Base(int32_t EntryPoint); // Function BP_Sign_Base.BP_Sign_Base_C.ExecuteUbergraph_BP_Sign_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

