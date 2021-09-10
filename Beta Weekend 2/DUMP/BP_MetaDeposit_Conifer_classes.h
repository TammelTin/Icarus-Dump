// BlueprintGeneratedClass BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C
// Size: 0x390 (Inherited: 0x310)
struct ABP_MetaDeposit_Conifer_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UFMODAudioComponent* FMOD_MetaLoop; // 0x318(0x08)
	struct UNiagaraComponent* Niagara; // 0x320(0x08)
	struct UStaticMeshComponent* SM_MetaGroundRays; // 0x328(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_08; // 0x330(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_07; // 0x338(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_06; // 0x340(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_05; // 0x348(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_04; // 0x350(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_03; // 0x358(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_02; // 0x360(0x08)
	struct UStaticMeshComponent* SM_CF_Meta_Ground_Deposit_RCK_01; // 0x368(0x08)
	struct URectLightComponent* RectLight; // 0x370(0x08)
	float Timeline_FadeOut_MaterialIntensity_DD7B1724447D1AD3197974861B05360D; // 0x378(0x04)
	float Timeline_FadeOut_Intensity_DD7B1724447D1AD3197974861B05360D; // 0x37c(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_DD7B1724447D1AD3197974861B05360D; // 0x380(0x01)
	char pad_381[0x7]; // 0x381(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x388(0x08)

	void Timeline_FadeOut__FinishedFunc(); // Function BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Timeline_FadeOut__UpdateFunc(); // Function BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ResourceEmptied(); // Function BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C.ResourceEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_MetaDeposit_Conifer(int32_t EntryPoint); // Function BP_MetaDeposit_Conifer.BP_MetaDeposit_Conifer_C.ExecuteUbergraph_BP_MetaDeposit_Conifer // (Final|UbergraphFunction) // @ game+0x1a38c80
};

