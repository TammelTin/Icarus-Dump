// BlueprintGeneratedClass BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C
// Size: 0x120 (Inherited: 0x110)
struct UBP_FocusableBehaviour_Backpack_C : UBP_FocusableBehaviour_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x110(0x08)
	struct AIcarusItem* BackpackItem; // 0x118(0x08)

	void FindBackpackItem(struct ACharacter* TargetCharacter, struct AIcarusItem* BackpackItem); // Function BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C.FindBackpackItem // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void HideBackpackMesh(); // Function BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C.HideBackpackMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnFocused(); // Function BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C.OnFocused // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void OnUnfocused(); // Function BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C.OnUnfocused // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_BP_FocusableBehaviour_Backpack(int32_t EntryPoint); // Function BP_FocusableBehaviour_Backpack.BP_FocusableBehaviour_Backpack_C.ExecuteUbergraph_BP_FocusableBehaviour_Backpack // (Final|UbergraphFunction) // @ game+0x1a38c80
};

