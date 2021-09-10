// WidgetBlueprintGeneratedClass UMG_DeviceInfo.UMG_DeviceInfo_C
// Size: 0x288 (Inherited: 0x260)
struct UUMG_DeviceInfo_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* DeviceImage; // 0x268(0x08)
	struct UTextBlock* DeviceName; // 0x270(0x08)
	struct FMulticastInlineDelegate Clicked; // 0x278(0x10)

	void Initialise(struct FItemData Item); // Function UMG_DeviceInfo.UMG_DeviceInfo_C.Initialise // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void PreConstruct(bool IsDesignTime); // Function UMG_DeviceInfo.UMG_DeviceInfo_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_UMG_DeviceInfo(int32_t EntryPoint); // Function UMG_DeviceInfo.UMG_DeviceInfo_C.ExecuteUbergraph_UMG_DeviceInfo // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
	void Clicked__DelegateSignature(); // Function UMG_DeviceInfo.UMG_DeviceInfo_C.Clicked__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
};

