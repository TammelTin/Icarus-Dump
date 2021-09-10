// WidgetBlueprintGeneratedClass UMG_DropshipPartSmall.UMG_DropshipPartSmall_C
// Size: 0x348 (Inherited: 0x260)
struct UUMG_DropshipPartSmall_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UBorder* Empty; // 0x268(0x08)
	struct UImage* Image; // 0x270(0x08)
	struct FItemData CurrentItem; // 0x278(0x80)
	struct FGameplayTagQuery Query; // 0x2f8(0x48)
	struct UUMG_DropshipEditor_Dropship_C* EditorDropship; // 0x340(0x08)

	void Initialise(struct UUMG_DropshipEditor_Dropship_C* Parent); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Initialise // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateState(); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.UpdateState // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Update(struct FItemData Item); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.Update // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void OnLoaded_6FF29948471A55576D5E19A5F0534075(struct UObject* Loaded); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.OnLoaded_6FF29948471A55576D5E19A5F0534075 // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void LoadIcon(struct TSoftObjectPtr<UTexture2D> Texture); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.LoadIcon // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_DropshipPartSmall(int32_t EntryPoint); // Function UMG_DropshipPartSmall.UMG_DropshipPartSmall_C.ExecuteUbergraph_UMG_DropshipPartSmall // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

