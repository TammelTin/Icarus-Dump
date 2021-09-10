// BlueprintGeneratedClass BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C
// Size: 0x3c8 (Inherited: 0x310)
struct ABP_MetaDeposit_Desert_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UFMODAudioComponent* FMOD_MetaLoop; // 0x318(0x08)
	struct UStaticMeshComponent* OverlayDecal; // 0x320(0x08)
	struct UNiagaraComponent* Niagara; // 0x328(0x08)
	struct UStaticMeshComponent* SM_MetaGroundRays; // 0x330(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_15; // 0x338(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_14; // 0x340(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_13; // 0x348(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_12; // 0x350(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_11; // 0x358(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_09; // 0x360(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_01; // 0x368(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_07; // 0x370(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_06; // 0x378(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_05; // 0x380(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_04; // 0x388(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_03; // 0x390(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_02; // 0x398(0x08)
	struct UStaticMeshComponent* SM_DC_Meta_Ground_Deposit_RCK_08; // 0x3a0(0x08)
	struct URectLightComponent* RectLight; // 0x3a8(0x08)
	float Timeline_FadeOut_MaterialIntensity_D12C39604B3EF0B61C8B31BE8F1ECEBE; // 0x3b0(0x04)
	float Timeline_FadeOut_Intensity_D12C39604B3EF0B61C8B31BE8F1ECEBE; // 0x3b4(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_D12C39604B3EF0B61C8B31BE8F1ECEBE; // 0x3b8(0x01)
	char pad_3B9[0x7]; // 0x3b9(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x3c0(0x08)

	void Timeline_FadeOut__FinishedFunc(); // Function BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Timeline_FadeOut__UpdateFunc(); // Function BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ResourceEmptied(); // Function BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C.ResourceEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_MetaDeposit_Desert(int32_t EntryPoint); // Function BP_MetaDeposit_Desert.BP_MetaDeposit_Desert_C.ExecuteUbergraph_BP_MetaDeposit_Desert // (Final|UbergraphFunction) // @ game+0x1a38c80
};

