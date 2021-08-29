// BlueprintGeneratedClass BP_Sign_Base.BP_Sign_Base_C
// Size: 0x594 (Inherited: 0x560)
struct ABP_Sign_Base_C : ABP_DeployableBase_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UWidgetComponent* Widget_SignDisplay; // 0x568(0x08)
	struct UCameraComponent* Camera; // 0x570(0x08)
	struct FText Text; // 0x578(0x18)
	int32_t MaxCharacters; // 0x590(0x04)

	void Deployable_Interact(struct AActor* Interactor); // Function BP_Sign_Base.BP_Sign_Base_C.Deployable_Interact // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnRep_Text(); // Function BP_Sign_Base.BP_Sign_Base_C.OnRep_Text // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTextRender(struct FText Text); // Function BP_Sign_Base.BP_Sign_Base_C.UpdateTextRender // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_Sign_Base(int32_t EntryPoint); // Function BP_Sign_Base.BP_Sign_Base_C.ExecuteUbergraph_BP_Sign_Base // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

