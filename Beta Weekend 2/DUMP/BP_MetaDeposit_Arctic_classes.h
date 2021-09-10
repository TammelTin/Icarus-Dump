// BlueprintGeneratedClass BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C
// Size: 0x360 (Inherited: 0x310)
struct ABP_MetaDeposit_Arctic_C : ABP_MetaDeposit_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x08)
	struct UFMODAudioComponent* FMOD_MetaLoop; // 0x318(0x08)
	struct UStaticMeshComponent* OverlayDecal; // 0x320(0x08)
	struct UNiagaraComponent* Niagara; // 0x328(0x08)
	struct UStaticMeshComponent* SM_MetaGroundRays; // 0x330(0x08)
	struct URectLightComponent* RectLight; // 0x338(0x08)
	struct UStaticMeshComponent* SM_AC_Meta_Ground_Deposit; // 0x340(0x08)
	float Timeline_FadeOut_MaterialIntensity_3DACA88A4BA29A7A439FDD849EDCB5C6; // 0x348(0x04)
	float Timeline_FadeOut_Intensity_3DACA88A4BA29A7A439FDD849EDCB5C6; // 0x34c(0x04)
	enum class ETimelineDirection Timeline_FadeOut__Direction_3DACA88A4BA29A7A439FDD849EDCB5C6; // 0x350(0x01)
	char pad_351[0x7]; // 0x351(0x07)
	struct UTimelineComponent* Timeline_FadeOut; // 0x358(0x08)

	void Timeline_FadeOut__FinishedFunc(); // Function BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C.Timeline_FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0x1a38c80
	void Timeline_FadeOut__UpdateFunc(); // Function BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C.Timeline_FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0x1a38c80
	void ResourceEmptied(); // Function BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C.ResourceEmptied // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_MetaDeposit_Arctic(int32_t EntryPoint); // Function BP_MetaDeposit_Arctic.BP_MetaDeposit_Arctic_C.ExecuteUbergraph_BP_MetaDeposit_Arctic // (Final|UbergraphFunction) // @ game+0x1a38c80
};

