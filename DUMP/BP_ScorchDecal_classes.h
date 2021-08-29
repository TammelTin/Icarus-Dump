// BlueprintGeneratedClass BP_ScorchDecal.BP_ScorchDecal_C
// Size: 0x248 (Inherited: 0x220)
struct ABP_ScorchDecal_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UDecalComponent* Decal; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	float FadeIn_Fade_3955FBF44E677FA5935C558A825C9787; // 0x238(0x04)
	enum class ETimelineDirection FadeIn__Direction_3955FBF44E677FA5935C558A825C9787; // 0x23c(0x01)
	char pad_23D[0x3]; // 0x23d(0x03)
	struct UTimelineComponent* FadeIn; // 0x240(0x08)

	void FadeIn__FinishedFunc(); // Function BP_ScorchDecal.BP_ScorchDecal_C.FadeIn__FinishedFunc // (BlueprintEvent) // @ game+0x1a05090
	void FadeIn__UpdateFunc(); // Function BP_ScorchDecal.BP_ScorchDecal_C.FadeIn__UpdateFunc // (BlueprintEvent) // @ game+0x1a05090
	void ReceiveBeginPlay(); // Function BP_ScorchDecal.BP_ScorchDecal_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_BP_ScorchDecal(int32_t EntryPoint); // Function BP_ScorchDecal.BP_ScorchDecal_C.ExecuteUbergraph_BP_ScorchDecal // (Final|UbergraphFunction) // @ game+0x1a05090
};

