// WidgetBlueprintGeneratedClass UMG_GameMessageContainer.UMG_GameMessageContainer_C
// Size: 0x298 (Inherited: 0x260)
struct UUMG_GameMessageContainer_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* BlinkAll; // 0x268(0x08)
	struct UVerticalBox* MessageContainer; // 0x270(0x08)
	float WarnThreshold_Water; // 0x278(0x04)
	float WarnThreshold_Health; // 0x27c(0x04)
	float WarnThreshold_Food; // 0x280(0x04)
	float WarnThreshold_Oxygen; // 0x284(0x04)
	float WarnThreshold_Exposure; // 0x288(0x04)
	char pad_28C[0x4]; // 0x28c(0x04)
	struct FFMODEventInstance Sound; // 0x290(0x08)

	void AddMessage(bool Error, struct FText Message); // Function UMG_GameMessageContainer.UMG_GameMessageContainer_C.AddMessage // (BlueprintCallable|BlueprintEvent) // @ game+0x1a05090
	void ExecuteUbergraph_UMG_GameMessageContainer(int32_t EntryPoint); // Function UMG_GameMessageContainer.UMG_GameMessageContainer_C.ExecuteUbergraph_UMG_GameMessageContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a05090
};

