// BlueprintGeneratedClass BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C
// Size: 0x408 (Inherited: 0x3d0)
struct ABP_SkeletalItem_Fishing_Rod_C : ASkeletalItem {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3d0(0x08)
	struct USceneComponent* LureAttach; // 0x3d8(0x08)
	struct UChildActorComponent* Lure; // 0x3e0(0x08)
	struct UCableComponent* Cable; // 0x3e8(0x08)
	struct USceneComponent* AttachPoint; // 0x3f0(0x08)
	bool Reeling; // 0x3f8(0x01)
	bool FullyCasted; // 0x3f9(0x01)
	char pad_3FA[0x2]; // 0x3fa(0x02)
	float CastLength; // 0x3fc(0x04)
	float ReelSpeed; // 0x400(0x04)
	float MaxCastLength; // 0x404(0x04)

	void IsCasted(bool Casted); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.IsCasted // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void LaunchLure(struct FVector Velocity); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LaunchLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void GetLure(struct ABP_Fishing_Rod_Lure_C* Lure); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.GetLure // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0x1a38c80
	void ResetLure(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ResetLure // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LureCollide(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LureCollide // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void LureOverlap(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.LureOverlap // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveTick(float DeltaSeconds); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ReceiveBeginPlay(); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod(int32_t EntryPoint); // Function BP_SkeletalItem_Fishing_Rod.BP_SkeletalItem_Fishing_Rod_C.ExecuteUbergraph_BP_SkeletalItem_Fishing_Rod // (Final|UbergraphFunction) // @ game+0x1a38c80
};

