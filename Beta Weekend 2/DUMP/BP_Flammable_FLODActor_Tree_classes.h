// BlueprintGeneratedClass BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C
// Size: 0x120 (Inherited: 0x110)
struct UBP_Flammable_FLODActor_Tree_C : UFlammableActorFLOD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct ATreeBase* OwnerTree; // 0x118(0x08)

	void ReceiveBeginPlay(); // Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.ReceiveBeginPlay // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnUpdateInstanceVisuals(float FireSpread, float FireTemperature); // Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnUpdateInstanceVisuals // (Event|Protected|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceAttached(struct UFlammableInstance* Instance); // Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnFlammableInstanceAttached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void OnFlammableInstanceDetached(struct UFlammableInstance* Instance); // Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.OnFlammableInstanceDetached // (Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_Flammable_FLODActor_Tree(int32_t EntryPoint); // Function BP_Flammable_FLODActor_Tree.BP_Flammable_FLODActor_Tree_C.ExecuteUbergraph_BP_Flammable_FLODActor_Tree // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

