// WidgetBlueprintGeneratedClass UMG_PhysicalKey.UMG_PhysicalKey_C
// Size: 0x2e1 (Inherited: 0x260)
struct UUMG_PhysicalKey_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* ArrowAnimation; // 0x268(0x08)
	struct UImage* FillImage; // 0x270(0x08)
	struct UImage* HoldArrow; // 0x278(0x08)
	struct UImage* KeyImage; // 0x280(0x08)
	struct UTextBlock* Text; // 0x288(0x08)
	struct USizeBox* TextSizeBox; // 0x290(0x08)
	struct FKey PhysicalKey; // 0x298(0x18)
	bool Hold; // 0x2b0(0x01)
	bool IsHeld; // 0x2b1(0x01)
	char pad_2B2[0x6]; // 0x2b2(0x06)
	struct FKey PhysicalGamepadKey; // 0x2b8(0x18)
	struct FMulticastInlineDelegate KeyChanged; // 0x2d0(0x10)
	bool UseUpdateHold; // 0x2e0(0x01)

	void Set Held(bool Held, float Alpha); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.Set Held // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void SetHoldState(); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.SetHoldState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void Set Key(struct FKey InGamepadKey, struct FKey InKey, bool Hold, bool IsSet); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.Set Key // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void PreConstruct(bool IsDesignTime); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Construct(); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0x1a05090
	void Update Hold(struct FTimerHandle Timer); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.Update Hold // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void InputTypeChanged(enum class EInputTypeSetting Value); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.InputTypeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_PhysicalKey(int32_t EntryPoint); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.ExecuteUbergraph_UMG_PhysicalKey // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
	void KeyChanged__DelegateSignature(bool IsSet); // Function UMG_PhysicalKey.UMG_PhysicalKey_C.KeyChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
};

