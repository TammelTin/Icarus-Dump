// WidgetBlueprintGeneratedClass ActorRow.ActorRow_C
// Size: 0x290 (Inherited: 0x260)
struct UActorRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UTextBlock* TextBlock_57; // 0x268(0x08)
	struct FText ActorName; // 0x270(0x18)
	struct AActor* Actor; // 0x288(0x08)

	void AddActor(struct AActor* Actor); // Function ActorRow.ActorRow_C.AddActor // (BlueprintCallable|BlueprintEvent) // @ game+0x1a38c80
	void ExecuteUbergraph_ActorRow(int32_t EntryPoint); // Function ActorRow.ActorRow_C.ExecuteUbergraph_ActorRow // (Final|UbergraphFunction|HasDefaults) // @ game+0x1a38c80
};

