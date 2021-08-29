// WidgetBlueprintGeneratedClass UMG_ResourcePrompt.UMG_ResourcePrompt_C
// Size: 0x359 (Inherited: 0x260)
struct UUMG_ResourcePrompt_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* UpdatedAddedNumber; // 0x268(0x08)
	struct UWidgetAnimation* OutAnim; // 0x270(0x08)
	struct UWidgetAnimation* InAnim; // 0x278(0x08)
	struct UTextBlock* Amount; // 0x280(0x08)
	struct UImage* Icon; // 0x288(0x08)
	struct UBorder* MainBorder; // 0x290(0x08)
	struct UTextBlock* Total; // 0x298(0x08)
	struct UTextBlock* Type; // 0x2a0(0x08)
	struct FFResourcePromptInfo Info; // 0x2a8(0x88)
	int32_t TotalCount; // 0x330(0x04)
	char pad_334[0x4]; // 0x334(0x04)
	struct FMulticastInlineDelegate ResourceRemoved; // 0x338(0x10)
	int32_t AddedCount; // 0x348(0x04)
	char pad_34C[0x4]; // 0x34c(0x04)
	struct FTimerHandle RemoveTimer; // 0x350(0x08)
	bool FadingOut; // 0x358(0x01)

	void UpdateAddedCount(int32_t AmountAdded); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.UpdateAddedCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void UpdateTotalCount(int32_t AmountAdded); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.UpdateTotalCount // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Finished_471FD1334CBA6E1EEA9F34B4CB60397C(); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.Finished_471FD1334CBA6E1EEA9F34B4CB60397C // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Timer(); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.Timer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void RefreshTimer(); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.RefreshTimer // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_ResourcePrompt(int32_t EntryPoint); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.ExecuteUbergraph_UMG_ResourcePrompt // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void ResourceRemoved__DelegateSignature(struct FName Item); // Function UMG_ResourcePrompt.UMG_ResourcePrompt_C.ResourceRemoved__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

